#include <jni.h>
#include "JCCEnv.h"
#include "java/io/BufferedReader.h"
#include "java/util/stream/Stream.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *BufferedReader::class$ = NULL;
    jmethodID *BufferedReader::mids$ = NULL;
    bool BufferedReader::live$ = false;

    jclass BufferedReader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/BufferedReader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_fdff785437afea93] = env->getMethodID(cls, "<init>", "(Ljava/io/Reader;)V");
        mids$[mid_init$_26cc506a7e4e00cb] = env->getMethodID(cls, "<init>", "(Ljava/io/Reader;I)V");
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_lines_11e4ca8182c1933d] = env->getMethodID(cls, "lines", "()Ljava/util/stream/Stream;");
        mids$[mid_mark_8fd427ab23829bf5] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_eee3de00fe971136] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_read_d6ab429752e7c267] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_1f255a7d724a5165] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_readLine_d2c8eb4129821f0e] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_ready_eee3de00fe971136] = env->getMethodID(cls, "ready", "()Z");
        mids$[mid_reset_ff7cb6c242604316] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_1eaf6eb0a3f3163f] = env->getMethodID(cls, "skip", "(J)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    BufferedReader::BufferedReader(const ::java::io::Reader & a0) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_fdff785437afea93, a0.this$)) {}

    BufferedReader::BufferedReader(const ::java::io::Reader & a0, jint a1) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_26cc506a7e4e00cb, a0.this$, a1)) {}

    void BufferedReader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    ::java::util::stream::Stream BufferedReader::lines() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_lines_11e4ca8182c1933d]));
    }

    void BufferedReader::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_8fd427ab23829bf5], a0);
    }

    jboolean BufferedReader::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_eee3de00fe971136]);
    }

    jint BufferedReader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_d6ab429752e7c267]);
    }

    jint BufferedReader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_1f255a7d724a5165], a0.this$, a1, a2);
    }

    ::java::lang::String BufferedReader::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_d2c8eb4129821f0e]));
    }

    jboolean BufferedReader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_eee3de00fe971136]);
    }

    void BufferedReader::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_ff7cb6c242604316]);
    }

    jlong BufferedReader::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_1eaf6eb0a3f3163f], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_BufferedReader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_BufferedReader_instance_(PyTypeObject *type, PyObject *arg);
    static int t_BufferedReader_init_(t_BufferedReader *self, PyObject *args, PyObject *kwds);
    static PyObject *t_BufferedReader_close(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_lines(t_BufferedReader *self);
    static PyObject *t_BufferedReader_mark(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_markSupported(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_read(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_readLine(t_BufferedReader *self);
    static PyObject *t_BufferedReader_ready(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_reset(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_skip(t_BufferedReader *self, PyObject *args);

    static PyMethodDef t_BufferedReader__methods_[] = {
      DECLARE_METHOD(t_BufferedReader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_BufferedReader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_BufferedReader, close, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, lines, METH_NOARGS),
      DECLARE_METHOD(t_BufferedReader, mark, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, markSupported, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, read, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, readLine, METH_NOARGS),
      DECLARE_METHOD(t_BufferedReader, ready, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, reset, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, skip, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(BufferedReader)[] = {
      { Py_tp_methods, t_BufferedReader__methods_ },
      { Py_tp_init, (void *) t_BufferedReader_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(BufferedReader)[] = {
      &PY_TYPE_DEF(::java::io::Reader),
      NULL
    };

    DEFINE_TYPE(BufferedReader, t_BufferedReader, BufferedReader);

    void t_BufferedReader::install(PyObject *module)
    {
      installType(&PY_TYPE(BufferedReader), &PY_TYPE_DEF(BufferedReader), module, "BufferedReader", 0);
    }

    void t_BufferedReader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(BufferedReader), "class_", make_descriptor(BufferedReader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(BufferedReader), "wrapfn_", make_descriptor(t_BufferedReader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(BufferedReader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_BufferedReader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, BufferedReader::initializeClass, 1)))
        return NULL;
      return t_BufferedReader::wrap_Object(BufferedReader(((t_BufferedReader *) arg)->object.this$));
    }
    static PyObject *t_BufferedReader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, BufferedReader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_BufferedReader_init_(t_BufferedReader *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::Reader a0((jobject) NULL);
          BufferedReader object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::Reader::initializeClass, &a0))
          {
            INT_CALL(object = BufferedReader(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::Reader a0((jobject) NULL);
          jint a1;
          BufferedReader object((jobject) NULL);

          if (!parseArgs(args, "kI", ::java::io::Reader::initializeClass, &a0, &a1))
          {
            INT_CALL(object = BufferedReader(a0, a1));
            self->object = object;
            break;
          }
        }
       default:
       err:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_BufferedReader_close(t_BufferedReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_BufferedReader_lines(t_BufferedReader *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.lines());
      return ::java::util::stream::t_Stream::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_BufferedReader_mark(t_BufferedReader *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "mark", args, 2);
    }

    static PyObject *t_BufferedReader_markSupported(t_BufferedReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.markSupported());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "markSupported", args, 2);
    }

    static PyObject *t_BufferedReader_read(t_BufferedReader *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_BufferedReader_readLine(t_BufferedReader *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.readLine());
      return j2p(result);
    }

    static PyObject *t_BufferedReader_ready(t_BufferedReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.ready());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "ready", args, 2);
    }

    static PyObject *t_BufferedReader_reset(t_BufferedReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.reset());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "reset", args, 2);
    }

    static PyObject *t_BufferedReader_skip(t_BufferedReader *self, PyObject *args)
    {
      jlong a0;
      jlong result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "skip", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FrameAdapter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FrameAdapter::class$ = NULL;
      jmethodID *FrameAdapter::mids$ = NULL;
      bool FrameAdapter::live$ = false;

      jclass FrameAdapter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FrameAdapter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9725b246c9e25f68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_1b1a4229447f7bf7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FrameAdapter::FrameAdapter(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9725b246c9e25f68, a0.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates FrameAdapter::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6236a35378ed47a5], a0.this$, a1.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FrameAdapter::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_1b1a4229447f7bf7], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_FrameAdapter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FrameAdapter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FrameAdapter_init_(t_FrameAdapter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FrameAdapter_getPVCoordinates(t_FrameAdapter *self, PyObject *args);

      static PyMethodDef t_FrameAdapter__methods_[] = {
        DECLARE_METHOD(t_FrameAdapter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAdapter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAdapter, getPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FrameAdapter)[] = {
        { Py_tp_methods, t_FrameAdapter__methods_ },
        { Py_tp_init, (void *) t_FrameAdapter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FrameAdapter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FrameAdapter, t_FrameAdapter, FrameAdapter);

      void t_FrameAdapter::install(PyObject *module)
      {
        installType(&PY_TYPE(FrameAdapter), &PY_TYPE_DEF(FrameAdapter), module, "FrameAdapter", 0);
      }

      void t_FrameAdapter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAdapter), "class_", make_descriptor(FrameAdapter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAdapter), "wrapfn_", make_descriptor(t_FrameAdapter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAdapter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FrameAdapter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FrameAdapter::initializeClass, 1)))
          return NULL;
        return t_FrameAdapter::wrap_Object(FrameAdapter(((t_FrameAdapter *) arg)->object.this$));
      }
      static PyObject *t_FrameAdapter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FrameAdapter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FrameAdapter_init_(t_FrameAdapter *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        FrameAdapter object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          INT_CALL(object = FrameAdapter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FrameAdapter_getPVCoordinates(t_FrameAdapter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/AbstractDragForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/ForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *AbstractDragForceModel::class$ = NULL;
        jmethodID *AbstractDragForceModel::mids$ = NULL;
        bool AbstractDragForceModel::live$ = false;

        jclass AbstractDragForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/AbstractDragForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_isGradientStateDerivative_712e981f67f3ccbe] = env->getMethodID(cls, "isGradientStateDerivative", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
            mids$[mid_getGradientDensityWrtStateUsingFiniteDifferences_04cf191a644c6381] = env->getMethodID(cls, "getGradientDensityWrtStateUsingFiniteDifferences", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_isDSStateDerivative_712e981f67f3ccbe] = env->getMethodID(cls, "isDSStateDerivative", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
            mids$[mid_getDSDensityWrtStateUsingFiniteDifferences_14fad3513bd593d0] = env->getMethodID(cls, "getDSDensityWrtStateUsingFiniteDifferences", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_isVariable_52d7e0e51b0b9ccd] = env->getMethodID(cls, "isVariable", "(Lorg/hipparchus/analysis/differentiation/Gradient;I)Z");
            mids$[mid_isVariable_0739c38386fc7c92] = env->getMethodID(cls, "isVariable", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;I)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean AbstractDragForceModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {
        static PyObject *t_AbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDragForceModel_dependsOnPositionOnly(t_AbstractDragForceModel *self);

        static PyMethodDef t_AbstractDragForceModel__methods_[] = {
          DECLARE_METHOD(t_AbstractDragForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDragForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDragForceModel, dependsOnPositionOnly, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractDragForceModel)[] = {
          { Py_tp_methods, t_AbstractDragForceModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractDragForceModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractDragForceModel, t_AbstractDragForceModel, AbstractDragForceModel);

        void t_AbstractDragForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractDragForceModel), &PY_TYPE_DEF(AbstractDragForceModel), module, "AbstractDragForceModel", 0);
        }

        void t_AbstractDragForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDragForceModel), "class_", make_descriptor(AbstractDragForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDragForceModel), "wrapfn_", make_descriptor(t_AbstractDragForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDragForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractDragForceModel::initializeClass, 1)))
            return NULL;
          return t_AbstractDragForceModel::wrap_Object(AbstractDragForceModel(((t_AbstractDragForceModel *) arg)->object.this$));
        }
        static PyObject *t_AbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractDragForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractDragForceModel_dependsOnPositionOnly(t_AbstractDragForceModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *TurnAroundRange::class$ = NULL;
        jmethodID *TurnAroundRange::mids$ = NULL;
        bool TurnAroundRange::live$ = false;
        ::java::lang::String *TurnAroundRange::MEASUREMENT_TYPE = NULL;

        jclass TurnAroundRange::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/TurnAroundRange");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e4f5e0763746f291] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getPrimaryStation_f8d3ef5d49da0d87] = env->getMethodID(cls, "getPrimaryStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getSecondaryStation_f8d3ef5d49da0d87] = env->getMethodID(cls, "getSecondaryStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TurnAroundRange::TurnAroundRange(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_e4f5e0763746f291, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation TurnAroundRange::getPrimaryStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getPrimaryStation_f8d3ef5d49da0d87]));
        }

        ::org::orekit::estimation::measurements::GroundStation TurnAroundRange::getSecondaryStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getSecondaryStation_f8d3ef5d49da0d87]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_TurnAroundRange_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TurnAroundRange_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TurnAroundRange_of_(t_TurnAroundRange *self, PyObject *args);
        static int t_TurnAroundRange_init_(t_TurnAroundRange *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TurnAroundRange_getPrimaryStation(t_TurnAroundRange *self);
        static PyObject *t_TurnAroundRange_getSecondaryStation(t_TurnAroundRange *self);
        static PyObject *t_TurnAroundRange_get__primaryStation(t_TurnAroundRange *self, void *data);
        static PyObject *t_TurnAroundRange_get__secondaryStation(t_TurnAroundRange *self, void *data);
        static PyObject *t_TurnAroundRange_get__parameters_(t_TurnAroundRange *self, void *data);
        static PyGetSetDef t_TurnAroundRange__fields_[] = {
          DECLARE_GET_FIELD(t_TurnAroundRange, primaryStation),
          DECLARE_GET_FIELD(t_TurnAroundRange, secondaryStation),
          DECLARE_GET_FIELD(t_TurnAroundRange, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TurnAroundRange__methods_[] = {
          DECLARE_METHOD(t_TurnAroundRange, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TurnAroundRange, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TurnAroundRange, of_, METH_VARARGS),
          DECLARE_METHOD(t_TurnAroundRange, getPrimaryStation, METH_NOARGS),
          DECLARE_METHOD(t_TurnAroundRange, getSecondaryStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TurnAroundRange)[] = {
          { Py_tp_methods, t_TurnAroundRange__methods_ },
          { Py_tp_init, (void *) t_TurnAroundRange_init_ },
          { Py_tp_getset, t_TurnAroundRange__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TurnAroundRange)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(TurnAroundRange, t_TurnAroundRange, TurnAroundRange);
        PyObject *t_TurnAroundRange::wrap_Object(const TurnAroundRange& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TurnAroundRange::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TurnAroundRange *self = (t_TurnAroundRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TurnAroundRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TurnAroundRange::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TurnAroundRange *self = (t_TurnAroundRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TurnAroundRange::install(PyObject *module)
        {
          installType(&PY_TYPE(TurnAroundRange), &PY_TYPE_DEF(TurnAroundRange), module, "TurnAroundRange", 0);
        }

        void t_TurnAroundRange::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "class_", make_descriptor(TurnAroundRange::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "wrapfn_", make_descriptor(t_TurnAroundRange::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "boxfn_", make_descriptor(boxObject));
          env->getClass(TurnAroundRange::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*TurnAroundRange::MEASUREMENT_TYPE)));
        }

        static PyObject *t_TurnAroundRange_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TurnAroundRange::initializeClass, 1)))
            return NULL;
          return t_TurnAroundRange::wrap_Object(TurnAroundRange(((t_TurnAroundRange *) arg)->object.this$));
        }
        static PyObject *t_TurnAroundRange_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TurnAroundRange::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TurnAroundRange_of_(t_TurnAroundRange *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_TurnAroundRange_init_(t_TurnAroundRange *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          TurnAroundRange object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = TurnAroundRange(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(TurnAroundRange);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TurnAroundRange_getPrimaryStation(t_TurnAroundRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_TurnAroundRange_getSecondaryStation(t_TurnAroundRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_TurnAroundRange_get__parameters_(t_TurnAroundRange *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_TurnAroundRange_get__primaryStation(t_TurnAroundRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_TurnAroundRange_get__secondaryStation(t_TurnAroundRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/ContinueOnEvent.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *ContinueOnEvent::class$ = NULL;
          jmethodID *ContinueOnEvent::mids$ = NULL;
          bool ContinueOnEvent::live$ = false;

          jclass ContinueOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/ContinueOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_66898681536e4202] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ContinueOnEvent::ContinueOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::hipparchus::ode::events::Action ContinueOnEvent::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_66898681536e4202], a0.this$, a1.this$, a2));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {
          static PyObject *t_ContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ContinueOnEvent_init_(t_ContinueOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ContinueOnEvent_eventOccurred(t_ContinueOnEvent *self, PyObject *args);

          static PyMethodDef t_ContinueOnEvent__methods_[] = {
            DECLARE_METHOD(t_ContinueOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinueOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinueOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ContinueOnEvent)[] = {
            { Py_tp_methods, t_ContinueOnEvent__methods_ },
            { Py_tp_init, (void *) t_ContinueOnEvent_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ContinueOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ContinueOnEvent, t_ContinueOnEvent, ContinueOnEvent);

          void t_ContinueOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(ContinueOnEvent), &PY_TYPE_DEF(ContinueOnEvent), module, "ContinueOnEvent", 0);
          }

          void t_ContinueOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinueOnEvent), "class_", make_descriptor(ContinueOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinueOnEvent), "wrapfn_", make_descriptor(t_ContinueOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinueOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ContinueOnEvent::initializeClass, 1)))
              return NULL;
            return t_ContinueOnEvent::wrap_Object(ContinueOnEvent(((t_ContinueOnEvent *) arg)->object.this$));
          }
          static PyObject *t_ContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ContinueOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ContinueOnEvent_init_(t_ContinueOnEvent *self, PyObject *args, PyObject *kwds)
          {
            ContinueOnEvent object((jobject) NULL);

            INT_CALL(object = ContinueOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_ContinueOnEvent_eventOccurred(t_ContinueOnEvent *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/RiddersSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *RiddersSolver::class$ = NULL;
        jmethodID *RiddersSolver::mids$ = NULL;
        bool RiddersSolver::live$ = false;

        jclass RiddersSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/RiddersSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_9981f74b2d109da6] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RiddersSolver::RiddersSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        RiddersSolver::RiddersSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        RiddersSolver::RiddersSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        static PyObject *t_RiddersSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RiddersSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RiddersSolver_of_(t_RiddersSolver *self, PyObject *args);
        static int t_RiddersSolver_init_(t_RiddersSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RiddersSolver_get__parameters_(t_RiddersSolver *self, void *data);
        static PyGetSetDef t_RiddersSolver__fields_[] = {
          DECLARE_GET_FIELD(t_RiddersSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RiddersSolver__methods_[] = {
          DECLARE_METHOD(t_RiddersSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RiddersSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RiddersSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RiddersSolver)[] = {
          { Py_tp_methods, t_RiddersSolver__methods_ },
          { Py_tp_init, (void *) t_RiddersSolver_init_ },
          { Py_tp_getset, t_RiddersSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RiddersSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(RiddersSolver, t_RiddersSolver, RiddersSolver);
        PyObject *t_RiddersSolver::wrap_Object(const RiddersSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RiddersSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RiddersSolver *self = (t_RiddersSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RiddersSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RiddersSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RiddersSolver *self = (t_RiddersSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RiddersSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(RiddersSolver), &PY_TYPE_DEF(RiddersSolver), module, "RiddersSolver", 0);
        }

        void t_RiddersSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RiddersSolver), "class_", make_descriptor(RiddersSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RiddersSolver), "wrapfn_", make_descriptor(t_RiddersSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RiddersSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RiddersSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RiddersSolver::initializeClass, 1)))
            return NULL;
          return t_RiddersSolver::wrap_Object(RiddersSolver(((t_RiddersSolver *) arg)->object.this$));
        }
        static PyObject *t_RiddersSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RiddersSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RiddersSolver_of_(t_RiddersSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RiddersSolver_init_(t_RiddersSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              RiddersSolver object((jobject) NULL);

              INT_CALL(object = RiddersSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              RiddersSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = RiddersSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              RiddersSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = RiddersSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_RiddersSolver_get__parameters_(t_RiddersSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTJ2SquaredClosedFormContext::class$ = NULL;
            jmethodID *DSSTJ2SquaredClosedFormContext::mids$ = NULL;
            bool DSSTJ2SquaredClosedFormContext::live$ = false;

            jclass DSSTJ2SquaredClosedFormContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3392e009995cba69] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_getA4_9981f74b2d109da6] = env->getMethodID(cls, "getA4", "()D");
                mids$[mid_getAlpha4_9981f74b2d109da6] = env->getMethodID(cls, "getAlpha4", "()D");
                mids$[mid_getC_9981f74b2d109da6] = env->getMethodID(cls, "getC", "()D");
                mids$[mid_getEta_9981f74b2d109da6] = env->getMethodID(cls, "getEta", "()D");
                mids$[mid_getS2_9981f74b2d109da6] = env->getMethodID(cls, "getS2", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTJ2SquaredClosedFormContext::DSSTJ2SquaredClosedFormContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_3392e009995cba69, a0.this$, a1.this$)) {}

            jdouble DSSTJ2SquaredClosedFormContext::getA4() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getA4_9981f74b2d109da6]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getAlpha4() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha4_9981f74b2d109da6]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getC_9981f74b2d109da6]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getEta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getEta_9981f74b2d109da6]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getS2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS2_9981f74b2d109da6]);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_DSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTJ2SquaredClosedFormContext_init_(t_DSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getA4(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getAlpha4(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getC(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getEta(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getS2(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__a4(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__alpha4(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__c(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__eta(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__s2(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyGetSetDef t_DSSTJ2SquaredClosedFormContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, a4),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, alpha4),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, c),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, eta),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, s2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTJ2SquaredClosedFormContext__methods_[] = {
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getA4, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getAlpha4, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getC, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getEta, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getS2, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTJ2SquaredClosedFormContext)[] = {
              { Py_tp_methods, t_DSSTJ2SquaredClosedFormContext__methods_ },
              { Py_tp_init, (void *) t_DSSTJ2SquaredClosedFormContext_init_ },
              { Py_tp_getset, t_DSSTJ2SquaredClosedFormContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTJ2SquaredClosedFormContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTJ2SquaredClosedFormContext, t_DSSTJ2SquaredClosedFormContext, DSSTJ2SquaredClosedFormContext);

            void t_DSSTJ2SquaredClosedFormContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTJ2SquaredClosedFormContext), &PY_TYPE_DEF(DSSTJ2SquaredClosedFormContext), module, "DSSTJ2SquaredClosedFormContext", 0);
            }

            void t_DSSTJ2SquaredClosedFormContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedFormContext), "class_", make_descriptor(DSSTJ2SquaredClosedFormContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedFormContext), "wrapfn_", make_descriptor(t_DSSTJ2SquaredClosedFormContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedFormContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTJ2SquaredClosedFormContext::initializeClass, 1)))
                return NULL;
              return t_DSSTJ2SquaredClosedFormContext::wrap_Object(DSSTJ2SquaredClosedFormContext(((t_DSSTJ2SquaredClosedFormContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTJ2SquaredClosedFormContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTJ2SquaredClosedFormContext_init_(t_DSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              DSSTJ2SquaredClosedFormContext object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTJ2SquaredClosedFormContext(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getA4(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getA4());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getAlpha4(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha4());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getC(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getEta(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getEta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getS2(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getS2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__a4(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getA4());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__alpha4(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha4());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__c(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__eta(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getEta());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__s2(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getS2());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FilterType::class$ = NULL;
        jmethodID *FilterType::mids$ = NULL;
        bool FilterType::live$ = false;
        FilterType *FilterType::TRIGGER_ONLY_DECREASING_EVENTS = NULL;
        FilterType *FilterType::TRIGGER_ONLY_INCREASING_EVENTS = NULL;

        jclass FilterType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FilterType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_beda404b70a3682a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/events/FilterType;");
            mids$[mid_values_bc5a98065e60db31] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/events/FilterType;");
            mids$[mid_selectTransformer_8f34a727c3dcaf21] = env->getMethodID(cls, "selectTransformer", "(Lorg/hipparchus/ode/events/Transformer;DZ)Lorg/hipparchus/ode/events/Transformer;");
            mids$[mid_isTriggeredOnIncreasing_eee3de00fe971136] = env->getMethodID(cls, "isTriggeredOnIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRIGGER_ONLY_DECREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_DECREASING_EVENTS", "Lorg/hipparchus/ode/events/FilterType;"));
            TRIGGER_ONLY_INCREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_INCREASING_EVENTS", "Lorg/hipparchus/ode/events/FilterType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FilterType FilterType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FilterType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_beda404b70a3682a], a0.this$));
        }

        JArray< FilterType > FilterType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< FilterType >(env->callStaticObjectMethod(cls, mids$[mid_values_bc5a98065e60db31]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args);
        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_FilterType_values(PyTypeObject *type);
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data);
        static PyGetSetDef t_FilterType__fields_[] = {
          DECLARE_GET_FIELD(t_FilterType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FilterType__methods_[] = {
          DECLARE_METHOD(t_FilterType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, of_, METH_VARARGS),
          DECLARE_METHOD(t_FilterType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FilterType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FilterType)[] = {
          { Py_tp_methods, t_FilterType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FilterType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FilterType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(FilterType, t_FilterType, FilterType);
        PyObject *t_FilterType::wrap_Object(const FilterType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FilterType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FilterType::install(PyObject *module)
        {
          installType(&PY_TYPE(FilterType), &PY_TYPE_DEF(FilterType), module, "FilterType", 0);
        }

        void t_FilterType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "class_", make_descriptor(FilterType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "wrapfn_", make_descriptor(t_FilterType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "boxfn_", make_descriptor(boxObject));
          env->getClass(FilterType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_DECREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_DECREASING_EVENTS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_INCREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_INCREASING_EVENTS)));
        }

        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FilterType::initializeClass, 1)))
            return NULL;
          return t_FilterType::wrap_Object(FilterType(((t_FilterType *) arg)->object.this$));
        }
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FilterType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          FilterType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::events::FilterType::valueOf(a0));
            return t_FilterType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_FilterType_values(PyTypeObject *type)
        {
          JArray< FilterType > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::events::FilterType::values());
          return JArray<jobject>(result.this$).wrap(t_FilterType::wrap_jobject);
        }
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldStopOnIncreasing.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldStopOnIncreasing::class$ = NULL;
          jmethodID *FieldStopOnIncreasing::mids$ = NULL;
          bool FieldStopOnIncreasing::live$ = false;

          jclass FieldStopOnIncreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldStopOnIncreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_094737664b369b83] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldStopOnIncreasing::FieldStopOnIncreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::hipparchus::ode::events::Action FieldStopOnIncreasing::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_094737664b369b83], a0.this$, a1.this$, a2));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {
          static PyObject *t_FieldStopOnIncreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnIncreasing_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnIncreasing_of_(t_FieldStopOnIncreasing *self, PyObject *args);
          static int t_FieldStopOnIncreasing_init_(t_FieldStopOnIncreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldStopOnIncreasing_eventOccurred(t_FieldStopOnIncreasing *self, PyObject *args);
          static PyObject *t_FieldStopOnIncreasing_get__parameters_(t_FieldStopOnIncreasing *self, void *data);
          static PyGetSetDef t_FieldStopOnIncreasing__fields_[] = {
            DECLARE_GET_FIELD(t_FieldStopOnIncreasing, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldStopOnIncreasing__methods_[] = {
            DECLARE_METHOD(t_FieldStopOnIncreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnIncreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnIncreasing, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldStopOnIncreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldStopOnIncreasing)[] = {
            { Py_tp_methods, t_FieldStopOnIncreasing__methods_ },
            { Py_tp_init, (void *) t_FieldStopOnIncreasing_init_ },
            { Py_tp_getset, t_FieldStopOnIncreasing__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldStopOnIncreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldStopOnIncreasing, t_FieldStopOnIncreasing, FieldStopOnIncreasing);
          PyObject *t_FieldStopOnIncreasing::wrap_Object(const FieldStopOnIncreasing& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnIncreasing::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnIncreasing *self = (t_FieldStopOnIncreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldStopOnIncreasing::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnIncreasing::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnIncreasing *self = (t_FieldStopOnIncreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldStopOnIncreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldStopOnIncreasing), &PY_TYPE_DEF(FieldStopOnIncreasing), module, "FieldStopOnIncreasing", 0);
          }

          void t_FieldStopOnIncreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnIncreasing), "class_", make_descriptor(FieldStopOnIncreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnIncreasing), "wrapfn_", make_descriptor(t_FieldStopOnIncreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnIncreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldStopOnIncreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldStopOnIncreasing::initializeClass, 1)))
              return NULL;
            return t_FieldStopOnIncreasing::wrap_Object(FieldStopOnIncreasing(((t_FieldStopOnIncreasing *) arg)->object.this$));
          }
          static PyObject *t_FieldStopOnIncreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldStopOnIncreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldStopOnIncreasing_of_(t_FieldStopOnIncreasing *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldStopOnIncreasing_init_(t_FieldStopOnIncreasing *self, PyObject *args, PyObject *kwds)
          {
            FieldStopOnIncreasing object((jobject) NULL);

            INT_CALL(object = FieldStopOnIncreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldStopOnIncreasing_eventOccurred(t_FieldStopOnIncreasing *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldStopOnIncreasing_get__parameters_(t_FieldStopOnIncreasing *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/AbstractRadiationForceModel.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/forces/ForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *AbstractRadiationForceModel::class$ = NULL;
        jmethodID *AbstractRadiationForceModel::mids$ = NULL;
        bool AbstractRadiationForceModel::live$ = false;

        jclass AbstractRadiationForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/AbstractRadiationForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addOccultingBody_b708ea6c2876a9ef] = env->getMethodID(cls, "addOccultingBody", "(Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_addOccultingBody_16b9140b7ad74f10] = env->getMethodID(cls, "addOccultingBody", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;D)V");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getOccultingBodies_d751c1a57012b438] = env->getMethodID(cls, "getOccultingBodies", "()Ljava/util/List;");
            mids$[mid_getGeneralEclipseAngles_f3b4c9095c8966a1] = env->getMethodID(cls, "getGeneralEclipseAngles", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getGeneralEclipseAngles_8fb3d659b51fb192] = env->getMethodID(cls, "getGeneralEclipseAngles", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractRadiationForceModel::addOccultingBody(const ::org::orekit::bodies::OneAxisEllipsoid & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addOccultingBody_b708ea6c2876a9ef], a0.this$);
        }

        void AbstractRadiationForceModel::addOccultingBody(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addOccultingBody_16b9140b7ad74f10], a0.this$, a1);
        }

        jboolean AbstractRadiationForceModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        ::java::util::stream::Stream AbstractRadiationForceModel::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_11e4ca8182c1933d]));
        }

        ::java::util::stream::Stream AbstractRadiationForceModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_d3db121d9deb0312], a0.this$));
        }

        ::java::util::List AbstractRadiationForceModel::getOccultingBodies() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOccultingBodies_d751c1a57012b438]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {
        static PyObject *t_AbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRadiationForceModel_addOccultingBody(t_AbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_AbstractRadiationForceModel_dependsOnPositionOnly(t_AbstractRadiationForceModel *self);
        static PyObject *t_AbstractRadiationForceModel_getEventDetectors(t_AbstractRadiationForceModel *self);
        static PyObject *t_AbstractRadiationForceModel_getFieldEventDetectors(t_AbstractRadiationForceModel *self, PyObject *arg);
        static PyObject *t_AbstractRadiationForceModel_getOccultingBodies(t_AbstractRadiationForceModel *self);
        static PyObject *t_AbstractRadiationForceModel_get__eventDetectors(t_AbstractRadiationForceModel *self, void *data);
        static PyObject *t_AbstractRadiationForceModel_get__occultingBodies(t_AbstractRadiationForceModel *self, void *data);
        static PyGetSetDef t_AbstractRadiationForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractRadiationForceModel, eventDetectors),
          DECLARE_GET_FIELD(t_AbstractRadiationForceModel, occultingBodies),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractRadiationForceModel__methods_[] = {
          DECLARE_METHOD(t_AbstractRadiationForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, addOccultingBody, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_AbstractRadiationForceModel, getOccultingBodies, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractRadiationForceModel)[] = {
          { Py_tp_methods, t_AbstractRadiationForceModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractRadiationForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractRadiationForceModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractRadiationForceModel, t_AbstractRadiationForceModel, AbstractRadiationForceModel);

        void t_AbstractRadiationForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractRadiationForceModel), &PY_TYPE_DEF(AbstractRadiationForceModel), module, "AbstractRadiationForceModel", 0);
        }

        void t_AbstractRadiationForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRadiationForceModel), "class_", make_descriptor(AbstractRadiationForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRadiationForceModel), "wrapfn_", make_descriptor(t_AbstractRadiationForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRadiationForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractRadiationForceModel::initializeClass, 1)))
            return NULL;
          return t_AbstractRadiationForceModel::wrap_Object(AbstractRadiationForceModel(((t_AbstractRadiationForceModel *) arg)->object.this$));
        }
        static PyObject *t_AbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractRadiationForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractRadiationForceModel_addOccultingBody(t_AbstractRadiationForceModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                OBJ_CALL(self->object.addOccultingBody(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              jdouble a1;

              if (!parseArgs(args, "kD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addOccultingBody(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addOccultingBody", args);
          return NULL;
        }

        static PyObject *t_AbstractRadiationForceModel_dependsOnPositionOnly(t_AbstractRadiationForceModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractRadiationForceModel_getEventDetectors(t_AbstractRadiationForceModel *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_AbstractRadiationForceModel_getFieldEventDetectors(t_AbstractRadiationForceModel *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
          return NULL;
        }

        static PyObject *t_AbstractRadiationForceModel_getOccultingBodies(t_AbstractRadiationForceModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getOccultingBodies());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(OccultationEngine));
        }

        static PyObject *t_AbstractRadiationForceModel_get__eventDetectors(t_AbstractRadiationForceModel *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_AbstractRadiationForceModel_get__occultingBodies(t_AbstractRadiationForceModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getOccultingBodies());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *InterSatellitesRange::class$ = NULL;
        jmethodID *InterSatellitesRange::mids$ = NULL;
        bool InterSatellitesRange::live$ = false;
        ::java::lang::String *InterSatellitesRange::MEASUREMENT_TYPE = NULL;

        jclass InterSatellitesRange::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/InterSatellitesRange");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_107375bcfa2aa7dc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;ZLorg/orekit/time/AbsoluteDate;DDD)V");
            mids$[mid_isTwoWay_eee3de00fe971136] = env->getMethodID(cls, "isTwoWay", "()Z");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterSatellitesRange::InterSatellitesRange(const ::org::orekit::estimation::measurements::ObservableSatellite & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, jboolean a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_107375bcfa2aa7dc, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6)) {}

        jboolean InterSatellitesRange::isTwoWay() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTwoWay_eee3de00fe971136]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_InterSatellitesRange_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatellitesRange_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatellitesRange_of_(t_InterSatellitesRange *self, PyObject *args);
        static int t_InterSatellitesRange_init_(t_InterSatellitesRange *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterSatellitesRange_isTwoWay(t_InterSatellitesRange *self);
        static PyObject *t_InterSatellitesRange_get__twoWay(t_InterSatellitesRange *self, void *data);
        static PyObject *t_InterSatellitesRange_get__parameters_(t_InterSatellitesRange *self, void *data);
        static PyGetSetDef t_InterSatellitesRange__fields_[] = {
          DECLARE_GET_FIELD(t_InterSatellitesRange, twoWay),
          DECLARE_GET_FIELD(t_InterSatellitesRange, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InterSatellitesRange__methods_[] = {
          DECLARE_METHOD(t_InterSatellitesRange, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatellitesRange, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatellitesRange, of_, METH_VARARGS),
          DECLARE_METHOD(t_InterSatellitesRange, isTwoWay, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterSatellitesRange)[] = {
          { Py_tp_methods, t_InterSatellitesRange__methods_ },
          { Py_tp_init, (void *) t_InterSatellitesRange_init_ },
          { Py_tp_getset, t_InterSatellitesRange__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterSatellitesRange)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(InterSatellitesRange, t_InterSatellitesRange, InterSatellitesRange);
        PyObject *t_InterSatellitesRange::wrap_Object(const InterSatellitesRange& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatellitesRange::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatellitesRange *self = (t_InterSatellitesRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_InterSatellitesRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatellitesRange::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatellitesRange *self = (t_InterSatellitesRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_InterSatellitesRange::install(PyObject *module)
        {
          installType(&PY_TYPE(InterSatellitesRange), &PY_TYPE_DEF(InterSatellitesRange), module, "InterSatellitesRange", 0);
        }

        void t_InterSatellitesRange::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "class_", make_descriptor(InterSatellitesRange::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "wrapfn_", make_descriptor(t_InterSatellitesRange::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "boxfn_", make_descriptor(boxObject));
          env->getClass(InterSatellitesRange::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*InterSatellitesRange::MEASUREMENT_TYPE)));
        }

        static PyObject *t_InterSatellitesRange_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterSatellitesRange::initializeClass, 1)))
            return NULL;
          return t_InterSatellitesRange::wrap_Object(InterSatellitesRange(((t_InterSatellitesRange *) arg)->object.this$));
        }
        static PyObject *t_InterSatellitesRange_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterSatellitesRange::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InterSatellitesRange_of_(t_InterSatellitesRange *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_InterSatellitesRange_init_(t_InterSatellitesRange *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservableSatellite a0((jobject) NULL);
          ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
          jboolean a2;
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          jdouble a4;
          jdouble a5;
          jdouble a6;
          InterSatellitesRange object((jobject) NULL);

          if (!parseArgs(args, "kkZkDDD", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = InterSatellitesRange(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(InterSatellitesRange);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterSatellitesRange_isTwoWay(t_InterSatellitesRange *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isTwoWay());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_InterSatellitesRange_get__parameters_(t_InterSatellitesRange *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_InterSatellitesRange_get__twoWay(t_InterSatellitesRange *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isTwoWay());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Tanh.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Tanh::class$ = NULL;
        jmethodID *Tanh::mids$ = NULL;
        bool Tanh::live$ = false;

        jclass Tanh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Tanh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Tanh::Tanh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Tanh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Tanh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Tanh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tanh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Tanh_init_(t_Tanh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Tanh_value(t_Tanh *self, PyObject *args);

        static PyMethodDef t_Tanh__methods_[] = {
          DECLARE_METHOD(t_Tanh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tanh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tanh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tanh)[] = {
          { Py_tp_methods, t_Tanh__methods_ },
          { Py_tp_init, (void *) t_Tanh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tanh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Tanh, t_Tanh, Tanh);

        void t_Tanh::install(PyObject *module)
        {
          installType(&PY_TYPE(Tanh), &PY_TYPE_DEF(Tanh), module, "Tanh", 0);
        }

        void t_Tanh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tanh), "class_", make_descriptor(Tanh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tanh), "wrapfn_", make_descriptor(t_Tanh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tanh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Tanh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tanh::initializeClass, 1)))
            return NULL;
          return t_Tanh::wrap_Object(Tanh(((t_Tanh *) arg)->object.this$));
        }
        static PyObject *t_Tanh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tanh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Tanh_init_(t_Tanh *self, PyObject *args, PyObject *kwds)
        {
          Tanh object((jobject) NULL);

          INT_CALL(object = Tanh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Tanh_value(t_Tanh *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonRawSphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonRawSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonRawSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonRawSphericalHarmonicsProvider::live$ = false;

          jclass PythonRawSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonRawSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_9981f74b2d109da6] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_d6ab429752e7c267] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_d6ab429752e7c267] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_80e11148db499dda] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_1e0f912623cd4841] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_43fc6321576a98a9] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonRawSphericalHarmonicsProvider::PythonRawSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonRawSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonRawSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonRawSphericalHarmonicsProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonRawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonRawSphericalHarmonicsProvider_init_(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_finalize(t_PythonRawSphericalHarmonicsProvider *self);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_pythonExtension(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonRawSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_get__self(t_PythonRawSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonRawSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonRawSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonRawSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonRawSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonRawSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonRawSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonRawSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonRawSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonRawSphericalHarmonicsProvider, t_PythonRawSphericalHarmonicsProvider, PythonRawSphericalHarmonicsProvider);

          void t_PythonRawSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonRawSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonRawSphericalHarmonicsProvider), module, "PythonRawSphericalHarmonicsProvider", 1);
          }

          void t_PythonRawSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRawSphericalHarmonicsProvider), "class_", make_descriptor(PythonRawSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRawSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonRawSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRawSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonRawSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonRawSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonRawSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonRawSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonRawSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonRawSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonRawSphericalHarmonicsProvider_getTideSystem5 },
              { "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics;", (void *) t_PythonRawSphericalHarmonicsProvider_onDate6 },
              { "pythonDecRef", "()V", (void *) t_PythonRawSphericalHarmonicsProvider_pythonDecRef7 },
            };
            env->registerNatives(cls, methods, 8);
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonRawSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonRawSphericalHarmonicsProvider::wrap_Object(PythonRawSphericalHarmonicsProvider(((t_PythonRawSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonRawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonRawSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonRawSphericalHarmonicsProvider_init_(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonRawSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonRawSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_finalize(t_PythonRawSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_pythonExtension(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getMu", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMu", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "onDate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, &value))
            {
              throwTypeError("onDate", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonRawSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_get__self(t_PythonRawSphericalHarmonicsProvider *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/PhaseShiftCorrection.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/ObservationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *PhaseShiftCorrection::class$ = NULL;
          jmethodID *PhaseShiftCorrection::mids$ = NULL;
          bool PhaseShiftCorrection::live$ = false;

          jclass PhaseShiftCorrection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/PhaseShiftCorrection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_88e029cb2132d0f6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/ObservationType;DLjava/util/List;)V");
              mids$[mid_getCorrection_9981f74b2d109da6] = env->getMethodID(cls, "getCorrection", "()D");
              mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getSatsCorrected_d751c1a57012b438] = env->getMethodID(cls, "getSatsCorrected", "()Ljava/util/List;");
              mids$[mid_getTypeObs_e80ef1520523663f] = env->getMethodID(cls, "getTypeObs", "()Lorg/orekit/gnss/ObservationType;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseShiftCorrection::PhaseShiftCorrection(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::gnss::ObservationType & a1, jdouble a2, const ::java::util::List & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_88e029cb2132d0f6, a0.this$, a1.this$, a2, a3.this$)) {}

          jdouble PhaseShiftCorrection::getCorrection() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCorrection_9981f74b2d109da6]);
          }

          ::org::orekit::gnss::SatelliteSystem PhaseShiftCorrection::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc]));
          }

          ::java::util::List PhaseShiftCorrection::getSatsCorrected() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatsCorrected_d751c1a57012b438]));
          }

          ::org::orekit::gnss::ObservationType PhaseShiftCorrection::getTypeObs() const
          {
            return ::org::orekit::gnss::ObservationType(env->callObjectMethod(this$, mids$[mid_getTypeObs_e80ef1520523663f]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          static PyObject *t_PhaseShiftCorrection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseShiftCorrection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseShiftCorrection_init_(t_PhaseShiftCorrection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseShiftCorrection_getCorrection(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_getSatelliteSystem(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_getSatsCorrected(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_getTypeObs(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_get__correction(t_PhaseShiftCorrection *self, void *data);
          static PyObject *t_PhaseShiftCorrection_get__satelliteSystem(t_PhaseShiftCorrection *self, void *data);
          static PyObject *t_PhaseShiftCorrection_get__satsCorrected(t_PhaseShiftCorrection *self, void *data);
          static PyObject *t_PhaseShiftCorrection_get__typeObs(t_PhaseShiftCorrection *self, void *data);
          static PyGetSetDef t_PhaseShiftCorrection__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, correction),
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, satelliteSystem),
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, satsCorrected),
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, typeObs),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseShiftCorrection__methods_[] = {
            DECLARE_METHOD(t_PhaseShiftCorrection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseShiftCorrection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getCorrection, METH_NOARGS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getSatelliteSystem, METH_NOARGS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getSatsCorrected, METH_NOARGS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getTypeObs, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseShiftCorrection)[] = {
            { Py_tp_methods, t_PhaseShiftCorrection__methods_ },
            { Py_tp_init, (void *) t_PhaseShiftCorrection_init_ },
            { Py_tp_getset, t_PhaseShiftCorrection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseShiftCorrection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseShiftCorrection, t_PhaseShiftCorrection, PhaseShiftCorrection);

          void t_PhaseShiftCorrection::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseShiftCorrection), &PY_TYPE_DEF(PhaseShiftCorrection), module, "PhaseShiftCorrection", 0);
          }

          void t_PhaseShiftCorrection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseShiftCorrection), "class_", make_descriptor(PhaseShiftCorrection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseShiftCorrection), "wrapfn_", make_descriptor(t_PhaseShiftCorrection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseShiftCorrection), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseShiftCorrection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseShiftCorrection::initializeClass, 1)))
              return NULL;
            return t_PhaseShiftCorrection::wrap_Object(PhaseShiftCorrection(((t_PhaseShiftCorrection *) arg)->object.this$));
          }
          static PyObject *t_PhaseShiftCorrection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseShiftCorrection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseShiftCorrection_init_(t_PhaseShiftCorrection *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::ObservationType a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            ::java::util::List a3((jobject) NULL);
            PyTypeObject **p3;
            PhaseShiftCorrection object((jobject) NULL);

            if (!parseArgs(args, "KKDK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = PhaseShiftCorrection(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseShiftCorrection_getCorrection(t_PhaseShiftCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCorrection());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PhaseShiftCorrection_getSatelliteSystem(t_PhaseShiftCorrection *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_PhaseShiftCorrection_getSatsCorrected(t_PhaseShiftCorrection *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatsCorrected());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(SatInSystem));
          }

          static PyObject *t_PhaseShiftCorrection_getTypeObs(t_PhaseShiftCorrection *self)
          {
            ::org::orekit::gnss::ObservationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getTypeObs());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(result);
          }

          static PyObject *t_PhaseShiftCorrection_get__correction(t_PhaseShiftCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCorrection());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_PhaseShiftCorrection_get__satelliteSystem(t_PhaseShiftCorrection *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }

          static PyObject *t_PhaseShiftCorrection_get__satsCorrected(t_PhaseShiftCorrection *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatsCorrected());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_PhaseShiftCorrection_get__typeObs(t_PhaseShiftCorrection *self, void *data)
          {
            ::org::orekit::gnss::ObservationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getTypeObs());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonStateMapper.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonStateMapper::class$ = NULL;
        jmethodID *PythonStateMapper::mids$ = NULL;
        bool PythonStateMapper::live$ = false;

        jclass PythonStateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonStateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c132f5f186275355] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_mapArrayToState_b723a334e6cd3f92] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/AbsoluteDate;[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_mapStateToArray_c528401cf6a8f557] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonStateMapper::PythonStateMapper(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::propagation::integration::StateMapper(env->newObject(initializeClass, &mids$, mid_init$_c132f5f186275355, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        void PythonStateMapper::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonStateMapper::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonStateMapper::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_PythonStateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonStateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonStateMapper_init_(t_PythonStateMapper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonStateMapper_finalize(t_PythonStateMapper *self);
        static PyObject *t_PythonStateMapper_pythonExtension(t_PythonStateMapper *self, PyObject *args);
        static jobject JNICALL t_PythonStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static void JNICALL t_PythonStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonStateMapper_get__self(t_PythonStateMapper *self, void *data);
        static PyGetSetDef t_PythonStateMapper__fields_[] = {
          DECLARE_GET_FIELD(t_PythonStateMapper, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonStateMapper__methods_[] = {
          DECLARE_METHOD(t_PythonStateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonStateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonStateMapper, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonStateMapper, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonStateMapper)[] = {
          { Py_tp_methods, t_PythonStateMapper__methods_ },
          { Py_tp_init, (void *) t_PythonStateMapper_init_ },
          { Py_tp_getset, t_PythonStateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonStateMapper)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::StateMapper),
          NULL
        };

        DEFINE_TYPE(PythonStateMapper, t_PythonStateMapper, PythonStateMapper);

        void t_PythonStateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonStateMapper), &PY_TYPE_DEF(PythonStateMapper), module, "PythonStateMapper", 1);
        }

        void t_PythonStateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateMapper), "class_", make_descriptor(PythonStateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateMapper), "wrapfn_", make_descriptor(t_PythonStateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateMapper), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonStateMapper::initializeClass);
          JNINativeMethod methods[] = {
            { "mapArrayToState", "(Lorg/orekit/time/AbsoluteDate;[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonStateMapper_mapArrayToState0 },
            { "mapStateToArray", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V", (void *) t_PythonStateMapper_mapStateToArray1 },
            { "pythonDecRef", "()V", (void *) t_PythonStateMapper_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonStateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonStateMapper::initializeClass, 1)))
            return NULL;
          return t_PythonStateMapper::wrap_Object(PythonStateMapper(((t_PythonStateMapper *) arg)->object.this$));
        }
        static PyObject *t_PythonStateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonStateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonStateMapper_init_(t_PythonStateMapper *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          PythonStateMapper object((jobject) NULL);

          if (!parseArgs(args, "kDKKkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a4, &a5))
          {
            INT_CALL(object = PythonStateMapper(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonStateMapper_finalize(t_PythonStateMapper *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonStateMapper_pythonExtension(t_PythonStateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *o3 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a3));
          PyObject *result = PyObject_CallMethod(obj, "mapArrayToState", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("mapArrayToState", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "mapStateToArray", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonStateMapper_get__self(t_PythonStateMapper *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Transform::class$ = NULL;
        jmethodID *Transform::mids$ = NULL;
        bool Transform::live$ = false;

        jclass Transform::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Transform");

            mids$ = new jmethodID[max_mid];
            mids$[mid_apply_ff0c84956c63705d] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
            mids$[mid_apply_981c3409f128e4fe] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_apply_2191351ef237e3b9] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::Point Transform::apply(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_apply_ff0c84956c63705d], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Hyperplane Transform::apply(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Hyperplane(env->callObjectMethod(this$, mids$[mid_apply_981c3409f128e4fe], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Transform::apply(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0, const ::org::hipparchus::geometry::partitioning::Hyperplane & a1, const ::org::hipparchus::geometry::partitioning::Hyperplane & a2) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_apply_2191351ef237e3b9], a0.this$, a1.this$, a2.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Transform_of_(t_Transform *self, PyObject *args);
        static PyObject *t_Transform_apply(t_Transform *self, PyObject *args);
        static PyObject *t_Transform_get__parameters_(t_Transform *self, void *data);
        static PyGetSetDef t_Transform__fields_[] = {
          DECLARE_GET_FIELD(t_Transform, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Transform__methods_[] = {
          DECLARE_METHOD(t_Transform, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Transform, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Transform, of_, METH_VARARGS),
          DECLARE_METHOD(t_Transform, apply, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Transform)[] = {
          { Py_tp_methods, t_Transform__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Transform__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Transform)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Transform, t_Transform, Transform);
        PyObject *t_Transform::wrap_Object(const Transform& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Transform::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Transform *self = (t_Transform *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_Transform::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Transform::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Transform *self = (t_Transform *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_Transform::install(PyObject *module)
        {
          installType(&PY_TYPE(Transform), &PY_TYPE_DEF(Transform), module, "Transform", 0);
        }

        void t_Transform::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "class_", make_descriptor(Transform::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "wrapfn_", make_descriptor(t_Transform::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Transform::initializeClass, 1)))
            return NULL;
          return t_Transform::wrap_Object(Transform(((t_Transform *) arg)->object.this$));
        }
        static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Transform::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Transform_of_(t_Transform *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Transform_apply(t_Transform *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::Point a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::Point result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Hyperplane result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Hyperplane a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::partitioning::Hyperplane a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a2, &p2, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
              {
                OBJ_CALL(result = self->object.apply(a0, a1, a2));
                return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[1]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "apply", args);
          return NULL;
        }
        static PyObject *t_Transform_get__parameters_(t_Transform *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/LazyLoadedDataContext.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *LazyLoadedDataContext::class$ = NULL;
      jmethodID *LazyLoadedDataContext::mids$ = NULL;
      bool LazyLoadedDataContext::live$ = false;

      jclass LazyLoadedDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/LazyLoadedDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getCelestialBodies_2e5dcdcd5b8a5903] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/LazyLoadedCelestialBodies;");
          mids$[mid_getDataProvidersManager_f0a5ee63a7def5aa] = env->getMethodID(cls, "getDataProvidersManager", "()Lorg/orekit/data/DataProvidersManager;");
          mids$[mid_getFrames_6b4dd5dc4c932983] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/LazyLoadedFrames;");
          mids$[mid_getGeoMagneticFields_dc04cadaa56dfc28] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/LazyLoadedGeoMagneticFields;");
          mids$[mid_getGravityFields_0b533a519307756d] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/LazyLoadedGravityFields;");
          mids$[mid_getTimeScales_0dcddb8d5df4bba7] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/LazyLoadedTimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedDataContext::LazyLoadedDataContext() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ::org::orekit::bodies::LazyLoadedCelestialBodies LazyLoadedDataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::LazyLoadedCelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_2e5dcdcd5b8a5903]));
      }

      ::org::orekit::data::DataProvidersManager LazyLoadedDataContext::getDataProvidersManager() const
      {
        return ::org::orekit::data::DataProvidersManager(env->callObjectMethod(this$, mids$[mid_getDataProvidersManager_f0a5ee63a7def5aa]));
      }

      ::org::orekit::frames::LazyLoadedFrames LazyLoadedDataContext::getFrames() const
      {
        return ::org::orekit::frames::LazyLoadedFrames(env->callObjectMethod(this$, mids$[mid_getFrames_6b4dd5dc4c932983]));
      }

      ::org::orekit::models::earth::LazyLoadedGeoMagneticFields LazyLoadedDataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::LazyLoadedGeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_dc04cadaa56dfc28]));
      }

      ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields LazyLoadedDataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_0b533a519307756d]));
      }

      ::org::orekit::time::LazyLoadedTimeScales LazyLoadedDataContext::getTimeScales() const
      {
        return ::org::orekit::time::LazyLoadedTimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_0dcddb8d5df4bba7]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_LazyLoadedDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedDataContext_init_(t_LazyLoadedDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedDataContext_getCelestialBodies(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getDataProvidersManager(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getFrames(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getGeoMagneticFields(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getGravityFields(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getTimeScales(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_get__celestialBodies(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__dataProvidersManager(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__frames(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__geoMagneticFields(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__gravityFields(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__timeScales(t_LazyLoadedDataContext *self, void *data);
      static PyGetSetDef t_LazyLoadedDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, celestialBodies),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, dataProvidersManager),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, frames),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, gravityFields),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedDataContext__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getCelestialBodies, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getDataProvidersManager, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getFrames, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getGeoMagneticFields, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getGravityFields, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getTimeScales, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedDataContext)[] = {
        { Py_tp_methods, t_LazyLoadedDataContext__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedDataContext_init_ },
        { Py_tp_getset, t_LazyLoadedDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LazyLoadedDataContext, t_LazyLoadedDataContext, LazyLoadedDataContext);

      void t_LazyLoadedDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedDataContext), &PY_TYPE_DEF(LazyLoadedDataContext), module, "LazyLoadedDataContext", 0);
      }

      void t_LazyLoadedDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedDataContext), "class_", make_descriptor(LazyLoadedDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedDataContext), "wrapfn_", make_descriptor(t_LazyLoadedDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedDataContext::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedDataContext::wrap_Object(LazyLoadedDataContext(((t_LazyLoadedDataContext *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedDataContext_init_(t_LazyLoadedDataContext *self, PyObject *args, PyObject *kwds)
      {
        LazyLoadedDataContext object((jobject) NULL);

        INT_CALL(object = LazyLoadedDataContext());
        self->object = object;

        return 0;
      }

      static PyObject *t_LazyLoadedDataContext_getCelestialBodies(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies result((jobject) NULL);
        OBJ_CALL(result = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getDataProvidersManager(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::data::DataProvidersManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getFrames(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::frames::LazyLoadedFrames result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getGeoMagneticFields(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getGravityFields(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getTimeScales(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::time::LazyLoadedTimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_get__celestialBodies(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__dataProvidersManager(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::data::DataProvidersManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__frames(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::frames::LazyLoadedFrames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__geoMagneticFields(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__gravityFields(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__timeScales(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::time::LazyLoadedTimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVectorChangingVisitor::class$ = NULL;
      jmethodID *RealVectorChangingVisitor::mids$ = NULL;
      bool RealVectorChangingVisitor::live$ = false;

      jclass RealVectorChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVectorChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_9981f74b2d109da6] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_48ca1125d4856a74] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_5540210c7d309f18] = env->getMethodID(cls, "visit", "(ID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealVectorChangingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_9981f74b2d109da6]);
      }

      void RealVectorChangingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_48ca1125d4856a74], a0, a1, a2);
      }

      jdouble RealVectorChangingVisitor::visit(jint a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_visit_5540210c7d309f18], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_RealVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorChangingVisitor_end(t_RealVectorChangingVisitor *self);
      static PyObject *t_RealVectorChangingVisitor_start(t_RealVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_RealVectorChangingVisitor_visit(t_RealVectorChangingVisitor *self, PyObject *args);

      static PyMethodDef t_RealVectorChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealVectorChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVectorChangingVisitor)[] = {
        { Py_tp_methods, t_RealVectorChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVectorChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVectorChangingVisitor, t_RealVectorChangingVisitor, RealVectorChangingVisitor);

      void t_RealVectorChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVectorChangingVisitor), &PY_TYPE_DEF(RealVectorChangingVisitor), module, "RealVectorChangingVisitor", 0);
      }

      void t_RealVectorChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorChangingVisitor), "class_", make_descriptor(RealVectorChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorChangingVisitor), "wrapfn_", make_descriptor(t_RealVectorChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVectorChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealVectorChangingVisitor::wrap_Object(RealVectorChangingVisitor(((t_RealVectorChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVectorChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealVectorChangingVisitor_end(t_RealVectorChangingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVectorChangingVisitor_start(t_RealVectorChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.start(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_RealVectorChangingVisitor_visit(t_RealVectorChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(result = self->object.visit(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *CartesianOrbit::class$ = NULL;
      jmethodID *CartesianOrbit::mids$ = NULL;
      bool CartesianOrbit::live$ = false;

      jclass CartesianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/CartesianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_17534ef58ef3aaef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_a8e6ee721e0d6799] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_78122b2ba50ff4ac] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_3ef35668c0b1580f] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_getA_9981f74b2d109da6] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_9981f74b2d109da6] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getE_9981f74b2d109da6] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_9981f74b2d109da6] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_9981f74b2d109da6] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_9981f74b2d109da6] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_9981f74b2d109da6] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_9981f74b2d109da6] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_9981f74b2d109da6] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_9981f74b2d109da6] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_9981f74b2d109da6] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_9981f74b2d109da6] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_9981f74b2d109da6] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_9981f74b2d109da6] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_9981f74b2d109da6] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_9981f74b2d109da6] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getType_495f818d3570b7f5] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_eee3de00fe971136] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_shiftedBy_9fce0e2097197c92] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/CartesianOrbit;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPosition_032312bdeb3f2f93] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_initPVCoordinates_674031698a428ce8] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CartesianOrbit::CartesianOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_17534ef58ef3aaef, a0.this$)) {}

      CartesianOrbit::CartesianOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_a8e6ee721e0d6799, a0.this$, a1.this$, a2)) {}

      CartesianOrbit::CartesianOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_78122b2ba50ff4ac, a0.this$, a1.this$, a2.this$, a3)) {}

      void CartesianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_3ef35668c0b1580f], a0.this$, a1, a2.this$);
      }

      jdouble CartesianOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_9981f74b2d109da6]);
      }

      jdouble CartesianOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_9981f74b2d109da6]);
      }

      ::org::orekit::orbits::OrbitType CartesianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_495f818d3570b7f5]));
      }

      jboolean CartesianOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_eee3de00fe971136]);
      }

      CartesianOrbit CartesianOrbit::shiftedBy(jdouble a0) const
      {
        return CartesianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_9fce0e2097197c92], a0));
      }

      ::java::lang::String CartesianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_CartesianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CartesianOrbit_init_(t_CartesianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CartesianOrbit_addKeplerContribution(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getA(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getADot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getE(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialEx(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialExDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialEy(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialEyDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHx(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHxDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHy(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHyDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getI(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getIDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLE(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLEDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLM(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLMDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLv(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLvDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getType(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_hasDerivatives(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_shiftedBy(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_toString(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_get__a(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__aDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__e(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__eDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialEx(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialExDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialEy(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialEyDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hx(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hxDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hy(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hyDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__i(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__iDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lE(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lEDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lM(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lMDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lv(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lvDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__type(t_CartesianOrbit *self, void *data);
      static PyGetSetDef t_CartesianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_CartesianOrbit, a),
        DECLARE_GET_FIELD(t_CartesianOrbit, aDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, e),
        DECLARE_GET_FIELD(t_CartesianOrbit, eDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, hx),
        DECLARE_GET_FIELD(t_CartesianOrbit, hxDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, hy),
        DECLARE_GET_FIELD(t_CartesianOrbit, hyDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, i),
        DECLARE_GET_FIELD(t_CartesianOrbit, iDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, lE),
        DECLARE_GET_FIELD(t_CartesianOrbit, lEDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, lM),
        DECLARE_GET_FIELD(t_CartesianOrbit, lMDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, lv),
        DECLARE_GET_FIELD(t_CartesianOrbit, lvDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CartesianOrbit__methods_[] = {
        DECLARE_METHOD(t_CartesianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CartesianOrbit)[] = {
        { Py_tp_methods, t_CartesianOrbit__methods_ },
        { Py_tp_init, (void *) t_CartesianOrbit_init_ },
        { Py_tp_getset, t_CartesianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CartesianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(CartesianOrbit, t_CartesianOrbit, CartesianOrbit);

      void t_CartesianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(CartesianOrbit), &PY_TYPE_DEF(CartesianOrbit), module, "CartesianOrbit", 0);
      }

      void t_CartesianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianOrbit), "class_", make_descriptor(CartesianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianOrbit), "wrapfn_", make_descriptor(t_CartesianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CartesianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CartesianOrbit::initializeClass, 1)))
          return NULL;
        return t_CartesianOrbit::wrap_Object(CartesianOrbit(((t_CartesianOrbit *) arg)->object.this$));
      }
      static PyObject *t_CartesianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CartesianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CartesianOrbit_init_(t_CartesianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            CartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = CartesianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            CartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CartesianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            CartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CartesianOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CartesianOrbit_addKeplerContribution(t_CartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_CartesianOrbit_getA(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_CartesianOrbit_getADot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getE(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialEx(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialExDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialEy(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialEyDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHx(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHxDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHy(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHyDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getI(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_CartesianOrbit_getIDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLE(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLEDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLM(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLMDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLv(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLvDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getType(t_CartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_CartesianOrbit_hasDerivatives(t_CartesianOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_CartesianOrbit_shiftedBy(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble a0;
        CartesianOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_CartesianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_CartesianOrbit_toString(t_CartesianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_CartesianOrbit_get__a(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__aDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__e(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__eDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialEx(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialExDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialEy(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialEyDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hx(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hxDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hy(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hyDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__i(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__iDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lE(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lEDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lM(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lMDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lv(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lvDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__type(t_CartesianOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmDataSubStructureKey::class$ = NULL;
              jmethodID *AcmDataSubStructureKey::mids$ = NULL;
              bool AcmDataSubStructureKey::live$ = false;
              AcmDataSubStructureKey *AcmDataSubStructureKey::AD = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::ATT = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::COV = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::MAN = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::PHYS = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::USER = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::ad = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::att = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::cov = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::man = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::phys = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::user = NULL;

              jclass AcmDataSubStructureKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_2f9d1e6c4f4c88b3] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/adm/acm/AcmParser;)Z");
                  mids$[mid_valueOf_9985c0e803289512] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;");
                  mids$[mid_values_bb5a2d9fa63169dc] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AD = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "AD", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  ATT = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "ATT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  COV = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  MAN = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  PHYS = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  USER = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  ad = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "ad", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  att = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "att", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  cov = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "cov", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  man = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "man", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  phys = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "phys", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  user = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "user", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AcmDataSubStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser & a1) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_2f9d1e6c4f4c88b3], a0.this$, a1.this$);
              }

              AcmDataSubStructureKey AcmDataSubStructureKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AcmDataSubStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9985c0e803289512], a0.this$));
              }

              JArray< AcmDataSubStructureKey > AcmDataSubStructureKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AcmDataSubStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_bb5a2d9fa63169dc]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              static PyObject *t_AcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmDataSubStructureKey_of_(t_AcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_AcmDataSubStructureKey_process(t_AcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_AcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AcmDataSubStructureKey_values(PyTypeObject *type);
              static PyObject *t_AcmDataSubStructureKey_get__parameters_(t_AcmDataSubStructureKey *self, void *data);
              static PyGetSetDef t_AcmDataSubStructureKey__fields_[] = {
                DECLARE_GET_FIELD(t_AcmDataSubStructureKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmDataSubStructureKey__methods_[] = {
                DECLARE_METHOD(t_AcmDataSubStructureKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmDataSubStructureKey)[] = {
                { Py_tp_methods, t_AcmDataSubStructureKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmDataSubStructureKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmDataSubStructureKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AcmDataSubStructureKey, t_AcmDataSubStructureKey, AcmDataSubStructureKey);
              PyObject *t_AcmDataSubStructureKey::wrap_Object(const AcmDataSubStructureKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmDataSubStructureKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmDataSubStructureKey *self = (t_AcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AcmDataSubStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmDataSubStructureKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmDataSubStructureKey *self = (t_AcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AcmDataSubStructureKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmDataSubStructureKey), &PY_TYPE_DEF(AcmDataSubStructureKey), module, "AcmDataSubStructureKey", 0);
              }

              void t_AcmDataSubStructureKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "class_", make_descriptor(AcmDataSubStructureKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "wrapfn_", make_descriptor(t_AcmDataSubStructureKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmDataSubStructureKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "AD", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::AD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "ATT", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::ATT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "COV", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "MAN", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "PHYS", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "USER", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::USER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "ad", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::ad)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "att", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::att)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "cov", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::cov)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "man", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::man)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "phys", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::phys)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "user", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::user)));
              }

              static PyObject *t_AcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmDataSubStructureKey::initializeClass, 1)))
                  return NULL;
                return t_AcmDataSubStructureKey::wrap_Object(AcmDataSubStructureKey(((t_AcmDataSubStructureKey *) arg)->object.this$));
              }
              static PyObject *t_AcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmDataSubStructureKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmDataSubStructureKey_of_(t_AcmDataSubStructureKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmDataSubStructureKey_process(t_AcmDataSubStructureKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmParser::parameters_))
                {
                  OBJ_CALL(result = self->object.process(a0, a1));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AcmDataSubStructureKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmDataSubStructureKey::valueOf(a0));
                  return t_AcmDataSubStructureKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AcmDataSubStructureKey_values(PyTypeObject *type)
              {
                JArray< AcmDataSubStructureKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmDataSubStructureKey::values());
                return JArray<jobject>(result.this$).wrap(t_AcmDataSubStructureKey::wrap_jobject);
              }
              static PyObject *t_AcmDataSubStructureKey_get__parameters_(t_AcmDataSubStructureKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *NonLinearConjugateGradientOptimizer$Formula::class$ = NULL;
            jmethodID *NonLinearConjugateGradientOptimizer$Formula::mids$ = NULL;
            bool NonLinearConjugateGradientOptimizer$Formula::live$ = false;
            NonLinearConjugateGradientOptimizer$Formula *NonLinearConjugateGradientOptimizer$Formula::FLETCHER_REEVES = NULL;
            NonLinearConjugateGradientOptimizer$Formula *NonLinearConjugateGradientOptimizer$Formula::POLAK_RIBIERE = NULL;

            jclass NonLinearConjugateGradientOptimizer$Formula::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_0adee92a1f83630b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;");
                mids$[mid_values_7c06aed992f1194e] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                FLETCHER_REEVES = new NonLinearConjugateGradientOptimizer$Formula(env->getStaticObjectField(cls, "FLETCHER_REEVES", "Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;"));
                POLAK_RIBIERE = new NonLinearConjugateGradientOptimizer$Formula(env->getStaticObjectField(cls, "POLAK_RIBIERE", "Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NonLinearConjugateGradientOptimizer$Formula NonLinearConjugateGradientOptimizer$Formula::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return NonLinearConjugateGradientOptimizer$Formula(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0adee92a1f83630b], a0.this$));
            }

            JArray< NonLinearConjugateGradientOptimizer$Formula > NonLinearConjugateGradientOptimizer$Formula::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< NonLinearConjugateGradientOptimizer$Formula >(env->callStaticObjectMethod(cls, mids$[mid_values_7c06aed992f1194e]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_of_(t_NonLinearConjugateGradientOptimizer$Formula *self, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_values(PyTypeObject *type);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_get__parameters_(t_NonLinearConjugateGradientOptimizer$Formula *self, void *data);
            static PyGetSetDef t_NonLinearConjugateGradientOptimizer$Formula__fields_[] = {
              DECLARE_GET_FIELD(t_NonLinearConjugateGradientOptimizer$Formula, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_NonLinearConjugateGradientOptimizer$Formula__methods_[] = {
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, of_, METH_VARARGS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NonLinearConjugateGradientOptimizer$Formula)[] = {
              { Py_tp_methods, t_NonLinearConjugateGradientOptimizer$Formula__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_NonLinearConjugateGradientOptimizer$Formula__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NonLinearConjugateGradientOptimizer$Formula)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(NonLinearConjugateGradientOptimizer$Formula, t_NonLinearConjugateGradientOptimizer$Formula, NonLinearConjugateGradientOptimizer$Formula);
            PyObject *t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(const NonLinearConjugateGradientOptimizer$Formula& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$Formula *self = (t_NonLinearConjugateGradientOptimizer$Formula *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$Formula *self = (t_NonLinearConjugateGradientOptimizer$Formula *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_NonLinearConjugateGradientOptimizer$Formula::install(PyObject *module)
            {
              installType(&PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), &PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$Formula), module, "NonLinearConjugateGradientOptimizer$Formula", 0);
            }

            void t_NonLinearConjugateGradientOptimizer$Formula::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "class_", make_descriptor(NonLinearConjugateGradientOptimizer$Formula::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "wrapfn_", make_descriptor(t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "boxfn_", make_descriptor(boxObject));
              env->getClass(NonLinearConjugateGradientOptimizer$Formula::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "FLETCHER_REEVES", make_descriptor(t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(*NonLinearConjugateGradientOptimizer$Formula::FLETCHER_REEVES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "POLAK_RIBIERE", make_descriptor(t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(*NonLinearConjugateGradientOptimizer$Formula::POLAK_RIBIERE)));
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NonLinearConjugateGradientOptimizer$Formula::initializeClass, 1)))
                return NULL;
              return t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(NonLinearConjugateGradientOptimizer$Formula(((t_NonLinearConjugateGradientOptimizer$Formula *) arg)->object.this$));
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NonLinearConjugateGradientOptimizer$Formula::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_of_(t_NonLinearConjugateGradientOptimizer$Formula *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              NonLinearConjugateGradientOptimizer$Formula result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::valueOf(a0));
                return t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_values(PyTypeObject *type)
            {
              JArray< NonLinearConjugateGradientOptimizer$Formula > result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::values());
              return JArray<jobject>(result.this$).wrap(t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject);
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_get__parameters_(t_NonLinearConjugateGradientOptimizer$Formula *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractTimeScales.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/GMSTScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractTimeScales::class$ = NULL;
      jmethodID *AbstractTimeScales::mids$ = NULL;
      bool AbstractTimeScales::live$ = false;

      jclass AbstractTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_createBesselianEpoch_d2854c25a21df51f] = env->getMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_d2854c25a21df51f] = env->getMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getBeidouEpoch_80e11148db499dda] = env->getMethodID(cls, "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getCcsdsEpoch_80e11148db499dda] = env->getMethodID(cls, "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFiftiesEpoch_80e11148db499dda] = env->getMethodID(cls, "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFutureInfinity_80e11148db499dda] = env->getMethodID(cls, "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGMST_3a2e75d759160885] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGalileoEpoch_80e11148db499dda] = env->getMethodID(cls, "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGlonassEpoch_80e11148db499dda] = env->getMethodID(cls, "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGpsEpoch_80e11148db499dda] = env->getMethodID(cls, "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getIrnssEpoch_80e11148db499dda] = env->getMethodID(cls, "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJ2000Epoch_80e11148db499dda] = env->getMethodID(cls, "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJavaEpoch_80e11148db499dda] = env->getMethodID(cls, "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJulianEpoch_80e11148db499dda] = env->getMethodID(cls, "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_80e11148db499dda] = env->getMethodID(cls, "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPastInfinity_80e11148db499dda] = env->getMethodID(cls, "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getQzssEpoch_80e11148db499dda] = env->getMethodID(cls, "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getUT1_ff99e037ad2c3870] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUT1_0287466dc96c535a] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getEopHistory_5f3b1864e8a02d51] = env->getMethodID(cls, "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractTimeScales::AbstractTimeScales() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::createBesselianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createBesselianEpoch_d2854c25a21df51f], a0));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::createJulianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createJulianEpoch_d2854c25a21df51f], a0));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getBeidouEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBeidouEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getCcsdsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCcsdsEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getFiftiesEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFiftiesEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getFutureInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFutureInfinity_80e11148db499dda]));
      }

      ::org::orekit::time::GMSTScale AbstractTimeScales::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::GMSTScale(env->callObjectMethod(this$, mids$[mid_getGMST_3a2e75d759160885], a0.this$, a1));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getGalileoEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGalileoEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getGlonassEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGlonassEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getGpsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGpsEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getIrnssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getIrnssEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getJ2000Epoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJ2000Epoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getJavaEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJavaEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJulianEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getModifiedJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getModifiedJulianEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getPastInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPastInfinity_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getQzssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getQzssEpoch_80e11148db499dda]));
      }

      ::org::orekit::time::UT1Scale AbstractTimeScales::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_ff99e037ad2c3870], a0.this$, a1));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_AbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractTimeScales_init_(t_AbstractTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractTimeScales_createBesselianEpoch(t_AbstractTimeScales *self, PyObject *arg);
      static PyObject *t_AbstractTimeScales_createJulianEpoch(t_AbstractTimeScales *self, PyObject *arg);
      static PyObject *t_AbstractTimeScales_getBeidouEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getCcsdsEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getFiftiesEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getFutureInfinity(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getGMST(t_AbstractTimeScales *self, PyObject *args);
      static PyObject *t_AbstractTimeScales_getGalileoEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getGlonassEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getGpsEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getIrnssEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getJ2000Epoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getJavaEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getJulianEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getModifiedJulianEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getPastInfinity(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getQzssEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getUT1(t_AbstractTimeScales *self, PyObject *args);
      static PyObject *t_AbstractTimeScales_get__beidouEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__ccsdsEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__fiftiesEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__futureInfinity(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__galileoEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__glonassEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__gpsEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__irnssEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__j2000Epoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__javaEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__julianEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__modifiedJulianEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__pastInfinity(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__qzssEpoch(t_AbstractTimeScales *self, void *data);
      static PyGetSetDef t_AbstractTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractTimeScales, beidouEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, ccsdsEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, fiftiesEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, futureInfinity),
        DECLARE_GET_FIELD(t_AbstractTimeScales, galileoEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, glonassEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, gpsEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, irnssEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, j2000Epoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, javaEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, julianEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, modifiedJulianEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, pastInfinity),
        DECLARE_GET_FIELD(t_AbstractTimeScales, qzssEpoch),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractTimeScales__methods_[] = {
        DECLARE_METHOD(t_AbstractTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeScales, createBesselianEpoch, METH_O),
        DECLARE_METHOD(t_AbstractTimeScales, createJulianEpoch, METH_O),
        DECLARE_METHOD(t_AbstractTimeScales, getBeidouEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getCcsdsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getFiftiesEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getFutureInfinity, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGMST, METH_VARARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGalileoEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGlonassEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGpsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getIrnssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getJ2000Epoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getJavaEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getModifiedJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getPastInfinity, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getQzssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getUT1, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractTimeScales)[] = {
        { Py_tp_methods, t_AbstractTimeScales__methods_ },
        { Py_tp_init, (void *) t_AbstractTimeScales_init_ },
        { Py_tp_getset, t_AbstractTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractTimeScales)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractTimeScales, t_AbstractTimeScales, AbstractTimeScales);

      void t_AbstractTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractTimeScales), &PY_TYPE_DEF(AbstractTimeScales), module, "AbstractTimeScales", 0);
      }

      void t_AbstractTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeScales), "class_", make_descriptor(AbstractTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeScales), "wrapfn_", make_descriptor(t_AbstractTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeScales), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractTimeScales::initializeClass, 1)))
          return NULL;
        return t_AbstractTimeScales::wrap_Object(AbstractTimeScales(((t_AbstractTimeScales *) arg)->object.this$));
      }
      static PyObject *t_AbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractTimeScales_init_(t_AbstractTimeScales *self, PyObject *args, PyObject *kwds)
      {
        AbstractTimeScales object((jobject) NULL);

        INT_CALL(object = AbstractTimeScales());
        self->object = object;

        return 0;
      }

      static PyObject *t_AbstractTimeScales_createBesselianEpoch(t_AbstractTimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createBesselianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createBesselianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_createJulianEpoch(t_AbstractTimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createJulianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_getBeidouEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getCcsdsEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getFiftiesEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getFutureInfinity(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getGMST(t_AbstractTimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getGMST", args);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_getGalileoEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getGlonassEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getGpsEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getIrnssEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getJ2000Epoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getJavaEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getJulianEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getModifiedJulianEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getPastInfinity(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getQzssEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getUT1(t_AbstractTimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::UT1Scale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getUT1(a0, a1));
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getUT1", args);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_get__beidouEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__ccsdsEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__fiftiesEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__futureInfinity(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__galileoEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__glonassEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__gpsEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__irnssEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__j2000Epoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__javaEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__julianEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__modifiedJulianEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__pastInfinity(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__qzssEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonEstimationsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonEstimationsProvider::class$ = NULL;
        jmethodID *PythonEstimationsProvider::mids$ = NULL;
        bool PythonEstimationsProvider::live$ = false;

        jclass PythonEstimationsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonEstimationsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getEstimatedMeasurement_a0080ef23630d9a1] = env->getMethodID(cls, "getEstimatedMeasurement", "(I)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getNumber_d6ab429752e7c267] = env->getMethodID(cls, "getNumber", "()I");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEstimationsProvider::PythonEstimationsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonEstimationsProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonEstimationsProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonEstimationsProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_PythonEstimationsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEstimationsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEstimationsProvider_init_(t_PythonEstimationsProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEstimationsProvider_finalize(t_PythonEstimationsProvider *self);
        static PyObject *t_PythonEstimationsProvider_pythonExtension(t_PythonEstimationsProvider *self, PyObject *args);
        static jobject JNICALL t_PythonEstimationsProvider_getEstimatedMeasurement0(JNIEnv *jenv, jobject jobj, jint a0);
        static jint JNICALL t_PythonEstimationsProvider_getNumber1(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEstimationsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEstimationsProvider_get__self(t_PythonEstimationsProvider *self, void *data);
        static PyGetSetDef t_PythonEstimationsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEstimationsProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEstimationsProvider__methods_[] = {
          DECLARE_METHOD(t_PythonEstimationsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationsProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEstimationsProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEstimationsProvider)[] = {
          { Py_tp_methods, t_PythonEstimationsProvider__methods_ },
          { Py_tp_init, (void *) t_PythonEstimationsProvider_init_ },
          { Py_tp_getset, t_PythonEstimationsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEstimationsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEstimationsProvider, t_PythonEstimationsProvider, PythonEstimationsProvider);

        void t_PythonEstimationsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEstimationsProvider), &PY_TYPE_DEF(PythonEstimationsProvider), module, "PythonEstimationsProvider", 1);
        }

        void t_PythonEstimationsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationsProvider), "class_", make_descriptor(PythonEstimationsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationsProvider), "wrapfn_", make_descriptor(t_PythonEstimationsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationsProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEstimationsProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getEstimatedMeasurement", "(I)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonEstimationsProvider_getEstimatedMeasurement0 },
            { "getNumber", "()I", (void *) t_PythonEstimationsProvider_getNumber1 },
            { "pythonDecRef", "()V", (void *) t_PythonEstimationsProvider_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonEstimationsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEstimationsProvider::initializeClass, 1)))
            return NULL;
          return t_PythonEstimationsProvider::wrap_Object(PythonEstimationsProvider(((t_PythonEstimationsProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonEstimationsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEstimationsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEstimationsProvider_init_(t_PythonEstimationsProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonEstimationsProvider object((jobject) NULL);

          INT_CALL(object = PythonEstimationsProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEstimationsProvider_finalize(t_PythonEstimationsProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEstimationsProvider_pythonExtension(t_PythonEstimationsProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonEstimationsProvider_getEstimatedMeasurement0(JNIEnv *jenv, jobject jobj, jint a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedMeasurement", "i", (int) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("getEstimatedMeasurement", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jint JNICALL t_PythonEstimationsProvider_getNumber1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getNumber", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getNumber", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static void JNICALL t_PythonEstimationsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEstimationsProvider_get__self(t_PythonEstimationsProvider *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/MonotoneChain.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *MonotoneChain::class$ = NULL;
            jmethodID *MonotoneChain::mids$ = NULL;
            bool MonotoneChain::live$ = false;

            jclass MonotoneChain::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/MonotoneChain");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_b35db77cae58639e] = env->getMethodID(cls, "<init>", "(Z)V");
                mids$[mid_init$_eb480bb8fee9156f] = env->getMethodID(cls, "<init>", "(ZD)V");
                mids$[mid_findHullVertices_ca6e223ef3eef34f] = env->getMethodID(cls, "findHullVertices", "(Ljava/util/Collection;)Ljava/util/Collection;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MonotoneChain::MonotoneChain() : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            MonotoneChain::MonotoneChain(jboolean a0) : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(env->newObject(initializeClass, &mids$, mid_init$_b35db77cae58639e, a0)) {}

            MonotoneChain::MonotoneChain(jboolean a0, jdouble a1) : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(env->newObject(initializeClass, &mids$, mid_init$_eb480bb8fee9156f, a0, a1)) {}

            ::java::util::Collection MonotoneChain::findHullVertices(const ::java::util::Collection & a0) const
            {
              return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_findHullVertices_ca6e223ef3eef34f], a0.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_MonotoneChain_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MonotoneChain_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MonotoneChain_init_(t_MonotoneChain *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MonotoneChain_findHullVertices(t_MonotoneChain *self, PyObject *arg);

            static PyMethodDef t_MonotoneChain__methods_[] = {
              DECLARE_METHOD(t_MonotoneChain, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MonotoneChain, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MonotoneChain, findHullVertices, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MonotoneChain)[] = {
              { Py_tp_methods, t_MonotoneChain__methods_ },
              { Py_tp_init, (void *) t_MonotoneChain_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MonotoneChain)[] = {
              &PY_TYPE_DEF(::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D),
              NULL
            };

            DEFINE_TYPE(MonotoneChain, t_MonotoneChain, MonotoneChain);

            void t_MonotoneChain::install(PyObject *module)
            {
              installType(&PY_TYPE(MonotoneChain), &PY_TYPE_DEF(MonotoneChain), module, "MonotoneChain", 0);
            }

            void t_MonotoneChain::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MonotoneChain), "class_", make_descriptor(MonotoneChain::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MonotoneChain), "wrapfn_", make_descriptor(t_MonotoneChain::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MonotoneChain), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MonotoneChain_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MonotoneChain::initializeClass, 1)))
                return NULL;
              return t_MonotoneChain::wrap_Object(MonotoneChain(((t_MonotoneChain *) arg)->object.this$));
            }
            static PyObject *t_MonotoneChain_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MonotoneChain::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MonotoneChain_init_(t_MonotoneChain *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  MonotoneChain object((jobject) NULL);

                  INT_CALL(object = MonotoneChain());
                  self->object = object;
                  break;
                }
               case 1:
                {
                  jboolean a0;
                  MonotoneChain object((jobject) NULL);

                  if (!parseArgs(args, "Z", &a0))
                  {
                    INT_CALL(object = MonotoneChain(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jboolean a0;
                  jdouble a1;
                  MonotoneChain object((jobject) NULL);

                  if (!parseArgs(args, "ZD", &a0, &a1))
                  {
                    INT_CALL(object = MonotoneChain(a0, a1));
                    self->object = object;
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_MonotoneChain_findHullVertices(t_MonotoneChain *self, PyObject *arg)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::Collection result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.findHullVertices(a0));
                return ::java::util::t_Collection::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D));
              }

              PyErr_SetArgsError((PyObject *) self, "findHullVertices", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedAngularCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedAngularCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedAngularCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedAngularCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedAngularCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_8d5aeab05ce8f81e] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_b5c437acda06e416] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_getFilter_410860c8cd87dc25] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_interpolate_483decf66e8c0d46] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::AngularDerivativesFilter & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8d5aeab05ce8f81e, a0, a1.this$)) {}

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::AngularDerivativesFilter & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b5c437acda06e416, a0, a1, a2.this$)) {}

      ::org::orekit::utils::AngularDerivativesFilter TimeStampedAngularCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_410860c8cd87dc25]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedAngularCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedAngularCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedAngularCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedAngularCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedAngularCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedAngularCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedAngularCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedAngularCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedAngularCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator, t_TimeStampedAngularCoordinatesHermiteInterpolator, TimeStampedAngularCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedAngularCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedAngularCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedAngularCoordinatesHermiteInterpolator), module, "TimeStampedAngularCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedAngularCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_Object(TimeStampedAngularCoordinatesHermiteInterpolator(((t_TimeStampedAngularCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator());
            self->object = object;
            self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::AngularDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultivariateOptimizer::class$ = NULL;
          jmethodID *MultivariateOptimizer::mids$ = NULL;
          bool MultivariateOptimizer::live$ = false;

          jclass MultivariateOptimizer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_computeObjectiveValue_a40ce4fdf6559ac0] = env->getMethodID(cls, "computeObjectiveValue", "([D)D");
              mids$[mid_getGoalType_bbd73725644e36aa] = env->getMethodID(cls, "getGoalType", "()Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");
              mids$[mid_optimize_1912ae5ec9cd8a6c] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
              mids$[mid_parseOptimizationData_df324e640da2eeec] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble MultivariateOptimizer::computeObjectiveValue(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_computeObjectiveValue_a40ce4fdf6559ac0], a0.this$);
          }

          ::org::hipparchus::optim::nonlinear::scalar::GoalType MultivariateOptimizer::getGoalType() const
          {
            return ::org::hipparchus::optim::nonlinear::scalar::GoalType(env->callObjectMethod(this$, mids$[mid_getGoalType_bbd73725644e36aa]));
          }

          ::org::hipparchus::optim::PointValuePair MultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
          {
            return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_1912ae5ec9cd8a6c], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          static PyObject *t_MultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateOptimizer_of_(t_MultivariateOptimizer *self, PyObject *args);
          static PyObject *t_MultivariateOptimizer_computeObjectiveValue(t_MultivariateOptimizer *self, PyObject *arg);
          static PyObject *t_MultivariateOptimizer_getGoalType(t_MultivariateOptimizer *self);
          static PyObject *t_MultivariateOptimizer_optimize(t_MultivariateOptimizer *self, PyObject *args);
          static PyObject *t_MultivariateOptimizer_get__goalType(t_MultivariateOptimizer *self, void *data);
          static PyObject *t_MultivariateOptimizer_get__parameters_(t_MultivariateOptimizer *self, void *data);
          static PyGetSetDef t_MultivariateOptimizer__fields_[] = {
            DECLARE_GET_FIELD(t_MultivariateOptimizer, goalType),
            DECLARE_GET_FIELD(t_MultivariateOptimizer, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MultivariateOptimizer__methods_[] = {
            DECLARE_METHOD(t_MultivariateOptimizer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateOptimizer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateOptimizer, of_, METH_VARARGS),
            DECLARE_METHOD(t_MultivariateOptimizer, computeObjectiveValue, METH_O),
            DECLARE_METHOD(t_MultivariateOptimizer, getGoalType, METH_NOARGS),
            DECLARE_METHOD(t_MultivariateOptimizer, optimize, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultivariateOptimizer)[] = {
            { Py_tp_methods, t_MultivariateOptimizer__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MultivariateOptimizer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultivariateOptimizer)[] = {
            &PY_TYPE_DEF(::org::hipparchus::optim::BaseMultivariateOptimizer),
            NULL
          };

          DEFINE_TYPE(MultivariateOptimizer, t_MultivariateOptimizer, MultivariateOptimizer);
          PyObject *t_MultivariateOptimizer::wrap_Object(const MultivariateOptimizer& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultivariateOptimizer::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultivariateOptimizer *self = (t_MultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultivariateOptimizer::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultivariateOptimizer *self = (t_MultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MultivariateOptimizer::install(PyObject *module)
          {
            installType(&PY_TYPE(MultivariateOptimizer), &PY_TYPE_DEF(MultivariateOptimizer), module, "MultivariateOptimizer", 0);
          }

          void t_MultivariateOptimizer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateOptimizer), "class_", make_descriptor(MultivariateOptimizer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateOptimizer), "wrapfn_", make_descriptor(t_MultivariateOptimizer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultivariateOptimizer::initializeClass, 1)))
              return NULL;
            return t_MultivariateOptimizer::wrap_Object(MultivariateOptimizer(((t_MultivariateOptimizer *) arg)->object.this$));
          }
          static PyObject *t_MultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultivariateOptimizer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MultivariateOptimizer_of_(t_MultivariateOptimizer *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MultivariateOptimizer_computeObjectiveValue(t_MultivariateOptimizer *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.computeObjectiveValue(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeObjectiveValue", arg);
            return NULL;
          }

          static PyObject *t_MultivariateOptimizer_getGoalType(t_MultivariateOptimizer *self)
          {
            ::org::hipparchus::optim::nonlinear::scalar::GoalType result((jobject) NULL);
            OBJ_CALL(result = self->object.getGoalType());
            return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(result);
          }

          static PyObject *t_MultivariateOptimizer_optimize(t_MultivariateOptimizer *self, PyObject *args)
          {
            JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
            ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.optimize(a0));
              return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
            }

            return callSuper(PY_TYPE(MultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
          }
          static PyObject *t_MultivariateOptimizer_get__parameters_(t_MultivariateOptimizer *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_MultivariateOptimizer_get__goalType(t_MultivariateOptimizer *self, void *data)
          {
            ::org::hipparchus::optim::nonlinear::scalar::GoalType value((jobject) NULL);
            OBJ_CALL(value = self->object.getGoalType());
            return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/MultisatStepNormalizer.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *MultisatStepNormalizer::class$ = NULL;
        jmethodID *MultisatStepNormalizer::mids$ = NULL;
        bool MultisatStepNormalizer::live$ = false;

        jclass MultisatStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/MultisatStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e0e6a24d3ba91936] = env->getMethodID(cls, "<init>", "(DLorg/orekit/propagation/sampling/MultiSatFixedStepHandler;)V");
            mids$[mid_finish_aa335fea495d60e0] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_getFixedStepHandler_9b6b96ed060f0812] = env->getMethodID(cls, "getFixedStepHandler", "()Lorg/orekit/propagation/sampling/MultiSatFixedStepHandler;");
            mids$[mid_getFixedTimeStep_9981f74b2d109da6] = env->getMethodID(cls, "getFixedTimeStep", "()D");
            mids$[mid_handleStep_aa335fea495d60e0] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_0b0c18b32ea71a29] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultisatStepNormalizer::MultisatStepNormalizer(jdouble a0, const ::org::orekit::propagation::sampling::MultiSatFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e0e6a24d3ba91936, a0, a1.this$)) {}

        void MultisatStepNormalizer::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_aa335fea495d60e0], a0.this$);
        }

        ::org::orekit::propagation::sampling::MultiSatFixedStepHandler MultisatStepNormalizer::getFixedStepHandler() const
        {
          return ::org::orekit::propagation::sampling::MultiSatFixedStepHandler(env->callObjectMethod(this$, mids$[mid_getFixedStepHandler_9b6b96ed060f0812]));
        }

        jdouble MultisatStepNormalizer::getFixedTimeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFixedTimeStep_9981f74b2d109da6]);
        }

        void MultisatStepNormalizer::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_aa335fea495d60e0], a0.this$);
        }

        void MultisatStepNormalizer::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0b0c18b32ea71a29], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        static PyObject *t_MultisatStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultisatStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultisatStepNormalizer_init_(t_MultisatStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultisatStepNormalizer_finish(t_MultisatStepNormalizer *self, PyObject *arg);
        static PyObject *t_MultisatStepNormalizer_getFixedStepHandler(t_MultisatStepNormalizer *self);
        static PyObject *t_MultisatStepNormalizer_getFixedTimeStep(t_MultisatStepNormalizer *self);
        static PyObject *t_MultisatStepNormalizer_handleStep(t_MultisatStepNormalizer *self, PyObject *arg);
        static PyObject *t_MultisatStepNormalizer_init(t_MultisatStepNormalizer *self, PyObject *args);
        static PyObject *t_MultisatStepNormalizer_get__fixedStepHandler(t_MultisatStepNormalizer *self, void *data);
        static PyObject *t_MultisatStepNormalizer_get__fixedTimeStep(t_MultisatStepNormalizer *self, void *data);
        static PyGetSetDef t_MultisatStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_MultisatStepNormalizer, fixedStepHandler),
          DECLARE_GET_FIELD(t_MultisatStepNormalizer, fixedTimeStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultisatStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_MultisatStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultisatStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultisatStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_MultisatStepNormalizer, getFixedStepHandler, METH_NOARGS),
          DECLARE_METHOD(t_MultisatStepNormalizer, getFixedTimeStep, METH_NOARGS),
          DECLARE_METHOD(t_MultisatStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_MultisatStepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultisatStepNormalizer)[] = {
          { Py_tp_methods, t_MultisatStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_MultisatStepNormalizer_init_ },
          { Py_tp_getset, t_MultisatStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultisatStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultisatStepNormalizer, t_MultisatStepNormalizer, MultisatStepNormalizer);

        void t_MultisatStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(MultisatStepNormalizer), &PY_TYPE_DEF(MultisatStepNormalizer), module, "MultisatStepNormalizer", 0);
        }

        void t_MultisatStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultisatStepNormalizer), "class_", make_descriptor(MultisatStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultisatStepNormalizer), "wrapfn_", make_descriptor(t_MultisatStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultisatStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultisatStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultisatStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_MultisatStepNormalizer::wrap_Object(MultisatStepNormalizer(((t_MultisatStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_MultisatStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultisatStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultisatStepNormalizer_init_(t_MultisatStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler a1((jobject) NULL);
          MultisatStepNormalizer object((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::MultiSatFixedStepHandler::initializeClass, &a0, &a1))
          {
            INT_CALL(object = MultisatStepNormalizer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultisatStepNormalizer_finish(t_MultisatStepNormalizer *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_MultisatStepNormalizer_getFixedStepHandler(t_MultisatStepNormalizer *self)
        {
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_MultiSatFixedStepHandler::wrap_Object(result);
        }

        static PyObject *t_MultisatStepNormalizer_getFixedTimeStep(t_MultisatStepNormalizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultisatStepNormalizer_handleStep(t_MultisatStepNormalizer *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_MultisatStepNormalizer_init(t_MultisatStepNormalizer *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_MultisatStepNormalizer_get__fixedStepHandler(t_MultisatStepNormalizer *self, void *data)
        {
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_MultiSatFixedStepHandler::wrap_Object(value);
        }

        static PyObject *t_MultisatStepNormalizer_get__fixedTimeStep(t_MultisatStepNormalizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AbstractGradientConverter::class$ = NULL;
        jmethodID *AbstractGradientConverter::mids$ = NULL;
        bool AbstractGradientConverter::live$ = false;

        jclass AbstractGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AbstractGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFreeStateParameters_d6ab429752e7c267] = env->getMethodID(cls, "getFreeStateParameters", "()I");
            mids$[mid_getParameters_5f9ce9db64bfd55a] = env->getMethodID(cls, "getParameters", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/utils/ParameterDriversProvider;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getParametersAtStateDate_5f9ce9db64bfd55a] = env->getMethodID(cls, "getParametersAtStateDate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/utils/ParameterDriversProvider;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getState_33597c46c7186f5d] = env->getMethodID(cls, "getState", "(Lorg/orekit/utils/ParameterDriversProvider;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_initStates_8062511934471166] = env->getMethodID(cls, "initStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_buildBasicGradientSpacecraftState_3c2a8a2dee577dce] = env->getStaticMethodID(cls, "buildBasicGradientSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;ILorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_extend_ace76047bba91127] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_extend_b792b7e3fa72c7c6] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_extend_4e682d3d3cf0cde9] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/analysis/differentiation/Gradient;I)Lorg/hipparchus/analysis/differentiation/Gradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint AbstractGradientConverter::getFreeStateParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeStateParameters_d6ab429752e7c267]);
        }

        JArray< ::org::hipparchus::analysis::differentiation::Gradient > AbstractGradientConverter::getParameters(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::utils::ParameterDriversProvider & a1) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callObjectMethod(this$, mids$[mid_getParameters_5f9ce9db64bfd55a], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Gradient > AbstractGradientConverter::getParametersAtStateDate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::utils::ParameterDriversProvider & a1) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callObjectMethod(this$, mids$[mid_getParametersAtStateDate_5f9ce9db64bfd55a], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState AbstractGradientConverter::getState(const ::org::orekit::utils::ParameterDriversProvider & a0) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_33597c46c7186f5d], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_AbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGradientConverter_getFreeStateParameters(t_AbstractGradientConverter *self);
        static PyObject *t_AbstractGradientConverter_getParameters(t_AbstractGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractGradientConverter_getParametersAtStateDate(t_AbstractGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractGradientConverter_getState(t_AbstractGradientConverter *self, PyObject *arg);
        static PyObject *t_AbstractGradientConverter_get__freeStateParameters(t_AbstractGradientConverter *self, void *data);
        static PyGetSetDef t_AbstractGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractGradientConverter, freeStateParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractGradientConverter__methods_[] = {
          DECLARE_METHOD(t_AbstractGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGradientConverter, getFreeStateParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractGradientConverter, getParameters, METH_VARARGS),
          DECLARE_METHOD(t_AbstractGradientConverter, getParametersAtStateDate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractGradientConverter, getState, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractGradientConverter)[] = {
          { Py_tp_methods, t_AbstractGradientConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractGradientConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractGradientConverter, t_AbstractGradientConverter, AbstractGradientConverter);

        void t_AbstractGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractGradientConverter), &PY_TYPE_DEF(AbstractGradientConverter), module, "AbstractGradientConverter", 0);
        }

        void t_AbstractGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGradientConverter), "class_", make_descriptor(AbstractGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGradientConverter), "wrapfn_", make_descriptor(t_AbstractGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGradientConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractGradientConverter::initializeClass, 1)))
            return NULL;
          return t_AbstractGradientConverter::wrap_Object(AbstractGradientConverter(((t_AbstractGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_AbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractGradientConverter_getFreeStateParameters(t_AbstractGradientConverter *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeStateParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractGradientConverter_getParameters(t_AbstractGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::ParameterDriversProvider a1((jobject) NULL);
          JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::utils::ParameterDriversProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getParameters(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getParameters", args);
          return NULL;
        }

        static PyObject *t_AbstractGradientConverter_getParametersAtStateDate(t_AbstractGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::ParameterDriversProvider a1((jobject) NULL);
          JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::utils::ParameterDriversProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getParametersAtStateDate(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getParametersAtStateDate", args);
          return NULL;
        }

        static PyObject *t_AbstractGradientConverter_getState(t_AbstractGradientConverter *self, PyObject *arg)
        {
          ::org::orekit::utils::ParameterDriversProvider a0((jobject) NULL);
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriversProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getState(a0));
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          PyErr_SetArgsError((PyObject *) self, "getState", arg);
          return NULL;
        }

        static PyObject *t_AbstractGradientConverter_get__freeStateParameters(t_AbstractGradientConverter *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeStateParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AngularSeparationFromSatelliteDetector.h"
#include "org/orekit/propagation/events/AngularSeparationFromSatelliteDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AngularSeparationFromSatelliteDetector::class$ = NULL;
        jmethodID *AngularSeparationFromSatelliteDetector::mids$ = NULL;
        bool AngularSeparationFromSatelliteDetector::live$ = false;

        jclass AngularSeparationFromSatelliteDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AngularSeparationFromSatelliteDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7b82b8f25db8b260] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getPrimaryObject_781ab98286dad7d5] = env->getMethodID(cls, "getPrimaryObject", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getProximityAngle_9981f74b2d109da6] = env->getMethodID(cls, "getProximityAngle", "()D");
            mids$[mid_getSecondaryObject_781ab98286dad7d5] = env->getMethodID(cls, "getSecondaryObject", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_13bb9387d6383a15] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AngularSeparationFromSatelliteDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularSeparationFromSatelliteDetector::AngularSeparationFromSatelliteDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_7b82b8f25db8b260, a0.this$, a1.this$, a2)) {}

        jdouble AngularSeparationFromSatelliteDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationFromSatelliteDetector::getPrimaryObject() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPrimaryObject_781ab98286dad7d5]));
        }

        jdouble AngularSeparationFromSatelliteDetector::getProximityAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProximityAngle_9981f74b2d109da6]);
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationFromSatelliteDetector::getSecondaryObject() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getSecondaryObject_781ab98286dad7d5]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_AngularSeparationFromSatelliteDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationFromSatelliteDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationFromSatelliteDetector_of_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args);
        static int t_AngularSeparationFromSatelliteDetector_init_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularSeparationFromSatelliteDetector_g(t_AngularSeparationFromSatelliteDetector *self, PyObject *args);
        static PyObject *t_AngularSeparationFromSatelliteDetector_getPrimaryObject(t_AngularSeparationFromSatelliteDetector *self);
        static PyObject *t_AngularSeparationFromSatelliteDetector_getProximityAngle(t_AngularSeparationFromSatelliteDetector *self);
        static PyObject *t_AngularSeparationFromSatelliteDetector_getSecondaryObject(t_AngularSeparationFromSatelliteDetector *self);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__primaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__proximityAngle(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__secondaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__parameters_(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyGetSetDef t_AngularSeparationFromSatelliteDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, primaryObject),
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, proximityAngle),
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, secondaryObject),
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularSeparationFromSatelliteDetector__methods_[] = {
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, getPrimaryObject, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, getProximityAngle, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, getSecondaryObject, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularSeparationFromSatelliteDetector)[] = {
          { Py_tp_methods, t_AngularSeparationFromSatelliteDetector__methods_ },
          { Py_tp_init, (void *) t_AngularSeparationFromSatelliteDetector_init_ },
          { Py_tp_getset, t_AngularSeparationFromSatelliteDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularSeparationFromSatelliteDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AngularSeparationFromSatelliteDetector, t_AngularSeparationFromSatelliteDetector, AngularSeparationFromSatelliteDetector);
        PyObject *t_AngularSeparationFromSatelliteDetector::wrap_Object(const AngularSeparationFromSatelliteDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationFromSatelliteDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationFromSatelliteDetector *self = (t_AngularSeparationFromSatelliteDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularSeparationFromSatelliteDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationFromSatelliteDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationFromSatelliteDetector *self = (t_AngularSeparationFromSatelliteDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularSeparationFromSatelliteDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularSeparationFromSatelliteDetector), &PY_TYPE_DEF(AngularSeparationFromSatelliteDetector), module, "AngularSeparationFromSatelliteDetector", 0);
        }

        void t_AngularSeparationFromSatelliteDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationFromSatelliteDetector), "class_", make_descriptor(AngularSeparationFromSatelliteDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationFromSatelliteDetector), "wrapfn_", make_descriptor(t_AngularSeparationFromSatelliteDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationFromSatelliteDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularSeparationFromSatelliteDetector::initializeClass, 1)))
            return NULL;
          return t_AngularSeparationFromSatelliteDetector::wrap_Object(AngularSeparationFromSatelliteDetector(((t_AngularSeparationFromSatelliteDetector *) arg)->object.this$));
        }
        static PyObject *t_AngularSeparationFromSatelliteDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularSeparationFromSatelliteDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_of_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularSeparationFromSatelliteDetector_init_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          jdouble a2;
          AngularSeparationFromSatelliteDetector object((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = AngularSeparationFromSatelliteDetector(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AngularSeparationFromSatelliteDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_g(t_AngularSeparationFromSatelliteDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AngularSeparationFromSatelliteDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_getPrimaryObject(t_AngularSeparationFromSatelliteDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_getProximityAngle(t_AngularSeparationFromSatelliteDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_getSecondaryObject(t_AngularSeparationFromSatelliteDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__parameters_(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_get__primaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_get__proximityAngle(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_get__secondaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SparseRealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseRealVector::class$ = NULL;
      jmethodID *SparseRealVector::mids$ = NULL;
      bool SparseRealVector::live$ = false;

      jclass SparseRealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseRealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SparseRealVector::SparseRealVector() : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_SparseRealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseRealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SparseRealVector_init_(t_SparseRealVector *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_SparseRealVector__methods_[] = {
        DECLARE_METHOD(t_SparseRealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseRealVector, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseRealVector)[] = {
        { Py_tp_methods, t_SparseRealVector__methods_ },
        { Py_tp_init, (void *) t_SparseRealVector_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseRealVector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::RealVector),
        NULL
      };

      DEFINE_TYPE(SparseRealVector, t_SparseRealVector, SparseRealVector);

      void t_SparseRealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseRealVector), &PY_TYPE_DEF(SparseRealVector), module, "SparseRealVector", 0);
      }

      void t_SparseRealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealVector), "class_", make_descriptor(SparseRealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealVector), "wrapfn_", make_descriptor(t_SparseRealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseRealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseRealVector::initializeClass, 1)))
          return NULL;
        return t_SparseRealVector::wrap_Object(SparseRealVector(((t_SparseRealVector *) arg)->object.this$));
      }
      static PyObject *t_SparseRealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseRealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SparseRealVector_init_(t_SparseRealVector *self, PyObject *args, PyObject *kwds)
      {
        SparseRealVector object((jobject) NULL);

        INT_CALL(object = SparseRealVector());
        self->object = object;

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFileWriter::class$ = NULL;
        jmethodID *EphemerisFileWriter::mids$ = NULL;
        bool EphemerisFileWriter::live$ = false;

        jclass EphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_write_ed9a20a3abb51fd6] = env->getMethodID(cls, "write", "(Ljava/lang/String;Lorg/orekit/files/general/EphemerisFile;)V");
            mids$[mid_write_12ce9ebfe43ac6e6] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void EphemerisFileWriter::write(const ::java::lang::String & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_ed9a20a3abb51fd6], a0.this$, a1.this$);
        }

        void EphemerisFileWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_12ce9ebfe43ac6e6], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_EphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileWriter_write(t_EphemerisFileWriter *self, PyObject *args);

        static PyMethodDef t_EphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_EphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFileWriter)[] = {
          { Py_tp_methods, t_EphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFileWriter, t_EphemerisFileWriter, EphemerisFileWriter);

        void t_EphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFileWriter), &PY_TYPE_DEF(EphemerisFileWriter), module, "EphemerisFileWriter", 0);
        }

        void t_EphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileWriter), "class_", make_descriptor(EphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileWriter), "wrapfn_", make_descriptor(t_EphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_EphemerisFileWriter::wrap_Object(EphemerisFileWriter(((t_EphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFileWriter_write(t_EphemerisFileWriter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "sK", ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/PythonIntersectionAlgorithmI.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "java/lang/Throwable.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *PythonIntersectionAlgorithmI::class$ = NULL;
        jmethodID *PythonIntersectionAlgorithmI::mids$ = NULL;
        bool PythonIntersectionAlgorithmI::live$ = false;

        jclass PythonIntersectionAlgorithmI::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/PythonIntersectionAlgorithmI");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAlgorithmId_65c2eab2e30f9d2d] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_82f92590f4247da1] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_5c14acfe95406f7d] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_refineIntersection_1feab13663326a32] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonIntersectionAlgorithmI::PythonIntersectionAlgorithmI() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonIntersectionAlgorithmI::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonIntersectionAlgorithmI::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonIntersectionAlgorithmI::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        static PyObject *t_PythonIntersectionAlgorithmI_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonIntersectionAlgorithmI_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonIntersectionAlgorithmI_init_(t_PythonIntersectionAlgorithmI *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonIntersectionAlgorithmI_finalize(t_PythonIntersectionAlgorithmI *self);
        static PyObject *t_PythonIntersectionAlgorithmI_pythonExtension(t_PythonIntersectionAlgorithmI *self, PyObject *args);
        static jobject JNICALL t_PythonIntersectionAlgorithmI_getAlgorithmId0(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonIntersectionAlgorithmI_getElevation1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
        static jobject JNICALL t_PythonIntersectionAlgorithmI_intersection2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonIntersectionAlgorithmI_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonIntersectionAlgorithmI_refineIntersection4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static PyObject *t_PythonIntersectionAlgorithmI_get__self(t_PythonIntersectionAlgorithmI *self, void *data);
        static PyGetSetDef t_PythonIntersectionAlgorithmI__fields_[] = {
          DECLARE_GET_FIELD(t_PythonIntersectionAlgorithmI, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonIntersectionAlgorithmI__methods_[] = {
          DECLARE_METHOD(t_PythonIntersectionAlgorithmI, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonIntersectionAlgorithmI, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonIntersectionAlgorithmI, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonIntersectionAlgorithmI, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonIntersectionAlgorithmI)[] = {
          { Py_tp_methods, t_PythonIntersectionAlgorithmI__methods_ },
          { Py_tp_init, (void *) t_PythonIntersectionAlgorithmI_init_ },
          { Py_tp_getset, t_PythonIntersectionAlgorithmI__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonIntersectionAlgorithmI)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonIntersectionAlgorithmI, t_PythonIntersectionAlgorithmI, PythonIntersectionAlgorithmI);

        void t_PythonIntersectionAlgorithmI::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonIntersectionAlgorithmI), &PY_TYPE_DEF(PythonIntersectionAlgorithmI), module, "PythonIntersectionAlgorithmI", 1);
        }

        void t_PythonIntersectionAlgorithmI::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntersectionAlgorithmI), "class_", make_descriptor(PythonIntersectionAlgorithmI::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntersectionAlgorithmI), "wrapfn_", make_descriptor(t_PythonIntersectionAlgorithmI::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntersectionAlgorithmI), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonIntersectionAlgorithmI::initializeClass);
          JNINativeMethod methods[] = {
            { "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;", (void *) t_PythonIntersectionAlgorithmI_getAlgorithmId0 },
            { "getElevation", "(DD)D", (void *) t_PythonIntersectionAlgorithmI_getElevation1 },
            { "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;", (void *) t_PythonIntersectionAlgorithmI_intersection2 },
            { "pythonDecRef", "()V", (void *) t_PythonIntersectionAlgorithmI_pythonDecRef3 },
            { "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;", (void *) t_PythonIntersectionAlgorithmI_refineIntersection4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonIntersectionAlgorithmI_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonIntersectionAlgorithmI::initializeClass, 1)))
            return NULL;
          return t_PythonIntersectionAlgorithmI::wrap_Object(PythonIntersectionAlgorithmI(((t_PythonIntersectionAlgorithmI *) arg)->object.this$));
        }
        static PyObject *t_PythonIntersectionAlgorithmI_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonIntersectionAlgorithmI::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonIntersectionAlgorithmI_init_(t_PythonIntersectionAlgorithmI *self, PyObject *args, PyObject *kwds)
        {
          PythonIntersectionAlgorithmI object((jobject) NULL);

          INT_CALL(object = PythonIntersectionAlgorithmI());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonIntersectionAlgorithmI_finalize(t_PythonIntersectionAlgorithmI *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonIntersectionAlgorithmI_pythonExtension(t_PythonIntersectionAlgorithmI *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonIntersectionAlgorithmI_getAlgorithmId0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonIntersectionAlgorithmI::mids$[PythonIntersectionAlgorithmI::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAlgorithmId", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &value))
          {
            throwTypeError("getAlgorithmId", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jdouble JNICALL t_PythonIntersectionAlgorithmI_getElevation1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonIntersectionAlgorithmI::mids$[PythonIntersectionAlgorithmI::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getElevation", "dd", (double) a0, (double) a1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getElevation", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonIntersectionAlgorithmI_intersection2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonIntersectionAlgorithmI::mids$[PythonIntersectionAlgorithmI::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(::org::orekit::rugged::utils::ExtendedEllipsoid(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *o2 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a2));
          PyObject *result = PyObject_CallMethod(obj, "intersection", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &value))
          {
            throwTypeError("intersection", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonIntersectionAlgorithmI_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonIntersectionAlgorithmI::mids$[PythonIntersectionAlgorithmI::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonIntersectionAlgorithmI::mids$[PythonIntersectionAlgorithmI::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonIntersectionAlgorithmI_refineIntersection4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonIntersectionAlgorithmI::mids$[PythonIntersectionAlgorithmI::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(::org::orekit::rugged::utils::ExtendedEllipsoid(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *o2 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a2));
          PyObject *o3 = ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(::org::orekit::rugged::utils::NormalizedGeodeticPoint(a3));
          PyObject *result = PyObject_CallMethod(obj, "refineIntersection", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &value))
          {
            throwTypeError("refineIntersection", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static PyObject *t_PythonIntersectionAlgorithmI_get__self(t_PythonIntersectionAlgorithmI *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
