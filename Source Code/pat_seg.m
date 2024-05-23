function varargout = pat_seg(varargin)
% PAT_SEG MATLAB code for pat_seg.fig
%      PAT_SEG, by itself, creates a new PAT_SEG or raises the existing
%      singleton*.
%
%      H = PAT_SEG returns the handle to a new PAT_SEG or the handle to
%      the existing singleton*.
%
%      PAT_SEG('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in PAT_SEG.M with the given input arguments.
%
%      PAT_SEG('Property','Value',...) creates a new PAT_SEG or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before pat_seg_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to pat_seg_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help pat_seg

% Last Modified by GUIDE v2.5 01-Apr-2015 11:41:26

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @pat_seg_OpeningFcn, ...
                   'gui_OutputFcn',  @pat_seg_OutputFcn, ...
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


% --- Executes just before pat_seg is made visible.
function pat_seg_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to pat_seg (see VARARGIN)

% Choose default command line output for pat_seg
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes pat_seg wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = pat_seg_OutputFcn(hObject, eventdata, handles) 
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
global Filt
global I1 I2 I3 I4
Img = Filt;
I1 = Img(1:size(Img,1)/2,1:size(Img,2)/2,:);
J1 = I1(1:size(I1,1)/2,1:size(I1,2)/2,:);
J2 = I1(size(I1,1)/2+1:size(I1,1),1:size(I1,2)/2,:);
J3 = I1(1:size(I1,1)/2,size(I1,2)/2+1:size(I1,2),:);
J4 = I1(size(I1,1)/2+1:size(I1,1),size(I1,2)/2+1:size(I1,2),:);
axes(handles.axes1);
imshow(I1);title('Patch 1')
pause(3)
% -----------------------------------------------------------------
I2 = Img(size(Img,1)/2+1:size(Img,1),1:size(Img,2)/2,:);
K1 = I2(1:size(I2,1)/2,1:size(I2,2)/2,:);
K2 = I2(size(I2,1)/2+1:size(I2,1),1:size(I2,2)/2,:);
K3 = I2(1:size(I2,1)/2,size(I2,2)/2+1:size(I2,2),:);
K4 = I2(size(I2,1)/2+1:size(I2,1),size(I2,2)/2+1:size(I2,2),:);
% J2 = I2(size(I2,1)/2+1:size(I2,1),1:size(I2,2)/2,:);
axes(handles.axes1);
imshow(I2);title('Patch 2')
pause(3)

% -----------------------------------------------------------------
I3=Img(1:size(Img,1)/2,size(Img,2)/2+1:size(Img,2),:);
L1 = I3(1:size(I3,1)/2,1:size(I3,2)/2,:);
L2 = I3(size(I3,1)/2+1:size(I3,1),1:size(I3,2)/2,:);
L3 = I3(1:size(I3,1)/2,size(I3,2)/2+1:size(I3,2),:);
L4 = I3(size(I3,1)/2+1:size(I3,1),size(I3,2)/2+1:size(I3,2),:);
axes(handles.axes2);
imshow(I3);title('Patch 3')
pause(3)

% J3 = I3(1:size(I3,1)/2,size(I3,2)/2+1:size(I3,2),:);
% -----------------------------------------------------------------
I4 = Img(size(Img,1)/2+1:size(Img,1),size(Img,2)/2+1:size(Img,2),:);
M1 = I4(1:size(I4,1)/2,1:size(I4,2)/2,:);
M2 = I4(size(I4,1)/2+1:size(I4,1),1:size(I4,2)/2,:);
M3 = I4(1:size(I4,1)/2,size(I4,2)/2+1:size(I4,2),:);
M4 = I4(size(I4,1)/2+1:size(I4,1),size(I4,2)/2+1:size(I4,2),:);
axes(handles.axes2);
imshow(I4);title('Patch 4')

% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global I1 I2 I3 I4 I

LBPimg1 = LBP((I1), [2,3]); 
axes(handles.axes1)
imshow(LBPimg1);
LBPfeature1=imhist(LBPimg1);
LBPfeature1 = LBPfeature1';
set(handles.uitable1,'data',LBPfeature1')

% ----------------------------------------------------------
LBPimg2 = LBP((I2), [2,3]); 
axes(handles.axes1)
imshow(LBPimg2);
LBPfeature2=imhist(LBPimg2);
LBPfeature2 = LBPfeature2';
set(handles.uitable1,'data',LBPfeature2')
% -----------------------------------------------------------
LBPimg3 = LBP((I3), [2,3]); 
axes(handles.axes2)
imshow(LBPimg3);
LBPfeature3 = imhist(LBPimg3);
LBPfeature3 = LBPfeature3';
set(handles.uitable1,'data',LBPfeature3')
% --------------------------------------------------------------
LBPimg4 = LBP((I4), [2,3]); 
axes(handles.axes2)
imshow(LBPimg4);title('LBP Feature');
LBPfeature4 = imhist(LBPimg4);
LBPfeature4 = LBPfeature4';
set(handles.uitable1,'data',LBPfeature4')

% -------------------------------------------------------------
En1 = entropy(I1)
En2 = entropy(I2)
En3 = entropy(I3)
En4 = entropy(I4)
[m n c] = size(I);
if c == 3
C1 = bwarea(rgb2gray(I1))
C2 = bwarea(rgb2gray(I2))
C3 = bwarea(rgb2gray(I3))
C4 = bwarea(rgb2gray(I4))
CN1 = max(contrast(rgb2gray(I1)))
CN2 = max(contrast(rgb2gray(I2)))
CN3 = max(contrast(rgb2gray(I3)))
CN4 = max(contrast(rgb2gray(I4)))
else
C1 = bwarea(I1)
C2 = bwarea(I2)
C3 = bwarea(I3)
C4 = bwarea(I4)
CN1 = max(contrast(I1))
CN2 = max(contrast(I2))
CN3 = max(contrast(I3))
CN4 = max(contrast(I4))
end
Testfea = [[LBPfeature1 En1 C1 CN1]; [LBPfeature2 En2 C2 CN2]; [LBPfeature3 En3 C3 CN3]; [LBPfeature4 En4 C4 CN4]];
set(handles.uitable1,'data',Testfea);
Testfea = [LBPfeature1 LBPfeature2 LBPfeature3 LBPfeature4 En1 En2 En3 En4 C1 C2 C3 C4 CN1 CN2 CN3 CN4];
save Testfea Testfea;



% --- Executes on button press in pushbutton3.
function pushbutton3_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
classify
