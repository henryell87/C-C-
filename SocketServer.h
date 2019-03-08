<!DOCTYPE html>
<!-- saved from url=(0139)https://blackboard.umkc.edu/webapps/blackboard/execute/content/file?cmd=view&content_id=_1601640_1&course_id=_115426_1&framesetWrapped=true -->
<html lang="en-US"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
  <title>SocketServer.h – COMP-SCI 423 0001- Client/Srvr Prog&amp;...</title>
  
  <meta id="request-method" name="request-method" content="GET">
  <meta name="author" content="Blackboard">
  <meta name="copyright" content="© 1997-2015 Blackboard Inc. All Rights Reserved. U.S. Patent No. 7,493,396 and 7,558,853. Additional Patents Pending.">
  <meta name="keywords" content="Blackboard">
  <meta http-equiv="Pragma" content="no-cache">
  <meta http-equiv="Expires" content="-1">
  
  <link rel="SHORTCUT ICON" type="image/x-icon" href="https://blackboard.umkc.edu/ui/bb-icon2.ico">
    <link rel="stylesheet" type="text/css" href="./SocketServer_files/shared.css" id="css_0">
    <link rel="stylesheet" type="text/css" href="./SocketServer_files/theme.css" id="css_1">
    <link rel="stylesheet" type="text/css" href="./SocketServer_files/app_nav.css" id="css_2">
    <link rel="stylesheet" type="text/css" href="./SocketServer_files/opt_in_lightbox.css" id="css_3">
          <style type="text/css" id="courseMenuCustomCSS">

.noteditmode .listCm .courseMenu a:hover span, 
.noteditmode .listCm .courseMenu a:focus span {
	color:#0033CC!important;
}


#courseMenuPalette div.navPaletteContent ul li a, 
#courseMenuPalette h3 a, 
#previewCourseMenu h3 a,
.navPaletteContent h3 a.submenuLink:before, 
.navPaletteContent h3 a.submenuLink_active:before,
 #courseMenuPalette div.navPaletteContent ul li a span, 
 #courseMenuPalette .navPaletteContent .subhead
{
  color: #0033CC;
  text-shadow: none;
}

#courseMenuPalette ul.courseMenu li.divider hr
{
  background-color: #0033CC;
}

#courseMenuPalette ul.courseMenu li h4
{
  color: #0033CC;
}

#courseMenuPalette h4.treehead
{
  color: #0033CC;
}

#courseMenuPalette div.navPaletteContent
{
  background-color: #FFFFFF;
}

/*Active course menu view bubble stem*/
#courseMenuPalette .actionBarMicro .active > a:after {
 	border-bottom-color: #FFFFFF;
}


</style>
      <style type="text/css">.topGlobalLinks a.home{background-image:url(/images/console/icons/home_0.gif)}.bottom-buttons-home a{background-image:url(/images/console/icons/home_0.gif);background-repeat:no-repeat;background-position:50% 0}.topGlobalLinks a.help{background-image:url(/images/console/icons/help_0.gif)}.bottom-buttons-help a{background-image:url(/images/console/icons/help_0.gif);background-repeat:no-repeat;background-position:50% 0}.topGlobalLinks a.logout{background-image:url(/images/console/icons/logout_0.gif)}.global-nav-bar .logout-link,.global-nav-bar .logout-link:hover,.global-nav-bar .logout-link:focus{background-image:url(/images/console/icons/logout_0.gif);background-repeat:no-repeat;background-position:50% 0}</style>
       <link rel="stylesheet" type="text/css" media="print" href="./SocketServer_files/print.css">
    <script type="text/javascript" id="www-widgetapi-script" src="./SocketServer_files/www-widgetapi.js" async=""></script><script src="./SocketServer_files/iframe_api"></script><script type="text/javascript" src="./SocketServer_files/i18n.js"></script>
      <script language="javascript" type="text/javascript">

var JS_RESOURCES = new Object();

