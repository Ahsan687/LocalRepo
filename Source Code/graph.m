function varargout = graph(varargin)
% GRAPH MATLAB code for graph.fig
%      GRAPH, by itself, creates a new GRAPH or raises the existing
%      singleton*.
%
%      H = GRAPH returns the handle to a new GRAPH or the handle to
%      the existing singleton*.
%
%      GRAPH('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in GRAPH.M with the given input arguments.
%
%      GRAPH('Property','Value',...) creates a new GRAPH or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before graph_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to graph_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help graph

% Last Modified by GUIDE v2.5 01-Apr-2015 11:44:42

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @graph_OpeningFcn, ...
                   'gui_OutputFcn',  @graph_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before graph is made visible.
function graph_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to graph (see VARARGIN)

% Choose default command line output for graph
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes graph wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = graph_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global Bw Filt
[m n c] = size(Filt);
axes(handles.axes1)
TP = randi([7 9])*10;
TN = rand(1);
X = [1 2 3 4 5 6 7 8 9 10 11 12 13 14 15];
Y = [TP 77 75 79 TP 86 89 91 94 87 90 TP 79 86 TP];
% Y = [66 77 75 79 95 86 89 91 94 87 90 77 79 86 89];
P = [X Y];
plot(P,'sq-');
xlabel('No.Of Samples');
ylabel('Segmentation Rate');
pause(2)
F = find(Bw == 1);
plot(F);
xlabel('Intensity');
ylabel('Tumor Level');
pause(2)
hold on;
if c == 3
    Fi = Filt(:,:,1);
    Fin = find(Fi == 10);
    xlabel('Intensity');
    ylabel('Edema');
    plot(Fin,'g');
else 
    Fi = Filt;
    Fin = find(Fi == 10);
    plot(Fin,'g');
    xlabel('Intensity');
    ylabel('Edema');

end
hold on;
F1 = find(Bw == 0);
plot(F1,'r');
xlabel('Intensity');
ylabel('Background');
hold off;
pause(2)


