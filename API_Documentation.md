# Beeftext API Documentation

## Table of Contents

1. [Overview](#overview)
2. [Core Components](#core-components)
3. [Application Entry Point](#application-entry-point)
4. [Main Window](#main-window)
5. [Combo Management](#combo-management)
6. [Group Management](#group-management)
7. [Preferences Management](#preferences-management)
8. [Snippet System](#snippet-system)
9. [Keyboard Shortcuts](#keyboard-shortcuts)
10. [Emoji Support](#emoji-support)
11. [Clipboard Management](#clipboard-management)
12. [Picker Window](#picker-window)
13. [Update System](#update-system)
14. [Utility Functions](#utility-functions)
15. [Global Functions](#global-functions)
16. [Constants](#constants)
17. [Usage Examples](#usage-examples)

---

## Overview

Beeftext is a text snippet management tool for Windows, written in C++ using the Qt framework. It provides automatic text substitution functionality similar to TextExpander, allowing users to create "combos" that expand short keywords into longer text snippets.

### Key Features
- Automatic text substitution
- Keyboard shortcuts
- Group-based organization
- Emoji support
- Backup and restore functionality
- Customizable preferences
- Update checking

---

## Core Components

### Application Architecture

The application follows a modular architecture with the following main components:

- **MainWindow**: The primary user interface
- **ComboManager**: Manages text substitution combos
- **PreferencesManager**: Handles application settings
- **GroupManager**: Organizes combos into groups
- **EmojiManager**: Handles emoji shortcuts
- **UpdateManager**: Manages software updates
- **InputManager**: Handles keyboard input detection

---

## Application Entry Point

### main.cpp

The application entry point initializes the Qt application and sets up core components.

```cpp
int main(int argc, char *argv[])
```

#### Key Functions:

- **Application Initialization**: Sets up single-instance application
- **Preference Loading**: Loads user preferences and settings
- **Component Registration**: Registers Qt meta types for signals/slots
- **Error Handling**: Comprehensive exception handling

#### Example Usage:
```cpp
// Application automatically handles:
// - Single instance detection
// - Preference loading
// - Component initialization
// - System tray setup
```

---

## Main Window

### Class: `MainWindow`

The main application window providing the primary user interface.

#### Header: `MainWindow.h`

#### Public Methods:

```cpp
MainWindow();  // Constructor
~MainWindow(); // Destructor
```

#### Public Slots:

```cpp
void onAnotherAppInstanceLaunch();     // Handle second instance launch
void onActionEnableDisableBeeftext();  // Toggle application state
void onShowComboMenu();                // Display combo context menu
```

#### Key Features:

- **System Tray Integration**: Provides system tray icon and menu
- **Drag and Drop Support**: Handles file drag and drop for combo import
- **Window Management**: Manages visibility and geometry
- **Backup/Restore**: Provides backup and restore functionality

#### Example Usage:
```cpp
MainWindow window;
window.show();
// Window automatically handles system tray integration
```

---

## Combo Management

### Class: `Combo`

Represents a text substitution combo that links a keyword to a snippet.

#### Header: `Combo/Combo.h`

#### Public Methods:

```cpp
// Constructor
Combo(QString name, QString keyword, QString snippet, QString description, 
      EMatchingMode matchingMode, ECaseSensitivity caseSensitivity, bool enabled);

// Property accessors
QString name() const;
void setName(QString const &name);
QString keyword() const;
void setKeyword(QString const &keyword);
QString snippet() const;
void setSnippet(QString const &snippet);
QString description() const;
void setDescription(QString const &description);

// Behavior settings
EMatchingMode matchingMode(bool resolveDefault) const;
void setMatchingMode(EMatchingMode mode);
ECaseSensitivity caseSensitivity(bool resolveDefault) const;
void setCaseSensitivity(ECaseSensitivity caseSensitivity);

// State management
bool isEnabled() const;
void setEnabled(bool enabled);
bool isUsable() const;
bool isValid() const;

// Group management
SpGroup group() const;
void setGroup(SpGroup const &group);

// Matching and substitution
bool matchesForInput(QString const &input) const;
bool performSubstitution(bool triggeredByPicker);
QString evaluatedSnippet(bool &outCancelled) const;

// Metadata
QUuid uuid() const;
QDateTime creationDateTime() const;
QDateTime modificationDateTime() const;
QDateTime lastUseDateTime() const;
void setLastUseDateTime(QDateTime const &dateTime);

// Serialization
QJsonObject toJsonObject(bool includeGroup) const;
```

#### Static Methods:

```cpp
static SpCombo create(QString const &name = QString(), 
                      QString const &keyword = QString(),
                      QString const &snippet = QString(), 
                      QString const &description = QString(),
                      EMatchingMode matchingMode = EMatchingMode::Default,
                      ECaseSensitivity caseSensitivity = ECaseSensitivity::Default, 
                      bool enabled = true);

static SpCombo create(QJsonObject const &object, qint32 formatVersion,
                      GroupList const &groups = GroupList());

static SpCombo duplicate(Combo const &combo);
```

#### Example Usage:
```cpp
// Create a new combo
SpCombo combo = Combo::create("Email Signature", "sig", 
                             "Best regards,\nJohn Doe", 
                             "Standard email signature");

// Configure the combo
combo->setMatchingMode(EMatchingMode::Strict);
combo->setCaseSensitivity(ECaseSensitivity::CaseSensitive);
combo->setEnabled(true);

// Check if input matches
if (combo->matchesForInput("sig")) {
    combo->performSubstitution(false);
}
```

### Class: `ComboManager`

Singleton class managing all combos and handling substitution logic.

#### Header: `Combo/ComboManager.h`

#### Public Methods:

```cpp
static ComboManager &instance();  // Singleton access

// Combo list management
ComboList &comboListRef();
ComboList const &comboListRef() const;

// Group management
GroupList &groupListRef();
GroupList const &groupListRef() const;

// File operations
bool loadComboListFromFile(QString *outErrorMsg = nullptr);
bool saveComboListToFile(QString *outErrorMsg = nullptr) const;
bool restoreBackup(QString const &backupFilePath);

// Audio feedback
void loadSoundFromPreferences();
void playSound() const;
```

#### Signals:

```cpp
void comboListWasLoaded() const;
void comboListWasSaved() const;
void backupWasRestored() const;
```

#### Example Usage:
```cpp
// Access the combo manager
ComboManager &manager = ComboManager::instance();

// Load combos from file
if (!manager.loadComboListFromFile()) {
    // Handle error
}

// Access combo list
ComboList &combos = manager.comboListRef();

// Save combos
manager.saveComboListToFile();
```

---

## Group Management

### Class: `Group`

Represents a group for organizing combos.

#### Header: `Group/Group.h`

#### Public Methods:

```cpp
// Constructor
explicit Group(QString name, QString description = QString());

// Property accessors
QString name() const;
void setName(QString const &name);
QString description() const;
void setDescription(QString const &description);

// State management
bool enabled() const;
void setEnabled(bool enable);
bool isValid() const;

// Metadata
QUuid uuid() const;

// Serialization
QJsonObject toJsonObject() const;
```

#### Static Methods:

```cpp
static SpGroup create(QString const &name, QString const &description = QString());
static SpGroup create(QJsonObject const &object, qint32 formatVersion);
```

#### Example Usage:
```cpp
// Create a new group
SpGroup group = Group::create("Work", "Work-related combos");

// Configure the group
group->setEnabled(true);

// Assign combo to group
combo->setGroup(group);
```

---

## Preferences Management

### Class: `PreferencesManager`

Singleton class managing all application preferences and settings.

#### Header: `Preferences/PreferencesManager.h`

#### Public Methods:

```cpp
static PreferencesManager &instance();  // Singleton access

// Settings access
QSettings &settings();

// Preference management
void init() const;
void reset();
bool save(QString const &path) const;
bool load(QString const &path) const;

// Application behavior
bool autoStartAtLogin() const;
void setAutoStartAtLogin(bool value) const;

bool useAutomaticSubstitution() const;
void setUseAutomaticSubstitution(bool value) const;

bool comboTriggersOnSpace() const;
void setComboTriggersOnSpace(bool value) const;

bool keepFinalSpaceCharacter() const;
void setKeepFinalSpaceCharacter(bool value) const;

// Audio preferences
bool playSoundOnCombo() const;
void setPlaySoundOnCombo(bool value) const;

bool useCustomSound() const;
void setUseCustomSound(bool value) const;

QString customSoundPath() const;
void setCustomSoundPath(QString const &path) const;

// Shortcuts
SpShortcut comboTriggerShortcut() const;
void setComboTriggerShortcut(SpShortcut const &shortcut) const;

SpShortcut comboPickerShortcut() const;
void setComboPickerShortcut(SpShortcut const &shortcut) const;

SpShortcut appEnableDisableShortcut() const;
void setAppEnableDisableShortcut(SpShortcut const &shortcut) const;

// Default behavior
EMatchingMode defaultMatchingMode() const;
void setDefaultMatchingMode(EMatchingMode mode) const;

ECaseSensitivity defaultCaseSensitivity() const;
void setDefaultCaseSensitivity(ECaseSensitivity sensitivity) const;

// Backup settings
bool autoBackup() const;
void setAutoBackup(bool value) const;

bool useCustomBackupLocation() const;
void setUseCustomBackupLocation(bool value) const;

QString customBackupLocation() const;
void setCustomBackupLocation(QString const &path) const;

// Emoji settings
bool emojiShortcodesEnabled() const;
void setEmojiShortcodeEnabled(bool value) const;

QString emojiLeftDelimiter() const;
void setEmojiLeftDelimiter(QString const &delimiter) const;

QString emojiRightDelimiter() const;
void setEmojiRightDelimiter(QString const &delimiter) const;

// Picker window
bool comboPickerEnabled() const;
void setComboPickerEnabled(bool value) const;

bool showEmojisInPickerWindow() const;
void setShowEmojisInPickerWindow(bool show) const;

// Advanced settings
qint32 delayBetweenKeystrokesMs() const;
void setDelayBetweenKeystrokesMs(qint32 value) const;

bool useLegacyCopyPaste() const;
void setUseLegacyCopyPaste(bool value) const;

bool restoreClipboardAfterSubstitution() const;
void setRestoreClipboardAfterSubstitution(bool value) const;

// Theme settings
ETheme theme() const;
void setTheme(ETheme theme) const;

bool useCustomTheme() const;
void setUseCustomTheme(bool value) const;

// Update settings
bool autoCheckForUpdates() const;
void setAutoCheckForUpdates(bool value) const;

// Application state
bool beeftextEnabled() const;
void setBeeftextEnabled(bool enabled) const;
```

#### Example Usage:
```cpp
// Access preferences
PreferencesManager &prefs = PreferencesManager::instance();

// Configure automatic substitution
prefs.setUseAutomaticSubstitution(true);
prefs.setComboTriggersOnSpace(true);

// Set up shortcuts
SpShortcut shortcut = Shortcut::fromString("Ctrl+Space");
prefs.setComboTriggerShortcut(shortcut);

// Configure emoji support
prefs.setEmojiShortcodeEnabled(true);
prefs.setEmojiLeftDelimiter(":");
prefs.setEmojiRightDelimiter(":");
```

---

## Snippet System

### Class: `SnippetFragment`

Base class for snippet fragments that can be rendered.

#### Header: `Snippet/SnippetFragment.h`

#### Public Methods:

```cpp
virtual ~SnippetFragment() = default;
virtual EType type() const = 0;
virtual QString toString() const = 0;
virtual void render() const = 0;
```

#### Fragment Types:

```cpp
enum class EType {
    Text = 0,      // Text fragment
    Delay = 1,     // Delay fragment
    Key = 2,       // Key fragment
    Shortcut = 3,  // Shortcut fragment
    Count = 4      // Number of fragment types
};
```

#### Global Functions:

```cpp
ListSpSnippetFragment splitStringIntoSnippetFragments(QString const &str);
void renderSnippetFragmentList(ListSpSnippetFragment const &fragments);
```

#### Example Usage:
```cpp
// Split snippet into fragments
QString snippet = "Hello #{key:Enter}World#{delay:100}!";
ListSpSnippetFragment fragments = splitStringIntoSnippetFragments(snippet);

// Render fragments
renderSnippetFragmentList(fragments);
```

---

## Keyboard Shortcuts

### Class: `Shortcut`

Represents a keyboard shortcut combination.

#### Header: `Shortcut.h`

#### Public Methods:

```cpp
// Constructors
Shortcut(Qt::KeyboardModifiers const &modifiers, Qt::Key const &key);
explicit Shortcut(QKeyCombination const &keyCombination);
explicit Shortcut(qint32 combined);

// Comparison operators
bool operator==(Shortcut const &other) const;
bool operator!=(Shortcut const &other) const;

// Property accessors
QString toString() const;
QKeyCombination keyCombination() const;
Qt::KeyboardModifiers keyboardModifiers() const;
Qt::Key key() const;
qint32 toCombined() const;

// Validation
bool isValid() const;
```

#### Static Methods:

```cpp
static SpShortcut fromModifiersAndKey(Qt::KeyboardModifiers modifiers, Qt::Key key);
static SpShortcut fromString(QString const &str);
static SpShortcut fromKeyCombination(QKeyCombination const &keyCombination);
static SpShortcut fromCombined(qint32 combined);
```

#### Example Usage:
```cpp
// Create shortcut from string
SpShortcut shortcut = Shortcut::fromString("Ctrl+Shift+F12");

// Create shortcut from components
SpShortcut shortcut2 = Shortcut::fromModifiersAndKey(
    Qt::ControlModifier | Qt::ShiftModifier, Qt::Key_F12);

// Check validity
if (shortcut->isValid()) {
    QString display = shortcut->toString();
}
```

---

## Emoji Support

### Class: `EmojiManager`

Singleton class managing emoji shortcuts and substitution.

#### Header: `Emoji/EmojiManager.h`

#### Public Methods:

```cpp
static EmojiManager &instance();  // Singleton access

// Emoji management
void loadEmojis();
bool isLoaded() const;
void clear();

// Emoji operations
bool performSubstitution(QString const &text);
```

### Class: `Emoji`

Represents an individual emoji with its shortcode.

#### Header: `Emoji/Emoji.h`

#### Public Methods:

```cpp
// Property accessors
QString shortcode() const;
QString unicodeSequence() const;
QString description() const;

// Validation
bool isValid() const;
```

#### Example Usage:
```cpp
// Load emojis
EmojiManager &manager = EmojiManager::instance();
manager.loadEmojis();

// Emoji substitution happens automatically when typing :shortcode:
```

---

## Clipboard Management

### Class: `ClipboardManager`

Abstract base class for clipboard operations.

#### Header: `Clipboard/ClipboardManager.h`

#### Public Methods:

```cpp
virtual ~ClipboardManager() = default;

// Clipboard operations
virtual bool saveClipboard() = 0;
virtual bool restoreClipboard() = 0;
virtual bool copyTextToClipboard(QString const &text) = 0;
virtual bool copyHtmlToClipboard(QString const &html) = 0;
virtual bool pasteFromClipboard() = 0;
```

#### Implementation Classes:

- **ClipboardManagerDefault**: Standard clipboard implementation
- **ClipboardManagerLegacy**: Legacy clipboard implementation

#### Example Usage:
```cpp
// Clipboard operations are handled automatically during combo substitution
// Users don't directly interact with clipboard manager
```

---

## Picker Window

### Class: `PickerWindow`

Window for selecting and triggering combos manually.

#### Header: `Picker/PickerWindow.h`

#### Public Methods:

```cpp
PickerWindow(QWidget *parent = nullptr);
~PickerWindow() override;

// Window management
void showWindow();
void hideWindow();

// Content management
void refreshContent();
void updateContent();
```

#### Key Features:

- **Combo Selection**: Browse and select combos
- **Search/Filter**: Filter combos by keyword
- **Emoji Support**: Display emojis if enabled
- **Keyboard Navigation**: Navigate with keyboard

#### Example Usage:
```cpp
// Picker window is typically triggered by shortcut
// Users interact with it through the GUI
```

---

## Update System

### Class: `UpdateManager`

Singleton class managing software updates.

#### Header: `Update/UpdateManager.h`

#### Public Methods:

```cpp
static UpdateManager &instance();  // Singleton access

// Update checking
void checkForUpdate();
bool isUpdateAvailable() const;

// Update information
QString latestVersion() const;
QString updateUrl() const;
```

#### Example Usage:
```cpp
// Check for updates
UpdateManager &manager = UpdateManager::instance();
manager.checkForUpdate();

// Updates are typically handled automatically or through preferences
```

---

## Utility Functions

### Namespace: `BeeftextUtils`

Collection of utility functions for text processing and system operations.

#### Header: `BeeftextUtils.h`

#### Functions:

```cpp
// Application state
bool isInPortableMode();
bool usePortableAppsFolderLayout();
bool isBeeftextTheForegroundApplication();
bool isAppRunningOnWindows10OrHigher();

// Text processing
QString htmlToPlainText(QString const &snippet);
QString ensureStringHasCRLFLineEndings(QString const &str);
qint32 printableCharacterCount(QString const &str);

// Input/output operations
void eraseChars(qint32 count);
void insertText(QString const &text);
void renderShortcut(SpShortcut const &shortcut);
void moveCursorLeft(qint32 count);
void performTextSubstitution(qint32 charCount, QString const &newText, 
                            qint32 cursorPos, ETriggerSource source);

// System operations
QString getActiveExecutableFileName();
void openLogFile();

// MIME data
QMimeData *mimeDataFromText(QString const &text);
QMimeData *mimeDataFromHtml(QString const &html);

// User interface
void reportError(QWidget *parent, QString const &logMessage, 
                QString const &userMessage = QString());
bool questionDialog(QWidget *parent, QString const &title, QString const &text,
                   QString const &yesText, QString const &noText);
qint32 threeOptionsDialog(QWidget *parent, QMessageBox::Icon const &icon, 
                         QString const &title, QString const &text,
                         QString const &button0Text, QString const &button1Text, 
                         QString const &button2Text, qint32 acceptButtonIndex,
                         qint32 rejectButtonIndex);

// Color utilities
QString colorToHex(QColor const &color, bool includeAlpha);

// Conversion utilities
bool warnAndConvertHtmlCombos();
```

#### Example Usage:
```cpp
// Check application state
if (isInPortableMode()) {
    // Handle portable mode
}

// Process text
QString plainText = htmlToPlainText("<b>Bold text</b>");

// Perform substitution
performTextSubstitution(3, "replacement", 0, ETriggerSource::Keyword);

// Show error dialog
reportError(parentWidget, "Error in log", "User-friendly error message");
```

---

## Global Functions

### Namespace: `globals`

Collection of global functions and accessors.

#### Header: `BeeftextGlobals.h`

#### Functions:

```cpp
// Logging
xmilib::DebugLog &debugLog();
xmilib::DebugLogWindow &debugLogWindow();

// Process management
ProcessListManager &sensitiveApplications();
ProcessListManager &excludedApplications();

// Path management
QString appDataDir();
QString translationRootFolderPath();
QString userTranslationRootFolderPath();
QString logFilePath();
QString backupFolderPath();
QString defaultBackupFolderPath();
QString portableModeDataFolderPath();
QString portableModeSettingsFilePath();
QString emojiExcludedAppsFilePath();

// Build information
QString getBuildInfo();

// UI utilities
QColor disabledTextColorInTablesAndLists();

// File dialog filters
QString jsonFileDialogFilter();
QString jsonCsvFileDialogFilter();
QString csvFileDialogFilter();
QString backupFileDialogFilter();
```

#### Example Usage:
```cpp
// Access debug log
xmilib::DebugLog &log = globals::debugLog();
log.addInfo("Application started");

// Get application data directory
QString dataDir = globals::appDataDir();

// Get file dialog filter
QString filter = globals::jsonFileDialogFilter();
```

---

## Constants

### Namespace: `constants`

Application-wide constants and definitions.

#### Header: `BeeftextConstants.h`

#### Constants:

```cpp
// Version information
extern xmilib::VersionNumber const kVersionNumber;

// Application information
extern QString const kApplicationName;
extern QString const kOrganizationName;

// URLs
extern QString const kBeeftextWikiHomeUrl;
extern QString const kGettingStartedUrl;
extern QString const kBeeftextWikiVariablesUrl;
extern QString const kBeeftextReleasesPagesUrl;
extern QString const kBeeftextIssueTrackerUrl;

// File extensions
extern QString const backupFileExtension;

// Variable patterns
extern QString const kKeyVariableRegExpStr;
extern QString const kShortcutVariableRegExpStr;
extern QString const kDelayVariableRegExpStr;
extern QRegularExpression const kVariableRegExp;

// UI constants
QChar constexpr kEmojiDelimiter = '|';
QColor constexpr blueBeeftextColor(0x25, 0x8c, 0xc0);
Qt::DateFormat constexpr kJsonExportDateFormat = Qt::ISODateWithMs;
```

#### Enumerations:

```cpp
enum EITemType {
    Combo = 0,  // Combo item type
    Emoji = 1,  // Emoji item type
};

enum {
    TypeRole = Qt::UserRole,  // Role for item type
    PointerRole,              // Role for item pointer
};
```

#### Example Usage:
```cpp
// Access version information
QString version = constants::kVersionNumber.toString();

// Use application constants
QString appName = constants::kApplicationName;
QColor themeColor = constants::blueBeeftextColor;

// Check variable patterns
QRegularExpression varRegex = constants::kVariableRegExp;
```

---

## Usage Examples

### Complete Application Setup

```cpp
#include "MainWindow.h"
#include "BeeftextGlobals.h"
#include "Combo/ComboManager.h"
#include "Preferences/PreferencesManager.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    
    // Initialize preferences
    PreferencesManager &prefs = PreferencesManager::instance();
    prefs.init();
    
    // Initialize combo manager
    ComboManager &comboManager = ComboManager::instance();
    comboManager.loadComboListFromFile();
    
    // Create main window
    MainWindow window;
    window.show();
    
    return app.exec();
}
```

### Creating and Managing Combos

```cpp
// Create a new combo
SpCombo emailCombo = Combo::create(
    "Email Address",           // name
    "email",                   // keyword
    "john.doe@example.com",    // snippet
    "My email address"         // description
);

// Configure combo properties
emailCombo->setMatchingMode(EMatchingMode::Strict);
emailCombo->setCaseSensitivity(ECaseSensitivity::CaseInsensitive);
emailCombo->setEnabled(true);

// Create a group
SpGroup personalGroup = Group::create("Personal", "Personal information");

// Assign combo to group
emailCombo->setGroup(personalGroup);

// Add to combo manager
ComboManager &manager = ComboManager::instance();
manager.comboListRef().append(emailCombo);
manager.groupListRef().append(personalGroup);

// Save to file
manager.saveComboListToFile();
```

### Setting Up Preferences

```cpp
PreferencesManager &prefs = PreferencesManager::instance();

// Enable automatic substitution
prefs.setUseAutomaticSubstitution(true);
prefs.setComboTriggersOnSpace(true);
prefs.setKeepFinalSpaceCharacter(false);

// Configure shortcuts
SpShortcut triggerShortcut = Shortcut::fromString("Ctrl+Space");
prefs.setComboTriggerShortcut(triggerShortcut);

SpShortcut pickerShortcut = Shortcut::fromString("Ctrl+Shift+Space");
prefs.setComboPickerShortcut(pickerShortcut);

// Enable emoji support
prefs.setEmojiShortcodeEnabled(true);
prefs.setEmojiLeftDelimiter(":");
prefs.setEmojiRightDelimiter(":");

// Configure audio feedback
prefs.setPlaySoundOnCombo(true);
prefs.setUseCustomSound(false);

// Set default matching behavior
prefs.setDefaultMatchingMode(EMatchingMode::Strict);
prefs.setDefaultCaseSensitivity(ECaseSensitivity::CaseInsensitive);
```

### Custom Snippet with Variables

```cpp
// Create a combo with variables
SpCombo dateCombo = Combo::create(
    "Current Date",
    "date",
    "Today is #{date}#{cursor}",
    "Insert current date"
);

// The snippet will be processed to replace variables:
// #{date} - replaced with current date
// #{cursor} - position where cursor should be placed
// #{key:Enter} - simulate Enter key press
// #{delay:100} - add 100ms delay
// #{shortcut:Ctrl+C} - simulate Ctrl+C shortcut
```

### Error Handling

```cpp
ComboManager &manager = ComboManager::instance();

// Load combos with error handling
QString errorMsg;
if (!manager.loadComboListFromFile(&errorMsg)) {
    // Handle error
    reportError(parentWidget, 
                QString("Failed to load combos: %1").arg(errorMsg),
                "Could not load your combos. Please check the file.");
    return false;
}

// Save combos with error handling
if (!manager.saveComboListToFile(&errorMsg)) {
    // Handle error
    reportError(parentWidget,
                QString("Failed to save combos: %1").arg(errorMsg),
                "Could not save your combos. Please check permissions.");
    return false;
}
```

---

## Notes

- All classes use Qt's signal-slot mechanism for communication
- Memory management uses smart pointers (std::shared_ptr)
- JSON serialization is used for data persistence
- The application supports both portable and installed modes
- Doxygen documentation can be generated from source code comments
- The application follows the MIT License

This documentation covers the major public APIs and components of the Beeftext application. For detailed implementation specifics, refer to the source code and generated Doxygen documentation.