function _init_bundle_JS_RESOURCES() {

    JS_RESOURCES['validate.range.lessthen.str'] = 'Less Than {0}';
    JS_RESOURCES['notification.submit'] = 'Action already submitted.\nWait until the action is complete.';
    JS_RESOURCES['field_name.substitute'] = '\'\'{0}\'\' input field';
    JS_RESOURCES['validation.number'] = 'A valid numeric value must be entered: {0}.';
    JS_RESOURCES['confirm.remove_item'] = 'This action is final and cannot be undone. Continue?';
    JS_RESOURCES['validation.option.required'] = 'At least one option must be selected from the list.';
    JS_RESOURCES['validate.alignment.missing.content'] = 'You selected alignments but did not select any alignable content to copy.';
    JS_RESOURCES['validate.range.morethen.str'] = 'More Than {0}';
    JS_RESOURCES['validation.radio.required'] = 'Make a selection to continue.';
    JS_RESOURCES['validation.negative'] = 'A valid non-negative value must be entered: {0}.';
    JS_RESOURCES['validate.range.between.str'] = 'Between {0} and {1}';
    JS_RESOURCES['validation.password'] = 'Password cannot be empty or contain only spaces.';
    JS_RESOURCES['invalid_char.space'] = 'space';
    JS_RESOURCES['common.list.separator.comma'] = '{0}, {1}';
    JS_RESOURCES['validate.invalidate.number.space'] = 'Space';
    JS_RESOURCES['validation.date_past.confirm'] = 'The time is in the past.\nContinue with this time?';
    JS_RESOURCES['validation.date.required'] = 'A complete date value must be provided: {0}.';
    JS_RESOURCES['validation.invalid_chars'] = 'Contains illegal characters: {0}.\nDelete these characters: {1}';
    JS_RESOURCES['validation.mismatch'] = 'The values entered do not match: {0}.\nConfirm: {0}.';
    JS_RESOURCES['validate.login.invalid.username.or.pass'] = 'Enter a username and password.';
    JS_RESOURCES['validation.date_equal'] = 'The start date cannot be equal to the end date.';
    JS_RESOURCES['validation.valid_course_id'] = 'Course id contains illegal characters or multibyte characters.';
    JS_RESOURCES['validation.cmp_field.rejected'] = 'The {0} cannot be used without a corresponding {1} value.';
    JS_RESOURCES['validation.percent'] = 'A valid percent value between 0 and 100 must be entered.';
    JS_RESOURCES['validation.maximum_length.singular'] = 'Must not contain more than {1} characters: {0}.\nReduce the size of the input by one character.';
    JS_RESOURCES['validation.minimum_length'] = 'A minimum of {0} characters must be entered: {1}.';
    JS_RESOURCES['active.filter.free.form.text.blank'] = 'Specify a value for the search text field';
    JS_RESOURCES['validation.invalid_value'] = 'Invalid numeric value provided: {0}.';
    JS_RESOURCES['validation.multiSelect.maxItems'] = 'Multiselect box should not contain more than {0} number of items.';
    JS_RESOURCES['vtbe.artifact.footer.validate.nameIfSaveArtifact'] = 'Specify a Name in order to Save as a Reusable Object.';
    JS_RESOURCES['validation.multiSelect.minItems'] = 'Multiselect box should contain at least {0} number of items.';
    JS_RESOURCES['validate.enrolloptions.error.codeconflict'] = 'The Access Code Enrollment option conflicts with the selection of {instructor} Led enrollment.';
    JS_RESOURCES['validation.maximum_length'] = 'Must not contain more than 255 characters';
    JS_RESOURCES['validation.maximum_length.plural'] = 'Must not contain more than {1} characters: {0}.\nReduce the size of the input by {2} characters.';
    JS_RESOURCES['validate.enrolloptions.error.nooption'] = 'Warning: Choose either the {instructor} Led or the Self-Enrollment option.';
    JS_RESOURCES['validation.portal.tool.items.remove'] = 'Delete: {0}?';
    JS_RESOURCES['active.filter.search.terms'] = 'Search Terms';
    JS_RESOURCES['assessment.incomplete.confirm.backtrackProhibited.survey'] = 'The following questions may be incomplete:\n {0}\nClick cancel to return to the survey. Click Ok to save the incomplete answer.';
    JS_RESOURCES['warning.email'] = 'Email address is a recommended field. Users will be unable to use parts of the system without an email address.';
    JS_RESOURCES['invalid_char.comma'] = 'comma';
    JS_RESOURCES['assessment.incomplete.confirm.survey'] = 'The following questions may be incomplete:\n {0}\nClick cancel to return to the survey. Click Ok to submit assessment.';
    JS_RESOURCES['validation.plain_text.confirm'] = 'To display equations correctly in this document, Smart Text or HTML format must be selected.\nClick \'OK\' to save in selected Plain Text format or click \'Cancel\' to select a new format.';
    JS_RESOURCES['validation.date_past'] = 'The end date cannot be earlier than the start date.';
    JS_RESOURCES['validation.allow_negtive.percent'] = 'A valid percent value between -100 and 100 must be entered.';
    JS_RESOURCES['validation.association.refresh.confirm'] = 'The associated items information might have been updated.\nClick \'OK\' to refresh the list or click \'Cancel\' to keep the current page.';
    JS_RESOURCES['validation.image_type'] = 'Unknown image type: {0}. Image may not display correctly.';
    JS_RESOURCES['validation.system_role.reserve'] = '"bb" is not permitted at the beginning of a role ID.';
    JS_RESOURCES['validation.email'] = 'A fully qualified email address (for example, info@blackboard.com) must be entered.';
    JS_RESOURCES['validation.maximum_length.no_name.singular'] = 'Must not contain more than {0} characters.\nReduce the size of the input by one character.';
    JS_RESOURCES['validate.invalidate.number'] = 'Please input valid number instead of {0}.';
    JS_RESOURCES['validation.required'] = 'A value must be provided: {0}.';
    JS_RESOURCES['list.checkToSelectAllItems'] = 'Check to select all items';
    JS_RESOURCES['validation.maximum_length.no_name.plural'] = 'Must not contain more than {0} characters.\nReduce the size of the input by {1} characters.';
    JS_RESOURCES['validation.url'] = 'A valid URL (for example, http://www.myschool.edu) must be entered.';
    JS_RESOURCES['validate.range.overlap'] = 'criteria ({0}) overlaps criteria ({1}).';
    JS_RESOURCES['hide.helptext'] = 'Hide Help Text';
    JS_RESOURCES['confirm.delete_item_value'] = 'This item {0} will be deleted. Continue?';
    JS_RESOURCES['assessment.incomplete.confirm'] = 'The following questions may be incomplete:\n {0}\nClick cancel to return to the test. Click Ok to submit assessment.';
    JS_RESOURCES['list.uncheckToDeselectAllItems'] = 'Uncheck to deselect all items';
    JS_RESOURCES['assessment.incomplete.confirm.backtrackProhibited'] = 'The following questions may be incomplete:\n {0}\nClick cancel to return to the test. Click Ok to save the incomplete answer.';
    JS_RESOURCES['validation.time.required'] = 'A complete time value must be provided: {0}.';
    JS_RESOURCES['vtbe.artifact.footer.validate.saveLocationIfSaveArtifact'] = 'Specify a location for the Reusable Object.';
    JS_RESOURCES['validation.cmp_field.required'] = 'A value must be provided for {0}\nwhen {1} field is not empty';
    JS_RESOURCES['active.filter.changed.alert'] = 'criteria now contains';
    JS_RESOURCES['validate.enrolloptions.error.emailrequestconflict'] = 'The selected email enrollment option conflicts with the self-enrollment selection.';
    JS_RESOURCES['show.helptext'] = 'Show Help Text';
    JS_RESOURCES['portalmodule.section.remove'] = 'Delete: {0}?';

    JS_RESOURCES.getString = i18n_get_string;
    JS_RESOURCES.getFormattedString = i18n_get_formatted_string;

}

_init_bundle_JS_RESOURCES();

</script>
<script language="javascript" type="text/javascript">

var LOCALE_SETTINGS = new Object();

