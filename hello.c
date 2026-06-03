\documentclass{article}
\pagestyle{empty}
\usepackage{amsmath, amssymb,amsfonts}
\parindent 0px

	\title{MY FIRST \LaTeX{} DOCUMENT}
	\author{PHILIP THEURI}
	\date{\today}
	
	\begin{document}
	
	\maketitle
	
	This is my first document created offline using \LaTeX{}.
	
	\subsection{\underline{Objectives}}
	\begin{enumerate}
	 \item To get a better understanding of what \LaTeX is.
	\item be able to form and write documents using \LaTeX
	\item Form and edit documents. also learn the basics of using \LaTeX
	\end{enumerate}
	\section{\underline{INTRODUCTION}}
	
	\LaTeX{} is used for creating professional reports, assignments, books and research paper
	
	I am learning \LaTeX{} offline using TeXstudio and MiKTeX.
	
	
	(the added section of parident is to forbid the computer from indenting my work and making it look shoddy. ie; to stop making new paragraphs unless i authorize it)
	
	you can use the \textbf{backslash textbf to make your words bold}, \textit{backslash textit to make your words Italic}
	\section{\underline{\LaTeX\ LEARNING}}
	
	
	\subsection{superscripts}
	$$2x^3$$
	
	$$2x^{34}$$
	$$2x^{3x+4}$$
	$$2x^{3x^4+5}$$
	
	\subsection{Subscripts}
	
	$$x_1$$
	$$x_{12}$$
	$$x_{1_2}$$
	$$x_{1_{2_3}}$$
	$$a_0,a_1,a_2,\ldots,a_{100}$$
	$$\Pi$$
	$$\pi$$
	$$\alpha$$
	
	$$A=\pi ^2$$
	
	\subsection{Trig  functions}
	$$y=\sin x(correct)$$
	$$y=\cos x$$
	
	$$y=\csc \theta(correct)$$
	$$y=\sin^{-1} x$$
	$$y=\arcsin x$$
	\subsection{Logarithmic functions}
	$$y=\log x$$(remember to) put the backslash always
	$$y=\log_5 x$$
	$$y=\ln x$$
   $$y=\csc \theta$$
   $$y=logx$$ (-incorrect)
	$$y=\log x$$ (-correct)
	
	\subsection{Roots}
	
	$$\sqrt{2}$$
	$$\sqrt[3]{2}$$
	$$\sqrt{x^2+y^2}$$
	$$\sqrt{1+\sqrt{x}}$$
	
	\subsection{Fractions}
	
	$$\frac{5}{7}$$
	About $\displaystyle \frac{2}{3}$ of the glass is full.\\[16pt]
	About $\frac{2}{3}$ of the glass is full.\\[6pt]
   About $\dfrac{2}{3}$ is full.
   
   $$\frac{\sqrt{x+1}}{\sqrt{x+2}}$$
  
  $$\frac{1}{   (1+\frac{11}{x})    }$$
  
  \section{\underline{CALCULUS.}}
  \subsection{brackets}
  \subsection{curved brackets}
  The distributive property states that $a(b+c)=ab+ac$, for all $a, b, c \in \mathbb{R}$.\\
  (Using the mathmode to display equations. For example i want to display a system of two equations i can use:\\
  \begin{align}
  	2x + y &= 5\\
  	x -y &= 1
  	\end{align}\\
  	
  	This merely creates two separate inline equations. You can't align the equal sign,number the equations, or treat them as one mathematical block hence you have to use the amsmath in this case.
  	the(dollar)symbol is used to line up the equal signs.\\[0.2pt]
  	
  		Use the single dollar sign for short inline equations eg;The area is $A=\pi r^2$\\[1pt] 		
  		you can also use it for different cases as align, gather, cases, matrix, etc.just by using amsmath
  		for professionalism you can use \[x^2 + y^2 = z^2\] to display inline math mode rather than the previous format of using $$x^2 + y^2 = z^2$$-they have got the same output but tidying up the work requires the square brackets)\\[6pt]
  		The equivalence class of $a$ is $[a]$
  		
  		\subsection{curly brackets}
  		The curly brackets act as a reserved word for latex hence it won't print out as int he case below:
  		
  		"The section $a$ is defined to be ${1, 2, 3}$."
  		you need to use a backslash before and after the curly brackets just as we a seen earlier in a similar case.\\
  		
  		Now using the slash back;"The section $a$ is defined to be $\{1, 2, 3\}$."
  		
  		\subsection{The dollar symbol}
  		It is also a reserved symbol used to display math mode hence it can't be printed out normally if you want to print it out.
  		
  		Eg."the movie ticket costs $\$11.50$
  		
  		$$2(\frac{1}{x^2-1})$$ \ldots this will print out a message not well covered brackets as we would require, you can use a single \$ or use $$2\left(\frac{1}{x^2-1}\right)$$ 	The backslash left before the first curly bracket and back slash right before the last curly bracket will now enable the numbers to be well indented
  		
  		$$2\left\{\frac{1}{x^2-1}\right\}$$
  		
  		$$2\left[\frac{1}{x^2-1}\right]$$
  		$$2\left[\frac{1}{x^2-1}\right]$$
  		$$2\left(   \frac{1}{x^2-1}       \right)      $$
  		
  		for vectors using angular brackets
  		$$2\left \langle \frac{1}{x^2-1}\right \rangle$$
  		
  		for absolute values;
  		$$2\left |\frac{1}{x^2-1}\right| $$
  		There may be cases where you could need to open only one curly bracket especially in calculus
  		
  		$$\left.\frac{dy}{dx}\right |_{x=1}$$ \ldots
  		
  		 the period takes care of the other absolute bar. If you include a backslash left then you also need a backslash right for the same and that's where the period comes in.
  		
  		 you could also have different brackets being displayed in the same equation.
  		 $$\left(\frac{1}{1+\left(\frac{1}{1+x}\right)}\right)$$
  		 
  		 
  		 
  		 
  		 
  		 
  		 \subsection{TABLES}
  		 if i want my elements in the table to be centered then i will use $$\left(cccc\right)$$ and if i want them to appear on the right i will use $$\left(lll\right)$$. No of letters you enter represents the no of columns that you wanna add.\\
  		 
  		 You can also mix the letters to suit your data
  		 This is often useful because text usually looks best left-aligned, while numbers often look better centered or right-aligned.
  		 Use the backslash hline to draw borders in table\\[2pt]
  		 
  		\begin{table}[ht]
  			\centering
  	\def\arraystretch{1.5}
  		 \begin{tabular}{|c||c|c|c|c|c|}
  		 \hline
  		 \(x\) & 1 	& 2 & 3 & 4 & 5\\ \hline
  		 $f(x)$ & 10 & 11 & 12 & 13 & 14\\ \hline
  		 \end{tabular}
  		 
  		 \vspace{30pt}
  		 
  		{\renewcommand{\arraystretch}{1.8}
  		  \begin{tabular}{|c||c|c|c|c|c|}
  		 	\hline
  		 	$x$ & 1 & 2 & 3 & 4 & 5\\ \hline
  		 	$f(x)$ & $2\cdot \dfrac{1}{x^2} $ & 11 & 12 & 13 & 14\\ \hline
  		 \end{tabular}}
  		 \end{table}
  		 
  		 \vspace{30pt}
  		 
  		 \def\arraystretch{1.8}
  		 \begin{table}
  		 \centering
  		 \begin{tabular}{|c||c|c|c|c|c|}
  		 	\hline
  		 	
  		 	$x$ & 1 & 2 & 3 & 4 & 5\\ \hline
  		 	$f(x)$ & $2\displaystyle\left(\frac{1}{x^2}\right)$ & 11 & 12 & 13 & 14\\ \hline
  		 	\end{tabular}
  		 	\end{table}
  		 The single dollar single dollar sign worked out because we wanted inline math mode and not display math mode. the display math mode covers a whole line .the best formulas for both inline math mode and display math mode are; 
  		 
  		 Inline math: \(\frac{3}{7}  \)
  		 
  		 Display math: \[x^2 +y^2 = z  \]The curved brackets and curly brackets are used for inline and display math mode respectively.
  		 You must tell your compiler where you want your table to be lest it changes and places the table where it seems best using the backslash table H as illustrated in the code in line  \(\left(155\right)\) and end table in line \(\left(166\right)\). 
  		 
  		 This function tells the computer to place the table in a specific place close to where you placed your function and where there is enough space for a table to appear.
  		 
  		 
  		 
	\end{document}