<?xml version='1.0' encoding='ISO-8859-1' standalone='yes' ?>
<tagfile>
  <compound kind="class">
    <name>Array</name>
    <filename>classArray.html</filename>
    <templarg>T</templarg>
    <member kind="function">
      <type></type>
      <name>Array</name>
      <anchorfile>classArray.html</anchorfile>
      <anchor>858c11d8580f0dbd55ae3ce7b2373c7f</anchor>
      <arglist>(long nbOfRows, long nbOfColumns)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setSize</name>
      <anchorfile>classArray.html</anchorfile>
      <anchor>09210c530a317d5c6d6f8006d2df55e6</anchor>
      <arglist>(long nbOfRows, long nbOfColumns)</arglist>
    </member>
    <member kind="function">
      <type>T</type>
      <name>operator()</name>
      <anchorfile>classArray.html</anchorfile>
      <anchor>0f2072faaac6dd6d5dfe27b80bb71b12</anchor>
      <arglist>(long row, long column) const</arglist>
    </member>
    <member kind="function">
      <type>T &amp;</type>
      <name>operator()</name>
      <anchorfile>classArray.html</anchorfile>
      <anchor>10bb4f5caa5b050f58fb4867eb45eb06</anchor>
      <arglist>(long row, long column)</arglist>
    </member>
    <member kind="function">
      <type>T &amp;</type>
      <name>operator[]</name>
      <anchorfile>classArray.html</anchorfile>
      <anchor>e5e7f655a73a01c40f36b62d27e33f7a</anchor>
      <arglist>(long position)</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>nbOfRows</name>
      <anchorfile>classArray.html</anchorfile>
      <anchor>d55af2bb256e18c4554faea8d8abce42</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>nbOfColumns</name>
      <anchorfile>classArray.html</anchorfile>
      <anchor>bf8d9f719e657139795c7804422c70fc</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>copyAndPrependColumn</name>
      <anchorfile>classArray.html</anchorfile>
      <anchor>32ea3e37fa1d0559201c40a4e006c0d9</anchor>
      <arglist>(Array &amp;source)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>copySubset</name>
      <anchorfile>classArray.html</anchorfile>
      <anchor>19bcb349c3fccf22dfdbdf5076cb9a78</anchor>
      <arglist>(Array &amp;source, long lastColumnToCopy)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>copySubset</name>
      <anchorfile>classArray.html</anchorfile>
      <anchor>2c6b0b43b54141d99bf184a7bab00bb3</anchor>
      <arglist>(Array &amp;source, long firstColumnToCopy, long lastColumnToCopy, long startingColumn)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>fillWithZeros</name>
      <anchorfile>classArray.html</anchorfile>
      <anchor>5720d22bba044d2ad5d83ada79243b54</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>Array&lt; T &gt; &amp;</type>
      <name>operator=</name>
      <anchorfile>classArray.html</anchorfile>
      <anchor>89229b69e79a04295a9b24e208ee46fd</anchor>
      <arglist>(const Array&lt; T &gt; &amp;source)</arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>long</type>
      <name>nbColumns</name>
      <anchorfile>classArray.html</anchorfile>
      <anchor>0327789f5c397680a6ae8c72913465ee</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>long</type>
      <name>nbRows</name>
      <anchorfile>classArray.html</anchorfile>
      <anchor>1d10cb71d33f6278f2ebad5b063f521a</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>T *</type>
      <name>array</name>
      <anchorfile>classArray.html</anchorfile>
      <anchor>e2cc2a9a3218834ff71f023903e9fdbc</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>AutoSaveThread</name>
    <filename>classAutoSaveThread.html</filename>
    <member kind="function">
      <type></type>
      <name>AutoSaveThread</name>
      <anchorfile>classAutoSaveThread.html</anchorfile>
      <anchor>06a78aaa4eabf9d4450afe3fb5761761</anchor>
      <arglist>(Data &amp;d, KlustersDoc *doc, KURL saveTmpUrl)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>removeTmpFile</name>
      <anchorfile>classAutoSaveThread.html</anchorfile>
      <anchor>cba4bcfed57cdefe1ebceea71ad4f9a1</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>run</name>
      <anchorfile>classAutoSaveThread.html</anchorfile>
      <anchor>1cfb8fb6389b95950c8e5b49222cfbd0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>AutoSaveEvent *</type>
      <name>autoSaveEvent</name>
      <anchorfile>classAutoSaveThread.html</anchorfile>
      <anchor>34053fc7ca1b5c3d9b27ba77a1d5ad4f</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>AutoSaveEvent</name>
      <anchorfile>classAutoSaveThread.html</anchorfile>
      <anchor>547c5bc7a7bc5eff68c71bdbe66cfc82</anchor>
      <arglist></arglist>
    </member>
    <class kind="class">AutoSaveThread::AutoSaveEvent</class>
  </compound>
  <compound kind="class">
    <name>AutoSaveThread::AutoSaveEvent</name>
    <filename>classAutoSaveThread_1_1AutoSaveEvent.html</filename>
    <member kind="function">
      <type>bool</type>
      <name>isIOerror</name>
      <anchorfile>classAutoSaveThread_1_1AutoSaveEvent.html</anchorfile>
      <anchor>c26ad1840c2fe4494e0d3485f80d3c2b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setIOerror</name>
      <anchorfile>classAutoSaveThread_1_1AutoSaveEvent.html</anchorfile>
      <anchor>724e773216b60580dfa3aa4dabd02232</anchor>
      <arglist>(bool status)</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend AutoSaveEvent *</type>
      <name>AutoSaveThread::autoSaveEvent</name>
      <anchorfile>classAutoSaveThread_1_1AutoSaveEvent.html</anchorfile>
      <anchor>c8dd513769ef140930655d13fb7215bd</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>BaseFrame</name>
    <filename>classBaseFrame.html</filename>
    <member kind="typedef">
      <type>int</type>
      <name>Mode</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>2d7e24808016f5b91c7232ab9b8fd148</anchor>
      <arglist></arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>updateDrawing</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>a93e1824a7160bbae2933e64f4e8ba9b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>dockBeingClosed</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>b053dfe22801668fd82f1f5f34f32263</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>changeBackgroundColor</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>ebb3ce33f4a37c3eb2ee72474050fa37</anchor>
      <arglist>(QColor color)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>setMode</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>ed169686b843e124a5ac901ac735ccd3</anchor>
      <arglist>(BaseFrame::Mode selectedMode)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>parentDockBeingClosed</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>eb86348c3d22a2271be7a269aa891d72</anchor>
      <arglist>(QWidget *viewWidget)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>BaseFrame</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>042d27fb77a59e37912653348f9883f3</anchor>
      <arglist>(int Xborder, int Yborder, QWidget *parent=0, const char *name=0, QColor backgroundColor=Qt::black, int minSize=500, int maxSize=4000, int windowTopLeft=-500, int windowBottomRight=1001, int border=0)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>willBeKilled</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>ae11d84b7ca8f1867c8115388c35b5f2</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setBorders</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>8293d6698f18deef9410ea9805c06112</anchor>
      <arglist>(int x, int y)</arglist>
    </member>
    <member kind="enumeration">
      <name>DrawContentsMode</name>
      <anchor>21ad37725f0a1d7cc7e391961db82312</anchor>
      <arglist></arglist>
    </member>
    <member kind="function" protection="protected" virtualness="pure">
      <type>virtual void</type>
      <name>drawContents</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>2b5d68358bfcc4ecdd0c3e6a3da82ac6</anchor>
      <arglist>(QPainter *p)=0</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>resizeEvent</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>327a39135fa2ee76c5366c6277310c63</anchor>
      <arglist>(QResizeEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>mousePressEvent</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>154d190f81125058199ed6770c5152b6</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>mouseReleaseEvent</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>7b6086bb37e3ad0c56a8b8eb166b3d9e</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>mouseMoveEvent</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>e0bc9fac62c249065e52f3d393e84cf7</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>mouseDoubleClickEvent</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>61ed8b87d4046aa64b74855f200b4e1b</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>QPoint</type>
      <name>viewportToWorld</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>1d2cf80aab1a6867fd30f61cb53f4dc5</anchor>
      <arglist>(int vx, int vy)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>QPoint</type>
      <name>viewportToWorld</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>bc359186819f10c30a5ae505d6f1920d</anchor>
      <arglist>(const QPoint &amp;point)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>QPoint</type>
      <name>worldToViewport</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>2b50027b15770de7f37b59917152c69b</anchor>
      <arglist>(int wx, int wy)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>QPoint</type>
      <name>worldToViewport</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>2b63b89729e706626167a7dc7020a3aa</anchor>
      <arglist>(const QPoint &amp;point)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>long</type>
      <name>worldToViewportAbscissa</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>282acf96cb3e2cf1889da54236d1623e</anchor>
      <arglist>(long wx)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>long</type>
      <name>worldToViewportOrdinate</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>a66187fbc3b1a9978f7604a17a04071b</anchor>
      <arglist>(long wy)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>drawRubber</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>c1183e155932c92026c2e8e9553905ea</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>long</type>
      <name>worldToViewportWidth</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>f7ebfc8274c67f570b5051977cefe9b2</anchor>
      <arglist>(long width)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>long</type>
      <name>worldToViewportHeight</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>af257590f63f103f946f599add211cd5</anchor>
      <arglist>(long height)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>long</type>
      <name>viewportToWorldWidth</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>d637eb7a91439ee66bacb4efd6445572</anchor>
      <arglist>(long width)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>long</type>
      <name>viewportToWorldHeight</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>8a56e7d97d02b9906e63526db945ebed</anchor>
      <arglist>(long height)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>drawRubberBand</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>a1c10be0c7c3b6c76c3dc3156d267e70</anchor>
      <arglist>(bool draw, bool vertical=false)</arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const int</type>
      <name>MIN_SIZE</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>90d22b4bd74df6e61a7824951000e5e8</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const int</type>
      <name>MAX_SIZE</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>992b1cb3328945272b015bd3f6d1f7cb</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const int</type>
      <name>BORDER</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>5b689b1ba4f8873b318778079c6786c4</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const int</type>
      <name>WINDOW_TOP_LEFT</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>8dac5dc5940d0ba950367a6209baf1d9</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>const int</type>
      <name>WINDOW_BOTTOM_RIGHT</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>95b3b1ec4173a584b33d403909f25d94</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>QSize</type>
      <name>oldSize</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>a470ad78b538adc53ffeabee229c4c9e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>QRect</type>
      <name>viewport</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>6b8a18a51e085c5d68e1812ea7b603ea</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>ZoomWindow</type>
      <name>window</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>5b9fe7f64b7737c193c4427a5ab8c271</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>QPoint</type>
      <name>firstClick</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>2aa532f84a5f6f97c2fe4b51c0a51ce1</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>bool</type>
      <name>isDoubleClick</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>c9c373aa1730932c563bc99779dc600f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>QRect *</type>
      <name>rubber</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>3af90d61c65b68208c68adb5dd895549</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>DrawContentsMode</type>
      <name>drawContentsMode</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>dda2f5f4c168321c208349db2e7b5ed9</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>Mode</type>
      <name>mode</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>3bac911fa71469ffae97a2cc1d7c5ac8</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>QCursor</type>
      <name>zoomCursor</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>a6054da9012b308d2c041ec63df5b5cd</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>int</type>
      <name>Xborder</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>a2261962eadacd199a841dc92d05e540</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>int</type>
      <name>Yborder</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>2b9fdad548fa78d7970f729483a6f519</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>bool</type>
      <name>isRubberBandToBeDrawn</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>fc0aaeb9c105479f46868dc9d4b01a6e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>bool</type>
      <name>wholeHeightRectangle</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>b96c798f9995cdf917d56ebda2fdfd3e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>QColor</type>
      <name>colorLegend</name>
      <anchorfile>classBaseFrame.html</anchorfile>
      <anchor>46ae781de9307957e8a1eb0a5f5a64c6</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ChannelColors</name>
    <filename>classChannelColors.html</filename>
    <member kind="function">
      <type></type>
      <name>ChannelColors</name>
      <anchorfile>classChannelColors.html</anchorfile>
      <anchor>c142bb5472b62b7607fd27303a2d64a8</anchor>
      <arglist>(const ChannelColors &amp;channelcolors)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>removeAll</name>
      <anchorfile>classChannelColors.html</anchorfile>
      <anchor>86a47dbfefe2fca4843dfa8e2ec36227</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual QColor</type>
      <name>color</name>
      <anchorfile>classChannelColors.html</anchorfile>
      <anchor>b73b95f8d1942d66955e3223812aba9e</anchor>
      <arglist>(int identifier)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual QColor</type>
      <name>groupColor</name>
      <anchorfile>classChannelColors.html</anchorfile>
      <anchor>5a422fe7502f2caa5b7f3b86fb0f344f</anchor>
      <arglist>(int identifier)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual QColor</type>
      <name>spikeGroupColor</name>
      <anchorfile>classChannelColors.html</anchorfile>
      <anchor>85750e13a17701e6642b1392ed429922</anchor>
      <arglist>(int identifier)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setColor</name>
      <anchorfile>classChannelColors.html</anchorfile>
      <anchor>c6a9c6a2ea3a703359be3cb5d9d5fa30</anchor>
      <arglist>(int identifier, QColor color)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setGroupColor</name>
      <anchorfile>classChannelColors.html</anchorfile>
      <anchor>7e122fa83493c6fd2d52fa0a6d95c916</anchor>
      <arglist>(int identifier, QColor color)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setSpikeGroupColor</name>
      <anchorfile>classChannelColors.html</anchorfile>
      <anchor>69a7506b70f34091e2cc4edb77a28ad3</anchor>
      <arglist>(int identifier, QColor color)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual int</type>
      <name>channelId</name>
      <anchorfile>classChannelColors.html</anchorfile>
      <anchor>ba0f430acbf54dceb0775ef29c3020ab</anchor>
      <arglist>(int index)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual bool</type>
      <name>contains</name>
      <anchorfile>classChannelColors.html</anchorfile>
      <anchor>db17548d7e2b46badc507f846ef500fc</anchor>
      <arglist>(int channelId)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual uint</type>
      <name>numberOfChannels</name>
      <anchorfile>classChannelColors.html</anchorfile>
      <anchor>2f4938f8a7ffa2aa694527b0c56ce53e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual uint</type>
      <name>append</name>
      <anchorfile>classChannelColors.html</anchorfile>
      <anchor>a459f20b15c5877ea2c68a48a4cfdb53</anchor>
      <arglist>(int channelId, QColor color, QColor groupColor, QColor spikeGroupColor)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual uint</type>
      <name>append</name>
      <anchorfile>classChannelColors.html</anchorfile>
      <anchor>46676d65b4f172c3809ee0378f9379bf</anchor>
      <arglist>(int channelId, QColor color)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>insert</name>
      <anchorfile>classChannelColors.html</anchorfile>
      <anchor>e8f4ba8681ff7116945b9ef0cf8a32d5</anchor>
      <arglist>(int channelId, int index, QColor color, QColor groupColor, QColor spikeGroupColor)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual bool</type>
      <name>remove</name>
      <anchorfile>classChannelColors.html</anchorfile>
      <anchor>965f3c495331288d7af32b6a8a8d25e2</anchor>
      <arglist>(int identifier)</arglist>
    </member>
    <class kind="struct">ChannelColors::ChannelColor</class>
  </compound>
  <compound kind="class">
    <name>ChannelList</name>
    <filename>classChannelList.html</filename>
    <member kind="signal">
      <type>void</type>
      <name>positionsChanged</name>
      <anchorfile>classChannelList.html</anchorfile>
      <anchor>ad85d46a4a8020b729b1926478a741f3</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>ChannelList</name>
      <anchorfile>classChannelList.html</anchorfile>
      <anchor>b4392bb95f466df41f3530032b26ae28</anchor>
      <arglist>(QWidget *parent=0, const char *name=0, WFlags f=0)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>dragEnterEvent</name>
      <anchorfile>classChannelList.html</anchorfile>
      <anchor>c10babfa05ef3cddcfec5fb012da2efa</anchor>
      <arglist>(QDragEnterEvent *event)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>dropEvent</name>
      <anchorfile>classChannelList.html</anchorfile>
      <anchor>e37c33ef53c91bbedae3a0b7b9aa3c57</anchor>
      <arglist>(QDropEvent *event)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>mousePressEvent</name>
      <anchorfile>classChannelList.html</anchorfile>
      <anchor>3db7a0a27de8f8f15a3526f3a9c0fbba</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>mouseMoveEvent</name>
      <anchorfile>classChannelList.html</anchorfile>
      <anchor>269c24ed06a35446a9ade0c45e72dd54</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>contentsDragMoveEvent</name>
      <anchorfile>classChannelList.html</anchorfile>
      <anchor>5b1e9aaac149a8fc21407cab99080b35</anchor>
      <arglist>(QDragMoveEvent *event)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ClusterInformationDialog</name>
    <filename>classClusterInformationDialog.html</filename>
    <member kind="function">
      <type></type>
      <name>ClusterInformationDialog</name>
      <anchorfile>classClusterInformationDialog.html</anchorfile>
      <anchor>aec8e12d4d11104a9e417da1474658b3</anchor>
      <arglist>(QWidget *parent=0, const QString &amp;caption=&quot;Cluster information&quot;)</arglist>
    </member>
    <member kind="function">
      <type>const QString</type>
      <name>getStructure</name>
      <anchorfile>classClusterInformationDialog.html</anchorfile>
      <anchor>77b8f2811a6a31c0cb530e4e89c1ed15</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const QString</type>
      <name>getType</name>
      <anchorfile>classClusterInformationDialog.html</anchorfile>
      <anchor>0faeccc4339ded5492f487f4438e90a9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const QString</type>
      <name>getId</name>
      <anchorfile>classClusterInformationDialog.html</anchorfile>
      <anchor>6a0aaf362a83cfa934b1cfa4a0398c5e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const QString</type>
      <name>getQuality</name>
      <anchorfile>classClusterInformationDialog.html</anchorfile>
      <anchor>89cd821d6aeaa44fbb2fb0949e973a12</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const QString</type>
      <name>getNotes</name>
      <anchorfile>classClusterInformationDialog.html</anchorfile>
      <anchor>9d0ab7b55e7c845e2aede587290e90e1</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setStructure</name>
      <anchorfile>classClusterInformationDialog.html</anchorfile>
      <anchor>246fca2671d2252204ae80ebee721b68</anchor>
      <arglist>(QString pStructure)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setType</name>
      <anchorfile>classClusterInformationDialog.html</anchorfile>
      <anchor>aa4accdd97624199611602512915f9da</anchor>
      <arglist>(QString pType)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setId</name>
      <anchorfile>classClusterInformationDialog.html</anchorfile>
      <anchor>968647de24575e6646ff774f7337f426</anchor>
      <arglist>(QString pID)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setQuality</name>
      <anchorfile>classClusterInformationDialog.html</anchorfile>
      <anchor>d7d7aa2535fd9a50f736ad8131e3747a</anchor>
      <arglist>(QString pQuality)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setNotes</name>
      <anchorfile>classClusterInformationDialog.html</anchorfile>
      <anchor>6c4b577ea9b9df5f2dae17cb5326f61a</anchor>
      <arglist>(QString pNotes)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ClusterPalette</name>
    <filename>classClusterPalette.html</filename>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>changeColor</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>5ec01e26b788d3f2ef129f6578a429a1</anchor>
      <arglist>(QIconViewItem *item)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>moveClustersToNoise</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>64d302313408e7474e0903d7afcd9d90</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>moveClustersToArtefact</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>e63d7dffd4157185d31f8f7a70a12914</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>groupClusters</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>fd3737e3b81a50e49208999af0df21fa</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>updateClusters</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>4275cdc26dafafb880f132eb548eba8b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>singleChangeColor</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>a65cfb705a393124d623355722f8e2f3</anchor>
      <arglist>(int selectedCluster)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>updateShownClusters</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>89fa20b29d75f836b6ee0415ce8e3c98</anchor>
      <arglist>(QValueList&lt; int &gt; selectedClusters)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>groupClusters</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>9d54d1ad155fb9ba29e617c9be0db6c5</anchor>
      <arglist>(QValueList&lt; int &gt; selectedClusters)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>moveClustersToNoise</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>df3087942a7694135c13dee4333f8cac</anchor>
      <arglist>(QValueList&lt; int &gt; selectedClusters)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>moveClustersToArtefact</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>d4db436a9932e768c87942b112e8ee50</anchor>
      <arglist>(QValueList&lt; int &gt; selectedClusters)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>ClusterPalette</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>b6ecea444a4dbe8d1959e2a26b78e944</anchor>
      <arglist>(QColor backgroundColor, QWidget *parent=0, KStatusBar *statusBar=0, const char *name=0, WFlags fl=0)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>createClusterList</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>f873f3be830cedd156aa32c94c785459</anchor>
      <arglist>(KlustersDoc *doc)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>updateClusterList</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>3fa83e0c47a4dc0706ea738255b21b6a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>selectItems</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>99fe87a450eeb1bf711bdd4c0a1788db</anchor>
      <arglist>(QValueList&lt; int &gt; selectedClusters)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setImmediateMode</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>e8060c1b87ef4e31a3cddfc3c4eda2c0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setDelayMode</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>fca5c6351577c255be5bbda24a1e455a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>reset</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>4e4c8c8703cbdd6ca1d21d9a38633913</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>QValueList&lt; int &gt;</type>
      <name>selectedClusters</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>854edfe1e16d18265ae1d7b9d3f33341</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>hideUserClusterInformation</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>ad74cfaeda2eff134a2360422871eab9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showUserClusterInformation</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>813476b16575f955fa592018338db3d7</anchor>
      <arglist>(int electrodeGroupId)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>changeBackgroundColor</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>a6dd26806594f9612cfdca379d275788</anchor>
      <arglist>(QColor color)</arglist>
    </member>
    <member kind="slot" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>slotRightPressed</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>44bd6e80167465a0f28c726bfb4f489f</anchor>
      <arglist>(QIconViewItem *item)</arglist>
    </member>
    <member kind="slot" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>slotMousePressed</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>ff222642b34dfcdb9d0e86e0e1c8c6df</anchor>
      <arglist>(int button, QIconViewItem *item)</arglist>
    </member>
    <member kind="slot" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>slotClickRedraw</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>92ea1da5a40c14ebb9452f94d8fab62b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>languageChange</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>95435c9aa7ad377d3feb772a7f73b782</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>slotOnItem</name>
      <anchorfile>classClusterPalette.html</anchorfile>
      <anchor>0245e11b74a08765dd59be96046de85f</anchor>
      <arglist>(QIconViewItem *item)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ClusterPaletteIconViewItem</name>
    <filename>classClusterPaletteIconViewItem.html</filename>
    <member kind="function">
      <type></type>
      <name>ClusterPaletteIconViewItem</name>
      <anchorfile>classClusterPaletteIconViewItem.html</anchorfile>
      <anchor>d7a0c73825012b1479f62495052d7d95</anchor>
      <arglist>(QIconView *, QString)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>ClusterPaletteIconViewItem</name>
      <anchorfile>classClusterPaletteIconViewItem.html</anchorfile>
      <anchor>36159217900c234902783c71dec6a0ea</anchor>
      <arglist>(QIconView *parent, QString text, const QPixmap &amp;icon)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setToolTipText</name>
      <anchorfile>classClusterPaletteIconViewItem.html</anchorfile>
      <anchor>35425d3380e6fbb64c9c1e81116e2ec2</anchor>
      <arglist>(const QString)</arglist>
    </member>
    <member kind="function">
      <type>const QString</type>
      <name>getToolTipText</name>
      <anchorfile>classClusterPaletteIconViewItem.html</anchorfile>
      <anchor>68e047849c734d8c04b16c2ac09c0823</anchor>
      <arglist>(void) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ClusterPaletteToolTip</name>
    <filename>classClusterPaletteToolTip.html</filename>
    <member kind="function">
      <type></type>
      <name>ClusterPaletteToolTip</name>
      <anchorfile>classClusterPaletteToolTip.html</anchorfile>
      <anchor>c519390505850f466faeb70f0b7e5b67</anchor>
      <arglist>(QIconView *, QToolTipGroup *=0)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>maybeTip</name>
      <anchorfile>classClusterPaletteToolTip.html</anchorfile>
      <anchor>02de582ef65c5edf52bf718d8a2d4332</anchor>
      <arglist>(const QPoint &amp;)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ClustersProvider</name>
    <filename>classClustersProvider.html</filename>
    <base>DataProvider</base>
    <member kind="enumeration">
      <name>loadReturnMessage</name>
      <anchor>750cf0d5b282870d2615e0ba0d2b5952</anchor>
      <arglist></arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>dataReady</name>
      <anchorfile>classClustersProvider.html</anchorfile>
      <anchor>c9f1bda729996243a19f0b1c28df5c25</anchor>
      <arglist>(Array&lt; dataType &gt; &amp;data, QObject *initiator, QString providerName)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>nextClusterDataReady</name>
      <anchorfile>classClustersProvider.html</anchorfile>
      <anchor>db0635699e54ca968a4f158c16df2d51</anchor>
      <arglist>(Array&lt; dataType &gt; &amp;data, QObject *initiator, QString providerName, long startingTime, long startingTimeInRecordingUnits)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>previousClusterDataReady</name>
      <anchorfile>classClustersProvider.html</anchorfile>
      <anchor>c99e4ca824d9f5b6dafc396f0c20507b</anchor>
      <arglist>(Array&lt; dataType &gt; &amp;data, QObject *initiator, QString providerName, long startingTime, long startingTimeInRecordingUnits)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>ClustersProvider</name>
      <anchorfile>classClustersProvider.html</anchorfile>
      <anchor>110deddefb7bd4722c77cf36f31b4b46</anchor>
      <arglist>(KURL fileUrl, int samplingRate, int currentSamplingRate, Data &amp;clusteringData, dataType dataFileMaxTime)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>requestData</name>
      <anchorfile>classClustersProvider.html</anchorfile>
      <anchor>73f86b1dda818e9a02e1a5faa2dea1b8</anchor>
      <arglist>(long startTime, long endTime, QObject *initiator, long startTimeInRecordingUnits)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>requestNextClusterData</name>
      <anchorfile>classClustersProvider.html</anchorfile>
      <anchor>b2702a683bb72d1c7541309a871518cd</anchor>
      <arglist>(long startTime, long timeFrame, QValueList&lt; int &gt; selectedIds, QObject *initiator, long startTimeInRecordingUnits)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>requestPreviousClusterData</name>
      <anchorfile>classClustersProvider.html</anchorfile>
      <anchor>c93de2c06321ea2736c7eef5fb504542</anchor>
      <arglist>(long startTime, long timeFrame, QValueList&lt; int &gt; selectedIds, QObject *initiator, long startTimeInRecordingUnits)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setClusterIdList</name>
      <anchorfile>classClustersProvider.html</anchorfile>
      <anchor>4f19166ec886d0b357314f602a05ea02</anchor>
      <arglist>(QValueList&lt; int &gt; *list)</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>getName</name>
      <anchorfile>classClustersProvider.html</anchorfile>
      <anchor>35fcb33fcdbc1593169e5d3f432ae1e6</anchor>
      <arglist>() const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ClusterUserInformation</name>
    <filename>classClusterUserInformation.html</filename>
    <member kind="function">
      <type></type>
      <name>ClusterUserInformation</name>
      <anchorfile>classClusterUserInformation.html</anchorfile>
      <anchor>e778fb0e06bf175e83992a1594d0ce7e</anchor>
      <arglist>(int pGroup=0, int pCluster=0, QString pStructure=&quot;&quot;, QString pType=&quot;&quot;, QString pID=&quot;&quot;, QString pQuality=&quot;&quot;, QString pNotes=&quot;&quot;)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getGroup</name>
      <anchorfile>classClusterUserInformation.html</anchorfile>
      <anchor>06b3ae87330bacc967e2747778e2872f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getCluster</name>
      <anchorfile>classClusterUserInformation.html</anchorfile>
      <anchor>3f60ca09ed07f1157740214ce35de6a9</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>getStructure</name>
      <anchorfile>classClusterUserInformation.html</anchorfile>
      <anchor>5e19b94aecc283a66ed5571ccbcd3aa9</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>getType</name>
      <anchorfile>classClusterUserInformation.html</anchorfile>
      <anchor>f1356b991ec311513c4c104643072842</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>getId</name>
      <anchorfile>classClusterUserInformation.html</anchorfile>
      <anchor>158c59384e683d2423f5afe257232adc</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>getQuality</name>
      <anchorfile>classClusterUserInformation.html</anchorfile>
      <anchor>d7c7249b8e0f799a483b3870458ce22e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>getNotes</name>
      <anchorfile>classClusterUserInformation.html</anchorfile>
      <anchor>f653336a6c9fa37e4e4afb4776a9cd4f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setGroup</name>
      <anchorfile>classClusterUserInformation.html</anchorfile>
      <anchor>ddf37a39d874d9d848b3ace340e8b563</anchor>
      <arglist>(int pGroup)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setCluster</name>
      <anchorfile>classClusterUserInformation.html</anchorfile>
      <anchor>5651c6db325e23bbf6f4513cb0b6eaf8</anchor>
      <arglist>(int pCluster)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setStructure</name>
      <anchorfile>classClusterUserInformation.html</anchorfile>
      <anchor>c8004cd9ad518d9bec19c76504ef1782</anchor>
      <arglist>(QString pStructure)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setType</name>
      <anchorfile>classClusterUserInformation.html</anchorfile>
      <anchor>250cb473d444b5a5edd53353e77b4bcc</anchor>
      <arglist>(QString pType)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setId</name>
      <anchorfile>classClusterUserInformation.html</anchorfile>
      <anchor>86f7b9973d1523bf15312b7ad7df0240</anchor>
      <arglist>(QString pId)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setQuality</name>
      <anchorfile>classClusterUserInformation.html</anchorfile>
      <anchor>fd7fce4abc38d972738e17adda3c98d0</anchor>
      <arglist>(QString pQuality)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setNotes</name>
      <anchorfile>classClusterUserInformation.html</anchorfile>
      <anchor>26fd6feea5d77bf987f3724d2c9acc86</anchor>
      <arglist>(QString pNotes)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ClusterView</name>
    <filename>classClusterView.html</filename>
    <base>ViewWidget</base>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>updatedDimensions</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>6ffcd1d8fe34d114476adee218d09669</anchor>
      <arglist>(int dimensionX, int dimensionY)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>singleColorUpdate</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>348b0efa3792a84bb90dea04f1f6240d</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>addClusterToView</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>27737e7d724d8b7d40e28d6b608a3be8</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>removeClusterFromView</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>7bcacb8fd83e248eae0433b84d70b793</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>addNewClusterToView</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>77c9f49e4c78824e0e3e420053768e0c</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>addNewClusterToView</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>4ec27011a9dfdd473196c1465a8b7776</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>spikesRemovedFromClusters</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>fe0231d2fb10929704c69e586a939213</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>spikesAddedToCluster</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>11c8df88a2f4aeb7e06d0a72d6459421</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>emptySelection</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>8fb4f8b2704c0af4ef5860737fdd9c3b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setMode</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>829d964b2b03c997e9e7098d2a17b12a</anchor>
      <arglist>(BaseFrame::Mode selectedMode)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateClusters</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>b371d2d9b80836569432b24f83e24acb</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;modifiedClusters, bool active, bool isModifiedByDeletion)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>undoUpdateClusters</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>644f18a1ee8b7fdf3b9eb1cf5ae66091</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;modifiedClusters, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setTimeStepInSecond</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>93c2b2017a6c459bb98c9e093f9eda15</anchor>
      <arglist>(int step)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setTimeStepInSecond</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>d187ace082fd89e71610257ee5db66a7</anchor>
      <arglist>(int step, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>print</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>8a48d3dce82af1ac56f934b886a3bd81</anchor>
      <arglist>(QPainter &amp;printPainter, QPaintDeviceMetrics &amp;metrics, bool whiteBackground)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>moveToTime</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>1f79dddd9d8fcf53f1e23c7d76f5c0f6</anchor>
      <arglist>(long startTime)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>ClusterView</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>c74e09d9d08614c93a605ebb5f369d16</anchor>
      <arglist>(KlustersDoc &amp;doc, KlustersView &amp;view, QColor backgroundColor, int timeInterval, KStatusBar *statusBar, QWidget *parent=0, const char *name=0, int minSize=50, int maxSize=4000, int windowTopLeft=-500, int windowBottomRight=1001, int border=0)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isASelectionInProcess</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>3fc4e1caa1758efc732911018d6aa20d</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getDimensionX</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>c402173ddc2e2c8f96552238c729baaf</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getDimensionY</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>1c78d2b8914cb416f2297e42c067395c</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>BaseFrame::Mode</type>
      <name>getMode</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>0073ff76f798dd4536a2fa8e4b42a60e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>drawContents</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>9c392ec9d1bb56b601824fa735dac828</anchor>
      <arglist>(QPainter *p)</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>resizeEvent</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>507c8a4182de34387502bceabd1f57c4</anchor>
      <arglist>(QResizeEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mouseReleaseEvent</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>2b44bdf430dfe5ac3e741f36e20c9e47</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mousePressEvent</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>5625cfa11cd85b65d59ef466f651bbff</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mouseMoveEvent</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>965a57cbb8e5b8748e6e2237c540b402</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>mouseDoubleClickEvent</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>f9d6e00ed3612cc90efeda9b4fc37487</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>customEvent</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>c69a4ad405464c0ce68acf5654586e42</anchor>
      <arglist>(QCustomEvent *event)</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend class</type>
      <name>ComputeEvent</name>
      <anchorfile>classClusterView.html</anchorfile>
      <anchor>cc9ab800d4c627a0f4ff258d4cc04529</anchor>
      <arglist></arglist>
    </member>
    <class kind="class">ClusterView::ComputeEvent</class>
  </compound>
  <compound kind="class">
    <name>Configuration</name>
    <filename>classConfiguration.html</filename>
    <member kind="function">
      <type>void</type>
      <name>read</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>995f21643ada0d57a8ae542c508e2dec</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>write</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>a75c026a728e50c5c9608083190b7a8e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setCrashRecovery</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>764e1266ca470da4513c322145f1fbaa</anchor>
      <arglist>(bool use)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setCrashRecoveryIndex</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>a6e17506c8d6d43ccc105b8db49de146</anchor>
      <arglist>(int index)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setGain</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>c39959a2a38157fbc10819b64dc8bc2e</anchor>
      <arglist>(int gain)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setTimeInterval</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>de8b2258641393f5d07a33400db7f188</anchor>
      <arglist>(int time)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setNbUndo</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>2d881e74e87c110b52611708a46e4b9c</anchor>
      <arglist>(int nb)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setChannelPositions</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>56d77986ca7c3a08575bc6218b2ce3b3</anchor>
      <arglist>(QValueList&lt; int &gt; positions)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setNbChannels</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>2c446f312e2601d9364d32125a522ace</anchor>
      <arglist>(int nb)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setBackgroundColor</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>8ef935d533f578207fc59fc764de426d</anchor>
      <arglist>(QColor color)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setReclusteringExecutable</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>22bf94e0450fd38908a020a3ec93003f</anchor>
      <arglist>(QString executable)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setReclusteringArguments</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>93975179b0b9aa9577534ce8f0594d6d</anchor>
      <arglist>(QString arguments)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isCrashRecovery</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>c54c2694c995c1f5919d4d579ad2b57c</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>crashRecoveryInterval</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>aed803db445e9a07323e0bfa030b2d77</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>crashRecoveryIntervalIndex</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>df1bbd437574b23e3b0cf400cc23d8e3</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getGain</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>ff4be7ee2b641a6d88d2a916aa78c18e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getTimeInterval</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>881f6c0739dd99bd30c08c8a3e74ce46</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getNbUndo</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>7f8531c4000c0293f78c8caa3124342a</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QValueList&lt; int &gt; *</type>
      <name>getChannelPositions</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>67a1e103437a36d02d14117acc07312b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getNbChannels</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>defd81e491a839f802cebab1fa2c0e2d</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QColor</type>
      <name>getBackgroundColor</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>efbbe89bf667275f75a4a4149a9dbf34</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>getReclusteringExecutable</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>c24486902200d3707e63b92be9194ee3</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>getReclusteringArguments</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>bdd4795cdfe8dfccd037cd311cf2d5f1</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isCrashRecoveryDefault</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>f240551c920b066da94c6e5e907879b4</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>crashRecoveryIntervalIndexDefault</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>d13c5c9d5aca331095b96418e160404a</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getGainDefault</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>e40d85c7e2dd9f1b4aa7e1e437375c60</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getTimeIntervalDefault</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>e5798d1652e87e9f468657926b74256c</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getNbUndoDefault</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>bdcd0bfb31033aea1f54ea172deae440</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QColor</type>
      <name>getBackgroundColorDefault</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>0c49646a311b35b3ee5df2b927482f72</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>getReclusteringExecutableDefault</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>4e0ce12a2af7244bd91c2a0ecdd82b92</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>getReclusteringArgumentsDefault</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>d9e20c0afaa18e15a2fb3a36267c339e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend Configuration &amp;</type>
      <name>configuration</name>
      <anchorfile>classConfiguration.html</anchorfile>
      <anchor>64389e63464ed34e4164d3ff62f25e79</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CorrelationThread</name>
    <filename>classCorrelationThread.html</filename>
    <member kind="function">
      <type>QValueList&lt; Pair &gt; *</type>
      <name>triggeringPairs</name>
      <anchorfile>classCorrelationThread.html</anchorfile>
      <anchor>d77cc50aea329f2b02fca7fc0e63304b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>const QValueList&lt; int &gt; &amp;</type>
      <name>triggeringClusters</name>
      <anchorfile>classCorrelationThread.html</anchorfile>
      <anchor>4e69cd30309b65204dc08cd15557a4d9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>stopProcessing</name>
      <anchorfile>classCorrelationThread.html</anchorfile>
      <anchor>d6f79da8448751efdd3d9298c10e6a50</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>CorrelationsEvent *</type>
      <name>getCorrelationsEvent</name>
      <anchorfile>classCorrelationThread.html</anchorfile>
      <anchor>4a6d5ba1b3637a9ea2e15e6a1379a76e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>run</name>
      <anchorfile>classCorrelationThread.html</anchorfile>
      <anchor>b9e42edcb303207fb942a26ac1ff1945</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>CorrelationsEvent</name>
      <anchorfile>classCorrelationThread.html</anchorfile>
      <anchor>3dbe7bce0d55a7aa8464bfd34464606d</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend CorrelationThread *</type>
      <name>CorrelationView::getCorrelations</name>
      <anchorfile>classCorrelationThread.html</anchorfile>
      <anchor>b01134b122bc10016b1a4b6bfa203b8e</anchor>
      <arglist>(QValueList&lt; Pair &gt; *pairsToCompute, QValueList&lt; int &gt; clusterIds)</arglist>
    </member>
    <class kind="class">CorrelationThread::CorrelationsEvent</class>
  </compound>
  <compound kind="class">
    <name>CorrelationThread::CorrelationsEvent</name>
    <filename>classCorrelationThread_1_1CorrelationsEvent.html</filename>
    <member kind="function">
      <type>CorrelationThread *</type>
      <name>parentThread</name>
      <anchorfile>classCorrelationThread_1_1CorrelationsEvent.html</anchorfile>
      <anchor>deb6511d4602e6ad0dedbb176afbc8ab</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend CorrelationsEvent *</type>
      <name>CorrelationThread::getCorrelationsEvent</name>
      <anchorfile>classCorrelationThread_1_1CorrelationsEvent.html</anchorfile>
      <anchor>d6a876132393bba20eb3cb560aa61cb7</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CorrelationView</name>
    <filename>classCorrelationView.html</filename>
    <base>ViewWidget</base>
    <member kind="slot">
      <type>void</type>
      <name>singleColorUpdate</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>1cce3f7197c35df432ade45c99d30576</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>addClusterToView</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>5f9ce44825e70860badcb3a24728c445</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>removeClusterFromView</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>fb43ce4935ec46dbaceb05a52443b07e</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>addNewClusterToView</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>c79adac747e0f7f01b1a83117c0567cc</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>addNewClusterToView</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>dd4cde7293319e5e65c1fc8b486e2f97</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>spikesRemovedFromClusters</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>1adc1f05348a92fb51476da561fc0c9d</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>spikesAddedToCluster</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>0a11205d646f343e86cfa8f2a03f02f5</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setMode</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>e6f8d4998da52fdf2b4054427a264f5c</anchor>
      <arglist>(BaseFrame::Mode selectedMode)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setNoScale</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>88bdc6e9498d5324791454edfdc36389</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setMaximumScale</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>80c165487dae96ceb19793e6df720d5f</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setShoulderScale</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>6b9bc79cb045ce69cc9e2c390e4064d6</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setBinSizeAndTimeWindow</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>26ebf78ff31269ad6e682f72df11d8f9</anchor>
      <arglist>(int size, int width)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>increaseAmplitude</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>8ba3b6609970462121ad122d40813a81</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>decreaseAmplitude</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>c0bdd9a8e7cbbd058255d832a7999bcf</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>bool</type>
      <name>isThreadsRunning</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>7c3b1d86f16ff64063e15d6e3862e609</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>undoUpdateClusters</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>a3d8ac9e33e3986499fcc65dc58797f7</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;modifiedClusters, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateClusters</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>b40bea7225ae9804d61f7964e90a4011</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;modifiedClusters, bool active, bool isModifiedByDeletion)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setShoulderLine</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>90c5f935b3726b8f874076d4025f72aa</anchor>
      <arglist>(bool b)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateDrawing</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>d985304283252bf8614e1ea1d69699c8</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>clustersRenumbered</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>b852d62de09b4379aff3dd34003996d4</anchor>
      <arglist>(bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>print</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>f1d272cec32ff777bb932da221ffe5cd</anchor>
      <arglist>(QPainter &amp;printPainter, QPaintDeviceMetrics &amp;metrics, bool whiteBackground)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>CorrelationView</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>7f42c98b5c52c057e74793f464e7ff15</anchor>
      <arglist>(KlustersDoc &amp;doc, KlustersView &amp;view, QColor backgroundColor, KStatusBar *statusBar, QWidget *parent=0, Data::ScaleMode scale=Data::MAX, int binSize=0, int correlationTimeFrame=0, bool shoulderLine=false, const char *name=0, int minSize=50, int maxSize=4000, int windowTopLeft=-500, int windowBottomRight=1001, int border=0)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>willBeKilled</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>69e2da1530baf98d91c23cb7d511b57e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getBinSize</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>919f04d67c875c4f27210c035cccc97e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getTimeWindow</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>522c6c097b8401d0763f5db92412d599</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>Data::ScaleMode</type>
      <name>getScaleMode</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>dce85995e8e6af8e9b28b37c99923357</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isShoulderLine</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>521f25c5078f2b103bd67fb1e2dbc06d</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>drawContents</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>10d889c2c1c57551160d930aed9aae4e</anchor>
      <arglist>(QPainter *p)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>customEvent</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>8fc5bd0976048ca1a31f15d028b29d69</anchor>
      <arglist>(QCustomEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mouseDoubleClickEvent</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>835c3c83e1e08f48c0e18b97abef5783</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mouseReleaseEvent</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>0eee46fa511153bbaf8b666476edf3d1</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>resizeEvent</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>326c57c1a7dfcd992eb4f28688c1fc5d</anchor>
      <arglist>(QResizeEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mouseMoveEvent</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>3e14f0f760a9020f6f5854a0e614d857</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>CorrelationThread</name>
      <anchorfile>classCorrelationView.html</anchorfile>
      <anchor>7481693c50111f26a9943c545b60d0d0</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Data</name>
    <filename>classData.html</filename>
    <member kind="enumeration">
      <name>ScaleMode</name>
      <anchor>7c467cbdd19a0b0ccde482baed716155</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>loadFeatures</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>1778e2f260f69a61b483b20d283bcdfa</anchor>
      <arglist>(FILE *featureFile, QString &amp;errorInformation)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>loadClusters</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>86310888eced8e33b0e1a87ca4b73226</anchor>
      <arglist>(FILE *clusterFile, long spkFileLength, QString &amp;errorInformation)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>configure</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>64e73cfdb133d5090bdacc36aef30c15</anchor>
      <arglist>(QFile &amp;parXFile, QFile &amp;parFile, QString &amp;errorInformation)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>configure</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>0fd4dd7bf783d47378673d47bbb088d3</anchor>
      <arglist>(QFile &amp;parFile, int electrodeGroupID, QString &amp;errorInformation)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>initialize</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>59cca5e03f03923ec16838736fb37c53</anchor>
      <arglist>(FILE *featureFile, long spkFileLength, QString spkFileName, QFile &amp;parXFile, QFile &amp;parFile, QString &amp;errorInformation)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>initialize</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>3dd45508bad6a4804e0d432fd4948558</anchor>
      <arglist>(FILE *featureFile, FILE *clusterFile, long spkFileLength, QString spkFileName, QFile &amp;parXFile, QFile &amp;parFile, QString &amp;errorInformation)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>initialize</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>614768d2f62ae27a0c4af88223c2dcb8</anchor>
      <arglist>(FILE *featureFile, long spkFileLength, QString spkFileName, QFile &amp;parFile, int electrodeGroupID, QString &amp;errorInformation)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>initialize</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>1d49d5a083f3ef40acac093ef8131260</anchor>
      <arglist>(FILE *featureFile, FILE *clusterFile, long spkFileLength, QString spkFileName, QFile &amp;parFile, int electrodeGroupID, QString &amp;errorInformation)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>minMaxDimensionCalculation</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>0a7f0270eb95e9b880a66406ff5b6e83</anchor>
      <arglist>(QValueList&lt; int &gt; modifiedClusters)</arglist>
    </member>
    <member kind="function">
      <type>dataType</type>
      <name>createNewCluster</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>ca425081a5a87a41f442f27114bd1e18</anchor>
      <arglist>(QRegion &amp;region, const QValueList&lt; int &gt; &amp;clustersOfOrigin, int dimensionX, int dimensionY, QValueList&lt; int &gt; &amp;fromClusters, QValueList&lt; int &gt; &amp;emptyClusters)</arglist>
    </member>
    <member kind="function">
      <type>QMap&lt; int, int &gt;</type>
      <name>createNewClusters</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>f15efbe824cf8f15cf1a75e90f2a8272</anchor>
      <arglist>(QRegion &amp;region, const QValueList&lt; int &gt; &amp;clustersOfOrigin, int dimensionX, int dimensionY, QValueList&lt; int &gt; &amp;emptyClusters)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>deleteSpikesFromClusters</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>f589304b761299662cb72c4ae8356076</anchor>
      <arglist>(QRegion &amp;region, const QValueList&lt; int &gt; &amp;clustersOfOrigin, int destinationCluster, int dimensionX, int dimensionY, QValueList&lt; int &gt; &amp;fromClusters, QValueList&lt; int &gt; &amp;emptyClusters)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>moveClustersToNoise</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>14dcb35c0d9ed3d697fd4e5d05281977</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;clustersToDelete)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>moveClustersToArtefact</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>27c9d33b69ed05b579ba18dffc61bd8f</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;clustersToDelete)</arglist>
    </member>
    <member kind="function">
      <type>dataType</type>
      <name>groupClusters</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>3cde887238b043350882943481e4ac16</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;clustersToGroup)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>nbOfDimensions</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>9eb1775015f1d6956beb63576fc760cf</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>undo</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>fe3776913a39b94f1289db081e38f434</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;addedClusters, QValueList&lt; int &gt; &amp;updatedClusters)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>redo</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>d9794804ba32827a29e9f41e575275f2</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;addedClusters, QValueList&lt; int &gt; &amp;updatedClusters, QValueList&lt; int &gt; &amp;deletedClusters)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>renumber</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>d281299e0e8d1a3f8b902d481f90a843</anchor>
      <arglist>(QMap&lt; int, int &gt; &amp;clusterIdsOldNew, QMap&lt; int, int &gt; &amp;clusterIdsNewOld)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>nbUndoChangedCleaning</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>5680f0263412c682a3acc03ceb6ad6cc</anchor>
      <arglist>(int newNbUndo)</arglist>
    </member>
    <member kind="function">
      <type>Iterator</type>
      <name>iterator</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>85adc3b2ca498fa8ddf9a69a42be2f17</anchor>
      <arglist>(dataType clusterId)</arglist>
    </member>
    <member kind="function">
      <type>QValueList&lt; dataType &gt;</type>
      <name>clusterIds</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>279ec9099627b78207e2bb5300c133ec</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>dataType</type>
      <name>maxDimension</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>7e746531a09640a04ae30a520a5b32ba</anchor>
      <arglist>(int dimension)</arglist>
    </member>
    <member kind="function">
      <type>dataType</type>
      <name>minDimension</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>fff0a3ea6d5ae25fe7bfe009be938803</anchor>
      <arglist>(int dimension)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>saveClusters</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>90db3ea8789ef16342840410cf0a12b0</anchor>
      <arglist>(FILE *clusterFile)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>nbOfSampleInWaveform</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>3a75982a8900c5a5338a46310f9001ce</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>positionOfPeakInWaveform</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>42b66cc687a130a0f9d1ba8a45d3c945</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>nbOfchannels</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>5208b27b1ab14d425dbd501fc663d61e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>totalNbOfPCAs</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>dacde160d692f51eb79b254a24f99d06</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>double</type>
      <name>intervalOfSampling</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>81cde961a691fcf747281d8bace62f05</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>timeDimension</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>9e7862ce1718816a81ccb73fc5a94ff7</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>maxTime</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>53b086f2ea2fc3d290efd20312b96a9b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isRecordingTwoBytes</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>a86d616bbc5224a495b75c66d88ed6ff</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>spikePositions</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>f7b61447a6d8cf55ca4b69227372b93a</anchor>
      <arglist>(int clusterId, SortableTable &amp;subsetTable)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>nbPtsBySpike</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>748a352fe974831440a48a1de2bb22d8</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>dataType</type>
      <name>nbOfSpikes</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>87189053e4383584e5107a473a91fcce</anchor>
      <arglist>(dataType clusterId)</arglist>
    </member>
    <member kind="function">
      <type>dataType</type>
      <name>totalNbOfSpikes</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>aac30bc3fd327305de42eec090f17050</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>nbOfClusters</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>6487cb88a547b1ff3f4fb8b1cb3334b1</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setUserClusterInformation</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>fa11610051e724787b9f5449ac96b474</anchor>
      <arglist>(int clusterId, QString structure, QString type, QString ID, QString quality, QString notes)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>getUserClusterInformation</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>9bca5451ac2f54d609e8df6ab2aeb7e4</anchor>
      <arglist>(int clusterId, vector&lt; QString &gt; &amp;clusterInformation)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>getClusterUserInformation</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>56c36742dc575c188b320c255edeca4d</anchor>
      <arglist>(int pGroup, QMap&lt; int, ClusterUserInformation &gt; &amp;clusterUserInformationMap) const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>createFeatureFile</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>e98fcf47bca9ac83f87775ffebeb1d03</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;clustersToRecluster, QFile &amp;fetFile)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>integrateReclusteredClusters</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>57132ec36631d93d4428301673e057de</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;clustersToRecluster, QValueList&lt; int &gt; &amp;reclusteredClusterList, FILE *clusterFile)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isTraceViewVariablesAvailable</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>0f53312641f9041f618715c9e01e3e62</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getResolution</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>41cf4d93d0bd5263fcca51bc2ebb39b4</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getTotalNbChannels</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>7d99c4a16a7287d39b188542eaa3ff99</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getSamplingRate</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>3bf1f9de560b433114e2466072d7c65f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getVoltageRange</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>bccb3d0241bdee311ee0e91cc8ea9c96</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getOffset</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>da5954e62e438624b41675ed47001e65</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getAmplification</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>54393a8646897c00488f86ca8c301765</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getNbSamplesInWaveform</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>29565b3dc8fd39c9da95fe1450dd1fbd</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getPeakPositionInWaveform</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>5497f91d765ab51b58b1df8704cc7e8f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QValueList&lt; int &gt; &amp;</type>
      <name>getCurrentChannels</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>37d2057001106b89e30f875010f32ed0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>SampleWaveformIterator *</type>
      <name>sampleWaveformIterator</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>cfcd133c11391b4e66102fff646a9784</anchor>
      <arglist>(dataType clusterId, dataType nbSampleSpikes)</arglist>
    </member>
    <member kind="function">
      <type>TimeFrameWaveformIterator *</type>
      <name>timeFrameWaveformIterator</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>60e8f9e603623eef642ef5279b7d1d6b</anchor>
      <arglist>(dataType clusterId, dataType startTime, dataType endTime)</arglist>
    </member>
    <member kind="function">
      <type>Status</type>
      <name>getCorrelograms</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>1c8caf858e00073b9002b48dea37dbc1</anchor>
      <arglist>(Pair &amp;pair, int binSize, int timeWindow, double binSizeInRU, float timeWindowInRU, int halfBins)</arglist>
    </member>
    <member kind="function">
      <type>CorrelogramIterator</type>
      <name>correlogramIterator</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>ef7d28f6ad82ebdeb45a1ce933f59a01</anchor>
      <arglist>(Pair pair, ScaleMode scale, int binSize, int timeframe)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>loadReclusteredClusters</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>a2754650b749c5e011f7551cdfb822ef</anchor>
      <arglist>(FILE *clusterFile)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>initialize</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>0cb313c255266ffc9b7cff2e945f90f7</anchor>
      <arglist>(FILE *featureFile, long spkFileLength, QString &amp;errorInformation)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>initialize</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>bf46e90973a547b65f19d2b569654ca6</anchor>
      <arglist>(FILE *featureFile, FILE *clusterFile, long spkFileLength, QString &amp;errorInformation)</arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>MinMaxThread</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>584119cfdd40911df4da83d622f22353</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>WaveformThread</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>9695b783e4eca9a797b6ca576ba48358</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>CorrelationThread</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>7481693c50111f26a9943c545b60d0d0</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>AutoSaveThread</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>6cf92a3729197750ab8c864d9827038e</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>GroupingAssistant</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>68a174f4f1d712cf5b9527991f301f16</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>ClustersProvider</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>288f924416e5def82fabd429f629f9da</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>Iterator</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>52c2c237fb844d65a3a2842e9068cddf</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend class</type>
      <name>Waveforms</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>671b2d6e72ffe1dfefe05614a842cf8c</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend class</type>
      <name>WaveformData&lt; class T &gt;</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>948d199775f5a6f435d750e094efe529</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend class</type>
      <name>Correlation</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>eeae7daa3a6361cbc5c6628d675fea86</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>SampleWaveformIterator</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>3a793db6f39dbbcf03de0ca97876a63b</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>TimeFrameWaveformIterator</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>760f9e1e73bde5eaa864aedb11bb0974</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>CorrelogramIterator</name>
      <anchorfile>classData.html</anchorfile>
      <anchor>b84ee86e5c66e4a9ebecfd55d77495cf</anchor>
      <arglist></arglist>
    </member>
    <class kind="class">Data::ClusterInfo</class>
    <class kind="class">Data::Correlation</class>
    <class kind="class">Data::CorrelationsInProcess</class>
    <class kind="class">Data::CorrelogramIterator</class>
    <class kind="class">Data::Iterator</class>
    <class kind="class">Data::SampleWaveformIterator</class>
    <class kind="class">Data::TimeFrameWaveformIterator</class>
    <class kind="class">Data::WaveformData</class>
    <class kind="class">Data::WaveformIterator</class>
    <class kind="class">Data::Waveforms</class>
    <class kind="class">Data::WaveformStatus</class>
  </compound>
  <compound kind="class">
    <name>Data::CorrelogramIterator</name>
    <filename>classData_1_1CorrelogramIterator.html</filename>
    <member kind="function">
      <type>float</type>
      <name>next</name>
      <anchorfile>classData_1_1CorrelogramIterator.html</anchorfile>
      <anchor>11016cf656f0c1f124f7bb2691d74a6b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>hasNext</name>
      <anchorfile>classData_1_1CorrelogramIterator.html</anchorfile>
      <anchor>b2eccc91df3676d3b048658c02d4dc2d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isDataAvailable</name>
      <anchorfile>classData_1_1CorrelogramIterator.html</anchorfile>
      <anchor>a98c006c41167c9148ce7ff5f1aab045</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>float</type>
      <name>getShoulder</name>
      <anchorfile>classData_1_1CorrelogramIterator.html</anchorfile>
      <anchor>645ab6ddd7f2bcecab2c0f2490804841</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>float</type>
      <name>getScaledShoulder</name>
      <anchorfile>classData_1_1CorrelogramIterator.html</anchorfile>
      <anchor>1eb15e1b5816ec4d3ee786d95292a29c</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>float</type>
      <name>getFiringRate</name>
      <anchorfile>classData_1_1CorrelogramIterator.html</anchorfile>
      <anchor>e6296c71c47d623edeb6aec0363bf7e1</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend CorrelogramIterator</type>
      <name>Data::correlogramIterator</name>
      <anchorfile>classData_1_1CorrelogramIterator.html</anchorfile>
      <anchor>5809945914fad5cb3c1d24c7b6d1bf00</anchor>
      <arglist>(Pair pair, ScaleMode scale, int binSize, int timeframe)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Data::Iterator</name>
    <filename>classData_1_1Iterator.html</filename>
    <member kind="function">
      <type>QPoint</type>
      <name>operator()</name>
      <anchorfile>classData_1_1Iterator.html</anchorfile>
      <anchor>d2a8b3be1be34b5ce20e8e6fb27e1b55</anchor>
      <arglist>(dataType dimensionX, dataType dimensionY) const</arglist>
    </member>
    <member kind="function">
      <type>dataType</type>
      <name>operator()</name>
      <anchorfile>classData_1_1Iterator.html</anchorfile>
      <anchor>dd1369a407189ea1235bdad38ca994f9</anchor>
      <arglist>(dataType dimension) const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>next</name>
      <anchorfile>classData_1_1Iterator.html</anchorfile>
      <anchor>84945d0435b67546fa0b89f51ec4086d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>hasNext</name>
      <anchorfile>classData_1_1Iterator.html</anchorfile>
      <anchor>f402d66c7ab21ed998782b82793333fa</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend Iterator</type>
      <name>Data::iterator</name>
      <anchorfile>classData_1_1Iterator.html</anchorfile>
      <anchor>a917cc61189976a69c2675c0656208bc</anchor>
      <arglist>(dataType clusterId)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Data::SampleWaveformIterator</name>
    <filename>classData_1_1SampleWaveformIterator.html</filename>
    <base>Data::WaveformIterator</base>
    <member kind="function">
      <type>dataType</type>
      <name>nextSpike</name>
      <anchorfile>classData_1_1SampleWaveformIterator.html</anchorfile>
      <anchor>37f62aef85c05adae40edcd2f8059ead</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>dataType</type>
      <name>nextMeanValue</name>
      <anchorfile>classData_1_1SampleWaveformIterator.html</anchorfile>
      <anchor>1a2487c41e5082dda5c3a0d274fb0bdd</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>dataType</type>
      <name>nextStDeviationValue</name>
      <anchorfile>classData_1_1SampleWaveformIterator.html</anchorfile>
      <anchor>46a6452a4e19a39ec4163bf5ac0cf019</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>dataType</type>
      <name>nbOfSpikes</name>
      <anchorfile>classData_1_1SampleWaveformIterator.html</anchorfile>
      <anchor>0f15b1fd1572a151c8a9f83617058286</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend SampleWaveformIterator *</type>
      <name>Data::sampleWaveformIterator</name>
      <anchorfile>classData_1_1SampleWaveformIterator.html</anchorfile>
      <anchor>43790ef5cc2a0be69f1df77ae3f21024</anchor>
      <arglist>(dataType clusterId, dataType nbSampleSpikes)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Data::TimeFrameWaveformIterator</name>
    <filename>classData_1_1TimeFrameWaveformIterator.html</filename>
    <base>Data::WaveformIterator</base>
    <member kind="function">
      <type>dataType</type>
      <name>nextSpike</name>
      <anchorfile>classData_1_1TimeFrameWaveformIterator.html</anchorfile>
      <anchor>7d6496d9227cbac8860251acfa906171</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>dataType</type>
      <name>nextMeanValue</name>
      <anchorfile>classData_1_1TimeFrameWaveformIterator.html</anchorfile>
      <anchor>64bce63026db22d3ab2d3c8e7f59c087</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>dataType</type>
      <name>nextStDeviationValue</name>
      <anchorfile>classData_1_1TimeFrameWaveformIterator.html</anchorfile>
      <anchor>f623af41771232bbb4c277a47ec28745</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>dataType</type>
      <name>nbOfSpikes</name>
      <anchorfile>classData_1_1TimeFrameWaveformIterator.html</anchorfile>
      <anchor>5929ff0a1c8a0fe9bed523a381547db1</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend TimeFrameWaveformIterator *</type>
      <name>Data::timeFrameWaveformIterator</name>
      <anchorfile>classData_1_1TimeFrameWaveformIterator.html</anchorfile>
      <anchor>0266b3606a4ce77f62d2a4e301918030</anchor>
      <arglist>(dataType clusterId, dataType startTime, dataType endTime)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Data::WaveformIterator</name>
    <filename>classData_1_1WaveformIterator.html</filename>
    <member kind="function">
      <type>void</type>
      <name>setSpikesAvailable</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>d7b23ef0ea3c7985d868262fc442490f</anchor>
      <arglist>(bool available)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>areSpikesAvailable</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>02418425ef12a2a0a21a2b34ba9c486a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setMeanAvailable</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>4c875a47915da6eb8438431d9eae479c</anchor>
      <arglist>(bool available)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isMeanAvailable</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>904126344aa4080298a4d3feeb596219</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual dataType</type>
      <name>nextSpike</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>ab21dddf3ac8580e23dc97a4210a10a4</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual dataType</type>
      <name>nextMeanValue</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>0268ea19c4407afab87b0bb834ddacb6</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual dataType</type>
      <name>nextStDeviationValue</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>4c777259903b3c999c4af9c83357955a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual dataType</type>
      <name>nbOfSpikes</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>02bf0fded8b55ec2df65870e00e5d604</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function" protection="protected">
      <type></type>
      <name>WaveformIterator</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>1971e5ee36997228eecd9057a7f46d8d</anchor>
      <arglist>(Waveforms *waveformsData)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>init</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>54c10b36926801e7abdb2f21f49db8b9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>Waveforms *</type>
      <name>waveforms</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>066a811754b4e2672fd5e3180b7464a2</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>dataType</type>
      <name>spikesIndex</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>5aad50fd3a0c27ded4589a89a4db210a</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>dataType</type>
      <name>meanIndex</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>24a31d686416b03fa487f608e05b0691</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>dataType</type>
      <name>stDeviationIndex</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>2980a4acae75a09db0786d745657752c</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>bool</type>
      <name>spikesAvailable</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>10db8580537cf1fb4c2b05ade075f627</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>bool</type>
      <name>meanAvailable</name>
      <anchorfile>classData_1_1WaveformIterator.html</anchorfile>
      <anchor>f00a32b4f27646b83a6347e196f9fe5c</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>DataProvider</name>
    <filename>classDataProvider.html</filename>
    <member kind="function">
      <type></type>
      <name>DataProvider</name>
      <anchorfile>classDataProvider.html</anchorfile>
      <anchor>c0f46a1b6591e24fb57682372c0fb3b3</anchor>
      <arglist>(KURL fileUrl)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>requestData</name>
      <anchorfile>classDataProvider.html</anchorfile>
      <anchor>0df9ff57ddcbad2ba07f62346a01f86c</anchor>
      <arglist>(long startTime, long endTime, QObject *initiator, long startTimeInRecordingUnits=0)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual bool</type>
      <name>isThreadsRunning</name>
      <anchorfile>classDataProvider.html</anchorfile>
      <anchor>5361517c17a7054ca22554d83f882d94</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>QString</type>
      <name>fileName</name>
      <anchorfile>classDataProvider.html</anchorfile>
      <anchor>2fa94f4ef65e78995b0182cbe9a03b55</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ErrorMatrixThread</name>
    <filename>classErrorMatrixThread.html</filename>
    <member kind="function">
      <type>Array&lt; double &gt; *</type>
      <name>getProbabilities</name>
      <anchorfile>classErrorMatrixThread.html</anchorfile>
      <anchor>3b7618bab79ada20d430688fbd0f6009</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>QValueList&lt; int &gt;</type>
      <name>getClusterList</name>
      <anchorfile>classErrorMatrixThread.html</anchorfile>
      <anchor>26129dc8616bde1d36f8a013211d6015</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>QValueList&lt; int &gt;</type>
      <name>getComputedClusterList</name>
      <anchorfile>classErrorMatrixThread.html</anchorfile>
      <anchor>308ff2068b632eaeb6ce4359f9d21e2a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>QValueList&lt; int &gt;</type>
      <name>getIgnoreClusterIndex</name>
      <anchorfile>classErrorMatrixThread.html</anchorfile>
      <anchor>eb8ab08fab225e145b197ebd06ba78df</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>stopProcessing</name>
      <anchorfile>classErrorMatrixThread.html</anchorfile>
      <anchor>5a0dc607bc355fd64ad76b0f62d46e98</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>ErrorMatrixEvent *</type>
      <name>getErrorMatrixEvent</name>
      <anchorfile>classErrorMatrixThread.html</anchorfile>
      <anchor>cd36cf8de427af54c29fff22f62ad122</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>run</name>
      <anchorfile>classErrorMatrixThread.html</anchorfile>
      <anchor>326b1fb6fc3b4fd19e16b28ab699eb26</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>ErrorMatrixEvent</name>
      <anchorfile>classErrorMatrixThread.html</anchorfile>
      <anchor>06549a6592efce18fca24e42e54146be</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend ErrorMatrixThread *</type>
      <name>ErrorMatrixView::computeMatrix</name>
      <anchorfile>classErrorMatrixThread.html</anchorfile>
      <anchor>b9c19911c5f1df60a892c8bf8e790119</anchor>
      <arglist>()</arglist>
    </member>
    <class kind="class">ErrorMatrixThread::ErrorMatrixEvent</class>
  </compound>
  <compound kind="class">
    <name>ErrorMatrixThread::ErrorMatrixEvent</name>
    <filename>classErrorMatrixThread_1_1ErrorMatrixEvent.html</filename>
    <member kind="function">
      <type>ErrorMatrixThread *</type>
      <name>parentThread</name>
      <anchorfile>classErrorMatrixThread_1_1ErrorMatrixEvent.html</anchorfile>
      <anchor>b700ce1f0ed2b179ffd34e4bbc071a05</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend ErrorMatrixEvent *</type>
      <name>ErrorMatrixThread::getErrorMatrixEvent</name>
      <anchorfile>classErrorMatrixThread_1_1ErrorMatrixEvent.html</anchorfile>
      <anchor>d8a9babe6954e255a0be7e980f882758</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ErrorMatrixView</name>
    <filename>classErrorMatrixView.html</filename>
    <base>ViewWidget</base>
    <member kind="slot">
      <type>bool</type>
      <name>isThreadsRunning</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>3fa450bd9e0ac2a7b6d9e89854aaf3b9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateMatrixContents</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>95bbcba77f32f6253f9d70f989c4afdb</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>clustersGrouped</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>be3e01992541a5adc96bbc6dbd54dbd1</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;groupedClusters, int newClusterId)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>clustersDeleted</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>b2b1bd0d12fa78b9d24438fd683ec58d</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;deletedClusters, int destinationCluster)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>removeSpikesFromClusters</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>8f3ec2d125523a383b2a744c970a001f</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, int destinationClusterId, QValueList&lt; int &gt; &amp;emptiedClusters)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>newClusterAdded</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>200d21282cb7cbd54d6e841bc1271e32</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, int clusterId, QValueList&lt; int &gt; &amp;emptiedClusters)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>newClustersAdded</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>24c27c88a90d54981101097e4f60462a</anchor>
      <arglist>(QMap&lt; int, int &gt; &amp;fromToNewClusterIds, QValueList&lt; int &gt; &amp;emptiedClusters)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>newClustersAdded</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>9f9593e1cc36644c3f648dd511e77e89</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;clustersToRecluster)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>renumber</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>2f84c47e90fd2d6725a292521768631c</anchor>
      <arglist>(QMap&lt; int, int &gt; &amp;clusterIdsOldNew)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>undoRenumbering</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>69b1ae818a8104a13154ea79529c6ad9</anchor>
      <arglist>(QMap&lt; int, int &gt; &amp;clusterIdsNewOld)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>undoAdditionModification</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>b5450c1a803893d54a708771ec9b600c</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;addedClusters, QValueList&lt; int &gt; &amp;updatedClusters)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>undoAddition</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>6e0559b8888f3e0e2c3353b9cf28ec95</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;addedClusters)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>undoModification</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>3ed3cac1cb79ffba02d9a4c9c75f34b9</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;updatedClusters)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>redoRenumbering</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>3207f1a1d5724f6869aa10e641ed2fe4</anchor>
      <arglist>(QMap&lt; int, int &gt; &amp;clusterIdsOldNew)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>redoAdditionModification</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>5d7b4bbb266d3af918c912d0ee37b7c6</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;addedClusters, QValueList&lt; int &gt; &amp;modifiedClusters, bool isModifiedByDeletion, QValueList&lt; int &gt; &amp;deletedClusters)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>redoAddition</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>817a9cbb4b65621f7613f1d034e24be0</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;addedClusters, QValueList&lt; int &gt; &amp;deletedClusters)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>redoModification</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>6a89bb07d7a1314431956527e9359931</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;updatedClusters, bool isModifiedByDeletion, QValueList&lt; int &gt; &amp;deletedClusters)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>redoDeletion</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>4bbf5248d4b4999c40359c9d1d5d3571</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;deletedClusters)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>print</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>38a7990d11741fb42db186e607dcb386</anchor>
      <arglist>(QPainter &amp;printPainter, QPaintDeviceMetrics &amp;metrics, bool whiteBackground)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>ErrorMatrixView</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>f419982fd014876aa5ef94cb57775a26</anchor>
      <arglist>(KlustersDoc &amp;doc, KlustersView &amp;view, QColor backgroundColor, KStatusBar *statusBar, QWidget *parent=0, const char *name=0, int minSize=50, int maxSize=4000, int windowTopLeft=-500, int windowBottomRight=1001, int border=0)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>willBeKilled</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>be7fdec65331be47d4bfca91637cc256</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>drawContents</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>49882967374ab5a4731805f0025248e8</anchor>
      <arglist>(QPainter *p)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>customEvent</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>0a45bd29e0fec237388d46d316f37e59</anchor>
      <arglist>(QCustomEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>resizeEvent</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>5918a9b5165b23dac19c3fd0f4cc48f3</anchor>
      <arglist>(QResizeEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mousePressEvent</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>21e97b064d9a688e057de77949a4144e</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mouseReleaseEvent</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>aaaa6d453f04fba350ee12b41c2f445d</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mouseMoveEvent</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>8638881f0a749ff652986be3065b1e3d</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mouseDoubleClickEvent</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>e0336730047333d04393848bcd120d69</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>ErrorMatrixThread</name>
      <anchorfile>classErrorMatrixView.html</anchorfile>
      <anchor>b5f8bfc8963455e3bd9f599e03941427</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>EventDescription</name>
    <filename>classEventDescription.html</filename>
    <member kind="function">
      <type></type>
      <name>EventDescription</name>
      <anchorfile>classEventDescription.html</anchorfile>
      <anchor>3b9691e17786f63e7e5df71ff160dd1f</anchor>
      <arglist>(const QString &amp;s)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>EventsProvider</name>
    <filename>classEventsProvider.html</filename>
    <base>DataProvider</base>
    <member kind="enumeration">
      <name>loadReturnMessage</name>
      <anchor>650a3830f7fd1b0393a6c21043b98a90</anchor>
      <arglist></arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>dataReady</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>e48e4f307cc9fbbb278b1c776f897a17</anchor>
      <arglist>(Array&lt; dataType &gt; &amp;times, Array&lt; int &gt; &amp;ids, QObject *initiator, QString providerName)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>nextEventDataReady</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>543c534fb1baf205ef89cb37df7a212a</anchor>
      <arglist>(Array&lt; dataType &gt; &amp;times, Array&lt; int &gt; &amp;ids, QObject *initiator, QString providerName, long startingTime)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>previousEventDataReady</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>ce6a554d8f1d5c68dca9487d47f497a8</anchor>
      <arglist>(Array&lt; dataType &gt; &amp;times, Array&lt; int &gt; &amp;ids, QObject *initiator, QString providerName, long startingTime)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>newEventDescriptionCreated</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>3780ad0f0a5cb7514a2903e2ef51d599</anchor>
      <arglist>(QString providerName, QMap&lt; int, int &gt; oldNewEventIds, QMap&lt; int, int &gt; newOldEventIds, QString eventDescriptionAdded)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>eventDescriptionRemoved</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>e22f5448150f167a147c16a27ef61c95</anchor>
      <arglist>(QString providerName, QMap&lt; int, int &gt; oldNewEventIds, QMap&lt; int, int &gt; newOldEventIds, int eventIdToRemove, QString eventDescriptionToRemove)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>EventsProvider</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>f5a5408a39df110a761c0a05010c138f</anchor>
      <arglist>(KURL fileUrl, int currentSamplingRate, int position=25)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>requestData</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>d6dec09f16591b2f53cbddbdc96babb1</anchor>
      <arglist>(long startTime, long endTime, QObject *initiator, long startTimeInRecordingUnits=0)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>requestNextEventData</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>3c5819196ba81514cdf34eec143ee34e</anchor>
      <arglist>(long startTime, long timeFrame, QValueList&lt; int &gt; selectedIds, QObject *initiator)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>requestPreviousEventData</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>e0c949e211c42562429ca95b9a260499</anchor>
      <arglist>(long endTime, long timeFrame, QValueList&lt; int &gt; selectedIds, QObject *initiator)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>loadData</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>cceb976433725bd97a19f3c546fa7cfd</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getNbEvents</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>9f02275111e4072e7cbd095a7d4191d1</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QMap&lt; EventDescription, int &gt;</type>
      <name>eventDescriptionIdMap</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>9fcb77e64326554bc9adefdc7a6eb9d6</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QMap&lt; int, EventDescription &gt;</type>
      <name>eventIdDescriptionMap</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>0b33e8e7f42dbecd9e8c56fc4329531e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>getName</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>9dfb521f56c0d4627d01c40b50133c87</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getDescriptionLength</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>55715274fc885148869b6bf4792cc4c8</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setEventPosition</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>c67590bd2d844fa2f63c1db62b105900</anchor>
      <arglist>(int position)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>modifiedEvent</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>467a0837455cab20b9ffe80aefed2495</anchor>
      <arglist>(int selectedEventId, double time, double newTime)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>removeEvent</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>9653a7e52887010e832669bc532fd485</anchor>
      <arglist>(int selectedEventId, double time)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>addEvent</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>da7ddce431ab341fd442edd8a3656d49</anchor>
      <arglist>(QString eventDescriptionToAdd, double time)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>undo</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>33b3b25df10d7f1cd1056e4a5cd89606</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>redo</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>699d0aa9a45ee2f51fb2d955fcfd52ce</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>clearUndoRedoData</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>3c2a61d9efc69320fc9aa7e5b42e6a72</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>save</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>6f55d7200cc8ab7b038123309805fbb0</anchor>
      <arglist>(QFile *eventFile)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isModified</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>eff38c275b0ab413a0a54ecaa61e066d</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>initializeEmptyProvider</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>c929d39f562537cd44d7413739673376</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateSamplingRate</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>e3d90fb5b11664b6c5c3ae59cbe03700</anchor>
      <arglist>(int rate)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>renameEvent</name>
      <anchorfile>classEventsProvider.html</anchorfile>
      <anchor>db689c023b77cb984bbc2ac07ccae257</anchor>
      <arglist>(int selectedEventId, QString newEventDescription, double time)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>GroupingAssistant</name>
    <filename>classGroupingAssistant.html</filename>
    <member kind="function">
      <type>Array&lt; double &gt; *</type>
      <name>computeMeanProbabilities</name>
      <anchorfile>classGroupingAssistant.html</anchorfile>
      <anchor>995b06011b4c35aa90f52c81039f78be</anchor>
      <arglist>(Data &amp;clusteringData, QValueList&lt; int &gt; &amp;clusterList, QValueList&lt; int &gt; &amp;computedClusterList, QValueList&lt; int &gt; &amp;ignoreClusterIndex)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>stopComputing</name>
      <anchorfile>classGroupingAssistant.html</anchorfile>
      <anchor>b7f001302469b9e2dda79e9dc460263f</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ItemColors</name>
    <filename>classItemColors.html</filename>
    <member kind="function">
      <type></type>
      <name>ItemColors</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>eade0dc970b16eb947e5a92d32c1a36d</anchor>
      <arglist>(const ItemColors &amp;itemcolors)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>removeAll</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>b1078b093e8bdda2525ae8de310d7386</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual QColor</type>
      <name>color</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>5331e934e03ba6a5bb2cae1eae5d75bc</anchor>
      <arglist>(int identifier, SelectionMode mode=BY_ITEM_NUMBER)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setColor</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>cd8b2f4b4ab0f6f59bb9d7173bb2f3d7</anchor>
      <arglist>(int identifier, QColor color, SelectionMode mode=BY_ITEM_NUMBER)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual int</type>
      <name>itemId</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>1e843f3a9dc5e7473aa6e60668776259</anchor>
      <arglist>(int index)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>itemIndex</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>720e7e7ceaeb086314bffb0b633d73e3</anchor>
      <arglist>(int itemId) const</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual QString</type>
      <name>itemLabel</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>d6106a973d0d779f1d90a3d6413c3750</anchor>
      <arglist>(int index)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual QString</type>
      <name>itemLabelById</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>75f3487df5bc1abc46df29698381e485</anchor>
      <arglist>(int id)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual bool</type>
      <name>contains</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>c14bf1392ed92cd06510247b7c579de2</anchor>
      <arglist>(int itemId)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual bool</type>
      <name>isColorChanged</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>d4962231910670f75f8a02d945205463</anchor>
      <arglist>(int identifier, SelectionMode mode=BY_ITEM_NUMBER)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setColorChanged</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>4992dcd7a41b0b186c50c1dae6223d7e</anchor>
      <arglist>(int identifier, bool changed, SelectionMode mode=BY_ITEM_NUMBER)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual uint</type>
      <name>numberOfItems</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>da9479be1e644aef36e058fa859f5183</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual bool</type>
      <name>isColorChanged</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>d1205053a2109dd30dec9d91a4ac1cd0</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setColorChanged</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>447b7f891e318023c45acf552e90817b</anchor>
      <arglist>(bool changed)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual uint</type>
      <name>append</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>ad18853c399635eba74382945cbe0955</anchor>
      <arglist>(int itemId, QColor color)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual uint</type>
      <name>append</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>cb43aae1e636d9491ed6ca311c70d43c</anchor>
      <arglist>(int itemId, QString label, QColor color)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>insert</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>fe00eda17d35be0d60bce0b6a78c7488</anchor>
      <arglist>(int itemId, QColor color, int index)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>insert</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>7d5c5828f1ee1d000d3fb53ae84561d0</anchor>
      <arglist>(int itemId, QString label, QColor color, int index)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual bool</type>
      <name>remove</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>2ab1cc59206fd12f4a4cf7d88a823f66</anchor>
      <arglist>(int identifier, SelectionMode mode=BY_ITEM_NUMBER)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual QValueList&lt; int &gt;</type>
      <name>colorChangedItemList</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>c192b8cf920d42a4a9385ea5b900a267</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>resetAllColorStatus</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>7e0a91ad96e51d9e59b0cd4b2f1f67dd</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>changeItemId</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>3f93c952e7bf8cae24e2a05a71452bf4</anchor>
      <arglist>(int index, int newItemId)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>changeItemLabel</name>
      <anchorfile>classItemColors.html</anchorfile>
      <anchor>7ec5592ee1998122b19bffcf9f2c0089</anchor>
      <arglist>(int index, QString newItemLabel)</arglist>
    </member>
    <class kind="struct">ItemColors::ItemColor</class>
  </compound>
  <compound kind="class">
    <name>KlustersApp</name>
    <filename>classKlustersApp.html</filename>
    <member kind="slot">
      <type>bool</type>
      <name>queryClose</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>02af6812b32ae17bf3e46d4ddc5c4b06</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>slotUpdateParameterBar</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>64db61eab5b2a48580fc758d0cc23a1e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>executePreferencesDlg</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>170a157fcd6460b7d6def6b258c3db18</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>applyPreferences</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>c7c2a96cafce4fb33453e9a024ed70b9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>initializePreferences</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>63021de4ec271742dfaf23ec8def318e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>KlustersApp</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>0b8ca990fc21039060328bcd80b002f5</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>openDocumentFile</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>fe3f87a26c56d51854693562a45d5441</anchor>
      <arglist>(const KURL &amp;url=0)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>importDocumentFile</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>30f4dc1238024f5371f7c7fe1279689a</anchor>
      <arglist>(const KURL &amp;url=0)</arglist>
    </member>
    <member kind="function">
      <type>KlustersView *</type>
      <name>activeView</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>ffec18f34c31a3c7a04b32b38df1b57b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>doesActiveDisplayContainProcessWidget</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>0498cf3621cee3770053fa4ecd62fcd5</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>widgetAddToDisplay</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>0f5dd24aa870c8602a9eb71076c53be2</anchor>
      <arglist>(KlustersView::DisplayType displayType, KDockWidget *docWidget)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>widgetRemovedFromDisplay</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>31ada5d03f8482a6a236249ae4975415</anchor>
      <arglist>(KlustersView::DisplayType displayType)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isExistAnErrorMatrix</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>b90c359a3bd5634318644ebeec6c6f9a</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateDimensionSpinBoxes</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>e96fbff62ecc16ebfb812c14f923485f</anchor>
      <arglist>(int dimensionX, int dimensionY)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateCorrelogramViewVariables</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>181734dfbde1d4093c44dce74434240e</anchor>
      <arglist>(int binSize, int timeWindow, bool isShoulderLine, Data::ScaleMode correlationScale)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>bool</type>
      <name>queryExit</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>a8856c9ee9dc20894f741e324aaf96a0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>saveProperties</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>2636b13992ec00de7a03bd1ffdc8c89f</anchor>
      <arglist>(KConfig *config)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>readProperties</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>3457658dc58cdd314127429d41a0fe9d</anchor>
      <arglist>(KConfig *config)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>customEvent</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>902bd985821bafdd2b7c24cacf125da6</anchor>
      <arglist>(QCustomEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>showEvent</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>8d2520227c673b59ea1b47432664bf4a</anchor>
      <arglist>(QShowEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>bool</type>
      <name>eventFilter</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>273691ae8af78d611da8300b820521cf</anchor>
      <arglist>(QObject *object, QEvent *event)</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend class</type>
      <name>Validator</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>3dd136e4c973602eff20d1973e82f11c</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend class</type>
      <name>BinSizeValidator</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>c7264e00e4944af3aba3399ec7573aa0</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend class</type>
      <name>CorrelogramsHalfTimeFrameValidator</name>
      <anchorfile>classKlustersApp.html</anchorfile>
      <anchor>e14d9ded8069e6c6d6cb44923bd30836</anchor>
      <arglist></arglist>
    </member>
    <class kind="class">KlustersApp::BinSizeValidator</class>
    <class kind="class">KlustersApp::CorrelogramsHalfTimeFrameValidator</class>
    <class kind="class">KlustersApp::printDialogPage</class>
    <class kind="class">KlustersApp::Validator</class>
  </compound>
  <compound kind="class">
    <name>KlustersDoc</name>
    <filename>classKlustersDoc.html</filename>
    <member kind="enumeration">
      <name>OpenSaveCreateReturnMessage</name>
      <anchor>eab873e48cbd8644a083bf323ed35fcb</anchor>
      <arglist></arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateAllViews</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>467445bb7dfe51211b835fa0f04b18f6</anchor>
      <arglist>(KlustersView *sender)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>renumberClusters</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>ec532d62838002de5359f4a0afe46b8a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>launchAutoSave</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>1371fff21986685ef7e59e07a3a04687</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>updateUndoNb</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>acd63c3320084482bdbf505bd074a933</anchor>
      <arglist>(int undoNb)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>updateRedoNb</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>e05f554180cd6a644ccd680d6b8fa0a9</anchor>
      <arglist>(int undoNb)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>clustersGrouped</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>006db182e9a8276f64117cc86e0b9688</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;groupedClusters, int newClusterId)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>clustersDeleted</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>3f79d8140fa19487bc6db08791b17228</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;deletedClusters, int destinationCluster)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>removeSpikesFromClusters</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>a0c334f6cdd1cffc7ef21f18c5b8e2d6</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, int destinationClusterId, QValueList&lt; int &gt; &amp;emptiedClusters)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>newClusterAdded</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>0ff1f055a17d40e3cc33a4106c1ca7dc</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, int clusterId, QValueList&lt; int &gt; &amp;emptiedClusters)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>newClustersAdded</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>cf53808561f7ce304d967dac64f76a22</anchor>
      <arglist>(QMap&lt; int, int &gt; &amp;fromToNewClusterIds, QValueList&lt; int &gt; &amp;emptiedClusters)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>renumber</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>8ee64b11928afbbda25f82bacacb2075</anchor>
      <arglist>(QMap&lt; int, int &gt; &amp;clusterIdsOldNew)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>undoRenumbering</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>65c50839da42b446b10842a4f20b5321</anchor>
      <arglist>(QMap&lt; int, int &gt; &amp;clusterIdsNewOld)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>undoAdditionModification</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>b2c6fef6a92639246badb167e1da9683</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;addedClusters, QValueList&lt; int &gt; &amp;updatedClusters)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>undoAddition</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>cd1daaa12d8adb16529372e634e76236</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;addedClusters)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>undoModification</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>65973b4145f1f4bb9d564188c8251839</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;updatedClusters)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>redoRenumbering</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>2fc795c146dc84e268e99b15ebd2c455</anchor>
      <arglist>(QMap&lt; int, int &gt; &amp;clusterIdsOldNew)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>redoAdditionModification</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>f9e9239fe3c0e6750f3edd80b478b1a7</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;addedClusters, QValueList&lt; int &gt; &amp;modifiedClusters, bool isModifiedByDeletion, QValueList&lt; int &gt; &amp;deletedClusters)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>redoAddition</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>2934b99dec758c1b9f08e18fb0e2408d</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;addedClusters, QValueList&lt; int &gt; &amp;deletedClusters)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>redoModification</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>0a31ca7e54d3d8cf56277e4e6e602ee3</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;updatedClusters, bool isModifiedByDeletion, QValueList&lt; int &gt; &amp;deletedClusters)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>redoDeletion</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>7960ee7760e9d9760aada480568927fe</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;deletedClusters)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>newClustersAdded</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>d4306b85e7e650c71e40e4803a106014</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;clustersToRecluster)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>spikesDeleted</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>7faa2a650e85a91450d3c55dfcd817fe</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>KlustersDoc</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>7b01619b383bf6ead17246a1c9cedc3e</anchor>
      <arglist>(QWidget *parent, ClusterPalette &amp;clusterPalette, bool autoSave, int savingInterval)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>~KlustersDoc</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>31813a90e5c0941dcd77a646e0041fd9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>addView</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>64cd839a0c4f9ffa2c04e2ad2b9b6cb5</anchor>
      <arglist>(KlustersView *view)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>removeView</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>8c4df1f23efade7a732cc2af8c484c3b</anchor>
      <arglist>(KlustersView *view)</arglist>
    </member>
    <member kind="function">
      <type>KlustersView *</type>
      <name>firstView</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>ea041085772c0b75ee7a3025d2215aa8</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isLastView</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>7e8f8e0a189de1b18d6edf72542e7730</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>canCloseView</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>1746ca282382238d43dda837d96667b9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setModified</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>5869da5edaeecaefa5bb0d21fa8d4501</anchor>
      <arglist>(bool m=true)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isModified</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>bf5278f80343282c4fca5fe10483dc58</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>openDocument</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>565e5e3b6e9752759c1d17a08608c3db</anchor>
      <arglist>(const KURL &amp;url, QString &amp;errorInformation, const char *format=0)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>importDocument</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>965d178d9d208a1a27e21929d35bdab3</anchor>
      <arglist>(const KURL &amp;url, const char *format=0)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>closeDocument</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>2a94c08a4f87b760d5f5d71bf8bb5fb3</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>canCloseDocument</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>b118244021cdae70f39a40660fbff06d</anchor>
      <arglist>(KlustersApp *mainWindow, QString callingMethod)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>saveDocument</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>272e57e163b63f24f5ce0792af13e336</anchor>
      <arglist>(const KURL &amp;url, const char *format=0)</arglist>
    </member>
    <member kind="function">
      <type>const KURL &amp;</type>
      <name>url</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>3f8c9a24ba2471f0539ffaeb767683cd</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setURL</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>3fcc2adafc4d18d41fff9469a93d176f</anchor>
      <arglist>(const KURL &amp;url)</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>documentName</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>085afd1fb2c747f404f735117b99df94</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>documentBaseName</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>f1476c293d92a4fe6cef9cd1cad6d850</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>documentDirectory</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>76f95a5ba4044bb1b9f758628aa5fae1</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>ItemColors &amp;</type>
      <name>clusterColors</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>6cae6993a1d1aadb8d9350095c83d580</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>Data &amp;</type>
      <name>data</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>96ee8dbf3a50f580d76f024c281f7a45</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>singleColorUpdate</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>9c4a38944160f4503d86449743785b84</anchor>
      <arglist>(int clusterId, KlustersView &amp;activeView)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>shownClustersUpdate</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>c67031ece1a596aa7573e287775c5a90</anchor>
      <arglist>(QValueList&lt; int &gt; clustersToShow, KlustersView &amp;activeView)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>shownClustersUpdate</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>a1641748f9413716fb9701a02c6080ea</anchor>
      <arglist>(QValueList&lt; int &gt; clustersToShow)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>shownClustersUpdate</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>ba6ee80fefc8b0bcf78f834f547781aa</anchor>
      <arglist>(QValueList&lt; int &gt; clustersToShow, QValueList&lt; int &gt; previousSelectedClusterPairs)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>addClustersToActiveView</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>1d81e60eb44470fe77719494837d1047</anchor>
      <arglist>(QValueList&lt; int &gt; clustersToShow)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showAllClustersExcept</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>04e2ae3a4cec6bf6ebddc1b606f7fbb7</anchor>
      <arglist>(QValueList&lt; int &gt; clustersToHide)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>groupClusters</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>9769ce3846285ed3de4534db061db9a3</anchor>
      <arglist>(QValueList&lt; int &gt; clustersToGroup, KlustersView &amp;activeView)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>deleteClusters</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>d89b8f9ff50d32dcc1bdc52d448428ae</anchor>
      <arglist>(QValueList&lt; int &gt; clustersToDelete, KlustersView &amp;activeView, int clusterId)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>deleteNoise</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>b97c6e163bd1f0cee959e993c5952552</anchor>
      <arglist>(QRegion &amp;region, const QValueList&lt; int &gt; &amp;clustersOfOrigin, int dimensionX, int dimensionY)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>deleteArtifact</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>814ccc9b6b96cf848f1198691ef93287</anchor>
      <arglist>(QRegion &amp;region, const QValueList&lt; int &gt; &amp;clustersOfOrigin, int dimensionX, int dimensionY)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>createNewCluster</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>8a5a96626e4d9e368d8bc670a1bbd7bb</anchor>
      <arglist>(QRegion &amp;region, const QValueList&lt; int &gt; &amp;clustersOfOrigin, int dimensionX, int dimensionY)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>createNewClusters</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>6fd0287ec2dd26cfff4081fd7c73fc44</anchor>
      <arglist>(QRegion &amp;region, const QValueList&lt; int &gt; &amp;clustersOfOrigin, int dimensionX, int dimensionY)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>nbDimensions</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>e11ba0b7320e888adb878be044120b60</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>undo</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>dd25ffec7e4a1300642e06eecabfcb8f</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>redo</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>6fe053578b7d4e3f744def28e1f5b228</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>temporaryFile</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>8c350448a50fcfa5ec7bf00e413faab8</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>getSpikeFileName</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>a830ac07f9d0e705e665eb134c156513</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>maxTime</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>2847d2fd1a29a9ccbb95d1f76e639780</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>totalNbOfSpikes</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>ee019b0530d109b923c72c64fa27879e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>CloseDocumentEvent *</type>
      <name>getCloseDocumentEvent</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>9c3ea5572aee6c7a57379c546e278468</anchor>
      <arglist>(QString origin)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setAutoSaving</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>7a4d237a21568b38b77645081fe77a05</anchor>
      <arglist>(int interval)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateAutoSavingInterval</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>63a07f2f54559efe206b0b1304102ba8</anchor>
      <arglist>(int interval)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>stopAutoSaving</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>62a0a7dbb9953b81b721726fe0e50637</anchor>
      <arglist>(bool currentDocument=false)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>customEvent</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>be5b62bccc2ddc1fcd2f37fe4548b835</anchor>
      <arglist>(QCustomEvent *event)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setGain</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>b7d03b220005de15ae172043231fa0be</anchor>
      <arglist>(int acquisitionGain)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setTimeStepInSecond</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>f617bf250bdd0ba0ded0a1d604bd1d04</anchor>
      <arglist>(int step)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setChannelPositions</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>ffa7da699cbe815def62825812ad4e7a</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;positions)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>nbOfchannels</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>7f587d241814806065548a235c4842cd</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>totalNbOfPCAs</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>52208d41c6d6b381707939d31543f169</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>nbUndoChangedCleaning</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>de63f485af8e801044a67d1aa350c1f5</anchor>
      <arglist>(int newNbUndo)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setBackgroundColor</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>62ff96ab552a6439ff03317a3127b5c1</anchor>
      <arglist>(QColor backgroundColor)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>createFeatureFile</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>edf4bab0c8d93a5daf4b39917245ce33</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;clustersToRecluster, QString reclusteringFetFileName)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>integrateReclusteredClusters</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>49f0741082fc96e0cc712f3d31510be5</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;clustersToRecluster, QValueList&lt; int &gt; &amp;reclusteredClusterList, QString reclusteringFetFileName)</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>currentElectrodeGroupID</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>ce30c77afd8904788b260d7ff36cb30d</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>reclusteringUpdate</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>d58cbcd5b0e2361f4b0aa72db0d8082c</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;clustersToRecluster, QValueList&lt; int &gt; &amp;reclusteredClusterList)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isTraceViewVariablesAvailable</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>310cd10389dedd7059adee3a9a977d8a</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>areTraceDataAvailable</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>6d2448f387b3ccffc933772c091329ef</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isTracesProvider</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>a48dc2bc13cd152a3a002c66ad175080</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>createProviders</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>58fc1007e2f1fbd63c176b82230beef9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getAcquisitionGain</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>c8679cde7dd64a60ad50b7b45892f9c0</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getGain</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>18d403e651af830c3cbe02f7397caa6e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>ChannelColors *</type>
      <name>channelColors</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>0a94797caae9e14e6e495871951154bd</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QMap&lt; int, int &gt; *</type>
      <name>getDisplayChannelsGroups</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>5b58f2e6714e06dfb25a3e890042c741</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>QMap&lt; int, QValueList&lt; int &gt; &gt; *</type>
      <name>getDisplayGroupsChannels</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>cb38507b3829ad57f3d146df90335bdf</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>QMap&lt; int, int &gt; *</type>
      <name>getChannelsSpikeGroups</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>3cf048544170ab2dd9cd642b57239f0a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>QMap&lt; int, QValueList&lt; int &gt; &gt; *</type>
      <name>getSpikeGroupsChannels</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>3f41238b99fc0a9afd99cdb3efd5e5eb</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>QValueList&lt; int &gt; &amp;</type>
      <name>getCurrentChannels</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>629e1cdb55f072634b560b7440f8f661</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>QMap&lt; int, QValueList&lt; int &gt; &gt; *</type>
      <name>getDisplayGroupsClusterFile</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>a66ad80ef447132edc299c4dfb82cce8</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>TracesProvider *</type>
      <name>getTraceProvider</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>a90ad8f85708cdbd2d5dc54bbff3c057</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>ClustersProvider *</type>
      <name>getClustersProvider</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>c297140e25f14b9ff2585aae95a31664</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getNbSamplesBeforePeak</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>bee1286f4c238a9a803c534cf56d3fee</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getNbSamplesAfterPeak</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>833a6a9474410fe6af501a534f67f91a</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showUserClusterInformation</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>184d520896142c3056b23009cfe43484</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend class</type>
      <name>KlustersView</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>8a96623685d8dc59733ad2144dc37792</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>CloseDocumentEvent</name>
      <anchorfile>classKlustersDoc.html</anchorfile>
      <anchor>a6b332799c41f958e2c87b66bee1bf1f</anchor>
      <arglist></arglist>
    </member>
    <class kind="class">KlustersDoc::CloseDocumentEvent</class>
  </compound>
  <compound kind="class">
    <name>KlustersDoc::CloseDocumentEvent</name>
    <filename>classKlustersDoc_1_1CloseDocumentEvent.html</filename>
    <member kind="function">
      <type>QString</type>
      <name>methodOfOrigin</name>
      <anchorfile>classKlustersDoc_1_1CloseDocumentEvent.html</anchorfile>
      <anchor>3dcd438bf437f4ec0240a460f54a3074</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend CloseDocumentEvent *</type>
      <name>KlustersDoc::getCloseDocumentEvent</name>
      <anchorfile>classKlustersDoc_1_1CloseDocumentEvent.html</anchorfile>
      <anchor>06a2880b2271742c16568efa90a6ab72</anchor>
      <arglist>(QString origin)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>KlustersView</name>
    <filename>classKlustersView.html</filename>
    <member kind="enumeration">
      <name>DisplayType</name>
      <anchor>293293dc2641e78395b7184d115e7805</anchor>
      <arglist></arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>clusterDockClosed</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>c1e2ae6add1d1544f9b2df4e14f121cf</anchor>
      <arglist>(QWidget *clusterView)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>waveformDockClosed</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>83eaba8bcacd8c8ccba761a58e8e5328</anchor>
      <arglist>(QWidget *waveformView)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>correlogramDockClosed</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>bb6f0f3d2de45a5ebb4cde6b56159b82</anchor>
      <arglist>(QWidget *correlogramView)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>errorMatrixDockClosed</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>97f23addc3cbbe7de5471d0efa2bd9f9</anchor>
      <arglist>(QWidget *errorMatrixView)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>traceDockClosed</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>0c93919486e8efb626d0322b62b2ac23</anchor>
      <arglist>(QWidget *traceWidget)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setStartAndDuration</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>1e6e7cdf781c127a7c8a6bae3daf647f</anchor>
      <arglist>(long start, long duration)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>updatedDimensions</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>b346e138ced7f417d2e01128f486e9c8</anchor>
      <arglist>(int dimensionX, int dimensionY)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>singleColorUpdated</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>a0f17c2cf5e2ed706067f5f9a8f0f1a3</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>clusterRemovedFromView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>6c935d80cb99f640557711039a801a9b</anchor>
      <arglist>(int ClusterId, bool active)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>clusterAddedToView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>cc11ad5a66994c1ac7638527e6d9f1f8</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>newClusterAddedToView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>95e482265378d4aa6cc8799cf418de75</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, int clusterId, bool active)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>newClusterAddedToView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>869e72107601812a51d779eaed261bb5</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>spikesRemovedFromClusters</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>6bd18a6e4b1d981b02efba8c3bb7d506</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, bool active)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>modeToSet</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>20139c3443cdcc9a480ace466c285740</anchor>
      <arglist>(BaseFrame::Mode selectedMode)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>spikesAddedToCluster</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>738863ef826d2e10ee30f4c58e9932ef</anchor>
      <arglist>(int destinationClusterId, bool active)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>updateContents</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>b430c2c60aea21a5e31913cf72d2aa47</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>emptySelection</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>cd164787822f2577a4033a6873c03320</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>modifiedClusters</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>96d2acdbc0ffa043710f669c6694faca</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;modifiedClusters, bool active, bool isModifiedByDeletion=false)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>modifiedClustersUndo</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>1dd9a941c82e889f18fe955cfb260a29</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;modifiedClusters, bool active)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>updatedTimeFrame</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>264ad6c3a9a830a8fb5038d24034f262</anchor>
      <arglist>(long start, long timeFrameWidth)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>sampleMode</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>8db341465faa191673cb243fc1b12dcf</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>timeFrameMode</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>688e986ba15551deda93114ac2ac1502</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>meanPresentation</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>e8b356431c12be139518400a7ada19c3</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>allWaveformsPresentation</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>4847c96eaa1fa9f39c464fa7c35590bd</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>overLayPresentation</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>a5e15f55fe31603ff58509ff661846b1</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>sideBySidePresentation</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>1aaf3ad4ac045e8e8f879a7cac45fc7c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>increaseAmplitude</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>dd814e61199bc05c07e62b0fdfb23a8a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>decreaseAmplitude</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>c6f01c0f5731ed7a5d590c282fddb9ae</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>updateDisplayNbSpikes</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>ffd15a9e1b07459e947b8a28c6f15fad</anchor>
      <arglist>(long nbSpikes)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>increaseAmplitudeofCorrelograms</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>95f68832aaa01420c836755542e43811</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>decreaseAmplitudeofCorrelograms</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>2fcc93be29e398e133c73ccec897ac3e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>noScale</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>25ceabb628a90aa4b7a038df98ddd858</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>maxScale</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>82d773bf8b917618b7ada0ea21363a63</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>shoulderScale</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>709ee7d77ad8dce3be265a9d91ffd320</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>updatedBinSizeAndTimeFrame</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>6dfa7ce8704ad1d305d1fdf9f4f3ccf6</anchor>
      <arglist>(int size, int timeFrame)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>setShoulderLine</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>37b4e0a30eb43c6575ae9262c0e21401</anchor>
      <arglist>(bool b)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>updateDrawing</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>715267d9010f2e31823a721ae378f031</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>changeGain</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>28dc36628a15003df3b5584966c51612</anchor>
      <arglist>(int acquisitionGain)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>changeTimeInterval</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>52e21e38f18261aca7a154a1367cfc1a</anchor>
      <arglist>(int step, bool active)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>changeChannelPositions</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>b2ce81dd0bb01c8adbad0f6ce5812268</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;positions)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>computeProbabilities</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>a9827528729e950cb1bfbfc82bda3c80</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>changeBackgroundColor</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>f6547e580bb870eccd13b369a2f76db5</anchor>
      <arglist>(QColor color)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>clustersRenumbered</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>40c7d3c0e9af5f1c1b7b1618235f5210</anchor>
      <arglist>(bool active)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>updateClusters</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>d05ac44524ea902878e4ba37d32d2963</anchor>
      <arglist>(QString name, QValueList&lt; int &gt; &amp;clustersToShow, ItemColors *clustersColors, bool active)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>increaseAllAmplitude</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>e36a2480b2cce6bcb1f6af4f22792ce7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>decreaseAllAmplitude</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>be518f88d0f4419d8eac392269ef65a2</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>showLabels</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>bf6c5c4f6504312d21492ef7d01b676f</anchor>
      <arglist>(bool show)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>nextCluster</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>98f25e17f2996592f0986a460b19ecbf</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>previousCluster</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>246796cabc249709d6a5c711162a82f3</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>KlustersView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>9967fcfcbce21b400e08b510ae32a8c7</anchor>
      <arglist>(KlustersApp &amp;mainWindow, KlustersDoc &amp;doc, QColor backgroundColor, int initialDimensionX, int initialDdimensionY, QValueList&lt; int &gt; *initialClusterList, DisplayType type, QWidget *parent, const char *name, int wflags, KStatusBar *statusBar, int timeInterval, int maxAmplitude, QValueList&lt; int &gt; positions, bool isTimeFrameMode=false, long start=0, long timeFrameWidth=0, long nbSpkToDisplay=0, bool overLay=false, bool mean=false, int binSize=0, int correlationTimeFrame=0, Data::ScaleMode scale=Data::MAX, bool shoulderLine=true, long startingTime=0, long duration=100, bool labelsDisplay=false, QPtrList&lt; QValueList&lt; int &gt; &gt; undoList=QPtrList&lt; QValueList&lt; int &gt; &gt;(), QPtrList&lt; QValueList&lt; int &gt; &gt; redoList=QPtrList&lt; QValueList&lt; int &gt; &gt;())</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>~KlustersView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>a8b7d6797e00b5f301296366baa5007e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>KlustersDoc &amp;</type>
      <name>getDocument</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>e21771240f0e032e60660c0d80858af2</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>update</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>5061b0e1cf0d4561c0d7062dbab99aca</anchor>
      <arglist>(KlustersView *pSender)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>print</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>952dfc734809e7272d9e0274a9f67520</anchor>
      <arglist>(KPrinter *printer, QString filePath, bool whiteBackground)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>addView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>c210d60b0eb959cd865cad9c45f0479b</anchor>
      <arglist>(KDockWidget *docWidget, DisplayType displayType, QColor backgroundColor, KStatusBar *statusBar, int timeInterval, int maxAmplitude, QValueList&lt; int &gt; positions)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateDimensions</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>71c7bf35fbd41f4cc6b62efb4b17cc7a</anchor>
      <arglist>(int dimensionX, int dimensionY)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>abscissaDimension</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>b08defbbf0a202c34e6a4f1cac30d0de</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ordinateDimension</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>4e268de32e62d7d36365b68f29c65204</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>const QValueList&lt; int &gt; &amp;</type>
      <name>clusters</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>ee0d5fb1697d8aefcdf7a0f817b13eba</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateColors</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>82e82d8557401e2af7127b7284cf060a</anchor>
      <arglist>(bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showAllWidgets</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>2d7666e4b1b79f207ebe930e43752389</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateViewContents</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>cd7dcf7e0fbea65f8432fcc3b2e8b844</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>singleColorUpdate</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>2098456f54b924bb246e1c35e48520bd</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>shownClustersUpdate</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>bf01ddb9b13af67a6f0e8e2497ee9061</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;clustersToShow)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>groupedClustersUpdate</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>1534e0443926037c309c0266c8268e55</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;groupedClusters, int newClusterId, bool active)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>clustersDeletionUpdate</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>303ef96752973d9c6ad50505d6865a0a</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;deletedClusters, int destinationCluster, bool active)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>clustersDeletionUpdate</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>ccd986ac272797d1bed4b218f8e85979</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;deletedClusters, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>addNewClusterToView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>17187224c49639093376543315c7003f</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, int clusterId, QValueList&lt; int &gt; &amp;emptiedClusters, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>addNewClustersToView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>ef51d5dfd2c02c34eb515338f97a8698</anchor>
      <arglist>(QMap&lt; int, int &gt; &amp;fromToNewClusterIds, QValueList&lt; int &gt; &amp;emptiedClusters, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>removeSpikesFromClustersInView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>6843c8de90a0bdeed31cbbcbf9e6303a</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, int destinationClusterId, QValueList&lt; int &gt; &amp;emptiedClusters, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setMode</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>197bea78c1061e13e7b92c329ef7bdd1</anchor>
      <arglist>(BaseFrame::Mode selectedMode)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setCurrentViewWidget</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>7cda0694308d58b91f8b1abf3f82e0ec</anchor>
      <arglist>(ViewWidget *current)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>selectionIsEmpty</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>3c01568f059bcd40c9e8c68e9c1c4390</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>undo</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>8fa5087456e0239408ac7583da86f5fa</anchor>
      <arglist>(bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>undoAddedClusters</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>16ab804ae89fae85635547b0d19dd43f</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;addedClusters, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>undoModifiedClusters</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>14fdc911a881b6a2ec67c06a9f8ba805</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;updatedClusters, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>undo</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>aae39f1e75893cc0afc87f96d4d488d2</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;addedClusters, QValueList&lt; int &gt; &amp;updatedClusters, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>redo</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>7d2e30a24ad1dcc643a0ba12ff1a1dbf</anchor>
      <arglist>(bool active, QValueList&lt; int &gt; &amp;deletedClusters)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>redoAddedClusters</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>85ad8baca81c166bc277a46d2010fdb7</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;addedClusters, bool active, QValueList&lt; int &gt; &amp;deletedClusters)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>redoModifiedClusters</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>d5f9c5223b4610141134eaf9e1ac8b73</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;updatedClusters, bool isModifiedByDeletion, bool active, QValueList&lt; int &gt; &amp;deletedClusters)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>redo</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>247e012ea71a650476a0b77ec05a5e25</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;addedClusters, QValueList&lt; int &gt; &amp;modifiedClusters, bool isModifiedByDeletion, bool active, QValueList&lt; int &gt; &amp;deletedClusters)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>renumberClusters</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>10093e43b7934a15931da51245d0279a</anchor>
      <arglist>(QMap&lt; int, int &gt; &amp;clusterIdsOldNew, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>undoRenumbering</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>417ef84af8882d16288c3b343bb153e8</anchor>
      <arglist>(QMap&lt; int, int &gt; &amp;clusterIdsNewOld, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>redoRenumbering</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>45d11ec7879ccb3f94191b95b8e31d2d</anchor>
      <arglist>(QMap&lt; int, int &gt; &amp;clusterIdsOldNew, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateTimeFrame</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>8d409b9c32178e1870f4996d3f77f2ef</anchor>
      <arglist>(long start, long timeFrameWidth)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setSampleMode</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>6e4767ba7bf765631eb9543dec49ecf8</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setTimeFrameMode</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>1e8d95869a20f0a591a66a7b7d36f202</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setMeanPresentation</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>a0dfad7f9fc7812a9fe2f1467f8bc222</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setAllWaveformsPresentation</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>8e0c6e1663770d3c7a9b43e84c28cc91</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setOverLayPresentation</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>80fa31892f185cc30312b09a00f2e718</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setSideBySidePresentation</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>c6520843429a75bcb7d99e25a6e1f1dd</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>increaseWaveformsAmplitude</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>572c40b38927234ad03f29e314791d5b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>decreaseWaveformsAmplitude</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>177d058fd45dd59c3476709d78182920</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>containsWaveformView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>6061d21b9558aa8a9ac9fc83923a9582</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isInTimeFrameMode</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>6779a4fdf54b2bd23fc07a057d9efb84</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>timeFrameWidth</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>9764e7aefc07e25e97ad6a08aa727000</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>timeFrameStart</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>69ce6344975f4b2899f83fd132edb8c8</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>containsClusterView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>0b4abd5cd3fd932d76aa3c14ccd1a0d8</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setDisplayNbSpikes</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>33a24c495326ceb81db98f663b176b30</anchor>
      <arglist>(int nbSpikes)</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>displayedNbSpikes</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>2901b1ce2156026be27015ad57d1b5d2</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isMeanPresentation</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>a35a90d5eca8d41cb7957e6049072a6b</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isOverLayPresentation</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>2e21a902ee44c5c5d40c157171f00d1d</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>correlationTimeFrameWidth</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>4c5b18bdaca46952c4542484642672bc</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>sizeOfBin</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>559e81877c331688e4361f937ccdbe1e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>containsCorrelationView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>578c6a8a1ab08f3776fc009146989269</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>Data::ScaleMode</type>
      <name>scaleMode</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>d65c5a74efe215f48aafc91ef5682f9b</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setGain</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>1476e9f72421340a7f5fbcb3eb1e8653</anchor>
      <arglist>(int acquisitionGain)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>increaseCorrelogramsAmplitude</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>9ddea682902ec9df1478d82d61526c06</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>decreaseCorrelogramsAmplitude</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>ba883a5fae88515a7893940f350a15a3</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setNoScale</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>acbbe9cf594f4cff4e2507ee82ca8676</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setScaleByMax</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>86c28cea02165ba4f7487a9238ecf98a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setScaleByShouler</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>9c03a94163d6a40250a7a931769a91a9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateBinSizeAndTimeFrame</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>cf4cd2a8eb0a7390a159c5824c212fab</anchor>
      <arglist>(int size, int timeFrame)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isThreadsRunning</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>c63b248978b3497e96d48ab975e90e32</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateShoulderLine</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>0edeea5c5d13b3139e80c4c0c082eef3</anchor>
      <arglist>(bool b)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isShoulderLine</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>bb493962fed10bf94a1c0ab2c5e29d49</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QPtrList&lt; QValueList&lt; int &gt; &gt;</type>
      <name>getUndoList</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>7f31d34f53d9a8578789fa4bd67b3ae7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>QPtrList&lt; QValueList&lt; int &gt; &gt;</type>
      <name>getRedoList</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>86d621e968d6ff16b1259a5e88fb2978</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setTimeStepInSecond</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>ed4705c937726fec2f08ca0e2f51590b</anchor>
      <arglist>(int step, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setChannelPositions</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>9aea06ff43f530d9bdad801a52062e53</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;positions)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>nbUndoChangedCleaning</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>53c2d301dc370002202a0fb8ab46b0d8</anchor>
      <arglist>(int newNbUndo)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateErrorMatrix</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>41dc1f3470915a53895c733c5d720bdb</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>containsErrorMatrixView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>4f14535dc1d3d3c2392e7682ee3cb48d</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateBackgroundColor</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>d9f613618f83b4dc3d0a444ec38fc46f</anchor>
      <arglist>(QColor color)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>addNewClustersToView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>4a90eee1b8dbfc5817b89c0fe762a9f0</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;clustersToRecluster, QValueList&lt; int &gt; &amp;reclusteredClusterList, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateTraceView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>9d45c32fb326ec5025790210cf878658</anchor>
      <arglist>(QString name, ItemColors *clusterColors, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateClustersProvider</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>51a758f9c40826c7456dfed84ce8e05f</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>containsTraceView</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>63634c9778eddef2cb44472cbdb0d8b6</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>increaseAllChannelsAmplitude</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>5fa2e0e14a879e4e1f9554502e8194d3</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>decreaseAllChannelsAmplitude</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>9764a4a7cb9de2a94f2361c47e590cec</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>getStartingTime</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>e11e34cb13d60403e137071ef23c0850</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>getDuration</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>2410fbb9d05e97ba1d7f0dcc360ec857</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showLabelsUpdate</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>cd6ad061530fadc9cd45e054224061cc</anchor>
      <arglist>(bool status)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>getLabelStatus</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>ecfe28088cbdcd3f26b555e992add190</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showNextCluster</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>1e1577e911077fe13a1c07d15ff88e49</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showPreviousCluster</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>9c5123c6adf810d44df7fc952a658845</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" static="yes">
      <type>static const QString</type>
      <name>DisplayTypeNames</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>d1616e7acc19875b5f3e39c2f20ffb21</anchor>
      <arglist>[]</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>closeEvent</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>6b894edfbfbcfe638c82030d606b7b85</anchor>
      <arglist>(QCloseEvent *e)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>bool</type>
      <name>eventFilter</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>d7606e08eabec773a16b1218b817d20f</anchor>
      <arglist>(QObject *object, QEvent *event)</arglist>
    </member>
    <member kind="variable" protection="protected">
      <type>KlustersDoc &amp;</type>
      <name>doc</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>1a4d54c90bab2a99be9963e2517d01da</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend class</type>
      <name>KlustersDoc</name>
      <anchorfile>classKlustersView.html</anchorfile>
      <anchor>8a3195bb030de7593e82fe16e25560a3</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>KlustersXmlReader</name>
    <filename>classKlustersXmlReader.html</filename>
    <member kind="enumeration">
      <name>fileType</name>
      <anchor>820c12bb0f52eb16ef702dc8f4d2f553</anchor>
      <arglist></arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>parseFile</name>
      <anchorfile>classKlustersXmlReader.html</anchorfile>
      <anchor>f1c83d6e527cef2fd0cebf9f41ef426c</anchor>
      <arglist>(const QFile &amp;file, fileType type)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>closeFile</name>
      <anchorfile>classKlustersXmlReader.html</anchorfile>
      <anchor>15badaa4c6ebd596d15dae903ce9ad0c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getResolution</name>
      <anchorfile>classKlustersXmlReader.html</anchorfile>
      <anchor>351a9934bb1599df22cf5e9532cb1e43</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getNbChannels</name>
      <anchorfile>classKlustersXmlReader.html</anchorfile>
      <anchor>a9ee5e74870a19a59ed6a06f29c94877</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QValueList&lt; int &gt;</type>
      <name>getNbChannelsByGroup</name>
      <anchorfile>classKlustersXmlReader.html</anchorfile>
      <anchor>4c0121c8c32c72d0ba70b5c2c57f879b</anchor>
      <arglist>(int electrodeGroupID) const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getSamplingRate</name>
      <anchorfile>classKlustersXmlReader.html</anchorfile>
      <anchor>51ee30050331b6b0f29a664333baa48d</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getNbSamples</name>
      <anchorfile>classKlustersXmlReader.html</anchorfile>
      <anchor>9b3fe8d2f53fa5cf2405e10eb323a4c6</anchor>
      <arglist>(int electrodeGroupID) const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getPeakSampleIndex</name>
      <anchorfile>classKlustersXmlReader.html</anchorfile>
      <anchor>7cd9ef6dcce948e7f92cd5b546ca2a94</anchor>
      <arglist>(int electrodeGroupID) const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getNbFeatures</name>
      <anchorfile>classKlustersXmlReader.html</anchorfile>
      <anchor>7efbc3776fabd83b126c6aa70652359f</anchor>
      <arglist>(int electrodeGroupID) const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getVoltageRange</name>
      <anchorfile>classKlustersXmlReader.html</anchorfile>
      <anchor>7cf1cdcd65a04ccd98c7a47a0e279feb</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getAmplification</name>
      <anchorfile>classKlustersXmlReader.html</anchorfile>
      <anchor>8b27e29d7b49de0466ef69f08103826e</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getOffset</name>
      <anchorfile>classKlustersXmlReader.html</anchorfile>
      <anchor>53f101ab15add69915e45e079cfb6e7f</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>getClusterUserInformation</name>
      <anchorfile>classKlustersXmlReader.html</anchorfile>
      <anchor>36fb2a96ae95ffdd6d68974793f1e4c5</anchor>
      <arglist>(int pGroup, QMap&lt; int, ClusterUserInformation &gt; &amp;clusterUserInformationMap) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>MinMaxThread</name>
    <filename>classMinMaxThread.html</filename>
    <member kind="function">
      <type>void</type>
      <name>run</name>
      <anchorfile>classMinMaxThread.html</anchorfile>
      <anchor>efecc2cb24f26d057b28a23f5b0d67d8</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setModifiedClusters</name>
      <anchorfile>classMinMaxThread.html</anchorfile>
      <anchor>345538a536a9b2a35308449d8b2086db</anchor>
      <arglist>(QValueList&lt; int &gt; clusters)</arglist>
    </member>
    <member kind="friend">
      <type>friend MinMaxThread *</type>
      <name>Data::minMaxCalculator</name>
      <anchorfile>classMinMaxThread.html</anchorfile>
      <anchor>7a03db236325b23b0d1db8fedb273c46</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Pair</name>
    <filename>classPair.html</filename>
    <member kind="function">
      <type></type>
      <name>Pair</name>
      <anchorfile>classPair.html</anchorfile>
      <anchor>5b84498997bf1cb50f789d68ac111502</anchor>
      <arglist>(int x, int y)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getX</name>
      <anchorfile>classPair.html</anchorfile>
      <anchor>c44502ea261a3bd0e8013e86fb7469fe</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getY</name>
      <anchorfile>classPair.html</anchorfile>
      <anchor>2f4041994f035147c8ba71fd92612eb9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setX</name>
      <anchorfile>classPair.html</anchorfile>
      <anchor>5e32eee29b0357660842630f2522cc89</anchor>
      <arglist>(int x)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setY</name>
      <anchorfile>classPair.html</anchorfile>
      <anchor>b560bca37464691a602475cbad11094b</anchor>
      <arglist>(int y)</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>toString</name>
      <anchorfile>classPair.html</anchorfile>
      <anchor>cca3d16d65572c8bde1042948f98bd0c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator==</name>
      <anchorfile>classPair.html</anchorfile>
      <anchor>a5f6e1ce72f3ddd942880c8c781db555</anchor>
      <arglist>(const Pair &amp;p)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator&lt;</name>
      <anchorfile>classPair.html</anchorfile>
      <anchor>19d20729c2ed72d4d1787aaf70fef2c7</anchor>
      <arglist>(const Pair &amp;p)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator&lt;=</name>
      <anchorfile>classPair.html</anchorfile>
      <anchor>277c1622d5e8fc430d000051e2a87f48</anchor>
      <arglist>(const Pair &amp;p)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator&gt;</name>
      <anchorfile>classPair.html</anchorfile>
      <anchor>352d9a7d8980959f332ccc6b125b45e4</anchor>
      <arglist>(const Pair &amp;p)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>operator&gt;=</name>
      <anchorfile>classPair.html</anchorfile>
      <anchor>16c045f703e5444587254df00d6dc667</anchor>
      <arglist>(const Pair &amp;p)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ParameterXmlModifier</name>
    <filename>classParameterXmlModifier.html</filename>
    <member kind="function">
      <type></type>
      <name>ParameterXmlModifier</name>
      <anchorfile>classParameterXmlModifier.html</anchorfile>
      <anchor>9198f7b68f1d444ab035bf243372c415</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>parseFile</name>
      <anchorfile>classParameterXmlModifier.html</anchorfile>
      <anchor>ee9b3ef04ef94bfaa36cda67562573f3</anchor>
      <arglist>(const KURL &amp;url)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>writeTofile</name>
      <anchorfile>classParameterXmlModifier.html</anchorfile>
      <anchor>d207c33da1c9e174b2426ff16ee9f6da</anchor>
      <arglist>(const KURL &amp;url)</arglist>
    </member>
    <member kind="function">
      <type>QDomNode</type>
      <name>findDirectChild</name>
      <anchorfile>classParameterXmlModifier.html</anchorfile>
      <anchor>a76bc7f4586622faadae551bc199f4b2</anchor>
      <arglist>(QString childName)</arglist>
    </member>
    <member kind="function">
      <type>QDomNode</type>
      <name>findDirectChild</name>
      <anchorfile>classParameterXmlModifier.html</anchorfile>
      <anchor>96fa653ad31be5b451fd3c6fe2c0527b</anchor>
      <arglist>(QString childName, QDomNode ancestor)</arglist>
    </member>
    <member kind="function">
      <type>QDomNode</type>
      <name>findDirectChild</name>
      <anchorfile>classParameterXmlModifier.html</anchorfile>
      <anchor>a1852f2c7a2278c87620c992896ef987</anchor>
      <arglist>(QString childName, QString grandChildName, QString value, QDomNode ancestor)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>setClusterUserInformation</name>
      <anchorfile>classParameterXmlModifier.html</anchorfile>
      <anchor>0542a31c890c095a73d36b1c8bc8fc99</anchor>
      <arglist>(int pGroup, QMap&lt; int, ClusterUserInformation &gt; &amp;clusterUserInformationMap)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>pArray</name>
    <filename>classpArray.html</filename>
    <templarg>T</templarg>
    <base>Array</base>
    <member kind="function">
      <type>void</type>
      <name>copyAndPrependColumn</name>
      <anchorfile>classpArray.html</anchorfile>
      <anchor>72ca638b08fb93c6dcf1b198466f9666</anchor>
      <arglist>(pArray &amp;source)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>copySubset</name>
      <anchorfile>classpArray.html</anchorfile>
      <anchor>4617ff68b547a432a930314d4ab7042f</anchor>
      <arglist>(pArray &amp;source, long lastColumnToCopy)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>copySubset</name>
      <anchorfile>classpArray.html</anchorfile>
      <anchor>e3fe8fe0ed2c87cc237f0d8105841956</anchor>
      <arglist>(pArray &amp;source, long firstColumnToCopy, long lastColumnToCopy, long startingColumn)</arglist>
    </member>
    <member kind="function">
      <type>pArray&lt; T &gt; &amp;</type>
      <name>operator=</name>
      <anchorfile>classpArray.html</anchorfile>
      <anchor>934ba31fc52c0d84c8b791d688aaef9e</anchor>
      <arglist>(pArray&lt; T &gt; &amp;source)</arglist>
    </member>
    <member kind="function">
      <type>pArray&lt; T &gt;</type>
      <name>operator=</name>
      <anchorfile>classpArray.html</anchorfile>
      <anchor>2b5ebbf6cb5266edf4a877984e0d03f9</anchor>
      <arglist>(pArray&lt; T &gt; &amp;source) const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>PrefClusterView</name>
    <filename>classPrefClusterView.html</filename>
    <member kind="function">
      <type></type>
      <name>PrefClusterView</name>
      <anchorfile>classPrefClusterView.html</anchorfile>
      <anchor>6a429d6baf734503ed59f6d8b12aefba</anchor>
      <arglist>(QWidget *parent=0, const char *name=0)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setTimeInterval</name>
      <anchorfile>classPrefClusterView.html</anchorfile>
      <anchor>e1a0bf0a9315575e29b3faaf015e3ff0</anchor>
      <arglist>(int time)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getTimeInterval</name>
      <anchorfile>classPrefClusterView.html</anchorfile>
      <anchor>8d1b2f2a1990bc3c9d5e6189ff8112eb</anchor>
      <arglist>() const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>PrefDialog</name>
    <filename>classPrefDialog.html</filename>
    <member kind="slot">
      <type>void</type>
      <name>slotDefault</name>
      <anchorfile>classPrefDialog.html</anchorfile>
      <anchor>bfde2c51595dc9ade33f8692660e078c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>slotApply</name>
      <anchorfile>classPrefDialog.html</anchorfile>
      <anchor>24711e72b359a9f52c1dcba17b190b6a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>enableApply</name>
      <anchorfile>classPrefDialog.html</anchorfile>
      <anchor>36e639fee3b394f6a7e1873fa6cc0587</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>settingsChanged</name>
      <anchorfile>classPrefDialog.html</anchorfile>
      <anchor>322d4dd7abc81941d15123eb3a362e74</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>PrefDialog</name>
      <anchorfile>classPrefDialog.html</anchorfile>
      <anchor>2047b7d07ccf44431803dff8b59ad972</anchor>
      <arglist>(QWidget *parent, int nbChannels=0, const char *name=0, WFlags f=0)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateDialog</name>
      <anchorfile>classPrefDialog.html</anchorfile>
      <anchor>533723197454424489b5d228f5f5caa1</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateConfiguration</name>
      <anchorfile>classPrefDialog.html</anchorfile>
      <anchor>953465d0d61f15b796dd0925a827acc4</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isApplyEnable</name>
      <anchorfile>classPrefDialog.html</anchorfile>
      <anchor>491cca7a9a8b66103f24efc3340ba73b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>resetChannelList</name>
      <anchorfile>classPrefDialog.html</anchorfile>
      <anchor>2e247c97f522eb2bcc12726dff915c3a</anchor>
      <arglist>(int nbChannels)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>enableChannelSettings</name>
      <anchorfile>classPrefDialog.html</anchorfile>
      <anchor>898f8d6ca8f6b85606bf57a192116604</anchor>
      <arglist>(bool state)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>PrefGeneral</name>
    <filename>classPrefGeneral.html</filename>
    <member kind="function">
      <type></type>
      <name>PrefGeneral</name>
      <anchorfile>classPrefGeneral.html</anchorfile>
      <anchor>da0d6aa35e38fe6afe3bbd6a9db72910</anchor>
      <arglist>(QWidget *parent=0, const char *name=0)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setCrashRecovery</name>
      <anchorfile>classPrefGeneral.html</anchorfile>
      <anchor>023ef9d53c25acddb076c762c038b25c</anchor>
      <arglist>(bool use)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setCrashRecoveryIndex</name>
      <anchorfile>classPrefGeneral.html</anchorfile>
      <anchor>73303838adf8e2705e0336a22bf8491a</anchor>
      <arglist>(int index)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setNbUndo</name>
      <anchorfile>classPrefGeneral.html</anchorfile>
      <anchor>a3f425cf4ec0e02fa396d5da6ce14f38</anchor>
      <arglist>(int nb)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setBackgroundColor</name>
      <anchorfile>classPrefGeneral.html</anchorfile>
      <anchor>5442a06d79758266675e0843ed484373</anchor>
      <arglist>(const QColor &amp;color)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setReclusteringExecutable</name>
      <anchorfile>classPrefGeneral.html</anchorfile>
      <anchor>9e086dee4e9144adbb96906a73f62926</anchor>
      <arglist>(QString executable)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setReclusteringArguments</name>
      <anchorfile>classPrefGeneral.html</anchorfile>
      <anchor>5252892f22d9303c8dc6d5977ff33510</anchor>
      <arglist>(QString arguments)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isCrashRecovery</name>
      <anchorfile>classPrefGeneral.html</anchorfile>
      <anchor>8b3a2299d11aef26665202d658664c17</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>crashRecoveryIntervalIndex</name>
      <anchorfile>classPrefGeneral.html</anchorfile>
      <anchor>62aece7a072e441693b787e838cc20e8</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getNbUndo</name>
      <anchorfile>classPrefGeneral.html</anchorfile>
      <anchor>5257a5016c29970f93b142d992657a99</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QColor</type>
      <name>getBackgroundColor</name>
      <anchorfile>classPrefGeneral.html</anchorfile>
      <anchor>6ccb6d4e9c057b957eb8301f97ea5494</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>getReclusteringExecutable</name>
      <anchorfile>classPrefGeneral.html</anchorfile>
      <anchor>34c1c148f9c0e05d9cf4095b0ece6ee6</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>getReclusteringArguments</name>
      <anchorfile>classPrefGeneral.html</anchorfile>
      <anchor>035cc882ccebdd57ca3ef9b132296a12</anchor>
      <arglist>() const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>PrefWaveformView</name>
    <filename>classPrefWaveformView.html</filename>
    <member kind="signal">
      <type>void</type>
      <name>positionsChanged</name>
      <anchorfile>classPrefWaveformView.html</anchorfile>
      <anchor>acae8c9e96ad1d39a8df2a256889c734</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>PrefWaveformView</name>
      <anchorfile>classPrefWaveformView.html</anchorfile>
      <anchor>07963ff256cd1a8a13578394e4180c3c</anchor>
      <arglist>(QWidget *parent=0, int nbChannels=0, const char *name=0)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setGain</name>
      <anchorfile>classPrefWaveformView.html</anchorfile>
      <anchor>52846ce65739efd7a7c90d857ba54589</anchor>
      <arglist>(int gain)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getGain</name>
      <anchorfile>classPrefWaveformView.html</anchorfile>
      <anchor>f8cf9d3fde60a30c4b6ccdd5e1d685e6</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setNbChannels</name>
      <anchorfile>classPrefWaveformView.html</anchorfile>
      <anchor>54c584d2dc7105f9edb1ad17dd4c4b31</anchor>
      <arglist>(int nb)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getNbChannels</name>
      <anchorfile>classPrefWaveformView.html</anchorfile>
      <anchor>fe9f15fcf2c3149d3560c180291a7924</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>initializeChannelList</name>
      <anchorfile>classPrefWaveformView.html</anchorfile>
      <anchor>c1f13bc6bdc657619d3a7b1b7f8cfeee</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>resetChannelList</name>
      <anchorfile>classPrefWaveformView.html</anchorfile>
      <anchor>be0468403111fa19f3e32900dc534768</anchor>
      <arglist>(int nb)</arglist>
    </member>
    <member kind="function">
      <type>QValueList&lt; int &gt;</type>
      <name>getChannelPositions</name>
      <anchorfile>classPrefWaveformView.html</anchorfile>
      <anchor>b2f361020fa36ec044aabf155dcd87a6</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>enableChannelSettings</name>
      <anchorfile>classPrefWaveformView.html</anchorfile>
      <anchor>9637bc4a721b589b97ca1880a733113b</anchor>
      <arglist>(bool state)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ProcessLineMaker</name>
    <filename>classProcessLineMaker.html</filename>
    <member kind="slot">
      <type>void</type>
      <name>slotReceivedStdout</name>
      <anchorfile>classProcessLineMaker.html</anchorfile>
      <anchor>83063048a65d83fca9d4419333bac15b</anchor>
      <arglist>(const QString &amp;s)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>slotReceivedStderr</name>
      <anchorfile>classProcessLineMaker.html</anchorfile>
      <anchor>da71536a376d4eb997e6a47cb1c35b0c</anchor>
      <arglist>(const QString &amp;s)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>slotWidgetHidden</name>
      <anchorfile>classProcessLineMaker.html</anchorfile>
      <anchor>9c8857f8902ff441fd756cb8ccc10c21</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>slotProcessExited</name>
      <anchorfile>classProcessLineMaker.html</anchorfile>
      <anchor>2e13d2df3d683b6849117b14debfba36</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>receivedStdoutLine</name>
      <anchorfile>classProcessLineMaker.html</anchorfile>
      <anchor>6b147d4c3bbb025fcbe00386af6a0d01</anchor>
      <arglist>(const QString &amp;line)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>receivedStderrLine</name>
      <anchorfile>classProcessLineMaker.html</anchorfile>
      <anchor>855f0d89f85a7c884a07e65377fddede</anchor>
      <arglist>(const QString &amp;line)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>outputTreatmentOver</name>
      <anchorfile>classProcessLineMaker.html</anchorfile>
      <anchor>7606767131eabf97a2c863424bdf6d80</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>ProcessLineMaker</name>
      <anchorfile>classProcessLineMaker.html</anchorfile>
      <anchor>512ff11b2856017a5d978c8e430e48fc</anchor>
      <arglist>(const KProcess *)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>processKilled</name>
      <anchorfile>classProcessLineMaker.html</anchorfile>
      <anchor>8ca1dc8789f0e3e3c992d3dc8ec2c594</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>reset</name>
      <anchorfile>classProcessLineMaker.html</anchorfile>
      <anchor>2925c8bf4b8b5e9d5e385b66485563e4</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot" protection="protected">
      <type>void</type>
      <name>slotReceivedStdout</name>
      <anchorfile>classProcessLineMaker.html</anchorfile>
      <anchor>0d49498d2e773fbbcf326a2b5137368a</anchor>
      <arglist>(KProcess *process, char *buffer, int buflen)</arglist>
    </member>
    <member kind="slot" protection="protected">
      <type>void</type>
      <name>slotReceivedStderr</name>
      <anchorfile>classProcessLineMaker.html</anchorfile>
      <anchor>97146e0a70b8d4f2c410ffbf7e3fd330</anchor>
      <arglist>(KProcess *process, char *buffer, int buflen)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ProcessWidget</name>
    <filename>classProcessWidget.html</filename>
    <member kind="slot">
      <type>bool</type>
      <name>startJob</name>
      <anchorfile>classProcessWidget.html</anchorfile>
      <anchor>9e3c899c3eb14de51465608e22a1e070</anchor>
      <arglist>(const QString &amp;dir, const QString &amp;command)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>killJob</name>
      <anchorfile>classProcessWidget.html</anchorfile>
      <anchor>572f011eba9b8b804334562dd3d6cdc4</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>insertStdoutLine</name>
      <anchorfile>classProcessWidget.html</anchorfile>
      <anchor>e51d45fb2b93efd0262713ecc1444c71</anchor>
      <arglist>(const QString &amp;line)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>insertStderrLine</name>
      <anchorfile>classProcessWidget.html</anchorfile>
      <anchor>1eeae8ece5dfded17fd12b540eb1b873</anchor>
      <arglist>(const QString &amp;line)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>processExited</name>
      <anchorfile>classProcessWidget.html</anchorfile>
      <anchor>1fb2a720d93bc13fe65c74b1da5a7129</anchor>
      <arglist>(KProcess *)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>processOutputsFinished</name>
      <anchorfile>classProcessWidget.html</anchorfile>
      <anchor>71b82c6817475fefe209904422f607d9</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>hidden</name>
      <anchorfile>classProcessWidget.html</anchorfile>
      <anchor>61137145fc8793b8a378d362da22cbdb</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>ProcessWidget</name>
      <anchorfile>classProcessWidget.html</anchorfile>
      <anchor>9d88824c5f5fa6c7bd8911492425d3c3</anchor>
      <arglist>(QWidget *parent, const char *name=0)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isRunning</name>
      <anchorfile>classProcessWidget.html</anchorfile>
      <anchor>b83ef679b004836c9c0f4b18b26c5fa0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>hideWidget</name>
      <anchorfile>classProcessWidget.html</anchorfile>
      <anchor>05b1ff1d417576b92f7b6dc824e2ac46</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>print</name>
      <anchorfile>classProcessWidget.html</anchorfile>
      <anchor>08f53f6724e0adacaee1a2dcca03f1cc</anchor>
      <arglist>(KPrinter *printer, QString filePath)</arglist>
    </member>
    <member kind="slot" protection="protected">
      <type>void</type>
      <name>slotProcessExited</name>
      <anchorfile>classProcessWidget.html</anchorfile>
      <anchor>ac01bfaca4899984fd4bfc5e2b4fbaee</anchor>
      <arglist>(KProcess *)</arglist>
    </member>
    <member kind="slot" protection="protected">
      <type>void</type>
      <name>slotOutputTreatmentOver</name>
      <anchorfile>classProcessWidget.html</anchorfile>
      <anchor>c922af23fefdbd139391ccfa995154cc</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual void</type>
      <name>childFinished</name>
      <anchorfile>classProcessWidget.html</anchorfile>
      <anchor>0b1d41c54e87b604dc28ba3688ed7888</anchor>
      <arglist>(bool normal, int status)</arglist>
    </member>
    <member kind="function" protection="protected" virtualness="virtual">
      <type>virtual QSize</type>
      <name>minimumSizeHint</name>
      <anchorfile>classProcessWidget.html</anchorfile>
      <anchor>961710cd971c19c4461f21321170fb4d</anchor>
      <arglist>() const</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>SaveThread</name>
    <filename>classSaveThread.html</filename>
    <member kind="function">
      <type></type>
      <name>SaveThread</name>
      <anchorfile>classSaveThread.html</anchorfile>
      <anchor>60a8a93235e143d43c17e91384b86c9b</anchor>
      <arglist>(KlustersApp *parent)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>run</name>
      <anchorfile>classSaveThread.html</anchorfile>
      <anchor>7f4ade33d1c70db4fe50207bd5729878</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>save</name>
      <anchorfile>classSaveThread.html</anchorfile>
      <anchor>db01fc3e53e273f01605bb81851d771a</anchor>
      <arglist>(const KURL &amp;url, KlustersDoc *doc, bool isSaveAs=false)</arglist>
    </member>
    <member kind="function">
      <type>SaveDoneEvent *</type>
      <name>saveDoneEvent</name>
      <anchorfile>classSaveThread.html</anchorfile>
      <anchor>aa1c9fd7c9e2e2225e006d2583fb3cfb</anchor>
      <arglist>(bool status)</arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>SaveDoneEvent</name>
      <anchorfile>classSaveThread.html</anchorfile>
      <anchor>b8d51c9f5ba208865b32003364c007b7</anchor>
      <arglist></arglist>
    </member>
    <class kind="class">SaveThread::SaveDoneEvent</class>
  </compound>
  <compound kind="class">
    <name>SaveThread::SaveDoneEvent</name>
    <filename>classSaveThread_1_1SaveDoneEvent.html</filename>
    <member kind="function">
      <type>bool</type>
      <name>isItSaveAs</name>
      <anchorfile>classSaveThread_1_1SaveDoneEvent.html</anchorfile>
      <anchor>3a9fbb7d1ff959efec1b5ddc8a8d6618</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setTemporaryFile</name>
      <anchorfile>classSaveThread_1_1SaveDoneEvent.html</anchorfile>
      <anchor>5b83275d1b1854e24302160c432a0264</anchor>
      <arglist>(QString tmpFile)</arglist>
    </member>
    <member kind="function">
      <type>QString</type>
      <name>temporaryFile</name>
      <anchorfile>classSaveThread_1_1SaveDoneEvent.html</anchorfile>
      <anchor>fbf32d3b58cbda8aebdd6d0a7869929a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isSaveOk</name>
      <anchorfile>classSaveThread_1_1SaveDoneEvent.html</anchorfile>
      <anchor>66d02337bea86e29e8208743146f8fd7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend SaveDoneEvent *</type>
      <name>SaveThread::saveDoneEvent</name>
      <anchorfile>classSaveThread_1_1SaveDoneEvent.html</anchorfile>
      <anchor>59ff84d6a4e57963f70118b96d815a64</anchor>
      <arglist>(bool status)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>SortableTable</name>
    <filename>classSortableTable.html</filename>
    <base>Array</base>
    <member kind="function">
      <type>void</type>
      <name>setSize</name>
      <anchorfile>classSortableTable.html</anchorfile>
      <anchor>8d7a1f98f90aa527436728d18314dd34</anchor>
      <arglist>(dataType nbOfColumns, bool twoRows=true)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>SortableTable</name>
      <anchorfile>classSortableTable.html</anchorfile>
      <anchor>5cd21d363af6217044506050ae4fb631</anchor>
      <arglist>(const SortableTable &amp;currentSortableTable)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>sort</name>
      <anchorfile>classSortableTable.html</anchorfile>
      <anchor>76a0af93508e5afdb13a14fd8cc690f4</anchor>
      <arglist>(dataType rowToSort)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>sort</name>
      <anchorfile>classSortableTable.html</anchorfile>
      <anchor>b5290c54d264027a2325fd52271af5f2</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>subset</name>
      <anchorfile>classSortableTable.html</anchorfile>
      <anchor>9e0b1abed52e808d7f645a4506efff34</anchor>
      <arglist>(SortableTable &amp;subsetTable, dataType row, dataType startColumn, dataType endColumn)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>TracesProvider</name>
    <filename>classTracesProvider.html</filename>
    <base>DataProvider</base>
    <member kind="signal">
      <type>void</type>
      <name>dataReady</name>
      <anchorfile>classTracesProvider.html</anchorfile>
      <anchor>a1757f81106426811c405a6437654cf1</anchor>
      <arglist>(Array&lt; dataType &gt; &amp;data, QObject *initiator)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>TracesProvider</name>
      <anchorfile>classTracesProvider.html</anchorfile>
      <anchor>b3f0d4973e33fb3206fb20585ba2fb16</anchor>
      <arglist>(KURL fileUrl, int nbChannels, int resolution, int samplingRate, int offset)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>requestData</name>
      <anchorfile>classTracesProvider.html</anchorfile>
      <anchor>15a28fc38479728605849e1d8bb4aad9</anchor>
      <arglist>(long startTime, long endTime, QObject *initiator, long startTimeInRecordingUnits)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setNbChannels</name>
      <anchorfile>classTracesProvider.html</anchorfile>
      <anchor>e19315e3ae81d0dbf2f43f081fbdc0ff</anchor>
      <arglist>(int nb)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setResolution</name>
      <anchorfile>classTracesProvider.html</anchorfile>
      <anchor>4b3676ab7058abe83be3629a4c521192</anchor>
      <arglist>(int res)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setSamplingRate</name>
      <anchorfile>classTracesProvider.html</anchorfile>
      <anchor>9e1ab93c2e057f17ce346f035379fc60</anchor>
      <arglist>(int rate)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setOffset</name>
      <anchorfile>classTracesProvider.html</anchorfile>
      <anchor>849a5bb8d771e156d9352a5b09a9285b</anchor>
      <arglist>(int newOffset)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getNbChannels</name>
      <anchorfile>classTracesProvider.html</anchorfile>
      <anchor>7f7985a31e8e6e94236b6b42dfa96945</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getResolution</name>
      <anchorfile>classTracesProvider.html</anchorfile>
      <anchor>27f43611a182aa44bcec1bb849ffb3a1</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getSamplingRate</name>
      <anchorfile>classTracesProvider.html</anchorfile>
      <anchor>8fad4f54ef71252528e06d3ac2ccecf4</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>getOffset</name>
      <anchorfile>classTracesProvider.html</anchorfile>
      <anchor>b15ff57527436ee448716610448f1414</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>long long</type>
      <name>recordingLength</name>
      <anchorfile>classTracesProvider.html</anchorfile>
      <anchor>7e7bff8bdd97abf5a4a31e24cfa839ac</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>dataType</type>
      <name>getNbSamples</name>
      <anchorfile>classTracesProvider.html</anchorfile>
      <anchor>8c3d8a1470cf4bde0c44c8c5cf610a82</anchor>
      <arglist>(long startTime, long endTime, long startTimeInRecordingUnits)</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>getTotalNbSamples</name>
      <anchorfile>classTracesProvider.html</anchorfile>
      <anchor>94a5a4cffdc5838999c8b81e22e5f930</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>TraceView</name>
    <filename>classTraceView.html</filename>
    <base>BaseFrame</base>
    <member kind="slot">
      <type>void</type>
      <name>dataAvailable</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>ac696dfa3b582557b8bba553b5e10981</anchor>
      <arglist>(Array&lt; dataType &gt; &amp;data, QObject *initiator)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>dataAvailable</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>72ac9e489de5c68ef030fa997bc51d67</anchor>
      <arglist>(Array&lt; dataType &gt; &amp;data, QObject *initiator, QString providerName)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>dataAvailable</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>692ae9127526a3dfffa7e3819536a2b1</anchor>
      <arglist>(Array&lt; dataType &gt; &amp;times, Array&lt; int &gt; &amp;ids, QObject *initiator, QString providerName)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>nextClusterDataAvailable</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>2859ecbe86562874fe2664093aefefc4</anchor>
      <arglist>(Array&lt; dataType &gt; &amp;data, QObject *initiator, QString providerName, long startingTime, long startingTimeInRecordingUnits)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>previousClusterDataAvailable</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>d1dc80ff4b51d2c1c8559276a72480ad</anchor>
      <arglist>(Array&lt; dataType &gt; &amp;data, QObject *initiator, QString providerName, long startingTime, long startingTimeInRecordingUnits)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>nextEventDataAvailable</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>55cf8a5cf7eb8c36e7d73235836223b2</anchor>
      <arglist>(Array&lt; dataType &gt; &amp;times, Array&lt; int &gt; &amp;ids, QObject *initiator, QString providerName, long startingTime)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>previousEventDataAvailable</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>48c3fcf78b041f2728f606f1d2d6018e</anchor>
      <arglist>(Array&lt; dataType &gt; &amp;times, Array&lt; int &gt; &amp;ids, QObject *initiator, QString providerName, long startingTime)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>eventToAddProperties</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>d9156ab617b02c8f187e458b938fed83</anchor>
      <arglist>(QString providerName, QString eventDescription)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>skipStatusChanged</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>2b8bb8cff8bd1ac6e5173a94eb36fce7</anchor>
      <arglist>(const QValueList&lt; int &gt; &amp;skippedChannels)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>channelsSelected</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>285d61ddf3856d4c63af132add3fb763</anchor>
      <arglist>(const QValueList&lt; int &gt; &amp;selectedIds)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>setStartAndDuration</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>b415445cf79cd645d7007538b5419184</anchor>
      <arglist>(long time, long duration)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>eventModified</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>fba0c7892d76b65fe6a2ff716538b809</anchor>
      <arglist>(QString providerName, int selectedEventId, double time, double newTime)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>eventRemoved</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>d06b394012f1d2443c4312df0554a89b</anchor>
      <arglist>(QString providerName, int selectedEventId, double time)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>eventAdded</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>88aa9361515ba41caf8a04cb7f78fc69</anchor>
      <arglist>(QString providerName, QString addedEventDescription, double time)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>TraceView</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>dd3f8d4ac0972e174b93aed78a33b0d4</anchor>
      <arglist>(TracesProvider &amp;tracesProvider, bool greyScale, bool multiColumns, bool verticalLines, bool raster, bool waveforms, bool labelsDisplay, QValueList&lt; int &gt; &amp;channelsToDisplay, int unitGain, int acquisitionGain, long start, long timeFrameWidth, ChannelColors *channelColors, QMap&lt; int, QValueList&lt; int &gt; &gt; *groupsChannels, QMap&lt; int, int &gt; *channelsGroups, QValueList&lt; int &gt; &amp;channelOffsets, QValueList&lt; int &gt; &amp;gains, const QValueList&lt; int &gt; &amp;skippedChannels, QWidget *parent=0, const char *name=0, QColor backgroundColor=Qt::black, KStatusBar *statusBar=0L, int minSize=500, int maxSize=4000, int windowTopLeft=-500, int windowBottomRight=1001, int border=0)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setMultiColumns</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>759186f2afec53e33fe8b29a259e475b</anchor>
      <arglist>(bool multiple)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setClusterVerticalLines</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>7943208b4827f2af154416001d983bea</anchor>
      <arglist>(bool lines)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setClusterRaster</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>d6c11753beebcf5cfd1412106b9594c3</anchor>
      <arglist>(bool raster)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setClusterWaveforms</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>e4e7720b743a457d10ca9be9b97bdf92</anchor>
      <arglist>(bool waveforms)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setGreyScale</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>03e396b245b7ee974be1e7c08111645b</anchor>
      <arglist>(bool grey)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>displayTimeFrame</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>9f7957aa400f6d89f046b738b5355cfa</anchor>
      <arglist>(long start, long timeFrameWidth)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showChannels</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>acd0592f3fd9725b8460e1c9617ef549</anchor>
      <arglist>(const QValueList&lt; int &gt; &amp;channelsToShow)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>increaseAllAmplitude</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>521f5624dc65f250b1ec00be11c61e37</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>decreaseAllAmplitude</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>cbd3d6444c81ec515d87c381e077d1ea</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>increaseSelectedChannelsAmplitude</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>c52681dfe798393bc5d5186bf97a05ed</anchor>
      <arglist>(const QValueList&lt; int &gt; &amp;channelIds)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>decreaseSelectedChannelsAmplitude</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>50e36ea51a5bd89c335f2e13be17b2a7</anchor>
      <arglist>(const QValueList&lt; int &gt; &amp;channelIds)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setGains</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>42febc88cac5ee6029aa303cdca2e02a</anchor>
      <arglist>(int gain, int acquisitionGain)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>channelColorUpdate</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>7b7f551c7d27a1462fb9ab11a62b7091</anchor>
      <arglist>(int channelId, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>groupColorUpdate</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>784b87fcb2a70296f02c7188e4364492</anchor>
      <arglist>(int groupId, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateDrawing</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>29d2a7ffadad0c851ba1046e5e5c90e5</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>groupsModified</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>4c4a3549aa763d828f299293cd103439</anchor>
      <arglist>(bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setMode</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>261b891ab9784b0e893b67d0cba4c816</anchor>
      <arglist>(BaseFrame::Mode selectedMode, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>selectChannels</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>de78893d26bacd552e16ca361a4ae2cf</anchor>
      <arglist>(const QValueList&lt; int &gt; &amp;selectedIds)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>resetOffsets</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>33725c681f33249a2f3123c321ccbb80</anchor>
      <arglist>(const QMap&lt; int, int &gt; &amp;selectedChannelDefaultOffsets)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>resetGains</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>803bd6e2132568020a5ef2dba539af46</anchor>
      <arglist>(const QValueList&lt; int &gt; &amp;selectedChannels)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>reset</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>e1590eb0f76bba3290d2aadf147b3557</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showHideLabels</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>ef31aa94de61b33418ff3ce65519fdd1</anchor>
      <arglist>(bool show)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showCalibration</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>5b176cb94e4edbe6de0571c925072ea2</anchor>
      <arglist>(bool show, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>addClusterProvider</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>24e676e17e88878b88e382f23fcf8d26</anchor>
      <arglist>(ClustersProvider *clustersProvider, QString name, ItemColors *clusterColors, bool active, QValueList&lt; int &gt; &amp;clustersToShow, QMap&lt; int, QValueList&lt; int &gt; &gt; *displayGroupsClusterFile, QMap&lt; int, int &gt; *channelsSpikeGroups, int nbSamplesBefore, int nbSamplesAfter, const QValueList&lt; int &gt; &amp;clustersToSkip)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>removeClusterProvider</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>c0a337309aef21c7973117204745a08b</anchor>
      <arglist>(QString name, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showClusters</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>1f56cb8787db3d5a73aa9d426a6d2ecd</anchor>
      <arglist>(QString name, QValueList&lt; int &gt; &amp;clustersToShow)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>clusterColorUpdate</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>f5af8811703eb4d91598b7cc59de5077</anchor>
      <arglist>(QString name, int clusterId, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>addEventProvider</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>2a33dd682edbab311d67deda5253a8a6</anchor>
      <arglist>(EventsProvider *eventsProvider, QString name, ItemColors *eventColors, bool active, QValueList&lt; int &gt; &amp;eventsToShow, const QValueList&lt; int &gt; &amp;eventsToSkip)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>removeEventProvider</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>5b1294c7ecf948fe3f3c1c71ea9e9a3a</anchor>
      <arglist>(QString name, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showEvents</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>b1be7029208deced848dd5a00e069238</anchor>
      <arglist>(QString name, QValueList&lt; int &gt; &amp;eventsToShow)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>eventColorUpdate</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>4b1905ab18ff46db2d8d4d1f23991843</anchor>
      <arglist>(QString name, int eventId, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>print</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>7214244826f6a7c4d4b60219a43b7c60</anchor>
      <arglist>(QPainter &amp;printPainter, QPaintDeviceMetrics &amp;metrics, bool whiteBackground)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showNextEvent</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>98cea56712568cbbfb84869406eb1e0c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showPreviousEvent</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>9a4e4ef79aba3d485089c0b5dc29b95e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateEvents</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>55428d02398ab02597a5721da780c502</anchor>
      <arglist>(QString providerName, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateEvents</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>9752fc6b989b14a3b922202add7de5fc</anchor>
      <arglist>(QString providerName, QValueList&lt; int &gt; &amp;eventsToShow, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>removeEvent</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>313dc0bc4af37a5ab6e16a99a0ae8b25</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showNextCluster</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>1079f060958e7b60d315120abb9ecc41</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>showPreviousCluster</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>e3b6b42d339ec0ba5d1678f477c1ef8b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateNoneBrowsingEventList</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>dfeda22e2719ea704e5780c720986ba3</anchor>
      <arglist>(QString providerName, const QValueList&lt; int &gt; &amp;eventsToNotBrowse)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateNoneBrowsingClusterList</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>ec505e9903c276ee3bb8e49396cee513</anchor>
      <arglist>(QString providerName, const QValueList&lt; int &gt; &amp;clustersToNotBrowse)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateWaveformInformation</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>426c5ea3b1f31c871c5bc0ab46647b85</anchor>
      <arglist>(int nbSamplesBefore, int nbSamplesAfter, bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>samplingRateModified</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>688771f14317976a1bc2d523b5b0fa05</anchor>
      <arglist>(long long length)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateClusterData</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>0bf137a71c4604245dad3c58a2f2a0be</anchor>
      <arglist>(bool active)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>updateClusters</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>e80a78c501f0d18730cfde3d6988254b</anchor>
      <arglist>(QString name, QValueList&lt; int &gt; &amp;clustersToShow, ItemColors *clusterColors, bool active)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>drawContents</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>808cea8a94d4ee68d14ff3916043b470</anchor>
      <arglist>(QPainter *painter)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mouseMoveEvent</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>6708d401334c059865b3194ce3f8f7c8</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>resizeEvent</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>6d5dbd8f6a6cf562e79a79d39f533230</anchor>
      <arglist>(QResizeEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mousePressEvent</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>163a577520dd6556fa152518a2b6afb4</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mouseReleaseEvent</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>10f8d9755ef5ad0e7051e6d939837f79</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mouseDoubleClickEvent</name>
      <anchorfile>classTraceView.html</anchorfile>
      <anchor>04e3b3a926177db47873499e004d6942</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <class kind="struct">TraceView::ClusterData</class>
    <class kind="struct">TraceView::EventData</class>
  </compound>
  <compound kind="class">
    <name>TraceWidget</name>
    <filename>classTraceWidget.html</filename>
    <member kind="slot">
      <type>void</type>
      <name>changeBackgroundColor</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>cd5458a21208e3f76579dfed9076af0a</anchor>
      <arglist>(QColor color)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setGreyScale</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>1fa59c875f93e8eff216e098d5b368d0</anchor>
      <arglist>(bool grey)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>moveToTime</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>37c7e2a0863ccddb96b93e49bc71e9c0</anchor>
      <arglist>(long time)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setMultiColumns</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>c2bad42f9c0a9276580cdd7411bcfc2e</anchor>
      <arglist>(bool multiple)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setClusterVerticalLines</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>ca0b36157988c62c8738de687315a039</anchor>
      <arglist>(bool lines)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setClusterRaster</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>3dfd3c15803a31bb1a88026dc7687de6</anchor>
      <arglist>(bool raster)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setClusterWaveforms</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>2df1df25d13a8e6b65bc0dddc9e8a3c2</anchor>
      <arglist>(bool waveforms)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>slotChannelsSelected</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>ac82a0211d883937da1fdb4459096dc8</anchor>
      <arglist>(const QValueList&lt; int &gt; &amp;selectedIds)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>setMode</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>de33f68230594ffbbdb74d434a73988f</anchor>
      <arglist>(BaseFrame::Mode selectedMode, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>showChannels</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>32f3223cad09a473e1b8cd467414b0e4</anchor>
      <arglist>(const QValueList&lt; int &gt; &amp;channelsToShow)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>showClusters</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>3517239e13cff267e7d19467f6d0348f</anchor>
      <arglist>(QString name, QValueList&lt; int &gt; &amp;clustersToShow)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>showEvents</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>86e04d75e207507102a78562c9600f9a</anchor>
      <arglist>(QString name, QValueList&lt; int &gt; &amp;eventsToShow)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>channelColorUpdate</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>bf6b8c96f354de2bcbc75f1f569089d7</anchor>
      <arglist>(int channelId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>clusterColorUpdate</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>0b5d7c9897e2dd2ef38a61bcf87c1574</anchor>
      <arglist>(QString name, int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>eventColorUpdate</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>d44507213e582ac1330950e5b7cecfc7</anchor>
      <arglist>(QString name, int eventId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>groupColorUpdate</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>0e8f031c8eb133e7bfd13cd5846e846e</anchor>
      <arglist>(int groupId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>increaseAllChannelsAmplitude</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>5c0752514a4c21db6afb09a176f5696d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>decreaseAllChannelsAmplitude</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>fef9831b3df19d3e41cb24e822272213</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>increaseSelectedChannelsAmplitude</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>ab335626fc554d93855fa11dc7bac6a8</anchor>
      <arglist>(const QValueList&lt; int &gt; &amp;channelIds)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>decreaseSelectedChannelsAmplitude</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>c7aef903b1d6fd2afe563504a70eaae4</anchor>
      <arglist>(const QValueList&lt; int &gt; &amp;channelIds)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setGains</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>1df17e9057fbeea4f2ec1e9fb767a6e2</anchor>
      <arglist>(int gain, int acquisitionGain)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateDrawing</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>5f24a62ba53589c1cb838baa4d1293d4</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateContents</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>c84014a559c34920a4996a926260ed49</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>groupsModified</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>bc6355f560e9bd1bd6f759dba6ae7b26</anchor>
      <arglist>(bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>selectChannels</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>7d2850c97653176d90c5b5814285386c</anchor>
      <arglist>(const QValueList&lt; int &gt; &amp;selectedIds)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>resetOffsets</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>5aabcad62fc6e46a201971fdd3139c25</anchor>
      <arglist>(const QMap&lt; int, int &gt; &amp;selectedChannelDefaultOffsets)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>resetGains</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>ffdce068158627a523ec6dbd41c829fd</anchor>
      <arglist>(const QValueList&lt; int &gt; &amp;selectedChannels)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>drawTraces</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>cc3c94695108c1bd2e2334f94b4dbe70</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>reset</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>724a55f81c7f99f744ffbeaf9fe43e4f</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>showLabels</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>0e8af727e710797baae58187c5b16480</anchor>
      <arglist>(bool show)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>slotSetStartAndDuration</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>d1c39916587b8db09e500f756d5fb5d2</anchor>
      <arglist>(long time, long duration)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>showCalibration</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>e30fb396ed2a526fec0b41338e6bbb7c</anchor>
      <arglist>(bool show, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>samplingRateModified</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>d989b83f81235c6df2a17e6fc2978028</anchor>
      <arglist>(long long length)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>addClusterProvider</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>917be5d92aad1b3ef7ff82ad483ad3b7</anchor>
      <arglist>(ClustersProvider *clustersProvider, QString name, ItemColors *clusterColors, bool active, QValueList&lt; int &gt; &amp;clustersToShow, QMap&lt; int, QValueList&lt; int &gt; &gt; *displayGroupsClusterFile, QMap&lt; int, int &gt; *channelsSpikeGroups, int nbSamplesBefore, int nbSamplesAfter, const QValueList&lt; int &gt; &amp;clustersToSkip)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>removeClusterProvider</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>02e4eae09c132dbdb5b28f4671be9c46</anchor>
      <arglist>(QString name, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>addEventProvider</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>2e8e19cd02495a0f3cf3c1b9360125c9</anchor>
      <arglist>(EventsProvider *eventsProvider, QString name, ItemColors *eventColors, bool active, QValueList&lt; int &gt; &amp;eventsToShow, const QValueList&lt; int &gt; &amp;eventsToNotBrowse)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>removeEventProvider</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>ffa0f1edd0c8eff94837e40e7355b310</anchor>
      <arglist>(QString name, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>print</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>14120575465ad55deeeff9cbe93af5d9</anchor>
      <arglist>(QPainter &amp;printPainter, QPaintDeviceMetrics &amp;metrics, QString filePath, bool whiteBackground)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>showNextCluster</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>1a9df873ea776894269b5b8ab4c4d71c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>showPreviousCluster</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>23ed27e8c52d639895694b431d49c4e3</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>showNextEvent</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>1309a9c5bc7b7461c13bee0a05b86552</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>showPreviousEvent</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>068d07c3bde4b7072059b8c4301b386b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>slotEventModified</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>0d12b73589b89ee21fdeb6b02e250c87</anchor>
      <arglist>(QString providerName, int selectedEventId, double time, double newTime)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>slotEventRemoved</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>4f0daf58c07be92a9acd0ba5a83a49a5</anchor>
      <arglist>(QString providerName, int selectedEventId, double time)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateEvents</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>f221ad5cc9f1019860b81d5637d22ab0</anchor>
      <arglist>(bool active, QString providerName, double time, double newTime)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>removeEvent</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>291d9965739e3153f0c2e20ef0e96506</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateEvents</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>6a14a0cfd637844755f4bc1a4dacef54</anchor>
      <arglist>(bool active, QString providerName, double time)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>eventToAddProperties</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>85a6a4bc37aba744d4bfbb9b2dc74bb8</anchor>
      <arglist>(QString providerName, QString eventDescription)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>slotEventAdded</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>d65594d2892d609c74b0b8ecd7f334ac</anchor>
      <arglist>(QString providerName, QString addedEventDescription, double time)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateEvents</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>e70bd1cc94de4c31f1209cf132b9b9ed</anchor>
      <arglist>(QString providerName, QValueList&lt; int &gt; &amp;eventsToShow, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateWaveformInformation</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>f90dfdba437c499ada80c361b477cd46</anchor>
      <arglist>(int nbSamplesBefore, int nbSamplesAfter, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateClusterData</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>13c030f5be9354e56d8f580f12fd16b9</anchor>
      <arglist>(bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateNoneBrowsingEventList</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>6aee61c22cbc43a29019ec003f69b289</anchor>
      <arglist>(QString providerName, const QValueList&lt; int &gt; &amp;eventsToNotBrowse)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateNoneBrowsingClusterList</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>1f7b99b8d7a3dc892218a21e6ecea537</anchor>
      <arglist>(QString providerName, const QValueList&lt; int &gt; &amp;clustersToNotBrowse)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>dockBeingClosed</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>72fbe7c32880265badaa8f943e8e702a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateClusters</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>8550f7b6cd52825d3f8cca90993495c3</anchor>
      <arglist>(QString name, QValueList&lt; int &gt; &amp;clustersToShow, ItemColors *clusterColors, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateSkipStatus</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>cfadbd7b5d0f9231d8d28f6003c40902</anchor>
      <arglist>(const QValueList&lt; int &gt; &amp;skippedChannels)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>channelsSelected</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>19bce654bd9fc8cf6d7c3cd5eae69076</anchor>
      <arglist>(const QValueList&lt; int &gt; &amp;selectedIds)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>updateStartAndDuration</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>751e6ef64462695ca4dd2e68badde8ea</anchor>
      <arglist>(long startTime, long timeWindow)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>eventModified</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>8d1a0b7bab31e304e0d539ef7c199672</anchor>
      <arglist>(QString providerName, int selectedEventId, double time, double newTime)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>eventRemoved</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>1ab7898ca132b2d5d7b29a2ddf54d61e</anchor>
      <arglist>(QString providerName, int selectedEventId, double time)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>eventAdded</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>dac1706bdb1d8da252abd1da2dc73854</anchor>
      <arglist>(QString providerName, QString addedEventDescription, double time)</arglist>
    </member>
    <member kind="signal">
      <type>void</type>
      <name>parentDockBeingClosed</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>f2690d16fcbb1688882927e3b7056dec</anchor>
      <arglist>(QWidget *viewWidget)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>TraceWidget</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>b50e20ff6e32561871e5aaba5b0fdd98</anchor>
      <arglist>(long startTime, long duration, bool greyScale, TracesProvider &amp;tracesProvider, bool multiColumns, bool verticalLines, bool raster, bool waveforms, bool labelsDisplay, QValueList&lt; int &gt; &amp;channelsToDisplay, int gain, int acquisitionGain, ChannelColors *channelColors, QMap&lt; int, QValueList&lt; int &gt; &gt; *groupsChannels, QMap&lt; int, int &gt; *channelsGroups, QValueList&lt; int &gt; &amp;channelOffsets, QValueList&lt; int &gt; &amp;gains, const QValueList&lt; int &gt; &amp;skippedChannels, QWidget *parent=0, const char *name=0, QColor backgroundColor=Qt::black, KStatusBar *statusBar=0L, int minSize=0, int maxSize=4000, int windowTopLeft=-500, int windowBottomRight=1001, int border=0)</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>timeFrameWidth</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>8f26f46916c73e28e3fa46d62a561fd2</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>long</type>
      <name>timeFrameStart</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>5f7034d8ed97e0cdea8b0f819497bd40</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>installEventFilter</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>6245719838a11243d06a420839192ed5</anchor>
      <arglist>(const QObject *filterObject)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>keyPressEvent</name>
      <anchorfile>classTraceWidget.html</anchorfile>
      <anchor>3c1aee2f245120fa6be62594e6d0b5c5</anchor>
      <arglist>(QKeyEvent *event)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Utilities</name>
    <filename>classUtilities.html</filename>
    <member kind="function" static="yes">
      <type>static bool</type>
      <name>compareVersion</name>
      <anchorfile>classUtilities.html</anchorfile>
      <anchor>15db2ed2d510f146f746951054410fc3</anchor>
      <arglist>(QString oldVersion, QString newVersion)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static int</type>
      <name>getNbLines</name>
      <anchorfile>classUtilities.html</anchorfile>
      <anchor>bf3d501b91ff27c14b3d23330ee49ab6</anchor>
      <arglist>(QString path)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>createBackup</name>
      <anchorfile>classUtilities.html</anchorfile>
      <anchor>ac87c2cd1387a63c1be999eda5b65d6e</anchor>
      <arglist>(QString path)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ViewWidget</name>
    <filename>classViewWidget.html</filename>
    <base>BaseFrame</base>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>updatedDimensions</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>238b02bc4888a936feb5c24133596911</anchor>
      <arglist>(int dimensionX, int dimensionY)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>singleColorUpdate</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>334a7e900904d2db053455f9c8b5e6fc</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>addClusterToView</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>6183b4a8e96fe2bf13fdacaf892678b4</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>removeClusterFromView</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>03c155399b7f12e5aea1e090a40581be</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>addNewClusterToView</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>a1ca23c8b1d3bb088b4f0ca0ad696b2b</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, int clusterId, bool active)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>addNewClusterToView</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>d872c228588cb0a372f1f2f33709d58f</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>spikesRemovedFromClusters</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>3e0ee079110b4369f0524cc3491f93d6</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, bool active)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>spikesAddedToCluster</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>ac959304564cbc8836998950f1a717ed</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>emptySelection</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>5dd5db4d43d33a65b403400e46f4b891</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>updateClusters</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>7406b5a4d71f7ef3ade9ac29850d2037</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;modifiedClusters, bool active, bool isModifiedByDeletion)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>undoUpdateClusters</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>33078af928133ca135553b75c5d55300</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;modifiedClusters, bool active)</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual bool</type>
      <name>isThreadsRunning</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>c9f9f10cbb4a62e7155322472679411b</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot" virtualness="virtual">
      <type>virtual void</type>
      <name>print</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>460212eda79f47409f01478b771d7895</anchor>
      <arglist>(QPainter &amp;printPainter, QPaintDeviceMetrics &amp;metrics, bool whiteBackground)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>ViewWidget</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>86837c742daf2ccd927c6d9511287f50</anchor>
      <arglist>(KlustersDoc &amp;doc, KlustersView &amp;view, QColor backgroundColor, KStatusBar *statusBar, QWidget *parent=0, const char *name=0, int minSize=500, int maxSize=4000, int windowTopLeft=-500, int windowBottomRight=1001, int border=0, int Xborder=0, int Yborder=0)</arglist>
    </member>
    <member kind="variable">
      <type>QPixmap</type>
      <name>doublebuffer</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>091c72490041f8e45689b1dc4d693d5e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>KlustersView &amp;</type>
      <name>view</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>66610cd0dfae797713df3acb439033cc</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>KlustersDoc &amp;</type>
      <name>doc</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>b8bdf22293e76d9a143fb84488d52fc4</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>QValueList&lt; int &gt;</type>
      <name>clusterUpdateList</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>bccba002ff28008b32f8082553f6fca8</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>KStatusBar *</type>
      <name>statusBar</name>
      <anchorfile>classViewWidget.html</anchorfile>
      <anchor>2556296973c80b8fea7e8f0cec46cc04</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>WaveformThread</name>
    <filename>classWaveformThread.html</filename>
    <member kind="function">
      <type>void</type>
      <name>getWaveformInformation</name>
      <anchorfile>classWaveformThread.html</anchorfile>
      <anchor>64bd1145918c25f5866a3ddc88f189d6</anchor>
      <arglist>(int clusterId, WaveformView::PresentationMode mode)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>getWaveformInformation</name>
      <anchorfile>classWaveformThread.html</anchorfile>
      <anchor>cc680b488c72eba3c725409340b8316e</anchor>
      <arglist>(QValueList&lt; int &gt; clusterIds, WaveformView::PresentationMode mode)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>getMean</name>
      <anchorfile>classWaveformThread.html</anchorfile>
      <anchor>cd99c883f36b3482255647e5e73b8d61</anchor>
      <arglist>(QValueList&lt; int &gt; clusterIds, WaveformView::PresentationMode mode)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>getMean</name>
      <anchorfile>classWaveformThread.html</anchorfile>
      <anchor>cfb8a31d5cc5698ae3bebe458187df6b</anchor>
      <arglist>(WaveformView::PresentationMode mode)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isSingleTriggeringCluster</name>
      <anchorfile>classWaveformThread.html</anchorfile>
      <anchor>6038b0759da2bb6f7509bc3c3e65369c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>triggeringCluster</name>
      <anchorfile>classWaveformThread.html</anchorfile>
      <anchor>30601dfbf075ec6c6b3affaaccf28433</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>QValueList&lt; int &gt;</type>
      <name>triggeringClusters</name>
      <anchorfile>classWaveformThread.html</anchorfile>
      <anchor>e1033f8da9b06d6ed475b225f87c9b2c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>isMeanRequested</name>
      <anchorfile>classWaveformThread.html</anchorfile>
      <anchor>db3d88a8fba1af0aa46be83bf86a724f</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>stopProcessing</name>
      <anchorfile>classWaveformThread.html</anchorfile>
      <anchor>72393adc73ad43438c11c7fc9d622775</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>GetWaveformsEvent *</type>
      <name>getWaveformsEvent</name>
      <anchorfile>classWaveformThread.html</anchorfile>
      <anchor>029f16d7482041bc91d5b37b25673119</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>NoWaveformDataEvent *</type>
      <name>noWaveformDataEvent</name>
      <anchorfile>classWaveformThread.html</anchorfile>
      <anchor>ca492ddcc114041b0e3e8c644a67852c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>run</name>
      <anchorfile>classWaveformThread.html</anchorfile>
      <anchor>9c6552397fe447be71bc7b81408c37a1</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>GetWaveformsEvent</name>
      <anchorfile>classWaveformThread.html</anchorfile>
      <anchor>a7dd60c9c88bbbc6f0ee30c834e32b52</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>NoWaveformDataEvent</name>
      <anchorfile>classWaveformThread.html</anchorfile>
      <anchor>5e3aaed01978ba3ee69d7ff8a5585974</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend">
      <type>friend WaveformThread *</type>
      <name>WaveformView::getWaveforms</name>
      <anchorfile>classWaveformThread.html</anchorfile>
      <anchor>2e371d15a973137dc32b1f4e7022fa83</anchor>
      <arglist>()</arglist>
    </member>
    <class kind="class">WaveformThread::GetWaveformsEvent</class>
    <class kind="class">WaveformThread::NoWaveformDataEvent</class>
  </compound>
  <compound kind="class">
    <name>WaveformThread::GetWaveformsEvent</name>
    <filename>classWaveformThread_1_1GetWaveformsEvent.html</filename>
    <member kind="function">
      <type>WaveformThread *</type>
      <name>parentThread</name>
      <anchorfile>classWaveformThread_1_1GetWaveformsEvent.html</anchorfile>
      <anchor>9c74ae0641603120bdac21dfb28e6567</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend GetWaveformsEvent *</type>
      <name>WaveformThread::getWaveformsEvent</name>
      <anchorfile>classWaveformThread_1_1GetWaveformsEvent.html</anchorfile>
      <anchor>ac7e2a5538354628cd96c17d270ab379</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>WaveformThread::NoWaveformDataEvent</name>
    <filename>classWaveformThread_1_1NoWaveformDataEvent.html</filename>
    <member kind="function">
      <type>WaveformThread *</type>
      <name>parentThread</name>
      <anchorfile>classWaveformThread_1_1NoWaveformDataEvent.html</anchorfile>
      <anchor>c01b5023bbfe60a60d276bb897dbf682</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend NoWaveformDataEvent *</type>
      <name>WaveformThread::noWaveformDataEvent</name>
      <anchorfile>classWaveformThread_1_1NoWaveformDataEvent.html</anchorfile>
      <anchor>552774e0d2ab8d6bfe68dae131cd5475</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>WaveformView</name>
    <filename>classWaveformView.html</filename>
    <base>ViewWidget</base>
    <member kind="enumeration">
      <name>PresentationMode</name>
      <anchor>2de039cfeb8d46fa258d6dcf960ded62</anchor>
      <arglist></arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>singleColorUpdate</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>d458ee0391b5f3963ce273002d018e89</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>addClusterToView</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>b2178befa4ebaa4bad4a8485ca061c81</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>removeClusterFromView</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>950d13da5d849f790ffbe12e1edbebad</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>addNewClusterToView</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>692ee48dd0b0c618df287c4946397ea6</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>addNewClusterToView</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>7297eb125ee936ce7af048dcc64a47f4</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>spikesRemovedFromClusters</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>a532692a9e1ca9fb770fed7c23debe38</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;fromClusters, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>spikesAddedToCluster</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>cb7017405c897a3e6619ca2f5a77eebb</anchor>
      <arglist>(int clusterId, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setMode</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>793a5b9a4d86f7e6796e76f82a98b192</anchor>
      <arglist>(BaseFrame::Mode selectedMode)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateClusters</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>ad146ed85385b25ed0f011cd63af179b</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;modifiedClusters, bool active, bool isModifiedByDeletion)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>undoUpdateClusters</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>c81b131be5778fe83c330ce5f6f8fdfc</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;modifiedClusters, bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setMeanPresentation</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>657c429d63f1e45b76ed32f38070b36f</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setAllWaveformsPresentation</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>a7b3bdbbe954b870072ec84346634dbc</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setOverLayPresentation</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>6299fc423410500b7aa16cf75666b63e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setSideBySidePresentation</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>61348f3bfd0a196f5618732e15083762</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setSampleMode</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>42b5bcc2580f2bb9fcd1a8b233a920fa</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setTimeFrameMode</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>12d58947f8ab2a17ac0c1e60b9dbd5e7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setTimeFrame</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>37e86070421d04bf63d6dad18d911f96</anchor>
      <arglist>(long start, long width)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setGain</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>d8c7b97f2c0dfe486915fe43bde596fd</anchor>
      <arglist>(int gain)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>increaseAmplitude</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>151074205d582e9c6f54254a36309dc5</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>decreaseAmplitude</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>de9539d1e742a7a86d6e1ab20a22a269</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setDisplayNbSpikes</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>441631df05b5cf8befc8fc7eb401b586</anchor>
      <arglist>(long nbSpikes)</arglist>
    </member>
    <member kind="slot">
      <type>bool</type>
      <name>isThreadsRunning</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>47ef80336653077fd80c8c29e2870bbc</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>updateDrawing</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>adc33eefc8bc1028c50fad78fff32b70</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>setChannelPositions</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>6a18167200e7e852858d267c7644effa</anchor>
      <arglist>(QValueList&lt; int &gt; &amp;positions)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>clustersRenumbered</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>ac95f93e9771eb65588127af48b0a546</anchor>
      <arglist>(bool active)</arglist>
    </member>
    <member kind="slot">
      <type>void</type>
      <name>print</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>be060383727a599f7390b14cdd13354a</anchor>
      <arglist>(QPainter &amp;printPainter, QPaintDeviceMetrics &amp;metrics, bool whiteBackground)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>WaveformView</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>8eb441f96c3d47007166f645f1c08e17</anchor>
      <arglist>(KlustersDoc &amp;doc, KlustersView &amp;view, QColor backgroundColor, int acquisitionGain, QValueList&lt; int &gt; positions, KStatusBar *statusBar, QWidget *parent=0, bool isTimeFrameMode=false, long start=0, long timeFrameWidth=0, long nbSpkToDisplay=0, bool overLay=false, bool mean=false, const char *name=0, int minSize=50, int maxSize=4000, int windowTopLeft=-500, int windowBottomRight=1001, int border=0)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>willBeKilled</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>cad6888fcdbfe2d613b1db7f7af56307</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>drawContents</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>2bffb346795b06cdc236c01697e6ff3c</anchor>
      <arglist>(QPainter *p)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>customEvent</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>513e23710228dadcdf2974cfcb48fb60</anchor>
      <arglist>(QCustomEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mouseDoubleClickEvent</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>92564b468eca5af50d1f2347d9be2108</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>mouseReleaseEvent</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>479b44b080958401a8a99df609890dc7</anchor>
      <arglist>(QMouseEvent *event)</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>resizeEvent</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>c5bd4d585eabe0cc12cb773315b9b82f</anchor>
      <arglist>(QResizeEvent *event)</arglist>
    </member>
    <member kind="friend">
      <type>friend class</type>
      <name>WaveformThread</name>
      <anchorfile>classWaveformView.html</anchorfile>
      <anchor>9695b783e4eca9a797b6ca576ba48358</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>ZoomWindow</name>
    <filename>classZoomWindow.html</filename>
    <member kind="function">
      <type></type>
      <name>ZoomWindow</name>
      <anchorfile>classZoomWindow.html</anchorfile>
      <anchor>3935a92cbd049d32a6ae96dba3653673</anchor>
      <arglist>(const QRect &amp;rect)</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>~ZoomWindow</name>
      <anchorfile>classZoomWindow.html</anchorfile>
      <anchor>ebd4f209291a4931c73c3bf3bdfbbb6a</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type></type>
      <name>operator QRect</name>
      <anchorfile>classZoomWindow.html</anchorfile>
      <anchor>0e0ccfd2b978a01ee0e19ef1cd2f77e9</anchor>
      <arglist>() const</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>zoom</name>
      <anchorfile>classZoomWindow.html</anchorfile>
      <anchor>62054b682209584ceb78acbb65c6fb8c</anchor>
      <arglist>(float factor, float centerX, float centerY)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>zoom</name>
      <anchorfile>classZoomWindow.html</anchorfile>
      <anchor>7ff30a2fe474928de05df30ac4ffd4b0</anchor>
      <arglist>(float factor, const QPoint &amp;center)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>zoom</name>
      <anchorfile>classZoomWindow.html</anchorfile>
      <anchor>58976a2da22b64ae01b06ebdb878863b</anchor>
      <arglist>(int firstClickX, int firstClickY, int secondClickX, int secondClickY)</arglist>
    </member>
    <member kind="function">
      <type>bool</type>
      <name>zoom</name>
      <anchorfile>classZoomWindow.html</anchorfile>
      <anchor>6a25a932c8bf2f19193b076c6153b9b9</anchor>
      <arglist>(QPoint firstPoint, QPoint secondPoint)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>reset</name>
      <anchorfile>classZoomWindow.html</anchorfile>
      <anchor>59e54a28b349f48f4a8599baf60516c7</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="protected">
      <type>void</type>
      <name>correctWindow</name>
      <anchorfile>classZoomWindow.html</anchorfile>
      <anchor>c1d2065b9b77a065c3101a4003cfa7ba</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="namespace">
    <name>klusters</name>
    <filename>namespaceklusters.html</filename>
    <member kind="variable">
      <type>const QString</type>
      <name>VERSION</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>17430359bee8a24b92e1cc041a70de7d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>PARAMETERS</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>d1975c27d519d23bc30dc0fc9a784888</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>CREATOR</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>c902d6b2973e34f57474aade6f7082da</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>ACQUISITION</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>d2cfb37869139805833c8dbfa4e9969f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>SAMPLING_RATES</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>fd32fc052c357e47d2c650134a24c98e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>SPIKE</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>a387f48e343a03c77ba425b00218be2d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>UNITS</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>27a4ddd77f054e24599c3ef4fcd4b680</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>BITS</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>7ab1852f3b6111a7bdac1650235bcad4</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>NB_CHANNELS</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>8ad65dccba933eed935c39cdac5c1165</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>SAMPLING_RATE</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>3987fe6fc4ac3cafaca8ac88692f2a90</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>VOLTAGE_RANGE</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>95da54c05b025c54b655a061fcec2f69</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>AMPLIFICATION</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>e7d6329bcb1a85d20acc11bc54089c33</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>OFFSET</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>f288015f479f50b921505194f4d3c993</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>LFP_SAMPLING_RATE</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>875a7395d27a94eea92b2fc0835d123a</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>NB_SAMPLES</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>5dafa4af52d118a895d1a5b42f9c2550</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>PEAK_SAMPLE_INDEX</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>9b0b0cfe5ef08de057a2a5d14f8ac39e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>CHANNEL_GROUPS</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>f2f6134235c9cd30d8b242718121bdea</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>GROUP</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>4cb3c659fbb0d70cad08d2f718a3f1f7</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>CHANNELS</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>5c1a2e8b06644e8b0581d2b8c6aa0c31</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>CHANNEL</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>5131fbd3ab73dffd465d46b9c7bdce7a</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>NB_FEATURES</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>cbb53b8a8b34fb47f1b7011ae0a39511</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>UNIT</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>49c9d4ba76beb51c0be6bee513f97763</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>CLUSTER</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>230cc028c55953617ea440ab6fed2828</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>STRUCTURE</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>933c2478e50b1982e4c80d3241ebcd1e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>TYPE</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>4215a3a6d2867fb8c59bc5a17745884b</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>ISOLATION_DISTANCE</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>f76abbde206398c9b7361a5806bb620d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>QUALITY</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>661a7a02706a63c7eac767f2f6b11e6b</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>NOTES</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>2562d5f78e4255a6d453525f4f76501b</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>VERSION</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>17430359bee8a24b92e1cc041a70de7d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>PARAMETERS</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>d1975c27d519d23bc30dc0fc9a784888</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>CREATOR</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>c902d6b2973e34f57474aade6f7082da</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>ACQUISITION</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>d2cfb37869139805833c8dbfa4e9969f</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>SAMPLING_RATES</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>fd32fc052c357e47d2c650134a24c98e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>SPIKE</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>a387f48e343a03c77ba425b00218be2d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>UNITS</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>27a4ddd77f054e24599c3ef4fcd4b680</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>BITS</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>7ab1852f3b6111a7bdac1650235bcad4</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>NB_CHANNELS</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>8ad65dccba933eed935c39cdac5c1165</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>SAMPLING_RATE</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>3987fe6fc4ac3cafaca8ac88692f2a90</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>VOLTAGE_RANGE</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>95da54c05b025c54b655a061fcec2f69</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>AMPLIFICATION</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>e7d6329bcb1a85d20acc11bc54089c33</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>OFFSET</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>f288015f479f50b921505194f4d3c993</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>NB_SAMPLES</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>5dafa4af52d118a895d1a5b42f9c2550</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>PEAK_SAMPLE_INDEX</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>9b0b0cfe5ef08de057a2a5d14f8ac39e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>CHANNEL_GROUPS</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>f2f6134235c9cd30d8b242718121bdea</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>GROUP</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>4cb3c659fbb0d70cad08d2f718a3f1f7</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>CHANNELS</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>5c1a2e8b06644e8b0581d2b8c6aa0c31</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>CHANNEL</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>5131fbd3ab73dffd465d46b9c7bdce7a</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>NB_FEATURES</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>cbb53b8a8b34fb47f1b7011ae0a39511</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>UNIT</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>49c9d4ba76beb51c0be6bee513f97763</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>CLUSTER</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>230cc028c55953617ea440ab6fed2828</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>STRUCTURE</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>933c2478e50b1982e4c80d3241ebcd1e</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>TYPE</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>4215a3a6d2867fb8c59bc5a17745884b</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>ISOLATION_DISTANCE</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>f76abbde206398c9b7361a5806bb620d</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>QUALITY</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>661a7a02706a63c7eac767f2f6b11e6b</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>const QString</type>
      <name>NOTES</name>
      <anchorfile>namespaceklusters.html</anchorfile>
      <anchor>2562d5f78e4255a6d453525f4f76501b</anchor>
      <arglist></arglist>
    </member>
  </compound>
</tagfile>