function _init_bundle_LOCALE_SETTINGS() {

    LOCALE_SETTINGS['LOCALE_SETTINGS.CALENDAR_TITLE_FORMAT_DAY.03258'] = 'dddd, MMM d, yyyy';
    LOCALE_SETTINGS['BBI18N.WINDOWS_CHARSET'] = 'ISO-8859-1';
    LOCALE_SETTINGS['LOCALE_SETTINGS.SHORT_SURNAME'] = '{3}, {1}';
    LOCALE_SETTINGS['LOCALE_SETTINGS.CALENDAR_COLUMN_FORMAT_MONTH.03255'] = 'ddd';
    LOCALE_SETTINGS['float.allow.negative.format'] = '^((([-]?[0-9]{1,3}(\\,[0-9]{3})*)|[-]?[0-9]*)(\\.[0-9]+)?|\\.[0-9]+)?$';
    LOCALE_SETTINGS['number_format.thousands_sep'] = ',';
    LOCALE_SETTINGS['LOCALE_SETTINGS.NAME.COLUMN_ORDER'] = 'title,givenName,middleName,familyName,suffix,otherName';
    LOCALE_SETTINGS['LOCALE_SETTINGS.DAY_FULL.02098'] = 'Sunday Monday Tuesday Wednesday Thursday Friday Saturday';
    LOCALE_SETTINGS['LOCALE_SETTINGS.internal_date_format'] = 'MM/dd/yy';
    LOCALE_SETTINGS['LOCALE_SETTINGS.TIME_ORDER.00519'] = 'HMP';
    LOCALE_SETTINGS['LOCALE_SETTINGS.date_display_pattern'] = 'MM/DD/YY';
    LOCALE_SETTINGS['number_format.decimal_point'] = '.';
    LOCALE_SETTINGS['LOCALE_SETTINGS.NAME.COLUMN.1'] = '{0}';
    LOCALE_SETTINGS['LOCALE_SETTINGS.NAME.COLUMN.2'] = '{1}';
    LOCALE_SETTINGS['BBI18N.SOLARIS_CHARSET'] = 'ISO8859-1';
    LOCALE_SETTINGS['LOCALE_SETTINGS.AM_PM.00522'] = 'AM PM';
    LOCALE_SETTINGS['float.format'] = '^(([0-9]{1,3}(\\,[0-9]{3})*)|[0-9]*)(\\.[0-9]+)?$';
    LOCALE_SETTINGS['LOCALE_SETTINGS.NAME.SORT_COLUMN'] = 'familyName';
    LOCALE_SETTINGS['efloat.format'] = '^[+-]?[0-9]*(\\.[0-9]+)?([eE][+-]?[0-9]+)?$';
    LOCALE_SETTINGS['LOCALE_SETTINGS.MONTH_FULL.02100'] = 'January February March April May June July August September October November December';
    LOCALE_SETTINGS['LOCALE_SETTINGS.DATE_ORDER.00519'] = 'MDY';
    LOCALE_SETTINGS['LOCALE_SETTINGS.GREETING'] = 'Welcome, {1}';
    LOCALE_SETTINGS['LOCALE_SETTINGS.ADDRESS_FIELD_ORDER'] = 'STREET_1 STREET_2 CITY STATE ZIP_CODE COUNTRY';
    LOCALE_SETTINGS['LOCALE_SETTINGS.24HR_SUPPORT.03208'] = '0';
    LOCALE_SETTINGS['LOCALE_SETTINGS.DAY_CHARACTER.03253'] = '';
    LOCALE_SETTINGS['LOCALE_SETTINGS.FIRST_DAY_OF_WEEK.03207'] = '0';
    LOCALE_SETTINGS['LOCALE_SETTINGS.ADDRESS_ORDER.07832'] = 'street,city,region,postal_code,country';
    LOCALE_SETTINGS['LOCALE_SETTINGS.CALENDAR_COLUMN_FORMAT_DAY.03257'] = 'dddd M/d';
    LOCALE_SETTINGS['LOCALE_SETTINGS.REPORT_FONT_PATH.03170'] = 'C:/WINNT/Fonts';
    LOCALE_SETTINGS['LOCALE_SETTINGS.YEAR_CHARACTER.03255'] = '';
    LOCALE_SETTINGS['LOCALE_SETTINGS.SHORT'] = '{1} {3}';
    LOCALE_SETTINGS['LOCALE_SETTINGS.EXTENDED_SURNAME'] = '{3}';
    LOCALE_SETTINGS['number_format.exponent'] = 'eE';
    LOCALE_SETTINGS['LOCALE_SETTINGS.CALENDAR_COLUMN_FORMAT_WEEK.03256'] = 'ddd M/d';
    LOCALE_SETTINGS['LOCALE_SETTINGS.DAYS.00521'] = '01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31';
    LOCALE_SETTINGS['LOCALE_SETTINGS.WORK_FIELD_ORDER'] = 'JOB_TITLE DEPARTMENT COMPANY B_PHONE_1 B_PHONE_2 B_FAX';
    LOCALE_SETTINGS['LOCALE_SETTINGS.CALENDAR_TITLE_FORMAT_MONTH.03259'] = 'MMMM yyyy';
    LOCALE_SETTINGS['LOCALE_SETTINGS.GIVEN_INITIAL_FAMILY_NAME'] = '{4} {3}';
    LOCALE_SETTINGS['LOCALE_SETTINGS.REPORT_FONT_SIZE.03168'] = '8';
    LOCALE_SETTINGS['LOCALE_SETTINGS.PHONE_FIELD_ORDER'] = 'H_PHONE_1 H_PHONE_2 H_FAX M_PHONE';
    LOCALE_SETTINGS['LOCALE_SETTINGS.MONTH_SHORT.00520'] = 'Jan Feb  Mar Apr  May Jun Jul Aug Sep Oct Nov Dec';
    LOCALE_SETTINGS['thousand.sep.format'] = ',';
    LOCALE_SETTINGS['LOCALE_SETTINGS.DAY_SHORT.02097'] = 'SUN MON TUE WED THU FRI SAT';
    LOCALE_SETTINGS['LOCALE_SETTINGS.LONG'] = '{0} {1} {2} {3}';
    LOCALE_SETTINGS['LOCALE_SETTINGS.DAY_MIN.02099'] = 'Su Mo Tu We Th Fr Sa';
    LOCALE_SETTINGS['LOCALE_SETTINGS.MONTH_CHARACTER.03254'] = '';
    LOCALE_SETTINGS['BBI18N.LINUX_CHARSET'] = 'iso88591';
    LOCALE_SETTINGS['LOCALE_SETTINGS.CALENDAR_TITLE_FORMAT_WEEK.03260'] = 'MMM d[ yyyy]{ \'&#8212;\'[ MMM] d yyyy}';
    LOCALE_SETTINGS['LOCALE_SETTINGS.REPORT_FONT_NAME.03169'] = 'ARIAL.TTF';

    LOCALE_SETTINGS.getString = i18n_get_string;
    LOCALE_SETTINGS.getFormattedString = i18n_get_formatted_string;

}

_init_bundle_LOCALE_SETTINGS();

</script>

      <script language="javascript" type="text/javascript">

var LOCALE_SETTINGS = new Object();

