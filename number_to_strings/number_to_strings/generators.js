Blockly.JavaScript['number-to-str'] = function(block) {
  var number_to_str = Blockly.JavaScript.valueToCode(block, 'number-to-str', Blockly.JavaScript.ORDER_ATOMIC);
  return ['DEV_IO.number_to_strings().numbertostring('+ number_to_str +')', Blockly.JavaScript.ORDER_ATOMIC]
}
