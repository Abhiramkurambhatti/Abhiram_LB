import java.awt.*;
import java.awt.event.*;

public class AWT_Calculator
{
	// charastics declaration 
	Frame mainFrame;
	Label headerLabel;
	Label statusLabel;
	Panel controlPanel;


	public AWT_Calculator()			//constructor 
	{

		mainFrame = new Frame("MATHEMATICAL CALCULATOR");
		mainFrame.setSize(400,400);
		mainFrame.setLayout(new GridLayout(3, 1));
		mainFrame.addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent windowEvent)
			{
				System.exit(0);
			}
		});
		headerLabel = new Label();
		headerLabel.setAlignment(Label.CENTER);

		statusLabel = new Label();
		headerLabel.setAlignment(Label.CENTER);

		statusLabel.setSize(300, 100);

		controlPanel = new Panel();
		controlPanel.setLayout(new FlowLayout());

		mainFrame.add(headerLabel);
		mainFrame.add(controlPanel);
		mainFrame.add(statusLabel);
		mainFrame.setVisible(true);

	}
		public static void main(String[] args) 
		{
			AWT_Calculator obj = new AWT_Calculator();
			obj.Display();

		}

		private void Display()
		{
			headerLabel.setText("Select the mathematical opertion which do you perform ?");

			Button Add = new Button("Addition");
			Button Sub = new Button("Substration");
			Button Mul = new Button("Multiplication");
			Button Div = new Button("Division");


			Add.setActionCommand("Addition");
			Sub.setActionCommand("Substration");
			Mul.setActionCommand("Multiplication");
			Div.setActionCommand("Division");

		
			/*Add.addActionListener(new MyListener());
			Sub.addActionListener(new MyListener());
			Mul.addActionListener(new MyListener());
			Div.addActionListener(new MyListener());*/
        
        	controlPanel.add(Add);
        	controlPanel.add(Sub);
        	controlPanel.add(Mul);
        	controlPanel.add(Div);

        	mainFrame.setVisible(true);


		}

}