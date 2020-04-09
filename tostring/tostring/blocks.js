Blockly.Blocks['number-to-str'] = {
  init: function() {
    this.appendValueInput("number-to-str")
        .setCheck("Number")
        .appendField("number to string");
    this.setOutput(true, "String");
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};