function _init_bundle_LOCALE_SETTINGS() {

    LOCALE_SETTINGS['LOCALE_SETTINGS.CALENDAR_TITLE_FORMAT_DAY.03258'] = 'dddd, MMM d, yyyy';
    LOCALE_SETTINGS['BBI18N.WINDOWS_CHARSET'] = 'ISO-8859-1';
    LOCALE_SETTINGS['LOCALE_SETTINGS.SHORT_SURNAME'] = '{3}, {1}';
    LOCALE_SETTINGS['LOCALE_SETTINGS.CALENDAR_COLUMN_FORMAT_MONTH.03255'] = 'ddd';
    LOCALE_SETTINGS['float.allow.negative.format'] = '^((([-]?[0-9]{1,3}(\\,[0-9]{3})*)|[-]?[0-9]*)(\\.[0-9]+)?|\\.[0-9]+)?$';
    LOCALE_SETTINGS['number_format.thousands_sep'] = ',';
    LOCALE_SETTINGS['LOCALE_SETTINGS.NAME.COLUMN_ORDER'] = 'title,givenName,middleName,familyName,suffix,otherName';
    LOCALE_SETTINGS['LOCALE_SETTINGS.DAY_FULL.02098'] = 'Sunday Monday Tuesday Wednesday Thursday Friday Saturday';
    LOCALE_SETTINGS['LOCALE_SETTINGS.internal_date_format'] = 'MM/dd/yy';
    LOCALE_SETTINGS['LOCALE_SETTINGS.TIME_ORDER.00519'] = 'HMP';
    LOCALE_SETTINGS['LOCALE_SETTINGS.date_display_pattern'] = 'MM/DD/YY';
    LOCALE_SETTINGS['number_format.decimal_point'] = '.';
    LOCALE_SETTINGS['LOCALE_SETTINGS.NAME.COLUMN.1'] = '{0}';
    LOCALE_SETTINGS['LOCALE_SETTINGS.NAME.COLUMN.2'] = '{1}';
    LOCALE_SETTINGS['BBI18N.SOLARIS_CHARSET'] = 'ISO8859-1';
    LOCALE_SETTINGS['LOCALE_SETTINGS.AM_PM.00522'] = 'AM PM';
    LOCALE_SETTINGS['float.format'] = '^(([0-9]{1,3}(\\,[0-9]{3})*)|[0-9]*)(\\.[0-9]+)?$';
    LOCALE_SETTINGS['LOCALE_SETTINGS.NAME.SORT_COLUMN'] = 'familyName';
    LOCALE_SETTINGS['efloat.format'] = '^[+-]?[0-9]*(\\.[0-9]+)?([eE][+-]?[0-9]+)?$';
    LOCALE_SETTINGS['LOCALE_SETTINGS.MONTH_FULL.02100'] = 'January February March April May June July August September October November December';
    LOCALE_SETTINGS['LOCALE_SETTINGS.DATE_ORDER.00519'] = 'MDY';
    LOCALE_SETTINGS['LOCALE_SETTINGS.GREETING'] = 'Welcome, {1}';
    LOCALE_SETTINGS['LOCALE_SETTINGS.ADDRESS_FIELD_ORDER'] = 'STREET_1 STREET_2 CITY STATE ZIP_CODE COUNTRY';
    LOCALE_SETTINGS['LOCALE_SETTINGS.24HR_SUPPORT.03208'] = '0';
    LOCALE_SETTINGS['LOCALE_SETTINGS.DAY_CHARACTER.03253'] = '';
    LOCALE_SETTINGS['LOCALE_SETTINGS.FIRST_DAY_OF_WEEK.03207'] = '0';
    LOCALE_SETTINGS['LOCALE_SETTINGS.ADDRESS_ORDER.07832'] = 'street,city,region,postal_code,country';
    LOCALE_SETTINGS['LOCALE_SETTINGS.CALENDAR_COLUMN_FORMAT_DAY.03257'] = 'dddd M/d';
    LOCALE_SETTINGS['LOCALE_SETTINGS.REPORT_FONT_PATH.03170'] = 'C:/WINNT/Fonts';
    LOCALE_SETTINGS['LOCALE_SETTINGS.YEAR_CHARACTER.03255'] = '';
    LOCALE_SETTINGS['LOCALE_SETTINGS.SHORT'] = '{1} {3}';
    LOCALE_SETTINGS['LOCALE_SETTINGS.EXTENDED_SURNAME'] = '{3}';
    LOCALE_SETTINGS['number_format.exponent'] = 'eE';
    LOCALE_SETTINGS['LOCALE_SETTINGS.CALENDAR_COLUMN_FORMAT_WEEK.03256'] = 'ddd M/d';
    LOCALE_SETTINGS['LOCALE_SETTINGS.DAYS.00521'] = '01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31';
    LOCALE_SETTINGS['LOCALE_SETTINGS.WORK_FIELD_ORDER'] = 'JOB_TITLE DEPARTMENT COMPANY B_PHONE_1 B_PHONE_2 B_FAX';
    LOCALE_SETTINGS['LOCALE_SETTINGS.CALENDAR_TITLE_FORMAT_MONTH.03259'] = 'MMMM yyyy';
    LOCALE_SETTINGS['LOCALE_SETTINGS.GIVEN_INITIAL_FAMILY_NAME'] = '{4} {3}';
    LOCALE_SETTINGS['LOCALE_SETTINGS.REPORT_FONT_SIZE.03168'] = '8';
    LOCALE_SETTINGS['LOCALE_SETTINGS.PHONE_FIELD_ORDER'] = 'H_PHONE_1 H_PHONE_2 H_FAX M_PHONE';
    LOCALE_SETTINGS['LOCALE_SETTINGS.MONTH_SHORT.00520'] = 'Jan Feb  Mar Apr  May Jun Jul Aug Sep Oct Nov Dec';
    LOCALE_SETTINGS['thousand.sep.format'] = ',';
    LOCALE_SETTINGS['LOCALE_SETTINGS.DAY_SHORT.02097'] = 'SUN MON TUE WED THU FRI SAT';
    LOCALE_SETTINGS['LOCALE_SETTINGS.LONG'] = '{0} {1} {2} {3}';
    LOCALE_SETTINGS['LOCALE_SETTINGS.DAY_MIN.02099'] = 'Su Mo Tu We Th Fr Sa';
    LOCALE_SETTINGS['LOCALE_SETTINGS.MONTH_CHARACTER.03254'] = '';
    LOCALE_SETTINGS['BBI18N.LINUX_CHARSET'] = 'iso88591';
    LOCALE_SETTINGS['LOCALE_SETTINGS.CALENDAR_TITLE_FORMAT_WEEK.03260'] = 'MMM d[ yyyy]{ \'&#8212;\'[ MMM] d yyyy}';
    LOCALE_SETTINGS['LOCALE_SETTINGS.REPORT_FONT_NAME.03169'] = 'ARIAL.TTF';

    LOCALE_SETTINGS.getString = i18n_get_string;
    LOCALE_SETTINGS.getFormattedString = i18n_get_formatted_string;

}

_init_bundle_LOCALE_SETTINGS();

