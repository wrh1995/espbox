<html lang="en">
<head>
<meta charset="utf-8">
<meta http-equiv="X-UA-Compatible" content="IE=edge">
<meta name="viewport" content="width=device-width, initial-scale=1">
<style>
$INCLUDE[css.inc]$
</style>
<title>$PAGE_TITLE$</title> </head>
<body>
<div class="container"><table class="nav">
<tr width=100%>
	<td class="$MENU_HOME$"><a href="http://$WEB_ADDRESS$/HOME">Home</a></td>
	<td class="$MENU_SYSTEM$"><a href="http://$WEB_ADDRESS$/CONFIGSYS">System</a></td>
	<td class="$MENU_AP$"><a href="http://$WEB_ADDRESS$/CONFIGAP">Access Point</a></td>
	<td class="$MENU_STA$"><a href="http://$WEB_ADDRESS$/CONFIGSTA">Station</a></td>
	<td class="$MENU_SETTINGS$"><a href="http://$WEB_ADDRESS$/SETTINGS">Extra Settings</a></td>
	<td class="$MENU_SPIFF$"><a href="http://$WEB_ADDRESS$/SPIFFS">SPIFFS</a></td>
	<td class="$MENU_SDFS$"><a href="http://$WEB_ADDRESS$/SDFS">SDFS</a></td>
	<td width=100%>&nbsp;</td>
	<td class="$MENU_ADMIN$"><a href="/PASSWORD" style="$DISCONNECT_VISIBILITY$">$LOGIN_ID$</a></td>
	<td style="padding:0px;"><a href="/LOGIN?DISCONNECT=YES"><div class="btnroundimg" style="$DISCONNECT_VISIBILITY$"><svg width="30" height="30" viewBox="0 0 40 40">
	<circle style="fill:white"  cx="20"  cy="20"  r="20"/>
	<circle style="fill:white;stroke:black;stroke-width:4" cx="20" cy="15" r="10"/>
    <rect  style="fill:black;stroke-width:4;stroke:black" width="20" height="15" x="10" y="17" />
    <circle style="fill:white" cx="20" cy="22" r="2.5"/>
    <polygon points="20,23 16,30 24,30" style="fill:white"/></svg></div></a></td>
	<td>FW:  V$FW_VER$</td>
</tr>
</table>
