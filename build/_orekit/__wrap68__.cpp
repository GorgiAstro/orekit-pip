#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/HexadecimalSequenceEncodedMessage.h"
#include "java/lang/Class.h"
#include "java/lang/CharSequence.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *HexadecimalSequenceEncodedMessage::class$ = NULL;
          jmethodID *HexadecimalSequenceEncodedMessage::mids$ = NULL;
          bool HexadecimalSequenceEncodedMessage::live$ = false;

          jclass HexadecimalSequenceEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/HexadecimalSequenceEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d77f10dac029c69d] = env->getMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
              mids$[mid_start_7ae3461a92a43152] = env->getMethodID(cls, "start", "()V");
              mids$[mid_fetchByte_f2f64475e4580546] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HexadecimalSequenceEncodedMessage::HexadecimalSequenceEncodedMessage(const ::java::lang::CharSequence & a0) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_d77f10dac029c69d, a0.this$)) {}

          void HexadecimalSequenceEncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_7ae3461a92a43152]);
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_HexadecimalSequenceEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HexadecimalSequenceEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HexadecimalSequenceEncodedMessage_init_(t_HexadecimalSequenceEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_HexadecimalSequenceEncodedMessage_start(t_HexadecimalSequenceEncodedMessage *self, PyObject *args);

          static PyMethodDef t_HexadecimalSequenceEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_HexadecimalSequenceEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HexadecimalSequenceEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HexadecimalSequenceEncodedMessage, start, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HexadecimalSequenceEncodedMessage)[] = {
            { Py_tp_methods, t_HexadecimalSequenceEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_HexadecimalSequenceEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HexadecimalSequenceEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(HexadecimalSequenceEncodedMessage, t_HexadecimalSequenceEncodedMessage, HexadecimalSequenceEncodedMessage);

          void t_HexadecimalSequenceEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(HexadecimalSequenceEncodedMessage), &PY_TYPE_DEF(HexadecimalSequenceEncodedMessage), module, "HexadecimalSequenceEncodedMessage", 0);
          }

          void t_HexadecimalSequenceEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HexadecimalSequenceEncodedMessage), "class_", make_descriptor(HexadecimalSequenceEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HexadecimalSequenceEncodedMessage), "wrapfn_", make_descriptor(t_HexadecimalSequenceEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HexadecimalSequenceEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HexadecimalSequenceEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HexadecimalSequenceEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_HexadecimalSequenceEncodedMessage::wrap_Object(HexadecimalSequenceEncodedMessage(((t_HexadecimalSequenceEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_HexadecimalSequenceEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HexadecimalSequenceEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HexadecimalSequenceEncodedMessage_init_(t_HexadecimalSequenceEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::CharSequence a0((jobject) NULL);
            HexadecimalSequenceEncodedMessage object((jobject) NULL);

            if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
            {
              INT_CALL(object = HexadecimalSequenceEncodedMessage(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_HexadecimalSequenceEncodedMessage_start(t_HexadecimalSequenceEncodedMessage *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.start());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(HexadecimalSequenceEncodedMessage), (PyObject *) self, "start", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFileWriter::class$ = NULL;
        jmethodID *AttitudeEphemerisFileWriter::mids$ = NULL;
        bool AttitudeEphemerisFileWriter::live$ = false;

        jclass AttitudeEphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_write_e98d61264941bf32] = env->getMethodID(cls, "write", "(Ljava/lang/String;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");
            mids$[mid_write_3e82c67d69401a38] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AttitudeEphemerisFileWriter::write(const ::java::lang::String & a0, const ::org::orekit::files::general::AttitudeEphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_e98d61264941bf32], a0.this$, a1.this$);
        }

        void AttitudeEphemerisFileWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::AttitudeEphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_3e82c67d69401a38], a0.this$, a1.this$);
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
        static PyObject *t_AttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileWriter_write(t_AttitudeEphemerisFileWriter *self, PyObject *args);

        static PyMethodDef t_AttitudeEphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFileWriter)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFileWriter, t_AttitudeEphemerisFileWriter, AttitudeEphemerisFileWriter);

        void t_AttitudeEphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFileWriter), &PY_TYPE_DEF(AttitudeEphemerisFileWriter), module, "AttitudeEphemerisFileWriter", 0);
        }

        void t_AttitudeEphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileWriter), "class_", make_descriptor(AttitudeEphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileWriter), "wrapfn_", make_descriptor(t_AttitudeEphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFileWriter::wrap_Object(AttitudeEphemerisFileWriter(((t_AttitudeEphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFileWriter_write(t_AttitudeEphemerisFileWriter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::general::AttitudeEphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "sK", ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_AttitudeEphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::files::general::AttitudeEphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_AttitudeEphemerisFile::parameters_))
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
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeSpanMap$Span::class$ = NULL;
      jmethodID *TimeSpanMap$Span::mids$ = NULL;
      bool TimeSpanMap$Span::live$ = false;

      jclass TimeSpanMap$Span::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeSpanMap$Span");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getData_dfd7647d9110ac9f] = env->getMethodID(cls, "getData", "()Ljava/lang/Object;");
          mids$[mid_getEnd_aaa854c403487cf3] = env->getMethodID(cls, "getEnd", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getEndTransition_bfa1ec341cbef3d2] = env->getMethodID(cls, "getEndTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getStartTransition_bfa1ec341cbef3d2] = env->getMethodID(cls, "getStartTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_next_39a1e35b17737f60] = env->getMethodID(cls, "next", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_previous_39a1e35b17737f60] = env->getMethodID(cls, "previous", "()Lorg/orekit/utils/TimeSpanMap$Span;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object TimeSpanMap$Span::getData() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getData_dfd7647d9110ac9f]));
      }

      ::org::orekit::time::AbsoluteDate TimeSpanMap$Span::getEnd() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEnd_aaa854c403487cf3]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap$Span::getEndTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getEndTransition_bfa1ec341cbef3d2]));
      }

      ::org::orekit::time::AbsoluteDate TimeSpanMap$Span::getStart() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap$Span::getStartTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getStartTransition_bfa1ec341cbef3d2]));
      }

      TimeSpanMap$Span TimeSpanMap$Span::next() const
      {
        return TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_next_39a1e35b17737f60]));
      }

      TimeSpanMap$Span TimeSpanMap$Span::previous() const
      {
        return TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_previous_39a1e35b17737f60]));
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
      static PyObject *t_TimeSpanMap$Span_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Span_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Span_of_(t_TimeSpanMap$Span *self, PyObject *args);
      static PyObject *t_TimeSpanMap$Span_getData(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getEnd(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getEndTransition(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getStart(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getStartTransition(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_next(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_previous(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_get__data(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__end(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__endTransition(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__start(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__startTransition(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__parameters_(t_TimeSpanMap$Span *self, void *data);
      static PyGetSetDef t_TimeSpanMap$Span__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, data),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, end),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, endTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, start),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, startTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSpanMap$Span__methods_[] = {
        DECLARE_METHOD(t_TimeSpanMap$Span, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Span, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Span, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getData, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getEnd, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getEndTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getStart, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getStartTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, next, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, previous, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSpanMap$Span)[] = {
        { Py_tp_methods, t_TimeSpanMap$Span__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeSpanMap$Span__fields_ },
        { Py_tp_iter, (void *) PyObject_SelfIter },
        { Py_tp_iternext, (void *) ((PyObject *(*)(t_TimeSpanMap$Span *)) get_generic_next< t_TimeSpanMap$Span,t_TimeSpanMap$Span,TimeSpanMap$Span >) },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSpanMap$Span)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeSpanMap$Span, t_TimeSpanMap$Span, TimeSpanMap$Span);
      PyObject *t_TimeSpanMap$Span::wrap_Object(const TimeSpanMap$Span& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Span::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Span *self = (t_TimeSpanMap$Span *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSpanMap$Span::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Span::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Span *self = (t_TimeSpanMap$Span *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSpanMap$Span::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSpanMap$Span), &PY_TYPE_DEF(TimeSpanMap$Span), module, "TimeSpanMap$Span", 0);
      }

      void t_TimeSpanMap$Span::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Span), "class_", make_descriptor(TimeSpanMap$Span::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Span), "wrapfn_", make_descriptor(t_TimeSpanMap$Span::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Span), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeSpanMap$Span_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSpanMap$Span::initializeClass, 1)))
          return NULL;
        return t_TimeSpanMap$Span::wrap_Object(TimeSpanMap$Span(((t_TimeSpanMap$Span *) arg)->object.this$));
      }
      static PyObject *t_TimeSpanMap$Span_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSpanMap$Span::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSpanMap$Span_of_(t_TimeSpanMap$Span *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeSpanMap$Span_getData(t_TimeSpanMap$Span *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Span_getEnd(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getEnd());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Span_getEndTransition(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getEndTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Span_getStart(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Span_getStartTransition(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getStartTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Span_next(t_TimeSpanMap$Span *self)
      {
        TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.next());
        return t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Span_previous(t_TimeSpanMap$Span *self)
      {
        TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.previous());
        return t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_TimeSpanMap$Span_get__parameters_(t_TimeSpanMap$Span *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSpanMap$Span_get__data(t_TimeSpanMap$Span *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__end(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getEnd());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__endTransition(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getEndTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__start(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__startTransition(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getStartTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AltitudeDetector.h"
#include "org/orekit/propagation/events/AltitudeDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AltitudeDetector::class$ = NULL;
        jmethodID *AltitudeDetector::mids$ = NULL;
        bool AltitudeDetector::live$ = false;

        jclass AltitudeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AltitudeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e9054d75a8746f4e] = env->getMethodID(cls, "<init>", "(DLorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_13a423acbe145cfc] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_6ef4fc4c23ba4b5c] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/bodies/BodyShape;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAltitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getAltitude", "()D");
            mids$[mid_getBodyShape_883d26889ee03ca8] = env->getMethodID(cls, "getBodyShape", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_1f8ac32f677c84eb] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AltitudeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AltitudeDetector::AltitudeDetector(jdouble a0, const ::org::orekit::bodies::BodyShape & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_e9054d75a8746f4e, a0, a1.this$)) {}

        AltitudeDetector::AltitudeDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::BodyShape & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_13a423acbe145cfc, a0, a1, a2.this$)) {}

        AltitudeDetector::AltitudeDetector(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::bodies::BodyShape & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6ef4fc4c23ba4b5c, a0, a1, a2, a3.this$)) {}

        jdouble AltitudeDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        jdouble AltitudeDetector::getAltitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAltitude_456d9a2f64d6b28d]);
        }

        ::org::orekit::bodies::BodyShape AltitudeDetector::getBodyShape() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBodyShape_883d26889ee03ca8]));
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
        static PyObject *t_AltitudeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AltitudeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AltitudeDetector_of_(t_AltitudeDetector *self, PyObject *args);
        static int t_AltitudeDetector_init_(t_AltitudeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AltitudeDetector_g(t_AltitudeDetector *self, PyObject *args);
        static PyObject *t_AltitudeDetector_getAltitude(t_AltitudeDetector *self);
        static PyObject *t_AltitudeDetector_getBodyShape(t_AltitudeDetector *self);
        static PyObject *t_AltitudeDetector_get__altitude(t_AltitudeDetector *self, void *data);
        static PyObject *t_AltitudeDetector_get__bodyShape(t_AltitudeDetector *self, void *data);
        static PyObject *t_AltitudeDetector_get__parameters_(t_AltitudeDetector *self, void *data);
        static PyGetSetDef t_AltitudeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AltitudeDetector, altitude),
          DECLARE_GET_FIELD(t_AltitudeDetector, bodyShape),
          DECLARE_GET_FIELD(t_AltitudeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AltitudeDetector__methods_[] = {
          DECLARE_METHOD(t_AltitudeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AltitudeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AltitudeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AltitudeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AltitudeDetector, getAltitude, METH_NOARGS),
          DECLARE_METHOD(t_AltitudeDetector, getBodyShape, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AltitudeDetector)[] = {
          { Py_tp_methods, t_AltitudeDetector__methods_ },
          { Py_tp_init, (void *) t_AltitudeDetector_init_ },
          { Py_tp_getset, t_AltitudeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AltitudeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AltitudeDetector, t_AltitudeDetector, AltitudeDetector);
        PyObject *t_AltitudeDetector::wrap_Object(const AltitudeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AltitudeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AltitudeDetector *self = (t_AltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AltitudeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AltitudeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AltitudeDetector *self = (t_AltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AltitudeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AltitudeDetector), &PY_TYPE_DEF(AltitudeDetector), module, "AltitudeDetector", 0);
        }

        void t_AltitudeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AltitudeDetector), "class_", make_descriptor(AltitudeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AltitudeDetector), "wrapfn_", make_descriptor(t_AltitudeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AltitudeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AltitudeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AltitudeDetector::initializeClass, 1)))
            return NULL;
          return t_AltitudeDetector::wrap_Object(AltitudeDetector(((t_AltitudeDetector *) arg)->object.this$));
        }
        static PyObject *t_AltitudeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AltitudeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AltitudeDetector_of_(t_AltitudeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AltitudeDetector_init_(t_AltitudeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::orekit::bodies::BodyShape a1((jobject) NULL);
              AltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1))
              {
                INT_CALL(object = AltitudeDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AltitudeDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::BodyShape a2((jobject) NULL);
              AltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = AltitudeDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AltitudeDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::org::orekit::bodies::BodyShape a3((jobject) NULL);
              AltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "DDDk", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AltitudeDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AltitudeDetector);
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

        static PyObject *t_AltitudeDetector_g(t_AltitudeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AltitudeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AltitudeDetector_getAltitude(t_AltitudeDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAltitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AltitudeDetector_getBodyShape(t_AltitudeDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_AltitudeDetector_get__parameters_(t_AltitudeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AltitudeDetector_get__altitude(t_AltitudeDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAltitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AltitudeDetector_get__bodyShape(t_AltitudeDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GalileoNavigationMessage::class$ = NULL;
            jmethodID *GalileoNavigationMessage::mids$ = NULL;
            bool GalileoNavigationMessage::live$ = false;

            jclass GalileoNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getBGDE1E5a_456d9a2f64d6b28d] = env->getMethodID(cls, "getBGDE1E5a", "()D");
                mids$[mid_getBGDE5bE1_456d9a2f64d6b28d] = env->getMethodID(cls, "getBGDE5bE1", "()D");
                mids$[mid_getDataSource_f2f64475e4580546] = env->getMethodID(cls, "getDataSource", "()I");
                mids$[mid_getIODNav_f2f64475e4580546] = env->getMethodID(cls, "getIODNav", "()I");
                mids$[mid_getSisa_456d9a2f64d6b28d] = env->getMethodID(cls, "getSisa", "()D");
                mids$[mid_getSvHealth_456d9a2f64d6b28d] = env->getMethodID(cls, "getSvHealth", "()D");
                mids$[mid_setBGDE1E5a_77e0f9a1f260e2e5] = env->getMethodID(cls, "setBGDE1E5a", "(D)V");
                mids$[mid_setBGDE5bE1_77e0f9a1f260e2e5] = env->getMethodID(cls, "setBGDE5bE1", "(D)V");
                mids$[mid_setDataSource_0a2a1ac2721c0336] = env->getMethodID(cls, "setDataSource", "(I)V");
                mids$[mid_setIODNav_0a2a1ac2721c0336] = env->getMethodID(cls, "setIODNav", "(I)V");
                mids$[mid_setSisa_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSisa", "(D)V");
                mids$[mid_setSvHealth_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSvHealth", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GalileoNavigationMessage::GalileoNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jdouble GalileoNavigationMessage::getBGDE1E5a() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBGDE1E5a_456d9a2f64d6b28d]);
            }

            jdouble GalileoNavigationMessage::getBGDE5bE1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBGDE5bE1_456d9a2f64d6b28d]);
            }

            jint GalileoNavigationMessage::getDataSource() const
            {
              return env->callIntMethod(this$, mids$[mid_getDataSource_f2f64475e4580546]);
            }

            jint GalileoNavigationMessage::getIODNav() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODNav_f2f64475e4580546]);
            }

            jdouble GalileoNavigationMessage::getSisa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSisa_456d9a2f64d6b28d]);
            }

            jdouble GalileoNavigationMessage::getSvHealth() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvHealth_456d9a2f64d6b28d]);
            }

            void GalileoNavigationMessage::setBGDE1E5a(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setBGDE1E5a_77e0f9a1f260e2e5], a0);
            }

            void GalileoNavigationMessage::setBGDE5bE1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setBGDE5bE1_77e0f9a1f260e2e5], a0);
            }

            void GalileoNavigationMessage::setDataSource(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDataSource_0a2a1ac2721c0336], a0);
            }

            void GalileoNavigationMessage::setIODNav(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODNav_0a2a1ac2721c0336], a0);
            }

            void GalileoNavigationMessage::setSisa(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisa_77e0f9a1f260e2e5], a0);
            }

            void GalileoNavigationMessage::setSvHealth(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_77e0f9a1f260e2e5], a0);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GalileoNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GalileoNavigationMessage_init_(t_GalileoNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GalileoNavigationMessage_getBGDE1E5a(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getBGDE5bE1(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getDataSource(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getIODNav(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getSisa(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getSvHealth(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_setBGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setBGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setDataSource(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setIODNav(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setSisa(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setSvHealth(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_get__bGDE1E5a(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__bGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__bGDE5bE1(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__bGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__dataSource(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__dataSource(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__iODNav(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__iODNav(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__sisa(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__sisa(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__svHealth(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__svHealth(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_GalileoNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, bGDE1E5a),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, bGDE5bE1),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, dataSource),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, iODNav),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, sisa),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, svHealth),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GalileoNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GalileoNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getBGDE1E5a, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getBGDE5bE1, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getDataSource, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getIODNav, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getSisa, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, setBGDE1E5a, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setBGDE5bE1, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setDataSource, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setIODNav, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setSisa, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setSvHealth, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GalileoNavigationMessage)[] = {
              { Py_tp_methods, t_GalileoNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GalileoNavigationMessage_init_ },
              { Py_tp_getset, t_GalileoNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GalileoNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(GalileoNavigationMessage, t_GalileoNavigationMessage, GalileoNavigationMessage);

            void t_GalileoNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GalileoNavigationMessage), &PY_TYPE_DEF(GalileoNavigationMessage), module, "GalileoNavigationMessage", 0);
            }

            void t_GalileoNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoNavigationMessage), "class_", make_descriptor(GalileoNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoNavigationMessage), "wrapfn_", make_descriptor(t_GalileoNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GalileoNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GalileoNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GalileoNavigationMessage::wrap_Object(GalileoNavigationMessage(((t_GalileoNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GalileoNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GalileoNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GalileoNavigationMessage_init_(t_GalileoNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              GalileoNavigationMessage object((jobject) NULL);

              INT_CALL(object = GalileoNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_GalileoNavigationMessage_getBGDE1E5a(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBGDE1E5a());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_getBGDE5bE1(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBGDE5bE1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_getDataSource(t_GalileoNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getDataSource());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoNavigationMessage_getIODNav(t_GalileoNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODNav());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoNavigationMessage_getSisa(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSisa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_getSvHealth(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_setBGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setBGDE1E5a(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setBGDE1E5a", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setBGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setBGDE5bE1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setBGDE5bE1", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setDataSource(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setDataSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDataSource", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setIODNav(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODNav(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODNav", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setSisa(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSisa(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisa", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setSvHealth(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSvHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_get__bGDE1E5a(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBGDE1E5a());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__bGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setBGDE1E5a(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "bGDE1E5a", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__bGDE5bE1(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBGDE5bE1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__bGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setBGDE5bE1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "bGDE5bE1", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__dataSource(t_GalileoNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getDataSource());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoNavigationMessage_set__dataSource(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setDataSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dataSource", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__iODNav(t_GalileoNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODNav());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoNavigationMessage_set__iODNav(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODNav(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODNav", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__sisa(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSisa());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__sisa(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSisa(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisa", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__svHealth(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__svHealth(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSvHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanEstimatorUtil.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimatorUtil::class$ = NULL;
        jmethodID *KalmanEstimatorUtil::mids$ = NULL;
        bool KalmanEstimatorUtil::live$ = false;

        jclass KalmanEstimatorUtil::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimatorUtil");

            mids$ = new jmethodID[max_mid];
            mids$[mid_applyDynamicOutlierFilter_81b67a7a1cc01557] = env->getStaticMethodID(cls, "applyDynamicOutlierFilter", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_checkDimension_89102031e9d66e7a] = env->getStaticMethodID(cls, "checkDimension", "(ILorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;)V");
            mids$[mid_computeInnovationVector_7624e7aff53fd936] = env->getStaticMethodID(cls, "computeInnovationVector", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_computeInnovationVector_6a809c7d1ea2bd94] = env->getStaticMethodID(cls, "computeInnovationVector", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;[D)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_decorate_adb96dd80cef08b8] = env->getStaticMethodID(cls, "decorate", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/estimation/sequential/MeasurementDecorator;");
            mids$[mid_decorateUnscented_adb96dd80cef08b8] = env->getStaticMethodID(cls, "decorateUnscented", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/estimation/sequential/MeasurementDecorator;");
            mids$[mid_filterRelevant_0536e83d158e5a50] = env->getStaticMethodID(cls, "filterRelevant", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;[Lorg/orekit/propagation/SpacecraftState;)[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_normalizeCovarianceMatrix_2654c88e25da7e19] = env->getStaticMethodID(cls, "normalizeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeCovarianceMatrix_2654c88e25da7e19] = env->getStaticMethodID(cls, "unnormalizeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeInnovationCovarianceMatrix_2654c88e25da7e19] = env->getStaticMethodID(cls, "unnormalizeInnovationCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeKalmanGainMatrix_a745d02df7ee9dde] = env->getStaticMethodID(cls, "unnormalizeKalmanGainMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeMeasurementJacobian_a745d02df7ee9dde] = env->getStaticMethodID(cls, "unnormalizeMeasurementJacobian", "(Lorg/hipparchus/linear/RealMatrix;[D[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeStateTransitionMatrix_2654c88e25da7e19] = env->getStaticMethodID(cls, "unnormalizeStateTransitionMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void KalmanEstimatorUtil::applyDynamicOutlierFilter(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0, const ::org::hipparchus::linear::RealMatrix & a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_applyDynamicOutlierFilter_81b67a7a1cc01557], a0.this$, a1.this$);
        }

        void KalmanEstimatorUtil::checkDimension(jint a0, const ::org::orekit::utils::ParameterDriversList & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::utils::ParameterDriversList & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkDimension_89102031e9d66e7a], a0, a1.this$, a2.this$, a3.this$);
        }

        ::org::hipparchus::linear::RealVector KalmanEstimatorUtil::computeInnovationVector(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_computeInnovationVector_7624e7aff53fd936], a0.this$));
        }

        ::org::hipparchus::linear::RealVector KalmanEstimatorUtil::computeInnovationVector(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_computeInnovationVector_6a809c7d1ea2bd94], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::MeasurementDecorator KalmanEstimatorUtil::decorate(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::time::AbsoluteDate & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::estimation::sequential::MeasurementDecorator(env->callStaticObjectMethod(cls, mids$[mid_decorate_adb96dd80cef08b8], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::MeasurementDecorator KalmanEstimatorUtil::decorateUnscented(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::time::AbsoluteDate & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::estimation::sequential::MeasurementDecorator(env->callStaticObjectMethod(cls, mids$[mid_decorateUnscented_adb96dd80cef08b8], a0.this$, a1.this$));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanEstimatorUtil::filterRelevant(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callStaticObjectMethod(cls, mids$[mid_filterRelevant_0536e83d158e5a50], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::normalizeCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_normalizeCovarianceMatrix_2654c88e25da7e19], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeCovarianceMatrix_2654c88e25da7e19], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeInnovationCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeInnovationCovarianceMatrix_2654c88e25da7e19], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeKalmanGainMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeKalmanGainMatrix_a745d02df7ee9dde], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeMeasurementJacobian(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeMeasurementJacobian_a745d02df7ee9dde], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeStateTransitionMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeStateTransitionMatrix_2654c88e25da7e19], a0.this$, a1.this$));
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
      namespace sequential {
        static PyObject *t_KalmanEstimatorUtil_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimatorUtil_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimatorUtil_applyDynamicOutlierFilter(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_checkDimension(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_computeInnovationVector(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_decorate(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_decorateUnscented(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_filterRelevant(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_normalizeCovarianceMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeCovarianceMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeInnovationCovarianceMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeKalmanGainMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeMeasurementJacobian(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeStateTransitionMatrix(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_KalmanEstimatorUtil__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimatorUtil, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, applyDynamicOutlierFilter, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, checkDimension, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, computeInnovationVector, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, decorate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, decorateUnscented, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, filterRelevant, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, normalizeCovarianceMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeCovarianceMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeInnovationCovarianceMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeKalmanGainMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeMeasurementJacobian, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeStateTransitionMatrix, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimatorUtil)[] = {
          { Py_tp_methods, t_KalmanEstimatorUtil__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimatorUtil)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanEstimatorUtil, t_KalmanEstimatorUtil, KalmanEstimatorUtil);

        void t_KalmanEstimatorUtil::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimatorUtil), &PY_TYPE_DEF(KalmanEstimatorUtil), module, "KalmanEstimatorUtil", 0);
        }

        void t_KalmanEstimatorUtil::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorUtil), "class_", make_descriptor(KalmanEstimatorUtil::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorUtil), "wrapfn_", make_descriptor(t_KalmanEstimatorUtil::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorUtil), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimatorUtil_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimatorUtil::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimatorUtil::wrap_Object(KalmanEstimatorUtil(((t_KalmanEstimatorUtil *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimatorUtil_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimatorUtil::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanEstimatorUtil_applyDynamicOutlierFilter(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(::org::orekit::estimation::sequential::KalmanEstimatorUtil::applyDynamicOutlierFilter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "applyDynamicOutlierFilter", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_checkDimension(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList a1((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a3((jobject) NULL);

          if (!parseArgs(args, "Ikkk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::estimation::sequential::KalmanEstimatorUtil::checkDimension(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkDimension", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_computeInnovationVector(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::computeInnovationVector(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArgs(args, "K[D", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_, &a1))
              {
                OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::computeInnovationVector(a0, a1));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeInnovationVector", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_decorate(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::decorate(a0, a1));
            return ::org::orekit::estimation::sequential::t_MeasurementDecorator::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "decorate", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_decorateUnscented(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::decorateUnscented(a0, a1));
            return ::org::orekit::estimation::sequential::t_MeasurementDecorator::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "decorateUnscented", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_filterRelevant(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);

          if (!parseArgs(args, "K[k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::filterRelevant(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          }

          PyErr_SetArgsError(type, "filterRelevant", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_normalizeCovarianceMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::normalizeCovarianceMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "normalizeCovarianceMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeCovarianceMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeCovarianceMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeCovarianceMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeInnovationCovarianceMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeInnovationCovarianceMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeInnovationCovarianceMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeKalmanGainMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeKalmanGainMatrix(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeKalmanGainMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeMeasurementJacobian(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeMeasurementJacobian(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeMeasurementJacobian", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeStateTransitionMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeStateTransitionMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeStateTransitionMatrix", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/BigRealField.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/BigRealField.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/BigReal.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *BigRealField::class$ = NULL;
      jmethodID *BigRealField::mids$ = NULL;
      bool BigRealField::live$ = false;

      jclass BigRealField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/BigRealField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_b22318a83d56db5f] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/util/BigRealField;");
          mids$[mid_getOne_032077e6380ada07] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_032077e6380ada07] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean BigRealField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      BigRealField BigRealField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigRealField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_b22318a83d56db5f]));
      }

      ::org::hipparchus::util::BigReal BigRealField::getOne() const
      {
        return ::org::hipparchus::util::BigReal(env->callObjectMethod(this$, mids$[mid_getOne_032077e6380ada07]));
      }

      ::java::lang::Class BigRealField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
      }

      ::org::hipparchus::util::BigReal BigRealField::getZero() const
      {
        return ::org::hipparchus::util::BigReal(env->callObjectMethod(this$, mids$[mid_getZero_032077e6380ada07]));
      }

      jint BigRealField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_BigRealField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigRealField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigRealField_equals(t_BigRealField *self, PyObject *args);
      static PyObject *t_BigRealField_getInstance(PyTypeObject *type);
      static PyObject *t_BigRealField_getOne(t_BigRealField *self);
      static PyObject *t_BigRealField_getRuntimeClass(t_BigRealField *self);
      static PyObject *t_BigRealField_getZero(t_BigRealField *self);
      static PyObject *t_BigRealField_hashCode(t_BigRealField *self, PyObject *args);
      static PyObject *t_BigRealField_get__instance(t_BigRealField *self, void *data);
      static PyObject *t_BigRealField_get__one(t_BigRealField *self, void *data);
      static PyObject *t_BigRealField_get__runtimeClass(t_BigRealField *self, void *data);
      static PyObject *t_BigRealField_get__zero(t_BigRealField *self, void *data);
      static PyGetSetDef t_BigRealField__fields_[] = {
        DECLARE_GET_FIELD(t_BigRealField, instance),
        DECLARE_GET_FIELD(t_BigRealField, one),
        DECLARE_GET_FIELD(t_BigRealField, runtimeClass),
        DECLARE_GET_FIELD(t_BigRealField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigRealField__methods_[] = {
        DECLARE_METHOD(t_BigRealField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigRealField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigRealField, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigRealField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_BigRealField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_BigRealField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_BigRealField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_BigRealField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigRealField)[] = {
        { Py_tp_methods, t_BigRealField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BigRealField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigRealField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigRealField, t_BigRealField, BigRealField);

      void t_BigRealField::install(PyObject *module)
      {
        installType(&PY_TYPE(BigRealField), &PY_TYPE_DEF(BigRealField), module, "BigRealField", 0);
      }

      void t_BigRealField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigRealField), "class_", make_descriptor(BigRealField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigRealField), "wrapfn_", make_descriptor(t_BigRealField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigRealField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigRealField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigRealField::initializeClass, 1)))
          return NULL;
        return t_BigRealField::wrap_Object(BigRealField(((t_BigRealField *) arg)->object.this$));
      }
      static PyObject *t_BigRealField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigRealField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BigRealField_equals(t_BigRealField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigRealField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigRealField_getInstance(PyTypeObject *type)
      {
        BigRealField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::BigRealField::getInstance());
        return t_BigRealField::wrap_Object(result);
      }

      static PyObject *t_BigRealField_getOne(t_BigRealField *self)
      {
        ::org::hipparchus::util::BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigRealField_getRuntimeClass(t_BigRealField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(BigReal));
      }

      static PyObject *t_BigRealField_getZero(t_BigRealField *self)
      {
        ::org::hipparchus::util::BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigRealField_hashCode(t_BigRealField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigRealField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigRealField_get__instance(t_BigRealField *self, void *data)
      {
        BigRealField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_BigRealField::wrap_Object(value);
      }

      static PyObject *t_BigRealField_get__one(t_BigRealField *self, void *data)
      {
        ::org::hipparchus::util::BigReal value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(value);
      }

      static PyObject *t_BigRealField_get__runtimeClass(t_BigRealField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_BigRealField_get__zero(t_BigRealField *self, void *data)
      {
        ::org::hipparchus::util::BigReal value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/AbstractUnscentedTransform.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *AbstractUnscentedTransform::class$ = NULL;
      jmethodID *AbstractUnscentedTransform::mids$ = NULL;
      bool AbstractUnscentedTransform::live$ = false;

      jclass AbstractUnscentedTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/AbstractUnscentedTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_unscentedTransform_701a8550e98fcc7d] = env->getMethodID(cls, "unscentedTransform", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)[Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getMultiplicationFactor_456d9a2f64d6b28d] = env->getMethodID(cls, "getMultiplicationFactor", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractUnscentedTransform::AbstractUnscentedTransform(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      JArray< ::org::hipparchus::linear::RealVector > AbstractUnscentedTransform::unscentedTransform(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_unscentedTransform_701a8550e98fcc7d], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_AbstractUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractUnscentedTransform_init_(t_AbstractUnscentedTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractUnscentedTransform_unscentedTransform(t_AbstractUnscentedTransform *self, PyObject *args);

      static PyMethodDef t_AbstractUnscentedTransform__methods_[] = {
        DECLARE_METHOD(t_AbstractUnscentedTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractUnscentedTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractUnscentedTransform, unscentedTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractUnscentedTransform)[] = {
        { Py_tp_methods, t_AbstractUnscentedTransform__methods_ },
        { Py_tp_init, (void *) t_AbstractUnscentedTransform_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractUnscentedTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractUnscentedTransform, t_AbstractUnscentedTransform, AbstractUnscentedTransform);

      void t_AbstractUnscentedTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractUnscentedTransform), &PY_TYPE_DEF(AbstractUnscentedTransform), module, "AbstractUnscentedTransform", 0);
      }

      void t_AbstractUnscentedTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnscentedTransform), "class_", make_descriptor(AbstractUnscentedTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnscentedTransform), "wrapfn_", make_descriptor(t_AbstractUnscentedTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnscentedTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractUnscentedTransform::initializeClass, 1)))
          return NULL;
        return t_AbstractUnscentedTransform::wrap_Object(AbstractUnscentedTransform(((t_AbstractUnscentedTransform *) arg)->object.this$));
      }
      static PyObject *t_AbstractUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractUnscentedTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractUnscentedTransform_init_(t_AbstractUnscentedTransform *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        AbstractUnscentedTransform object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = AbstractUnscentedTransform(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractUnscentedTransform_unscentedTransform(t_AbstractUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.unscentedTransform(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "unscentedTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AbstractDetector::class$ = NULL;
        jmethodID *AbstractDetector::mids$ = NULL;
        bool AbstractDetector::live$ = false;
        jdouble AbstractDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint AbstractDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble AbstractDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass AbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getHandler_d450688ba8c3949b] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_5b5c68574977d620] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_isForward_e470b6d9e0d979db] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_427c1e606cf016a7] = env->getMethodID(cls, "withHandler", "(Lorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withMaxCheck_28062f653333113e] = env->getMethodID(cls, "withMaxCheck", "(D)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withMaxCheck_ad0d5ccc43611835] = env->getMethodID(cls, "withMaxCheck", "(Lorg/orekit/propagation/events/AdaptableInterval;)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withMaxIter_ab456b9a4e9f6c2b] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withThreshold_28062f653333113e] = env->getMethodID(cls, "withThreshold", "(D)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_create_ccd729cfbbaff306] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::propagation::events::handlers::EventHandler AbstractDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::EventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_d450688ba8c3949b]));
        }

        ::org::orekit::propagation::events::AdaptableInterval AbstractDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_5b5c68574977d620]));
        }

        jint AbstractDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_f2f64475e4580546]);
        }

        jdouble AbstractDetector::getThreshold() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThreshold_456d9a2f64d6b28d]);
        }

        void AbstractDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
        }

        jboolean AbstractDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_e470b6d9e0d979db]);
        }

        AbstractDetector AbstractDetector::withHandler(const ::org::orekit::propagation::events::handlers::EventHandler & a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withHandler_427c1e606cf016a7], a0.this$));
        }

        AbstractDetector AbstractDetector::withMaxCheck(jdouble a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_28062f653333113e], a0));
        }

        AbstractDetector AbstractDetector::withMaxCheck(const ::org::orekit::propagation::events::AdaptableInterval & a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_ad0d5ccc43611835], a0.this$));
        }

        AbstractDetector AbstractDetector::withMaxIter(jint a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_ab456b9a4e9f6c2b], a0));
        }

        AbstractDetector AbstractDetector::withThreshold(jdouble a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_28062f653333113e], a0));
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
        static PyObject *t_AbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDetector_of_(t_AbstractDetector *self, PyObject *args);
        static PyObject *t_AbstractDetector_g(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_getHandler(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_getMaxCheckInterval(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_getMaxIterationCount(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_getThreshold(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_init(t_AbstractDetector *self, PyObject *args);
        static PyObject *t_AbstractDetector_isForward(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_withHandler(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_withMaxCheck(t_AbstractDetector *self, PyObject *args);
        static PyObject *t_AbstractDetector_withMaxIter(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_withThreshold(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_get__forward(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__handler(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__maxCheckInterval(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__maxIterationCount(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__threshold(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__parameters_(t_AbstractDetector *self, void *data);
        static PyGetSetDef t_AbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractDetector, forward),
          DECLARE_GET_FIELD(t_AbstractDetector, handler),
          DECLARE_GET_FIELD(t_AbstractDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AbstractDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AbstractDetector, threshold),
          DECLARE_GET_FIELD(t_AbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractDetector__methods_[] = {
          DECLARE_METHOD(t_AbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractDetector, g, METH_O),
          DECLARE_METHOD(t_AbstractDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_AbstractDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, withHandler, METH_O),
          DECLARE_METHOD(t_AbstractDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_AbstractDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_AbstractDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractDetector)[] = {
          { Py_tp_methods, t_AbstractDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractDetector, t_AbstractDetector, AbstractDetector);
        PyObject *t_AbstractDetector::wrap_Object(const AbstractDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractDetector *self = (t_AbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractDetector *self = (t_AbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractDetector), &PY_TYPE_DEF(AbstractDetector), module, "AbstractDetector", 0);
        }

        void t_AbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "class_", make_descriptor(AbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "wrapfn_", make_descriptor(t_AbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(AbstractDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "DEFAULT_MAXCHECK", make_descriptor(AbstractDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "DEFAULT_MAX_ITER", make_descriptor(AbstractDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "DEFAULT_THRESHOLD", make_descriptor(AbstractDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_AbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractDetector::initializeClass, 1)))
            return NULL;
          return t_AbstractDetector::wrap_Object(AbstractDetector(((t_AbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_AbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractDetector_of_(t_AbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractDetector_g(t_AbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AbstractDetector_getHandler(t_AbstractDetector *self)
        {
          ::org::orekit::propagation::events::handlers::EventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(result);
        }

        static PyObject *t_AbstractDetector_getMaxCheckInterval(t_AbstractDetector *self)
        {
          ::org::orekit::propagation::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_AbstractDetector_getMaxIterationCount(t_AbstractDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractDetector_getThreshold(t_AbstractDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThreshold());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractDetector_init(t_AbstractDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AbstractDetector_isForward(t_AbstractDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractDetector_withHandler(t_AbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::events::handlers::EventHandler a0((jobject) NULL);
          AbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_AbstractDetector_withMaxCheck(t_AbstractDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              AbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::events::AdaptableInterval a0((jobject) NULL);
              AbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::events::AdaptableInterval::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_AbstractDetector_withMaxIter(t_AbstractDetector *self, PyObject *arg)
        {
          jint a0;
          AbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_AbstractDetector_withThreshold(t_AbstractDetector *self, PyObject *arg)
        {
          jdouble a0;
          AbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_AbstractDetector_get__parameters_(t_AbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractDetector_get__forward(t_AbstractDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractDetector_get__handler(t_AbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(value);
        }

        static PyObject *t_AbstractDetector_get__maxCheckInterval(t_AbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AbstractDetector_get__maxIterationCount(t_AbstractDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractDetector_get__threshold(t_AbstractDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThreshold());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/OneDVariation.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *OneDVariation::class$ = NULL;
        jmethodID *OneDVariation::mids$ = NULL;
        bool OneDVariation::live$ = false;

        jclass OneDVariation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/OneDVariation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3c8bd231e261fc0c] = env->getMethodID(cls, "<init>", "(DD[D)V");
            mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OneDVariation::OneDVariation(jdouble a0, jdouble a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c8bd231e261fc0c, a0, a1, a2.this$)) {}

        jdouble OneDVariation::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_824133ce4aec3505], a0, a1);
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
    namespace gnss {
      namespace antenna {
        static PyObject *t_OneDVariation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OneDVariation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OneDVariation_init_(t_OneDVariation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OneDVariation_value(t_OneDVariation *self, PyObject *args);

        static PyMethodDef t_OneDVariation__methods_[] = {
          DECLARE_METHOD(t_OneDVariation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneDVariation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneDVariation, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OneDVariation)[] = {
          { Py_tp_methods, t_OneDVariation__methods_ },
          { Py_tp_init, (void *) t_OneDVariation_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OneDVariation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OneDVariation, t_OneDVariation, OneDVariation);

        void t_OneDVariation::install(PyObject *module)
        {
          installType(&PY_TYPE(OneDVariation), &PY_TYPE_DEF(OneDVariation), module, "OneDVariation", 0);
        }

        void t_OneDVariation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneDVariation), "class_", make_descriptor(OneDVariation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneDVariation), "wrapfn_", make_descriptor(t_OneDVariation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneDVariation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OneDVariation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OneDVariation::initializeClass, 1)))
            return NULL;
          return t_OneDVariation::wrap_Object(OneDVariation(((t_OneDVariation *) arg)->object.this$));
        }
        static PyObject *t_OneDVariation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OneDVariation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OneDVariation_init_(t_OneDVariation *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          JArray< jdouble > a2((jobject) NULL);
          OneDVariation object((jobject) NULL);

          if (!parseArgs(args, "DD[D", &a0, &a1, &a2))
          {
            INT_CALL(object = OneDVariation(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OneDVariation_value(t_OneDVariation *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
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
#include "org/orekit/files/rinex/observation/PhaseShiftCorrection.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_b07aeb91033c2cfc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/ObservationType;DLjava/util/List;)V");
              mids$[mid_getCorrection_456d9a2f64d6b28d] = env->getMethodID(cls, "getCorrection", "()D");
              mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getSatsCorrected_a6156df500549a58] = env->getMethodID(cls, "getSatsCorrected", "()Ljava/util/List;");
              mids$[mid_getTypeObs_5edc6553f2bb4ae7] = env->getMethodID(cls, "getTypeObs", "()Lorg/orekit/gnss/ObservationType;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseShiftCorrection::PhaseShiftCorrection(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::gnss::ObservationType & a1, jdouble a2, const ::java::util::List & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b07aeb91033c2cfc, a0.this$, a1.this$, a2, a3.this$)) {}

          jdouble PhaseShiftCorrection::getCorrection() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCorrection_456d9a2f64d6b28d]);
          }

          ::org::orekit::gnss::SatelliteSystem PhaseShiftCorrection::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7]));
          }

          ::java::util::List PhaseShiftCorrection::getSatsCorrected() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatsCorrected_a6156df500549a58]));
          }

          ::org::orekit::gnss::ObservationType PhaseShiftCorrection::getTypeObs() const
          {
            return ::org::orekit::gnss::ObservationType(env->callObjectMethod(this$, mids$[mid_getTypeObs_5edc6553f2bb4ae7]));
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
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ScreenVolumeShape::class$ = NULL;
            jmethodID *ScreenVolumeShape::mids$ = NULL;
            bool ScreenVolumeShape::live$ = false;
            ScreenVolumeShape *ScreenVolumeShape::BOX = NULL;
            ScreenVolumeShape *ScreenVolumeShape::ELLIPSOID = NULL;
            ScreenVolumeShape *ScreenVolumeShape::SPHERE = NULL;

            jclass ScreenVolumeShape::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_dc98fcbf7089b1c3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;");
                mids$[mid_values_77f739dd053dce82] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                BOX = new ScreenVolumeShape(env->getStaticObjectField(cls, "BOX", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;"));
                ELLIPSOID = new ScreenVolumeShape(env->getStaticObjectField(cls, "ELLIPSOID", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;"));
                SPHERE = new ScreenVolumeShape(env->getStaticObjectField(cls, "SPHERE", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ScreenVolumeShape ScreenVolumeShape::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ScreenVolumeShape(env->callStaticObjectMethod(cls, mids$[mid_valueOf_dc98fcbf7089b1c3], a0.this$));
            }

            JArray< ScreenVolumeShape > ScreenVolumeShape::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ScreenVolumeShape >(env->callStaticObjectMethod(cls, mids$[mid_values_77f739dd053dce82]));
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
          namespace cdm {
            static PyObject *t_ScreenVolumeShape_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeShape_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeShape_of_(t_ScreenVolumeShape *self, PyObject *args);
            static PyObject *t_ScreenVolumeShape_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ScreenVolumeShape_values(PyTypeObject *type);
            static PyObject *t_ScreenVolumeShape_get__parameters_(t_ScreenVolumeShape *self, void *data);
            static PyGetSetDef t_ScreenVolumeShape__fields_[] = {
              DECLARE_GET_FIELD(t_ScreenVolumeShape, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ScreenVolumeShape__methods_[] = {
              DECLARE_METHOD(t_ScreenVolumeShape, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeShape, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeShape, of_, METH_VARARGS),
              DECLARE_METHOD(t_ScreenVolumeShape, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeShape, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ScreenVolumeShape)[] = {
              { Py_tp_methods, t_ScreenVolumeShape__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ScreenVolumeShape__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ScreenVolumeShape)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ScreenVolumeShape, t_ScreenVolumeShape, ScreenVolumeShape);
            PyObject *t_ScreenVolumeShape::wrap_Object(const ScreenVolumeShape& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeShape::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeShape *self = (t_ScreenVolumeShape *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ScreenVolumeShape::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeShape::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeShape *self = (t_ScreenVolumeShape *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ScreenVolumeShape::install(PyObject *module)
            {
              installType(&PY_TYPE(ScreenVolumeShape), &PY_TYPE_DEF(ScreenVolumeShape), module, "ScreenVolumeShape", 0);
            }

            void t_ScreenVolumeShape::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "class_", make_descriptor(ScreenVolumeShape::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "wrapfn_", make_descriptor(t_ScreenVolumeShape::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "boxfn_", make_descriptor(boxObject));
              env->getClass(ScreenVolumeShape::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "BOX", make_descriptor(t_ScreenVolumeShape::wrap_Object(*ScreenVolumeShape::BOX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "ELLIPSOID", make_descriptor(t_ScreenVolumeShape::wrap_Object(*ScreenVolumeShape::ELLIPSOID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "SPHERE", make_descriptor(t_ScreenVolumeShape::wrap_Object(*ScreenVolumeShape::SPHERE)));
            }

            static PyObject *t_ScreenVolumeShape_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ScreenVolumeShape::initializeClass, 1)))
                return NULL;
              return t_ScreenVolumeShape::wrap_Object(ScreenVolumeShape(((t_ScreenVolumeShape *) arg)->object.this$));
            }
            static PyObject *t_ScreenVolumeShape_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ScreenVolumeShape::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ScreenVolumeShape_of_(t_ScreenVolumeShape *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ScreenVolumeShape_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ScreenVolumeShape result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::valueOf(a0));
                return t_ScreenVolumeShape::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ScreenVolumeShape_values(PyTypeObject *type)
            {
              JArray< ScreenVolumeShape > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::values());
              return JArray<jobject>(result.this$).wrap(t_ScreenVolumeShape::wrap_jobject);
            }
            static PyObject *t_ScreenVolumeShape_get__parameters_(t_ScreenVolumeShape *self, void *data)
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
#include "org/hipparchus/analysis/function/Sinc.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sinc::class$ = NULL;
        jmethodID *Sinc::mids$ = NULL;
        bool Sinc::live$ = false;

        jclass Sinc::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sinc");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_50a2e0b139e80a58] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sinc::Sinc() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        Sinc::Sinc(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_50a2e0b139e80a58, a0)) {}

        jdouble Sinc::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sinc::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
        static PyObject *t_Sinc_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sinc_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sinc_init_(t_Sinc *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sinc_value(t_Sinc *self, PyObject *args);

        static PyMethodDef t_Sinc__methods_[] = {
          DECLARE_METHOD(t_Sinc, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinc, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinc, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sinc)[] = {
          { Py_tp_methods, t_Sinc__methods_ },
          { Py_tp_init, (void *) t_Sinc_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sinc)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sinc, t_Sinc, Sinc);

        void t_Sinc::install(PyObject *module)
        {
          installType(&PY_TYPE(Sinc), &PY_TYPE_DEF(Sinc), module, "Sinc", 0);
        }

        void t_Sinc::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinc), "class_", make_descriptor(Sinc::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinc), "wrapfn_", make_descriptor(t_Sinc::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinc), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sinc_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sinc::initializeClass, 1)))
            return NULL;
          return t_Sinc::wrap_Object(Sinc(((t_Sinc *) arg)->object.this$));
        }
        static PyObject *t_Sinc_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sinc::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sinc_init_(t_Sinc *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Sinc object((jobject) NULL);

              INT_CALL(object = Sinc());
              self->object = object;
              break;
            }
           case 1:
            {
              jboolean a0;
              Sinc object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = Sinc(a0));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Sinc_value(t_Sinc *self, PyObject *args)
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
#include "org/orekit/attitudes/FrameAlignedProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FrameAlignedProvider::class$ = NULL;
      jmethodID *FrameAlignedProvider::mids$ = NULL;
      bool FrameAlignedProvider::live$ = false;

      jclass FrameAlignedProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FrameAlignedProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_897939f7cf621023] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
          mids$[mid_init$_b1992bd1bb70f476] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_e1d486da686f0811] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitudeRotation_969253bc78d7a272] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_01363f58d35f60d4] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_of_ab8f9c0c395d2e45] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FrameAlignedProvider::FrameAlignedProvider(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_897939f7cf621023, a0.this$)) {}

      FrameAlignedProvider::FrameAlignedProvider(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b1992bd1bb70f476, a0.this$)) {}

      FrameAlignedProvider::FrameAlignedProvider(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1d486da686f0811, a0.this$, a1.this$)) {}

      ::org::orekit::attitudes::Attitude FrameAlignedProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude FrameAlignedProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FrameAlignedProvider::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_969253bc78d7a272], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation FrameAlignedProvider::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_01363f58d35f60d4], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider FrameAlignedProvider::of(const ::org::orekit::frames::Frame & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::attitudes::AttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_of_ab8f9c0c395d2e45], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_FrameAlignedProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FrameAlignedProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FrameAlignedProvider_init_(t_FrameAlignedProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FrameAlignedProvider_getAttitude(t_FrameAlignedProvider *self, PyObject *args);
      static PyObject *t_FrameAlignedProvider_getAttitudeRotation(t_FrameAlignedProvider *self, PyObject *args);
      static PyObject *t_FrameAlignedProvider_of(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_FrameAlignedProvider__methods_[] = {
        DECLARE_METHOD(t_FrameAlignedProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAlignedProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAlignedProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_FrameAlignedProvider, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_FrameAlignedProvider, of, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FrameAlignedProvider)[] = {
        { Py_tp_methods, t_FrameAlignedProvider__methods_ },
        { Py_tp_init, (void *) t_FrameAlignedProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FrameAlignedProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FrameAlignedProvider, t_FrameAlignedProvider, FrameAlignedProvider);

      void t_FrameAlignedProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FrameAlignedProvider), &PY_TYPE_DEF(FrameAlignedProvider), module, "FrameAlignedProvider", 0);
      }

      void t_FrameAlignedProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAlignedProvider), "class_", make_descriptor(FrameAlignedProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAlignedProvider), "wrapfn_", make_descriptor(t_FrameAlignedProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAlignedProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FrameAlignedProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FrameAlignedProvider::initializeClass, 1)))
          return NULL;
        return t_FrameAlignedProvider::wrap_Object(FrameAlignedProvider(((t_FrameAlignedProvider *) arg)->object.this$));
      }
      static PyObject *t_FrameAlignedProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FrameAlignedProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FrameAlignedProvider_init_(t_FrameAlignedProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            FrameAlignedProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
            {
              INT_CALL(object = FrameAlignedProvider(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FrameAlignedProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FrameAlignedProvider(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FrameAlignedProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FrameAlignedProvider(a0, a1));
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

      static PyObject *t_FrameAlignedProvider_getAttitude(t_FrameAlignedProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_FrameAlignedProvider_getAttitudeRotation(t_FrameAlignedProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_FrameAlignedProvider_of(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::attitudes::FrameAlignedProvider::of(a0));
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "of", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/CelestialBodyPointed.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *CelestialBodyPointed::class$ = NULL;
      jmethodID *CelestialBodyPointed::mids$ = NULL;
      bool CelestialBodyPointed::live$ = false;

      jclass CelestialBodyPointed::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/CelestialBodyPointed");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f49e1cf3d1587c72] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CelestialBodyPointed::CelestialBodyPointed(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f49e1cf3d1587c72, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::attitudes::FieldAttitude CelestialBodyPointed::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude CelestialBodyPointed::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_CelestialBodyPointed_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyPointed_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CelestialBodyPointed_init_(t_CelestialBodyPointed *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CelestialBodyPointed_getAttitude(t_CelestialBodyPointed *self, PyObject *args);

      static PyMethodDef t_CelestialBodyPointed__methods_[] = {
        DECLARE_METHOD(t_CelestialBodyPointed, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyPointed, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyPointed, getAttitude, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodyPointed)[] = {
        { Py_tp_methods, t_CelestialBodyPointed__methods_ },
        { Py_tp_init, (void *) t_CelestialBodyPointed_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodyPointed)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodyPointed, t_CelestialBodyPointed, CelestialBodyPointed);

      void t_CelestialBodyPointed::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodyPointed), &PY_TYPE_DEF(CelestialBodyPointed), module, "CelestialBodyPointed", 0);
      }

      void t_CelestialBodyPointed::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyPointed), "class_", make_descriptor(CelestialBodyPointed::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyPointed), "wrapfn_", make_descriptor(t_CelestialBodyPointed::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyPointed), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBodyPointed_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodyPointed::initializeClass, 1)))
          return NULL;
        return t_CelestialBodyPointed::wrap_Object(CelestialBodyPointed(((t_CelestialBodyPointed *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodyPointed_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodyPointed::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CelestialBodyPointed_init_(t_CelestialBodyPointed *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
        CelestialBodyPointed object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = CelestialBodyPointed(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CelestialBodyPointed_getAttitude(t_CelestialBodyPointed *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ExtendedPVCoordinatesProvider::class$ = NULL;
      jmethodID *ExtendedPVCoordinatesProvider::mids$ = NULL;
      bool ExtendedPVCoordinatesProvider::live$ = false;

      jclass ExtendedPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ExtendedPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getPVCoordinates_0e277b7d6a64b75a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_2ef0da8117530bf5] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toFieldPVCoordinatesProvider_7db5d85881b6baa5] = env->getMethodID(cls, "toFieldPVCoordinatesProvider", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates ExtendedPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_0e277b7d6a64b75a], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ExtendedPVCoordinatesProvider::getPosition(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_2ef0da8117530bf5], a0.this$, a1.this$));
      }

      ::org::orekit::utils::FieldPVCoordinatesProvider ExtendedPVCoordinatesProvider::toFieldPVCoordinatesProvider(const ::org::hipparchus::Field & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toFieldPVCoordinatesProvider_7db5d85881b6baa5], a0.this$));
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
      static PyObject *t_ExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExtendedPVCoordinatesProvider_getPVCoordinates(t_ExtendedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_ExtendedPVCoordinatesProvider_getPosition(t_ExtendedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_ExtendedPVCoordinatesProvider_toFieldPVCoordinatesProvider(t_ExtendedPVCoordinatesProvider *self, PyObject *arg);

      static PyMethodDef t_ExtendedPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, toFieldPVCoordinatesProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExtendedPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_ExtendedPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExtendedPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::PVCoordinatesProvider),
        NULL
      };

      DEFINE_TYPE(ExtendedPVCoordinatesProvider, t_ExtendedPVCoordinatesProvider, ExtendedPVCoordinatesProvider);

      void t_ExtendedPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ExtendedPVCoordinatesProvider), &PY_TYPE_DEF(ExtendedPVCoordinatesProvider), module, "ExtendedPVCoordinatesProvider", 0);
      }

      void t_ExtendedPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProvider), "class_", make_descriptor(ExtendedPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProvider), "wrapfn_", make_descriptor(t_ExtendedPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExtendedPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_ExtendedPVCoordinatesProvider::wrap_Object(ExtendedPVCoordinatesProvider(((t_ExtendedPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_ExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExtendedPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_getPVCoordinates(t_ExtendedPVCoordinatesProvider *self, PyObject *args)
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

        return callSuper(PY_TYPE(ExtendedPVCoordinatesProvider), (PyObject *) self, "getPVCoordinates", args, 2);
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_getPosition(t_ExtendedPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExtendedPVCoordinatesProvider), (PyObject *) self, "getPosition", args, 2);
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_toFieldPVCoordinatesProvider(t_ExtendedPVCoordinatesProvider *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::utils::FieldPVCoordinatesProvider result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toFieldPVCoordinatesProvider(a0));
          return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toFieldPVCoordinatesProvider", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Acosh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Acosh::class$ = NULL;
        jmethodID *Acosh::mids$ = NULL;
        bool Acosh::live$ = false;

        jclass Acosh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Acosh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Acosh::Acosh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Acosh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Acosh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
        static PyObject *t_Acosh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Acosh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Acosh_init_(t_Acosh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Acosh_value(t_Acosh *self, PyObject *args);

        static PyMethodDef t_Acosh__methods_[] = {
          DECLARE_METHOD(t_Acosh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acosh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acosh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Acosh)[] = {
          { Py_tp_methods, t_Acosh__methods_ },
          { Py_tp_init, (void *) t_Acosh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Acosh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Acosh, t_Acosh, Acosh);

        void t_Acosh::install(PyObject *module)
        {
          installType(&PY_TYPE(Acosh), &PY_TYPE_DEF(Acosh), module, "Acosh", 0);
        }

        void t_Acosh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acosh), "class_", make_descriptor(Acosh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acosh), "wrapfn_", make_descriptor(t_Acosh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acosh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Acosh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Acosh::initializeClass, 1)))
            return NULL;
          return t_Acosh::wrap_Object(Acosh(((t_Acosh *) arg)->object.this$));
        }
        static PyObject *t_Acosh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Acosh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Acosh_init_(t_Acosh *self, PyObject *args, PyObject *kwds)
        {
          Acosh object((jobject) NULL);

          INT_CALL(object = Acosh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Acosh_value(t_Acosh *self, PyObject *args)
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
#include "org/orekit/gnss/SatInSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SatInSystem::class$ = NULL;
      jmethodID *SatInSystem::mids$ = NULL;
      bool SatInSystem::live$ = false;

      jclass SatInSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SatInSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1cc5cc745f848cd5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;I)V");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getPRN_f2f64475e4580546] = env->getMethodID(cls, "getPRN", "()I");
          mids$[mid_getSystem_1b72fcc8f550bfc7] = env->getMethodID(cls, "getSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_getTwoDigitsRinexPRN_f2f64475e4580546] = env->getMethodID(cls, "getTwoDigitsRinexPRN", "()I");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SatInSystem::SatInSystem(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1cc5cc745f848cd5, a0.this$, a1)) {}

      jboolean SatInSystem::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      jint SatInSystem::getPRN() const
      {
        return env->callIntMethod(this$, mids$[mid_getPRN_f2f64475e4580546]);
      }

      ::org::orekit::gnss::SatelliteSystem SatInSystem::getSystem() const
      {
        return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSystem_1b72fcc8f550bfc7]));
      }

      jint SatInSystem::getTwoDigitsRinexPRN() const
      {
        return env->callIntMethod(this$, mids$[mid_getTwoDigitsRinexPRN_f2f64475e4580546]);
      }

      jint SatInSystem::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      static PyObject *t_SatInSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatInSystem_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SatInSystem_init_(t_SatInSystem *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SatInSystem_equals(t_SatInSystem *self, PyObject *args);
      static PyObject *t_SatInSystem_getPRN(t_SatInSystem *self);
      static PyObject *t_SatInSystem_getSystem(t_SatInSystem *self);
      static PyObject *t_SatInSystem_getTwoDigitsRinexPRN(t_SatInSystem *self);
      static PyObject *t_SatInSystem_hashCode(t_SatInSystem *self, PyObject *args);
      static PyObject *t_SatInSystem_get__pRN(t_SatInSystem *self, void *data);
      static PyObject *t_SatInSystem_get__system(t_SatInSystem *self, void *data);
      static PyObject *t_SatInSystem_get__twoDigitsRinexPRN(t_SatInSystem *self, void *data);
      static PyGetSetDef t_SatInSystem__fields_[] = {
        DECLARE_GET_FIELD(t_SatInSystem, pRN),
        DECLARE_GET_FIELD(t_SatInSystem, system),
        DECLARE_GET_FIELD(t_SatInSystem, twoDigitsRinexPRN),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SatInSystem__methods_[] = {
        DECLARE_METHOD(t_SatInSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatInSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatInSystem, equals, METH_VARARGS),
        DECLARE_METHOD(t_SatInSystem, getPRN, METH_NOARGS),
        DECLARE_METHOD(t_SatInSystem, getSystem, METH_NOARGS),
        DECLARE_METHOD(t_SatInSystem, getTwoDigitsRinexPRN, METH_NOARGS),
        DECLARE_METHOD(t_SatInSystem, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SatInSystem)[] = {
        { Py_tp_methods, t_SatInSystem__methods_ },
        { Py_tp_init, (void *) t_SatInSystem_init_ },
        { Py_tp_getset, t_SatInSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SatInSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SatInSystem, t_SatInSystem, SatInSystem);

      void t_SatInSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(SatInSystem), &PY_TYPE_DEF(SatInSystem), module, "SatInSystem", 0);
      }

      void t_SatInSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatInSystem), "class_", make_descriptor(SatInSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatInSystem), "wrapfn_", make_descriptor(t_SatInSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatInSystem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SatInSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SatInSystem::initializeClass, 1)))
          return NULL;
        return t_SatInSystem::wrap_Object(SatInSystem(((t_SatInSystem *) arg)->object.this$));
      }
      static PyObject *t_SatInSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SatInSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SatInSystem_init_(t_SatInSystem *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        SatInSystem object((jobject) NULL);

        if (!parseArgs(args, "KI", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
        {
          INT_CALL(object = SatInSystem(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SatInSystem_equals(t_SatInSystem *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SatInSystem), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_SatInSystem_getPRN(t_SatInSystem *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPRN());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SatInSystem_getSystem(t_SatInSystem *self)
      {
        ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
        OBJ_CALL(result = self->object.getSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
      }

      static PyObject *t_SatInSystem_getTwoDigitsRinexPRN(t_SatInSystem *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getTwoDigitsRinexPRN());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SatInSystem_hashCode(t_SatInSystem *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SatInSystem), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_SatInSystem_get__pRN(t_SatInSystem *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPRN());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SatInSystem_get__system(t_SatInSystem *self, void *data)
      {
        ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
      }

      static PyObject *t_SatInSystem_get__twoDigitsRinexPRN(t_SatInSystem *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getTwoDigitsRinexPRN());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/LUDecomposer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *LUDecomposer::class$ = NULL;
      jmethodID *LUDecomposer::mids$ = NULL;
      bool LUDecomposer::live$ = false;

      jclass LUDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/LUDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_decompose_4196bcb69ccaa8a4] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LUDecomposer::LUDecomposer(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

      ::org::hipparchus::linear::DecompositionSolver LUDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_4196bcb69ccaa8a4], a0.this$));
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
      static PyObject *t_LUDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LUDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LUDecomposer_init_(t_LUDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LUDecomposer_decompose(t_LUDecomposer *self, PyObject *arg);

      static PyMethodDef t_LUDecomposer__methods_[] = {
        DECLARE_METHOD(t_LUDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LUDecomposer)[] = {
        { Py_tp_methods, t_LUDecomposer__methods_ },
        { Py_tp_init, (void *) t_LUDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LUDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LUDecomposer, t_LUDecomposer, LUDecomposer);

      void t_LUDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(LUDecomposer), &PY_TYPE_DEF(LUDecomposer), module, "LUDecomposer", 0);
      }

      void t_LUDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposer), "class_", make_descriptor(LUDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposer), "wrapfn_", make_descriptor(t_LUDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LUDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LUDecomposer::initializeClass, 1)))
          return NULL;
        return t_LUDecomposer::wrap_Object(LUDecomposer(((t_LUDecomposer *) arg)->object.this$));
      }
      static PyObject *t_LUDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LUDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LUDecomposer_init_(t_LUDecomposer *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        LUDecomposer object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = LUDecomposer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LUDecomposer_decompose(t_LUDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldEventHandler::class$ = NULL;
          jmethodID *FieldEventHandler::mids$ = NULL;
          bool FieldEventHandler::live$ = false;

          jclass FieldEventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldEventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_eventOccurred_9bc9ae10f590e312] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_init_0b61dd15b1566b79] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/events/FieldEventDetector;)V");
              mids$[mid_resetState_6d7738c703495790] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::ode::events::Action FieldEventHandler::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_9bc9ae10f590e312], a0.this$, a1.this$, a2));
          }

          void FieldEventHandler::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::propagation::events::FieldEventDetector & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_init_0b61dd15b1566b79], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldEventHandler::resetState(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1) const
          {
            return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_6d7738c703495790], a0.this$, a1.this$));
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
          static PyObject *t_FieldEventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldEventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldEventHandler_of_(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_eventOccurred(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_init(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_resetState(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_get__parameters_(t_FieldEventHandler *self, void *data);
          static PyGetSetDef t_FieldEventHandler__fields_[] = {
            DECLARE_GET_FIELD(t_FieldEventHandler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldEventHandler__methods_[] = {
            DECLARE_METHOD(t_FieldEventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldEventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldEventHandler, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldEventHandler, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_FieldEventHandler, init, METH_VARARGS),
            DECLARE_METHOD(t_FieldEventHandler, resetState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldEventHandler)[] = {
            { Py_tp_methods, t_FieldEventHandler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldEventHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldEventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldEventHandler, t_FieldEventHandler, FieldEventHandler);
          PyObject *t_FieldEventHandler::wrap_Object(const FieldEventHandler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldEventHandler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldEventHandler *self = (t_FieldEventHandler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldEventHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldEventHandler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldEventHandler *self = (t_FieldEventHandler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldEventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldEventHandler), &PY_TYPE_DEF(FieldEventHandler), module, "FieldEventHandler", 0);
          }

          void t_FieldEventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventHandler), "class_", make_descriptor(FieldEventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventHandler), "wrapfn_", make_descriptor(t_FieldEventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventHandler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldEventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldEventHandler::initializeClass, 1)))
              return NULL;
            return t_FieldEventHandler::wrap_Object(FieldEventHandler(((t_FieldEventHandler *) arg)->object.this$));
          }
          static PyObject *t_FieldEventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldEventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldEventHandler_of_(t_FieldEventHandler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldEventHandler_eventOccurred(t_FieldEventHandler *self, PyObject *args)
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

          static PyObject *t_FieldEventHandler_init(t_FieldEventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::events::FieldEventDetector a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "KKK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
            {
              OBJ_CALL(self->object.init(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_FieldEventHandler_resetState(t_FieldEventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.resetState(a0, a1));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", args);
            return NULL;
          }
          static PyObject *t_FieldEventHandler_get__parameters_(t_FieldEventHandler *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *AngleType::class$ = NULL;
            jmethodID *AngleType::mids$ = NULL;
            bool AngleType::live$ = false;
            AngleType *AngleType::AZEL = NULL;
            AngleType *AngleType::RADEC = NULL;
            AngleType *AngleType::XEYN = NULL;
            AngleType *AngleType::XSYE = NULL;

            jclass AngleType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/AngleType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_7cc44c14c2f4e2d7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/AngleType;");
                mids$[mid_values_b728ae17e66506c5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/AngleType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                AZEL = new AngleType(env->getStaticObjectField(cls, "AZEL", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                RADEC = new AngleType(env->getStaticObjectField(cls, "RADEC", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                XEYN = new AngleType(env->getStaticObjectField(cls, "XEYN", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                XSYE = new AngleType(env->getStaticObjectField(cls, "XSYE", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AngleType AngleType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AngleType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7cc44c14c2f4e2d7], a0.this$));
            }

            JArray< AngleType > AngleType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AngleType >(env->callStaticObjectMethod(cls, mids$[mid_values_b728ae17e66506c5]));
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
          namespace tdm {
            static PyObject *t_AngleType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AngleType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AngleType_of_(t_AngleType *self, PyObject *args);
            static PyObject *t_AngleType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AngleType_values(PyTypeObject *type);
            static PyObject *t_AngleType_get__parameters_(t_AngleType *self, void *data);
            static PyGetSetDef t_AngleType__fields_[] = {
              DECLARE_GET_FIELD(t_AngleType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AngleType__methods_[] = {
              DECLARE_METHOD(t_AngleType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AngleType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AngleType, of_, METH_VARARGS),
              DECLARE_METHOD(t_AngleType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AngleType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AngleType)[] = {
              { Py_tp_methods, t_AngleType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AngleType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AngleType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AngleType, t_AngleType, AngleType);
            PyObject *t_AngleType::wrap_Object(const AngleType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AngleType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AngleType *self = (t_AngleType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AngleType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AngleType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AngleType *self = (t_AngleType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AngleType::install(PyObject *module)
            {
              installType(&PY_TYPE(AngleType), &PY_TYPE_DEF(AngleType), module, "AngleType", 0);
            }

            void t_AngleType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "class_", make_descriptor(AngleType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "wrapfn_", make_descriptor(t_AngleType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "boxfn_", make_descriptor(boxObject));
              env->getClass(AngleType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "AZEL", make_descriptor(t_AngleType::wrap_Object(*AngleType::AZEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "RADEC", make_descriptor(t_AngleType::wrap_Object(*AngleType::RADEC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "XEYN", make_descriptor(t_AngleType::wrap_Object(*AngleType::XEYN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "XSYE", make_descriptor(t_AngleType::wrap_Object(*AngleType::XSYE)));
            }

            static PyObject *t_AngleType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AngleType::initializeClass, 1)))
                return NULL;
              return t_AngleType::wrap_Object(AngleType(((t_AngleType *) arg)->object.this$));
            }
            static PyObject *t_AngleType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AngleType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AngleType_of_(t_AngleType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AngleType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AngleType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::AngleType::valueOf(a0));
                return t_AngleType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AngleType_values(PyTypeObject *type)
            {
              JArray< AngleType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::AngleType::values());
              return JArray<jobject>(result.this$).wrap(t_AngleType::wrap_jobject);
            }
            static PyObject *t_AngleType_get__parameters_(t_AngleType *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *LexicalAnalyzer::class$ = NULL;
            jmethodID *LexicalAnalyzer::mids$ = NULL;
            bool LexicalAnalyzer::live$ = false;

            jclass LexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_b8fbb626a8a68048] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::Object LexicalAnalyzer::accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_accept_b8fbb626a8a68048], a0.this$));
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
        namespace utils {
          namespace lexical {
            static PyObject *t_LexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzer_accept(t_LexicalAnalyzer *self, PyObject *arg);

            static PyMethodDef t_LexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_LexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LexicalAnalyzer)[] = {
              { Py_tp_methods, t_LexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LexicalAnalyzer, t_LexicalAnalyzer, LexicalAnalyzer);

            void t_LexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(LexicalAnalyzer), &PY_TYPE_DEF(LexicalAnalyzer), module, "LexicalAnalyzer", 0);
            }

            void t_LexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzer), "class_", make_descriptor(LexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzer), "wrapfn_", make_descriptor(t_LexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_LexicalAnalyzer::wrap_Object(LexicalAnalyzer(((t_LexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_LexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LexicalAnalyzer_accept(t_LexicalAnalyzer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::MessageParser a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::lexical::MessageParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::parameters_))
              {
                OBJ_CALL(result = self->object.accept(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/orekit/files/ccsds/ndm/PythonAbstractBuilder.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *PythonAbstractBuilder::class$ = NULL;
          jmethodID *PythonAbstractBuilder::mids$ = NULL;
          bool PythonAbstractBuilder::live$ = false;

          jclass PythonAbstractBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/PythonAbstractBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_67016aa168f68e87] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)V");
              mids$[mid_create_a463538f9bac0ff7] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractBuilder::PythonAbstractBuilder(const ::org::orekit::utils::IERSConventions & a0, jdouble a1, jdouble a2, const ::org::orekit::data::DataContext & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a5) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_67016aa168f68e87, a0.this$, a1, a2, a3.this$, a4.this$, a5.this$)) {}

          void PythonAbstractBuilder::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonAbstractBuilder::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonAbstractBuilder::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonAbstractBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractBuilder_of_(t_PythonAbstractBuilder *self, PyObject *args);
          static int t_PythonAbstractBuilder_init_(t_PythonAbstractBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractBuilder_finalize(t_PythonAbstractBuilder *self);
          static PyObject *t_PythonAbstractBuilder_pythonExtension(t_PythonAbstractBuilder *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractBuilder_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jdouble a2, jobject a3, jobject a4, jobject a5);
          static void JNICALL t_PythonAbstractBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractBuilder_get__self(t_PythonAbstractBuilder *self, void *data);
          static PyObject *t_PythonAbstractBuilder_get__parameters_(t_PythonAbstractBuilder *self, void *data);
          static PyGetSetDef t_PythonAbstractBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractBuilder, self),
            DECLARE_GET_FIELD(t_PythonAbstractBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractBuilder__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractBuilder, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractBuilder, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractBuilder)[] = {
            { Py_tp_methods, t_PythonAbstractBuilder__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractBuilder_init_ },
            { Py_tp_getset, t_PythonAbstractBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::AbstractBuilder),
            NULL
          };

          DEFINE_TYPE(PythonAbstractBuilder, t_PythonAbstractBuilder, PythonAbstractBuilder);
          PyObject *t_PythonAbstractBuilder::wrap_Object(const PythonAbstractBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractBuilder *self = (t_PythonAbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractBuilder *self = (t_PythonAbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractBuilder), &PY_TYPE_DEF(PythonAbstractBuilder), module, "PythonAbstractBuilder", 1);
          }

          void t_PythonAbstractBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBuilder), "class_", make_descriptor(PythonAbstractBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBuilder), "wrapfn_", make_descriptor(t_PythonAbstractBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBuilder), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractBuilder::initializeClass);
            JNINativeMethod methods[] = {
              { "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;", (void *) t_PythonAbstractBuilder_create0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractBuilder_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractBuilder::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractBuilder::wrap_Object(PythonAbstractBuilder(((t_PythonAbstractBuilder *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractBuilder_of_(t_PythonAbstractBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractBuilder_init_(t_PythonAbstractBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            ::org::orekit::data::DataContext a3((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a5((jobject) NULL);
            PythonAbstractBuilder object((jobject) NULL);

            if (!parseArgs(args, "KDDkkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = PythonAbstractBuilder(a0, a1, a2, a3, a4, a5));
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

          static PyObject *t_PythonAbstractBuilder_finalize(t_PythonAbstractBuilder *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractBuilder_pythonExtension(t_PythonAbstractBuilder *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractBuilder_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jdouble a2, jobject a3, jobject a4, jobject a5)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBuilder::mids$[PythonAbstractBuilder::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::files::ccsds::ndm::AbstractBuilder value((jobject) NULL);
            PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
            PyObject *o3 = ::org::orekit::data::t_DataContext::wrap_Object(::org::orekit::data::DataContext(a3));
            PyObject *o4 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a4));
            PyObject *o5 = ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnitsConverter::wrap_Object(::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter(a5));
            PyObject *result = PyObject_CallMethod(obj, "create", "OddOOO", o0, (double) a1, (double) a2, o3, o4, o5);
            Py_DECREF(o0);
            Py_DECREF(o3);
            Py_DECREF(o4);
            Py_DECREF(o5);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::AbstractBuilder::initializeClass, &value))
            {
              throwTypeError("create", result);
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

          static void JNICALL t_PythonAbstractBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBuilder::mids$[PythonAbstractBuilder::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractBuilder::mids$[PythonAbstractBuilder::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractBuilder_get__self(t_PythonAbstractBuilder *self, void *data)
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
          static PyObject *t_PythonAbstractBuilder_get__parameters_(t_PythonAbstractBuilder *self, void *data)
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
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DiagonalMatrix::class$ = NULL;
      jmethodID *DiagonalMatrix::mids$ = NULL;
      bool DiagonalMatrix::live$ = false;

      jclass DiagonalMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DiagonalMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_d26930f65a8ba6c9] = env->getMethodID(cls, "<init>", "([DZ)V");
          mids$[mid_add_dd1704a37d899367] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_addToEntry_78e41e7b5124a628] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_7116bbecdd8ceb21] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createMatrix_4225756160ad1bc1] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnDimension_f2f64475e4580546] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getData_43de1192439efa92] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getDataRef_7cdc325af0834901] = env->getMethodID(cls, "getDataRef", "()[D");
          mids$[mid_getEntry_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getRowDimension_f2f64475e4580546] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_inverse_6938007bdd8d6602] = env->getMethodID(cls, "inverse", "()Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_inverse_736796c997a3456c] = env->getMethodID(cls, "inverse", "(D)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_isSingular_e18fb1101b70dcca] = env->getMethodID(cls, "isSingular", "(D)Z");
          mids$[mid_multiply_dd1704a37d899367] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_multiply_e00cd33aedcc5bd0] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_78e41e7b5124a628] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_dd1704a37d899367] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_multiplyTransposed_e00cd33aedcc5bd0] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_operate_4b742fe429c22ba8] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_preMultiply_4b742fe429c22ba8] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_preMultiply_a3e626dfa1abd779] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_setEntry_78e41e7b5124a628] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_subtract_dd1704a37d899367] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_transposeMultiply_dd1704a37d899367] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_transposeMultiply_e00cd33aedcc5bd0] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DiagonalMatrix::DiagonalMatrix(const JArray< jdouble > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

      DiagonalMatrix::DiagonalMatrix(jint a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      DiagonalMatrix::DiagonalMatrix(const JArray< jdouble > & a0, jboolean a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_d26930f65a8ba6c9, a0.this$, a1)) {}

      DiagonalMatrix DiagonalMatrix::add(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_add_dd1704a37d899367], a0.this$));
      }

      void DiagonalMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_78e41e7b5124a628], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::copy() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_4225756160ad1bc1], a0, a1));
      }

      jint DiagonalMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_f2f64475e4580546]);
      }

      JArray< JArray< jdouble > > DiagonalMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_43de1192439efa92]));
      }

      JArray< jdouble > DiagonalMatrix::getDataRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDataRef_7cdc325af0834901]));
      }

      jdouble DiagonalMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_a84e4ee1da3f1ab8], a0, a1);
      }

      jint DiagonalMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_f2f64475e4580546]);
      }

      DiagonalMatrix DiagonalMatrix::inverse() const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_inverse_6938007bdd8d6602]));
      }

      DiagonalMatrix DiagonalMatrix::inverse(jdouble a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_inverse_736796c997a3456c], a0));
      }

      jboolean DiagonalMatrix::isSingular(jdouble a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSingular_e18fb1101b70dcca], a0);
      }

      DiagonalMatrix DiagonalMatrix::multiply(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_multiply_dd1704a37d899367], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_e00cd33aedcc5bd0], a0.this$));
      }

      void DiagonalMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_78e41e7b5124a628], a0, a1, a2);
      }

      DiagonalMatrix DiagonalMatrix::multiplyTransposed(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_dd1704a37d899367], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_e00cd33aedcc5bd0], a0.this$));
      }

      JArray< jdouble > DiagonalMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_4b742fe429c22ba8], a0.this$));
      }

      JArray< jdouble > DiagonalMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_4b742fe429c22ba8], a0.this$));
      }

      ::org::hipparchus::linear::RealVector DiagonalMatrix::preMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_preMultiply_a3e626dfa1abd779], a0.this$));
      }

      void DiagonalMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_78e41e7b5124a628], a0, a1, a2);
      }

      DiagonalMatrix DiagonalMatrix::subtract(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_subtract_dd1704a37d899367], a0.this$));
      }

      DiagonalMatrix DiagonalMatrix::transposeMultiply(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_dd1704a37d899367], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_e00cd33aedcc5bd0], a0.this$));
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
      static PyObject *t_DiagonalMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DiagonalMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DiagonalMatrix_init_(t_DiagonalMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DiagonalMatrix_add(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_addToEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_copy(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_createMatrix(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getColumnDimension(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getData(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getDataRef(t_DiagonalMatrix *self);
      static PyObject *t_DiagonalMatrix_getEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getRowDimension(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_inverse(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_isSingular(t_DiagonalMatrix *self, PyObject *arg);
      static PyObject *t_DiagonalMatrix_multiply(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_multiplyEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_multiplyTransposed(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_operate(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_preMultiply(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_setEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_subtract(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_transposeMultiply(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_get__columnDimension(t_DiagonalMatrix *self, void *data);
      static PyObject *t_DiagonalMatrix_get__data(t_DiagonalMatrix *self, void *data);
      static PyObject *t_DiagonalMatrix_get__dataRef(t_DiagonalMatrix *self, void *data);
      static PyObject *t_DiagonalMatrix_get__rowDimension(t_DiagonalMatrix *self, void *data);
      static PyGetSetDef t_DiagonalMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_DiagonalMatrix, columnDimension),
        DECLARE_GET_FIELD(t_DiagonalMatrix, data),
        DECLARE_GET_FIELD(t_DiagonalMatrix, dataRef),
        DECLARE_GET_FIELD(t_DiagonalMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DiagonalMatrix__methods_[] = {
        DECLARE_METHOD(t_DiagonalMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DiagonalMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DiagonalMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, inverse, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, isSingular, METH_O),
        DECLARE_METHOD(t_DiagonalMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, transposeMultiply, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DiagonalMatrix)[] = {
        { Py_tp_methods, t_DiagonalMatrix__methods_ },
        { Py_tp_init, (void *) t_DiagonalMatrix_init_ },
        { Py_tp_getset, t_DiagonalMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DiagonalMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(DiagonalMatrix, t_DiagonalMatrix, DiagonalMatrix);

      void t_DiagonalMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(DiagonalMatrix), &PY_TYPE_DEF(DiagonalMatrix), module, "DiagonalMatrix", 0);
      }

      void t_DiagonalMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DiagonalMatrix), "class_", make_descriptor(DiagonalMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DiagonalMatrix), "wrapfn_", make_descriptor(t_DiagonalMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DiagonalMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DiagonalMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DiagonalMatrix::initializeClass, 1)))
          return NULL;
        return t_DiagonalMatrix::wrap_Object(DiagonalMatrix(((t_DiagonalMatrix *) arg)->object.this$));
      }
      static PyObject *t_DiagonalMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DiagonalMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DiagonalMatrix_init_(t_DiagonalMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            DiagonalMatrix object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = DiagonalMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            DiagonalMatrix object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = DiagonalMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jboolean a1;
            DiagonalMatrix object((jobject) NULL);

            if (!parseArgs(args, "[DZ", &a0, &a1))
            {
              INT_CALL(object = DiagonalMatrix(a0, a1));
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

      static PyObject *t_DiagonalMatrix_add(t_DiagonalMatrix *self, PyObject *args)
      {
        DiagonalMatrix a0((jobject) NULL);
        DiagonalMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_DiagonalMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_DiagonalMatrix_addToEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_copy(t_DiagonalMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_DiagonalMatrix_createMatrix(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getColumnDimension(t_DiagonalMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getData(t_DiagonalMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getDataRef(t_DiagonalMatrix *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return result.wrap();
      }

      static PyObject *t_DiagonalMatrix_getEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getRowDimension(t_DiagonalMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_DiagonalMatrix_inverse(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            DiagonalMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.inverse());
            return t_DiagonalMatrix::wrap_Object(result);
          }
          break;
         case 1:
          {
            jdouble a0;
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.inverse(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "inverse", args);
        return NULL;
      }

      static PyObject *t_DiagonalMatrix_isSingular(t_DiagonalMatrix *self, PyObject *arg)
      {
        jdouble a0;
        jboolean result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.isSingular(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSingular", arg);
        return NULL;
      }

      static PyObject *t_DiagonalMatrix_multiply(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DiagonalMatrix a0((jobject) NULL);
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_DiagonalMatrix_multiplyEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_multiplyTransposed(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DiagonalMatrix a0((jobject) NULL);
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_DiagonalMatrix_operate(t_DiagonalMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_DiagonalMatrix_preMultiply(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_DiagonalMatrix_setEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_subtract(t_DiagonalMatrix *self, PyObject *args)
      {
        DiagonalMatrix a0((jobject) NULL);
        DiagonalMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_DiagonalMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_DiagonalMatrix_transposeMultiply(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DiagonalMatrix a0((jobject) NULL);
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_DiagonalMatrix_get__columnDimension(t_DiagonalMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DiagonalMatrix_get__data(t_DiagonalMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_DiagonalMatrix_get__dataRef(t_DiagonalMatrix *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return value.wrap();
      }

      static PyObject *t_DiagonalMatrix_get__rowDimension(t_DiagonalMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/HeaderProcessingState.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *HeaderProcessingState::class$ = NULL;
          jmethodID *HeaderProcessingState::mids$ = NULL;
          bool HeaderProcessingState::live$ = false;

          jclass HeaderProcessingState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/HeaderProcessingState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_89ca4960a54b0876] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)V");
              mids$[mid_processToken_aa256c47fb7b26f1] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HeaderProcessingState::HeaderProcessingState(const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89ca4960a54b0876, a0.this$)) {}

          jboolean HeaderProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_processToken_aa256c47fb7b26f1], a0.this$);
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
        namespace section {
          static PyObject *t_HeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HeaderProcessingState_init_(t_HeaderProcessingState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_HeaderProcessingState_processToken(t_HeaderProcessingState *self, PyObject *arg);

          static PyMethodDef t_HeaderProcessingState__methods_[] = {
            DECLARE_METHOD(t_HeaderProcessingState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderProcessingState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderProcessingState, processToken, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HeaderProcessingState)[] = {
            { Py_tp_methods, t_HeaderProcessingState__methods_ },
            { Py_tp_init, (void *) t_HeaderProcessingState_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HeaderProcessingState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(HeaderProcessingState, t_HeaderProcessingState, HeaderProcessingState);

          void t_HeaderProcessingState::install(PyObject *module)
          {
            installType(&PY_TYPE(HeaderProcessingState), &PY_TYPE_DEF(HeaderProcessingState), module, "HeaderProcessingState", 0);
          }

          void t_HeaderProcessingState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderProcessingState), "class_", make_descriptor(HeaderProcessingState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderProcessingState), "wrapfn_", make_descriptor(t_HeaderProcessingState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderProcessingState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HeaderProcessingState::initializeClass, 1)))
              return NULL;
            return t_HeaderProcessingState::wrap_Object(HeaderProcessingState(((t_HeaderProcessingState *) arg)->object.this$));
          }
          static PyObject *t_HeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HeaderProcessingState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HeaderProcessingState_init_(t_HeaderProcessingState *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a0((jobject) NULL);
            PyTypeObject **p0;
            HeaderProcessingState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              INT_CALL(object = HeaderProcessingState(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_HeaderProcessingState_processToken(t_HeaderProcessingState *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.processToken(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "processToken", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Atan.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Atan::class$ = NULL;
        jmethodID *Atan::mids$ = NULL;
        bool Atan::live$ = false;

        jclass Atan::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Atan");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Atan::Atan() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Atan::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Atan::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
        static PyObject *t_Atan_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Atan_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Atan_init_(t_Atan *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Atan_value(t_Atan *self, PyObject *args);

        static PyMethodDef t_Atan__methods_[] = {
          DECLARE_METHOD(t_Atan, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Atan)[] = {
          { Py_tp_methods, t_Atan__methods_ },
          { Py_tp_init, (void *) t_Atan_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Atan)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Atan, t_Atan, Atan);

        void t_Atan::install(PyObject *module)
        {
          installType(&PY_TYPE(Atan), &PY_TYPE_DEF(Atan), module, "Atan", 0);
        }

        void t_Atan::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan), "class_", make_descriptor(Atan::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan), "wrapfn_", make_descriptor(t_Atan::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Atan_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Atan::initializeClass, 1)))
            return NULL;
          return t_Atan::wrap_Object(Atan(((t_Atan *) arg)->object.this$));
        }
        static PyObject *t_Atan_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Atan::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Atan_init_(t_Atan *self, PyObject *args, PyObject *kwds)
        {
          Atan object((jobject) NULL);

          INT_CALL(object = Atan());
          self->object = object;

          return 0;
        }

        static PyObject *t_Atan_value(t_Atan *self, PyObject *args)
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
#include "org/orekit/propagation/integration/PythonAdditionalDerivativesProvider.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonAdditionalDerivativesProvider::class$ = NULL;
        jmethodID *PythonAdditionalDerivativesProvider::mids$ = NULL;
        bool PythonAdditionalDerivativesProvider::live$ = false;

        jclass PythonAdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonAdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_combinedDerivatives_32bde69742c0babb] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_yields_97634138963fb58a] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAdditionalDerivativesProvider::PythonAdditionalDerivativesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonAdditionalDerivativesProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAdditionalDerivativesProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAdditionalDerivativesProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAdditionalDerivativesProvider_init_(t_PythonAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAdditionalDerivativesProvider_finalize(t_PythonAdditionalDerivativesProvider *self);
        static PyObject *t_PythonAdditionalDerivativesProvider_pythonExtension(t_PythonAdditionalDerivativesProvider *self, PyObject *args);
        static jobject JNICALL t_PythonAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jint JNICALL t_PythonAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonAdditionalDerivativesProvider_get__self(t_PythonAdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_PythonAdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAdditionalDerivativesProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_PythonAdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) t_PythonAdditionalDerivativesProvider_init_ },
          { Py_tp_getset, t_PythonAdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAdditionalDerivativesProvider, t_PythonAdditionalDerivativesProvider, PythonAdditionalDerivativesProvider);

        void t_PythonAdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAdditionalDerivativesProvider), &PY_TYPE_DEF(PythonAdditionalDerivativesProvider), module, "PythonAdditionalDerivativesProvider", 1);
        }

        void t_PythonAdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalDerivativesProvider), "class_", make_descriptor(PythonAdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_PythonAdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAdditionalDerivativesProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;", (void *) t_PythonAdditionalDerivativesProvider_combinedDerivatives0 },
            { "getDimension", "()I", (void *) t_PythonAdditionalDerivativesProvider_getDimension1 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonAdditionalDerivativesProvider_getName2 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonAdditionalDerivativesProvider_init3 },
            { "pythonDecRef", "()V", (void *) t_PythonAdditionalDerivativesProvider_pythonDecRef4 },
            { "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z", (void *) t_PythonAdditionalDerivativesProvider_yields5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_PythonAdditionalDerivativesProvider::wrap_Object(PythonAdditionalDerivativesProvider(((t_PythonAdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAdditionalDerivativesProvider_init_(t_PythonAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonAdditionalDerivativesProvider object((jobject) NULL);

          INT_CALL(object = PythonAdditionalDerivativesProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_finalize(t_PythonAdditionalDerivativesProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_pythonExtension(t_PythonAdditionalDerivativesProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::CombinedDerivatives value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "combinedDerivatives", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::CombinedDerivatives::initializeClass, &value))
          {
            throwTypeError("combinedDerivatives", result);
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

        static jint JNICALL t_PythonAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getDimension", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getDimension", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getName", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getName", result);
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

        static void JNICALL t_PythonAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jboolean JNICALL t_PythonAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "yields", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("yields", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_get__self(t_PythonAdditionalDerivativesProvider *self, void *data)
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
#include "org/orekit/propagation/analytical/tle/PythonTLEPropagator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *PythonTLEPropagator::class$ = NULL;
          jmethodID *PythonTLEPropagator::mids$ = NULL;
          bool PythonTLEPropagator::live$ = false;

          jclass PythonTLEPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/PythonTLEPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3c209839d9f7d817] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)V");
              mids$[mid_init$_8edece06f32cbd33] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_sxpInitialize_7ae3461a92a43152] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_77e0f9a1f260e2e5] = env->getMethodID(cls, "sxpPropagate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonTLEPropagator::PythonTLEPropagator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_3c209839d9f7d817, a0.this$, a1.this$, a2)) {}

          PythonTLEPropagator::PythonTLEPropagator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_8edece06f32cbd33, a0.this$, a1.this$, a2, a3.this$)) {}

          void PythonTLEPropagator::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonTLEPropagator::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonTLEPropagator::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace analytical {
        namespace tle {
          static PyObject *t_PythonTLEPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonTLEPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonTLEPropagator_init_(t_PythonTLEPropagator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonTLEPropagator_finalize(t_PythonTLEPropagator *self);
          static PyObject *t_PythonTLEPropagator_pythonExtension(t_PythonTLEPropagator *self, PyObject *args);
          static void JNICALL t_PythonTLEPropagator_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTLEPropagator_sxpInitialize1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTLEPropagator_sxpPropagate2(JNIEnv *jenv, jobject jobj, jdouble a0);
          static PyObject *t_PythonTLEPropagator_get__self(t_PythonTLEPropagator *self, void *data);
          static PyGetSetDef t_PythonTLEPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_PythonTLEPropagator, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonTLEPropagator__methods_[] = {
            DECLARE_METHOD(t_PythonTLEPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTLEPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTLEPropagator, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonTLEPropagator, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonTLEPropagator)[] = {
            { Py_tp_methods, t_PythonTLEPropagator__methods_ },
            { Py_tp_init, (void *) t_PythonTLEPropagator_init_ },
            { Py_tp_getset, t_PythonTLEPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonTLEPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::TLEPropagator),
            NULL
          };

          DEFINE_TYPE(PythonTLEPropagator, t_PythonTLEPropagator, PythonTLEPropagator);

          void t_PythonTLEPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonTLEPropagator), &PY_TYPE_DEF(PythonTLEPropagator), module, "PythonTLEPropagator", 1);
          }

          void t_PythonTLEPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTLEPropagator), "class_", make_descriptor(PythonTLEPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTLEPropagator), "wrapfn_", make_descriptor(t_PythonTLEPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTLEPropagator), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonTLEPropagator::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonTLEPropagator_pythonDecRef0 },
              { "sxpInitialize", "()V", (void *) t_PythonTLEPropagator_sxpInitialize1 },
              { "sxpPropagate", "(D)V", (void *) t_PythonTLEPropagator_sxpPropagate2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonTLEPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonTLEPropagator::initializeClass, 1)))
              return NULL;
            return t_PythonTLEPropagator::wrap_Object(PythonTLEPropagator(((t_PythonTLEPropagator *) arg)->object.this$));
          }
          static PyObject *t_PythonTLEPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonTLEPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonTLEPropagator_init_(t_PythonTLEPropagator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                PythonTLEPropagator object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = PythonTLEPropagator(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                PythonTLEPropagator object((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = PythonTLEPropagator(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonTLEPropagator_finalize(t_PythonTLEPropagator *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonTLEPropagator_pythonExtension(t_PythonTLEPropagator *self, PyObject *args)
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

          static void JNICALL t_PythonTLEPropagator_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonTLEPropagator_sxpInitialize1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "sxpInitialize", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonTLEPropagator_sxpPropagate2(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "sxpPropagate", "d", (double) a0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonTLEPropagator_get__self(t_PythonTLEPropagator *self, void *data)
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
#include "org/hipparchus/complex/ComplexFormat.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/complex/ComplexFormat.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Double.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexFormat::class$ = NULL;
      jmethodID *ComplexFormat::mids$ = NULL;
      bool ComplexFormat::live$ = false;

      jclass ComplexFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_695a782f9c7823f6] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_4c0f990589d379b7] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_init$_2dd0fdcd0278a9e6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/text/NumberFormat;)V");
          mids$[mid_init$_52c6037a572c1ef2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_7cff086552af0272] = env->getMethodID(cls, "format", "(Ljava/lang/Double;)Ljava/lang/String;");
          mids$[mid_format_02e9e6c186e20234] = env->getMethodID(cls, "format", "(Lorg/hipparchus/complex/Complex;)Ljava/lang/String;");
          mids$[mid_format_f20e7b4edfd97d6d] = env->getMethodID(cls, "format", "(Lorg/hipparchus/complex/Complex;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_e231795b026d93db] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_81e8fdf65840780c] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getComplexFormat_e2eb2ce91686932b] = env->getStaticMethodID(cls, "getComplexFormat", "()Lorg/hipparchus/complex/ComplexFormat;");
          mids$[mid_getComplexFormat_e05876d8c95db5d6] = env->getStaticMethodID(cls, "getComplexFormat", "(Ljava/util/Locale;)Lorg/hipparchus/complex/ComplexFormat;");
          mids$[mid_getComplexFormat_38bf57659ba484dd] = env->getStaticMethodID(cls, "getComplexFormat", "(Ljava/lang/String;Ljava/util/Locale;)Lorg/hipparchus/complex/ComplexFormat;");
          mids$[mid_getImaginaryCharacter_0090f7797e403f43] = env->getMethodID(cls, "getImaginaryCharacter", "()Ljava/lang/String;");
          mids$[mid_getImaginaryFormat_d34e2e8dd35583a0] = env->getMethodID(cls, "getImaginaryFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getRealFormat_d34e2e8dd35583a0] = env->getMethodID(cls, "getRealFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parse_52becf08b9975dd8] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_parse_b9e4d04c32002f79] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexFormat::ComplexFormat() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ComplexFormat::ComplexFormat(const ::java::text::NumberFormat & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_695a782f9c7823f6, a0.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c0f990589d379b7, a0.this$, a1.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::lang::String & a0, const ::java::text::NumberFormat & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2dd0fdcd0278a9e6, a0.this$, a1.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::lang::String & a0, const ::java::text::NumberFormat & a1, const ::java::text::NumberFormat & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_52c6037a572c1ef2, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::String ComplexFormat::format(const ::java::lang::Double & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_7cff086552af0272], a0.this$));
      }

      ::java::lang::String ComplexFormat::format(const ::org::hipparchus::complex::Complex & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_02e9e6c186e20234], a0.this$));
      }

      ::java::lang::StringBuffer ComplexFormat::format(const ::org::hipparchus::complex::Complex & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_f20e7b4edfd97d6d], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer ComplexFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_e231795b026d93db], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > ComplexFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_81e8fdf65840780c]));
      }

      ComplexFormat ComplexFormat::getComplexFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexFormat(env->callStaticObjectMethod(cls, mids$[mid_getComplexFormat_e2eb2ce91686932b]));
      }

      ComplexFormat ComplexFormat::getComplexFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexFormat(env->callStaticObjectMethod(cls, mids$[mid_getComplexFormat_e05876d8c95db5d6], a0.this$));
      }

      ComplexFormat ComplexFormat::getComplexFormat(const ::java::lang::String & a0, const ::java::util::Locale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexFormat(env->callStaticObjectMethod(cls, mids$[mid_getComplexFormat_38bf57659ba484dd], a0.this$, a1.this$));
      }

      ::java::lang::String ComplexFormat::getImaginaryCharacter() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImaginaryCharacter_0090f7797e403f43]));
      }

      ::java::text::NumberFormat ComplexFormat::getImaginaryFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getImaginaryFormat_d34e2e8dd35583a0]));
      }

      ::java::text::NumberFormat ComplexFormat::getRealFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getRealFormat_d34e2e8dd35583a0]));
      }

      ::org::hipparchus::complex::Complex ComplexFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_parse_52becf08b9975dd8], a0.this$));
      }

      ::org::hipparchus::complex::Complex ComplexFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_parse_b9e4d04c32002f79], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_ComplexFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexFormat_init_(t_ComplexFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexFormat_format(t_ComplexFormat *self, PyObject *args);
      static PyObject *t_ComplexFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_ComplexFormat_getComplexFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_ComplexFormat_getImaginaryCharacter(t_ComplexFormat *self);
      static PyObject *t_ComplexFormat_getImaginaryFormat(t_ComplexFormat *self);
      static PyObject *t_ComplexFormat_getRealFormat(t_ComplexFormat *self);
      static PyObject *t_ComplexFormat_parse(t_ComplexFormat *self, PyObject *args);
      static PyObject *t_ComplexFormat_get__availableLocales(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__complexFormat(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__imaginaryCharacter(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__imaginaryFormat(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__realFormat(t_ComplexFormat *self, void *data);
      static PyGetSetDef t_ComplexFormat__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexFormat, availableLocales),
        DECLARE_GET_FIELD(t_ComplexFormat, complexFormat),
        DECLARE_GET_FIELD(t_ComplexFormat, imaginaryCharacter),
        DECLARE_GET_FIELD(t_ComplexFormat, imaginaryFormat),
        DECLARE_GET_FIELD(t_ComplexFormat, realFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexFormat__methods_[] = {
        DECLARE_METHOD(t_ComplexFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_ComplexFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, getComplexFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, getImaginaryCharacter, METH_NOARGS),
        DECLARE_METHOD(t_ComplexFormat, getImaginaryFormat, METH_NOARGS),
        DECLARE_METHOD(t_ComplexFormat, getRealFormat, METH_NOARGS),
        DECLARE_METHOD(t_ComplexFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexFormat)[] = {
        { Py_tp_methods, t_ComplexFormat__methods_ },
        { Py_tp_init, (void *) t_ComplexFormat_init_ },
        { Py_tp_getset, t_ComplexFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexFormat, t_ComplexFormat, ComplexFormat);

      void t_ComplexFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexFormat), &PY_TYPE_DEF(ComplexFormat), module, "ComplexFormat", 0);
      }

      void t_ComplexFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexFormat), "class_", make_descriptor(ComplexFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexFormat), "wrapfn_", make_descriptor(t_ComplexFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexFormat::initializeClass, 1)))
          return NULL;
        return t_ComplexFormat::wrap_Object(ComplexFormat(((t_ComplexFormat *) arg)->object.this$));
      }
      static PyObject *t_ComplexFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexFormat_init_(t_ComplexFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ComplexFormat object((jobject) NULL);

            INT_CALL(object = ComplexFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = ComplexFormat(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = ComplexFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ComplexFormat(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ComplexFormat(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ::java::text::NumberFormat a2((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "skk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ComplexFormat(a0, a1, a2));
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

      static PyObject *t_ComplexFormat_format(t_ComplexFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::Double a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "O", ::java::lang::PY_TYPE(Double), &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          {
            ::org::hipparchus::complex::Complex a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::complex::Complex a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
          {
            ::java::lang::Object a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_ComplexFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_ComplexFormat_getComplexFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ComplexFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getComplexFormat());
            return t_ComplexFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ComplexFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getComplexFormat(a0));
              return t_ComplexFormat::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::util::Locale a1((jobject) NULL);
            ComplexFormat result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getComplexFormat(a0, a1));
              return t_ComplexFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getComplexFormat", args);
        return NULL;
      }

      static PyObject *t_ComplexFormat_getImaginaryCharacter(t_ComplexFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginaryCharacter());
        return j2p(result);
      }

      static PyObject *t_ComplexFormat_getImaginaryFormat(t_ComplexFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginaryFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ComplexFormat_getRealFormat(t_ComplexFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getRealFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ComplexFormat_parse(t_ComplexFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_ComplexFormat_get__availableLocales(t_ComplexFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_ComplexFormat_get__complexFormat(t_ComplexFormat *self, void *data)
      {
        ComplexFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getComplexFormat());
        return t_ComplexFormat::wrap_Object(value);
      }

      static PyObject *t_ComplexFormat_get__imaginaryCharacter(t_ComplexFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginaryCharacter());
        return j2p(value);
      }

      static PyObject *t_ComplexFormat_get__imaginaryFormat(t_ComplexFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginaryFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }

      static PyObject *t_ComplexFormat_get__realFormat(t_ComplexFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