</script>

         <script type="text/javascript" src="./SocketServer_files/D325ED5B69381F2FD5266F791F77B610.js"></script>
    <script type="text/javascript" src="./SocketServer_files/UserDataDWRFacade.js"></script>
    <script type="text/javascript" src="./SocketServer_files/MashupDWRFacade.js"></script>
    <script type="text/javascript" src="./SocketServer_files/titlebartagutils.js"></script>
    <script type="text/javascript" src="./SocketServer_files/CourseMenuDWRFacade.js"></script>
    <script type="text/javascript" src="./SocketServer_files/UserPageInstructionsSettingDWRFacade.js"></script>
    <script type="text/javascript" src="./SocketServer_files/engine.js"></script>
    <script type="text/javascript" src="./SocketServer_files/breadcrumbs.js"></script>
    <script type="text/javascript" src="./SocketServer_files/tree.js"></script>
    <script type="text/javascript" src="./SocketServer_files/coursemenu.js"></script>
    <script type="text/javascript" src="./SocketServer_files/util.js"></script>
    <script type="text/javascript" src="./SocketServer_files/9F8CBBF17D2229C50DA1E35964B231A8.js"></script>
    <script type="text/javascript" src="./SocketServer_files/UserDWRFacade.js"></script>
    <script type="text/javascript" src="./SocketServer_files/mybb.js"></script>
    <script type="text/javascript" src="./SocketServer_files/welcomeOverlay.js"></script>
    <script type="text/javascript" src="./SocketServer_files/social.js"></script>
    <script type="text/javascript" src="./SocketServer_files/ProfileProviderService.js"></script>
    <script type="text/javascript" src="./SocketServer_files/ToolActivityService.js"></script>
    <script type="text/javascript" src="./SocketServer_files/tool_service.js"></script>
    <script type="text/javascript" src="./SocketServer_files/profile_access.js"></script>
    <script type="text/javascript" src="./SocketServer_files/5AFF51E610E7EB2B513F1B8573757EE7.js"></script>
    </head>
  <body>
  
<h1 class="hideoff hideFromQuickLinks">Open Quick Links</h1><div id="quick_links_wrap" style="top: 68px;"><a id="quick_links_lightbox_link" href="https://blackboard.umkc.edu/webapps/blackboard/execute/content/file?cmd=view&content_id=_1601640_1&course_id=_115426_1&framesetWrapped=true#" onclick="quickLinks.lightboxHelper.toggleLightbox(); return false;" role="button" aria-haspopup="true" tabindex="1" title="Open Quick Links">Quick Links</a></div><div id="quickLinksLightboxDiv" class="hideoff"><div class="ax-content"><div class="content-lite"><div id="quick_links_landmarks_section"><h2 class="hideFromQuickLinks">Page Landmarks</h2><ul class="shortcut-list" id="quick_links_landmark_list"></ul></div><div id="quick_links_headings_section"><h2 class="hideFromQuickLinks">Content Outline</h2><ul class="shortcut-list" id="quick_links_heading_list"></ul></div></div><div id="quick_links_hotkeys_section" class="legend"><h2 class="hideFromQuickLinks">Keyboard Shortcuts</h2><ul class="keycombos" id="quick_links_hotkey_list"></ul></div></div></div><h1 class="hideoff hideFromQuickLinks"></h1><div class="global-nav-bar-wrap"><div class="global-nav-bar logout"><a id="topframe.logout.label" href="https://blackboard.umkc.edu/webapps/login?action=logout" target="_top" class="nav-link logout-link" title="Logout"> Logout</a></div><div id="global-nav" class="global-nav-bar" role="navigation" data-preview="false"><div class="hideoff">Global Menu</div><a id="global-nav-link" class="nav-link u_floatThis-right" href="https://blackboard.umkc.edu/webapps/blackboard/execute/content/file?cmd=view&content_id=_1601640_1&course_id=_115426_1&framesetWrapped=true#global-nav-flyout" aria-haspopup="true" tabindex="1" accesskey="m" role="navigation" title="Open Global Navigation Menu"><img id="global-avatar" src="./SocketServer_files/avatar_150.gif" class="global-top-avatar" data-tool-title="User Avatar Image" alt="">Henry Ell<span id="badgeTotal" style="visibility: hidden" title=""><span class="hideoff" id="badgeAXLabel">Activity Updates</span><span class="badge" id="badgeTotalCount" title=""></span></span><img src="./SocketServer_files/arrowDown-topnav.png" id="global-toggle-img" class="global-toggle" alt="Expand Global Nav"></a><div id="global-nav-flyout" class="flyout-menu" style="display: none;" role="application"><ul id="bottomButtons" class="bottom-buttons"><li class="bottom-buttons-home"><a id="topframe.home.label" href="http://www.umkc.edu/" target="_blank" class="home" title="Home" role="menuitem"> Home</a></li><li class="bottom-buttons-help"><a id="topframe.help.label" href="https://blackboard.umkc.edu/webapps/blackboard/execute/content/file?cmd=view&content_id=_1601640_1&course_id=_115426_1&framesetWrapped=true#" onclick="globalNavigation.openHelpWindow(&#39;http://www.umkc.edu/ia/it/blackboard/&#39;);" class="help" title="Help" role="menuitem"> Help</a></li></ul></div></div></div>
<!-- global_nav.jsp -->

<div id="globalNavPageNavArea" style="height: 89px;">
    <table class="bouncer">
    	<caption class="hideoff">Top frame table</caption>
      <tbody><tr>
        <td>
          <div class="topTabs bgBanner" id="topTabs">
  
            <div class="brandingImgWrap">
              <a href="http://www.umkc.edu/" target="_blank" title="UMKC">
                <img src="./SocketServer_files/1pixelbanner-usefor9.jpg" class="bannerImage" alt="UMKC" title="UMKC">
              </a>
            </div>
  
            <div class="tabWrapper-right">
              <h2 class="hideoff" id="anonymous_element_1">Top Frame Tabs</h2>
              <table class="appTabs transparent" id="appTabList">
            	  <caption class="hideoff">Tab List table</caption>
                <tbody><tr>
                 <td id="My UMKC" class="active">
                      <a href="https://blackboard.umkc.edu/webapps/portal/execute/tabs/tabAction?tab_tab_group_id=_1_1" target="_top"><span>My UMKC</span>
                        <span class="hideoff"> Tab 1 of 4&nbsp;(active tab)</span>
                      </a>
                    </td>
                  <td id="Request System">
                      <a href="https://blackboard.umkc.edu/webapps/portal/execute/tabs/tabAction?tab_tab_group_id=_103_1" target="_top"><span>Request System</span>
                        <span class="hideoff"> Tab 2 of 4</span>
                      </a>
                    </td>
                  <td id="My Portal">
                      <a href="https://blackboard.umkc.edu/webapps/portal/execute/tabs/tabAction?tab_tab_group_id=_485_1" target="_top"><span>My Portal</span>
                        <span class="hideoff"> Tab 3 of 4</span>
                      </a>
                    </td>
                  <td id="All My Announcements">
                      <a href="https://blackboard.umkc.edu/webapps/portal/execute/tabs/tabAction?tab_tab_group_id=_608_1" target="_top"><span>All My Announcements</span>
                        <span class="hideoff"> Tab 4 of 4</span>
                      </a>
                    </td>
                  </tr>
              </tbody></table>
              <div class="clearfloats"></div>
            </div>
            </div>
        </td>
      </tr>
    </tbody></table>
  </div>

