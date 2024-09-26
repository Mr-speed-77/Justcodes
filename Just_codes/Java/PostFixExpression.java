import java.util.Stack;

class PostfixExp{
    public static int posfixexpress(String expression){
        
        Stack<Integer> stack = new Stack<>();
        
        for(int i =0; i<expression.length();i++){
            
            char ch = expression.charAt(i);
            
            if(Character.isDigit(ch)){
                stack.push(ch - '0');
            }
            
            else{
                
                int opr1 = stack.pop();
                int opr2 = stack.pop();
                
                switch(ch){
                    
                    case '+':
                        stack.push(opr2 + opr1);
                        break;
                        
                    case '-':
                        stack.push(opr2 - opr1);
                        break;
                    case '*':
                        stack.push(opr2 * opr1);
                        break;
                    case '/':
                        stack.push(opr2 / opr1);
                        break;
                }
        }
        
    }
    return stack.pop();
}
}

class Main{
    public static void main(String[] args){
        
        String expression = "231*+9-";
        System.out.print("PostFix Evaluation: "+PostfixExp.posfixexpress(expression));
    }
    
    
}