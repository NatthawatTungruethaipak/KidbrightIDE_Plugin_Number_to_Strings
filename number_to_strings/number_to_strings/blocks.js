Blockly.Blocks['number-to-str'] = {
  init: function() {
    this.appendValueInput("number-to-str")
        .setCheck("Number")
        .appendField(Blockly.Msg.tostring_TEXT_TITLE);
    this.setOutput(true, "String");
    this.setColour(230);
 this.setTooltip(Blockly.Msg.tostring_TEXT_TOOLTIP);
 this.setHelpUrl(Blockly.Msg.tostring_TEXT_HELPURL);
  }
};