<div id="globalNavPageContentArea" style="height: 847px; overflow: auto;">

<h2 class="hideoff" id="anonymous_element_2">
 Current Location
</h2>

<div id="breadcrumbs" class="breadcrumbs clearfix ">

 <div class="breadcrumb-controls clearfix" id="breadcrumb_controls_id">





<div id="helpTextToggle" class="helpLink hidden">
  
</div>
 <input type="hidden" name="showHelperSetting" id="showHelperSetting" value="">
 </div>

 <div class="path  noToggle" role="navigation" id="anonymous_element_8">
 <ol class="clearfix">
    	<li class="root coursePath"> <a href="https://blackboard.umkc.edu/webapps/blackboard/execute/courseMain?course_id=_115426_1" title="COMP-SCI 423 0001- Client/Srvr Prog&amp;Applctn SP2015">                  COMP-SCI 423 0001- Client/Srvr Prog&amp;Applctn SP2015
              </a>      <div id="arrowContext_1" class="courseArrow" onclick="page.ContextMenu.changeArrowInBreadcrumb(1, event );">
<span class="contextMenuContainer" style=" display: inline;" bb:menugeneratorurl="/webapps/blackboard/execute/getCrossCourseMenuHTML?course_id=_115426_1" bb:navitem="" bb:contextparameters="" bb:menuorder="" bb:overwritenavitems="" bb:beforeshowfunc="">
   
  <a id="cmlink_8b697b424ac74a7994c673ffd6be2f77" onfocus="page.ContextMenu.LI(event, &#39;cmdiv_8b697b424ac74a7994c673ffd6be2f77&#39;,false);" onmouseover="page.ContextMenu.LI(event, &#39;cmdiv_8b697b424ac74a7994c673ffd6be2f77&#39;,false);" class="cmimg editmode jsInit " href="https://blackboard.umkc.edu/webapps/blackboard/execute/content/file?cmd=view&content_id=_1601640_1&course_id=_115426_1&framesetWrapped=true#contextMenu" title="Course-to-Course Navigation"> <img src="./SocketServer_files/cmlink_generic.gif" alt=""></a> 
  
</span>
</div>    </li>
   	<li> <a href="https://blackboard.umkc.edu/webapps/blackboard/content/listContent.jsp?course_id=_115426_1&content_id=_1480374_1&mode=reset" title="Course Content">                  Course Content
              </a>          </li>
   	<li><a href="https://blackboard.umkc.edu/webapps/blackboard/execute/content/file?cmd=view&content_id=_1601640_1&course_id=_115426_1&framesetWrapped=true#" title="Click to expand the breadcrumbs">...</a></li><li style="display: none;"> <a href="https://blackboard.umkc.edu/webapps/blackboard/content/listContent.jsp?course_id=_115426_1&content_id=_1569429_1&mode=reset" title="Lecture notes">                  Lecture notes
              </a>          </li>
   	<li> <a href="https://blackboard.umkc.edu/webapps/blackboard/content/listContent.jsp?course_id=_115426_1&content_id=_1601642_1&mode=reset" title="TCP_Socket_server_and_client">                  TCP_Socket_server_and_client
              </a>          </li>
   	<li class="placeholder">                   SocketServer.h
                        </li>
  </ol>
 </div>

</div>

<div class="locationPane">
 <div id="navigationPane" class="navigationPane " style="height: 509px;">
 

 <div id="menuWrap" class="menuWrap">
  <div id="puller">
  <a id="menuPuller" class="clickpuller" title="Hide Course Menu" href="https://blackboard.umkc.edu/webapps/blackboard/execute/content/file?cmd=view&content_id=_1601640_1&course_id=_115426_1&framesetWrapped=true#">
   <img id="expander" alt="Hide Course Menu" src="./SocketServer_files/spacer.gif">
  </a>
 </div>
<div class="menuWrap-inner">
  <input type="hidden" name="blackboard.platform.security.NonceUtil.nonce" value="4b324b0d-239b-4932-aec0-b22d1807a490"><div id="courseMenuPalette" class="navPalette listCm navPaletteExpCol"><div class="actionBarMicro clearfix"><h2 class="hideoff" id="anonymous_element_3">Menu Management Options</h2><ul class="nav clearfix u_floatThis-right"><li id="refreshMenuLink" class="secondaryButton "><a href="https://blackboard.umkc.edu/webapps/blackboard/execute/content/file?cmd=view&content_id=_1601640_1&course_id=_115426_1&framesetWrapped=true#" title="Refresh"><span><img src="./SocketServer_files/small_refresh.gif" alt="Refresh"></span></a></li><li id="courseMapButton" class="secondaryButton "><a href="https://blackboard.umkc.edu/webapps/blackboard/execute/content/file?cmd=view&content_id=_1601640_1&course_id=_115426_1&framesetWrapped=true#" title="Display Course Menu in a Window"><span><img src="./SocketServer_files/small_new_window.gif" alt="Display Course Menu in a Window"></span></a></li></ul></div><div class="navPaletteContent"><h2 class="hideoff" tabindex="-1" id="anonymous_element_4">Course Menu:</h2><div id="courseMenuPalette_paletteTitleHeading"><div class="navPaletteTitle"><h3 aria-expanded="true" id="anonymous_element_5"><a href="https://blackboard.umkc.edu/webapps/blackboard/execute/content/file?cmd=view&content_id=_1601640_1&course_id=_115426_1&framesetWrapped=true#" class="comboLink" title="Collapse COMP-SCI 423 0001- Client/Srvr Prog&amp;Applctn SP2015" id="courseMenu_link">COMP-SCI 423 0001- Client/Srvr Prog&amp;Applctn SP2015</a></h3><h3 id="anonymous_element_6"><a href="https://blackboard.umkc.edu/webapps/blackboard/execute/courseMain?course_id=_115426_1" target="" class="submenuLink" id="courseMenu_combo" title="Go to Course Entry Page"><img src="./SocketServer_files/generic_dbl_arrow_right.gif" alt="Course Entry Page"></a></h3></div></div><ul id="courseMenuPalette_contents" class="courseMenu"><li id="paletteItem:_1029780_1" class="clearfix "><a href="https://blackboard.umkc.edu/webapps/blackboard/content/launchLink.jsp?course_id=_115426_1&tool_id=_108_1&tool_type=TOOL&mode=view&mode=reset" target="_self"><span title="Announcements">Announcements</span></a></li><li id="paletteItem:_1029783_1" class="clearfix "><a href="https://blackboard.umkc.edu/webapps/blackboard/content/launchLink.jsp?course_id=_115426_1&toc_id=_1029783_1&mode=view&mode=reset" target="_self"><span title="Home Page">Home Page</span></a></li><li id="paletteItem:_1029781_1" class="clearfix "><a href="https://blackboard.umkc.edu/webapps/blackboard/content/listContent.jsp?course_id=_115426_1&content_id=_1480375_1&mode=reset" target="_self"><span title="Syllabus">Syllabus</span></a></li><li id="paletteItem:_1029779_1" class="clearfix "><a href="https://blackboard.umkc.edu/webapps/blackboard/content/listContent.jsp?course_id=_115426_1&content_id=_1480374_1&mode=reset" target="_self"><span title="Course Content">Course Content</span></a></li><li id="paletteItem:_1029786_1" class="clearfix "><a href="https://blackboard.umkc.edu/webapps/blackboard/content/launchLink.jsp?course_id=_115426_1&tool_id=_7_1&tool_type=TOOL&mode=view&mode=reset" target="_self"><span title="Tools">Tools</span></a></li><li id="paletteItem:_1029778_1" class="clearfix "><a href="http://www.umkc.edu/ia/its/support/studenthelp.asp" target="_blank"><span title="Get Help">Get Help</span></a></li><li id="paletteItem:_1029782_1" class="clearfix divider"><hr></li><li id="paletteItem:_1094410_1" class="clearfix "><a href="https://blackboard.umkc.edu/webapps/Teg-Tegrity-bb_bb60/TegSessions.jsp?course_id=_115426_1&linkType=Tegrity" target="_blank"><span title="Tegrity Classes">Tegrity Classes</span></a></li></ul></div></div>
  </div>
 </div>
 </div>
 <div id="contentPanel" class="contentPane  " style="height: 509px;">
<div class="shadow">
       <div id="editmodeWrapper"> 
 
  <div id="content" class="contentBox ">
   
<div id="pageTitleDiv" class="pageTitle clearfix ">

  
<div id="pageTitleBar" class="pageTitleIcon" tabindex="0">
  <img src="./SocketServer_files/document_on.gif" alt="" id="titleicon"><h1 id="pageTitleHeader" tabindex="-1"><span id="pageTitleText">
  SocketServer.h  </span></h1>
        <span id="_titlebarExtraContent" class="titleButtons"></span>
</div>


<form id="content" name="content" action="https://blackboard.umkc.edu/webapps/blackboard/execute/content/listContentEditable.jsp" method="post">

  <input type="hidden" name="course_id" id="course_id" value="_115426_1">


 
  <input type="hidden" name="content_id" id="content_id" value="_1601640_1">


 
  <input type="hidden" name="contentTitle" id="contentTitle" value="">


 
  <input type="hidden" name="blackboard.platform.security.NonceUtil.nonce.ajax" id="blackboard.platform.security.NonceUtil.nonce.ajax" value="e51ed1ee-def7-4bc9-8b7e-d0be3351f303">


 

</form>


</div>

      <div class="container clearfix" id="containerdiv">
    <h2 class="hideoff" id="anonymous_element_7">Content</h2>
    <script type="text/javascript" src="./SocketServer_files/achievement.js"></script><script src="./SocketServer_files/version_pinned_scriptaculous.js"></script><script type="text/javascript" src="./SocketServer_files/builder.js"></script><script type="text/javascript" src="./SocketServer_files/effects.js"></script><script type="text/javascript" src="./SocketServer_files/dragdrop.js"></script><script type="text/javascript" src="./SocketServer_files/controls.js"></script><link rel="stylesheet" href="./SocketServer_files/achievements.css" type="text/css" media="screen"><script type="text/javascript">
new Ajax.Request('/webapps/achievements/checkAchievements.form', {
method:'get',
asynchronous:true,
parameters: {courseId: '_115426_1', type: 1 },
onSuccess: function(response) {
var jsonArray = response.responseJSON;
handleAchievements(jsonArray);
},
onFailure: function() { alert('Something went wrong...'); }
});
</script><script type="text/javascript">
function setEmbedHeightOnLoad() {
	if ($('PDFEmbedID')){
		$('PDFEmbedID').height = document.viewport.getHeight();
	}
}	
</script>

<iframe src="./SocketServer_files/SocketServer.html" id="cleanSlate" class="cleanSlate" onload="page.setIframeHeightAndWidth();" width="100%" style="height: 400px; width: 1624px;"></iframe>
   </div>
   
     </div>
   </div> 
   </div>
   </div>  
</div></div>




  <script type="text/javascript">page.bundle.addKey('inlineconfirmation.close','Close');page.bundle.addKey('inlineconfirmation.refresh','Refresh');page.bundle.addKey('hidden.link.close.menu','End of menu. Click to return to associated item.');page.bundle.addKey('hidden.link.close.form','End of form. Click to return to associated item.');page.bundle.addKey('lightbox.loading','Loading...');page.bundle.addKey('yt.stopped','Stopped:');page.bundle.addKey('yt.playing','Playing:');page.bundle.addKey('yt.cued','Cued:');page.bundle.addKey('yt.buffering','Buffering:');page.bundle.addKey('yt.paused','Paused:');page.bundle.addKey('yt.ended','Ended:');page.bundle.addKey('yt.play','Play');page.bundle.addKey('yt.pause','Pause');page.bundle.addKey('yt.mute','Mute');page.bundle.addKey('yt.unmute','Unmute');page.bundle.addKey('lightbox.overlay','{0} has been opened as a lightbox overlaying the current page.');page.bundle.addKey('display.playerControls','Player Controls');page.bundle.addKey('display.videoPlayerControls','Video Player Controls');page.bundle.addKey('display.play','Play');page.bundle.addKey('display.stop','Stop');page.bundle.addKey('display.volumeUp','Volume Up');page.bundle.addKey('display.volumeDown','Volume Down');page.bundle.addKey('display.mute','Mute');page.bundle.addKey('display.videoStatus','Video Status');page.bundle.addKey('display.closePlayerControls','Close Player Controls');page.bundle.addKey('display.embeddedVideoPlayer','Embedded Video Player');page.bundle.addKey('display.of','of');page.bundle.addKey('display.view.on.flickr','View Photo on Flickr');page.bundle.addKey('mashups.content.data.msg','We are unable to display the mashup content. This happens if the system detects an invalid URL. Remove the mashup item and try again to resolve this issue.');page.bundle.addKey('contextmenu.frame.title','Menu frame');page.bundle.addKey('frameset.contentframe.title','Content');page.bundle.addKey('common.pair.paren','{0} ({1})');page.bundle.addKey('coursemenu.show','Show Course Menu');page.bundle.addKey('coursemenu.hide','Hide Course Menu');page.bundle.addKey('dynamictree.expand','Expand');page.bundle.addKey('dynamictree.collapse','Collapse');page.bundle.addKey('dynamictree.expand.folder','Expand {0} tree folder');page.bundle.addKey('dynamictree.collapse.folder','Collapse {0} tree folder');page.bundle.addKey('dragdrop.accessible.error.chooseOption','Select an item first.');page.bundle.addKey('dragdrop.accessible.empty','No items available to reposition.');page.bundle.addKey('dragdrop.accessible.complete','Items have been reordered.');page.bundle.addKey('dragdrop.accessible.complete.nochange','No ordering changes made.');page.bundle.addKey('closeStr','Close');page.bundle.addKey('moreOptionsStr','Click to see options');page.bundle.addKey('hiddenStr','This link is hidden from students');page.bundle.addKey('emptyStr','This link has no content');page.bundle.addKey('entryPointChangeConfirmStr','The entry point will changed to the next available Content');page.bundle.addKey('subheaderColonStr','Subheader: {0}');page.bundle.addKey('confirmQuickEnrollStr','You will be given the role: {0}. Proceed?');page.bundle.addKey('enterSearchKeyStr','Enter Search Criteria.');page.bundle.addKey('courseWelcomePageLbTitle','Quick Setup Guide');page.bundle.addKey('expandCollapse.expand.section.nocolon','Expand');page.bundle.addKey('expandCollapse.collapse.section.nocolon','Collapse');page.bundle.addKey('expandCollapse.expand.section.param','Expand {0}');page.bundle.addKey('expandCollapse.collapse.section.param','Collapse {0}');page.bundle.addKey('accessDeniedMsg','Access Denied');page.bundle.addKey('tool.activity.description','activity updates');page.bundle.addKey('optin.decline.confirm.existing','This will permanently remove your Blackboard profile. Continue?');page.bundle.addKey('optin.processing.error','An error occurred processing your request.');page.bundle.addKey('breadcrumbs.expand','Click to expand the breadcrumbs');</script>
  <script type="text/javascript">    
      function submitContentItemRemovalForm( url, title, isContentFolder )
      {
         if (!confirm(unescape(JS_RESOURCES.getFormattedString('portalmodule.section.remove', new Array(title)))))
        {
          return;
        }
        document.content.elements['contentTitle'].value = title;
        document.content.action = url;
        document.content.submit();
      }
    </script>
    
  <script type="text/javascript">
   var course_id = "_115426_1";
   var courseTitle = "COMP-SCI 423 0001- Client/Srvr Prog&Applctn SP2015";
   var confirmDeleteMenuItemMsg = "Are you sure you want to delete this item?";
   var confirmQuickUnenrollMsg = "Any user data created while quick enrolled in this course will be deleted. Proceed?";
   var confirmQuickEnrollMsg = "You will be given the role: Instructor. Proceed?";
   var inNewWindow = false;
   var theCourseMenu;
 </script>
 
  <script type="text/javascript">globalNavigation.init(); Event.observe(window, 'resize', globalNavigation.onResize);</script>
  <script type="text/javascript">
    page.bundle.addKey('globalnav.menu.expand','Expand\x20Global\x20Nav');
    page.bundle.addKey('globalnav.menu.collapse','Collapse\x20Global\x20Nav');
  </script>
  
  <script type="text/javascript">
    page.bundle.addKey('quick_links.link.title','Navigate\x20to\x20element\x20\x7B1\x7D\x20of\x20type\x20\x7B2\x7D\x20in\x20\x7B0\x7D\x20frame');
    page.bundle.addKey('quick_links.lightbox_title','Quick\x20Links');
    page.bundle.addKey('quick_links.link_title','Open\x20Quick\x20Links');
    page.bundle.addKey('quick_links.hotkey.shift','Shift');
    page.bundle.addKey('quick_links.hotkey.control','Ctrl');
    page.bundle.addKey('quick_links.hotkey.alt','Alt');
    page.bundle.addKey('quick_links.hotkey.combination_divider','\x2B');
  </script>
  
  <script type="text/javascript">quickLinks.initialize( [ '' ] );</script>
  <script type="text/javascript">
            globalNavMenu.init( true );
          </script>
        
  <script type="text/javascript"> social.Profile.MY_PROFILE_TOOL_ID='BB-CORE_____myProfile'; social.Profile.MY_PROFILE_TOOL_URI='/webapps/bb-social-learning-bb_bb60/execute/mybb?cmd=display&toolId=BB-CORE_____myProfile&location='; </script>
 
   <script type="text/javascript">
   FastInit.addOnLoad( function()
   {
            if ( window.DWREngine )
       {
        try {DWREngine.beginBatch();} catch(ignore) {}
       } 
                page.decoratePageBanner();
                                                             page.ContextMenu.hideMenuDiv('8b697b424ac74a7994c673ffd6be2f77');
                                                             new page.PageHelpToggler(true, 'Help is On: Click to hide page help.', 'Help is Off: Click to show page help.', false );
                                                             breadcrumbs.rightMostNavItem = 'content';
                                                             breadcrumbs.rightMostParentURL = '/webapps/blackboard/content/listContent.jsp?course_id=_115426_1&content_id=_1601642_1&mode=reset';
                                                             new page.PageMenuToggler(true,'courseMenuToggle_115426_1', true);
                                                             courseMenu.nonceKey = 'blackboard.platform.security.NonceUtil.nonce.ajax';
                                                             courseMenu.nonceValue = 'e51ed1ee-def7-4bc9-8b7e-d0be3351f303';
                                                             new page.PaletteController('courseMenuPalette', 'courseMenu_link', false, false);
                                                             theCourseMenu = new courseMenu.CourseMenu('/webapps/blackboard/execute/doCourseMenuAction', '/webapps/blackboard/execute/getCourseMenuContextMenu');
                                                             welcomeOverlay.initOverlay();
                                                             tool_service.init ('300000', 'Suppress-Session-Timestamp-Update' );
                                                             if (typeof(initEditors) == 'function') { initEditors(); }; 
                                                             if (window['org'] && window['org']['owasp']) { org.owasp.esapi.ESAPI.initialize(); }; 
                                                             quickLinks.createHelper();
                                                                    window.profileAccess = new ProfileAccess( '/webapps/cloud-profiles/', 'https://api.cloud.bb/v1/sessions/redirectWithToken', 'https://ui.cloud.bb/profiles/me/edit?sid=31fcd11a-04d4-4557-825c-ba350435fc84&source=learn', false, 'blackboard.platform.security.NonceUtil.nonce.ajax', 'e51ed1ee-def7-4bc9-8b7e-d0be3351f303' );
                                if ( window.DWREngine )
       {
         try {DWREngine.endBatch();} catch(ignore) {}
       }
                          BrowserSpecific.registerListeners();
                setEmbedHeightOnLoad();
               });
   </script>
       


</body></html>