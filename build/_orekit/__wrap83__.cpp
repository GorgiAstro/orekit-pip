#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/PythonAbstractMessageParser.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *PythonAbstractMessageParser::class$ = NULL;
            jmethodID *PythonAbstractMessageParser::mids$ = NULL;
            bool PythonAbstractMessageParser::live$ = false;

            jclass PythonAbstractMessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/PythonAbstractMessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_dfd7647d9110ac9f] = env->getMethodID(cls, "build", "()Ljava/lang/Object;");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonAbstractMessageParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonAbstractMessageParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonAbstractMessageParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          namespace parsing {
            static PyObject *t_PythonAbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageParser_of_(t_PythonAbstractMessageParser *self, PyObject *args);
            static PyObject *t_PythonAbstractMessageParser_finalize(t_PythonAbstractMessageParser *self);
            static PyObject *t_PythonAbstractMessageParser_pythonExtension(t_PythonAbstractMessageParser *self, PyObject *args);
            static jobject JNICALL t_PythonAbstractMessageParser_build0(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractMessageParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractMessageParser_reset2(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonAbstractMessageParser_get__self(t_PythonAbstractMessageParser *self, void *data);
            static PyObject *t_PythonAbstractMessageParser_get__parameters_(t_PythonAbstractMessageParser *self, void *data);
            static PyGetSetDef t_PythonAbstractMessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractMessageParser, self),
              DECLARE_GET_FIELD(t_PythonAbstractMessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractMessageParser__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractMessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMessageParser)[] = {
              { Py_tp_methods, t_PythonAbstractMessageParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonAbstractMessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractMessageParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser),
              NULL
            };

            DEFINE_TYPE(PythonAbstractMessageParser, t_PythonAbstractMessageParser, PythonAbstractMessageParser);
            PyObject *t_PythonAbstractMessageParser::wrap_Object(const PythonAbstractMessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonAbstractMessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageParser *self = (t_PythonAbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonAbstractMessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonAbstractMessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageParser *self = (t_PythonAbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonAbstractMessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractMessageParser), &PY_TYPE_DEF(PythonAbstractMessageParser), module, "PythonAbstractMessageParser", 1);
            }

            void t_PythonAbstractMessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageParser), "class_", make_descriptor(PythonAbstractMessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageParser), "wrapfn_", make_descriptor(t_PythonAbstractMessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractMessageParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Ljava/lang/Object;", (void *) t_PythonAbstractMessageParser_build0 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractMessageParser_pythonDecRef1 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonAbstractMessageParser_reset2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonAbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractMessageParser::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractMessageParser::wrap_Object(PythonAbstractMessageParser(((t_PythonAbstractMessageParser *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractMessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractMessageParser_of_(t_PythonAbstractMessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonAbstractMessageParser_finalize(t_PythonAbstractMessageParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractMessageParser_pythonExtension(t_PythonAbstractMessageParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonAbstractMessageParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("build", result);
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

            static void JNICALL t_PythonAbstractMessageParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractMessageParser_reset2(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractMessageParser_get__self(t_PythonAbstractMessageParser *self, void *data)
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
            static PyObject *t_PythonAbstractMessageParser_get__parameters_(t_PythonAbstractMessageParser *self, void *data)
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
#include "org/orekit/gnss/metric/parser/AbstractEncodedMessage.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *AbstractEncodedMessage::class$ = NULL;
          jmethodID *AbstractEncodedMessage::mids$ = NULL;
          bool AbstractEncodedMessage::live$ = false;

          jclass AbstractEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/AbstractEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_extractBits_3f523e51b2989e1f] = env->getMethodID(cls, "extractBits", "(I)J");
              mids$[mid_start_7ae3461a92a43152] = env->getMethodID(cls, "start", "()V");
              mids$[mid_fetchByte_f2f64475e4580546] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractEncodedMessage::AbstractEncodedMessage() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          jlong AbstractEncodedMessage::extractBits(jint a0) const
          {
            return env->callLongMethod(this$, mids$[mid_extractBits_3f523e51b2989e1f], a0);
          }

          void AbstractEncodedMessage::start() const
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
          static PyObject *t_AbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractEncodedMessage_init_(t_AbstractEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AbstractEncodedMessage_extractBits(t_AbstractEncodedMessage *self, PyObject *arg);
          static PyObject *t_AbstractEncodedMessage_start(t_AbstractEncodedMessage *self);

          static PyMethodDef t_AbstractEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_AbstractEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractEncodedMessage, extractBits, METH_O),
            DECLARE_METHOD(t_AbstractEncodedMessage, start, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractEncodedMessage)[] = {
            { Py_tp_methods, t_AbstractEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_AbstractEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractEncodedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractEncodedMessage, t_AbstractEncodedMessage, AbstractEncodedMessage);

          void t_AbstractEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractEncodedMessage), &PY_TYPE_DEF(AbstractEncodedMessage), module, "AbstractEncodedMessage", 0);
          }

          void t_AbstractEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncodedMessage), "class_", make_descriptor(AbstractEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncodedMessage), "wrapfn_", make_descriptor(t_AbstractEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_AbstractEncodedMessage::wrap_Object(AbstractEncodedMessage(((t_AbstractEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_AbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractEncodedMessage_init_(t_AbstractEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            AbstractEncodedMessage object((jobject) NULL);

            INT_CALL(object = AbstractEncodedMessage());
            self->object = object;

            return 0;
          }

          static PyObject *t_AbstractEncodedMessage_extractBits(t_AbstractEncodedMessage *self, PyObject *arg)
          {
            jint a0;
            jlong result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.extractBits(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            PyErr_SetArgsError((PyObject *) self, "extractBits", arg);
            return NULL;
          }

          static PyObject *t_AbstractEncodedMessage_start(t_AbstractEncodedMessage *self)
          {
            OBJ_CALL(self->object.start());
            Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/InputStreamEncodedMessage.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *InputStreamEncodedMessage::class$ = NULL;
          jmethodID *InputStreamEncodedMessage::mids$ = NULL;
          bool InputStreamEncodedMessage::live$ = false;

          jclass InputStreamEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/InputStreamEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a51aa99816400fdd] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;)V");
              mids$[mid_fetchByte_f2f64475e4580546] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InputStreamEncodedMessage::InputStreamEncodedMessage(const ::java::io::InputStream & a0) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_a51aa99816400fdd, a0.this$)) {}
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
          static PyObject *t_InputStreamEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InputStreamEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_InputStreamEncodedMessage_init_(t_InputStreamEncodedMessage *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_InputStreamEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_InputStreamEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InputStreamEncodedMessage, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InputStreamEncodedMessage)[] = {
            { Py_tp_methods, t_InputStreamEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_InputStreamEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InputStreamEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(InputStreamEncodedMessage, t_InputStreamEncodedMessage, InputStreamEncodedMessage);

          void t_InputStreamEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(InputStreamEncodedMessage), &PY_TYPE_DEF(InputStreamEncodedMessage), module, "InputStreamEncodedMessage", 0);
          }

          void t_InputStreamEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamEncodedMessage), "class_", make_descriptor(InputStreamEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamEncodedMessage), "wrapfn_", make_descriptor(t_InputStreamEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InputStreamEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InputStreamEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_InputStreamEncodedMessage::wrap_Object(InputStreamEncodedMessage(((t_InputStreamEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_InputStreamEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InputStreamEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_InputStreamEncodedMessage_init_(t_InputStreamEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            ::java::io::InputStream a0((jobject) NULL);
            InputStreamEncodedMessage object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
            {
              INT_CALL(object = InputStreamEncodedMessage(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmWriter::class$ = NULL;
              jmethodID *OmmWriter::mids$ = NULL;
              bool OmmWriter::live$ = false;
              jdouble OmmWriter::CCSDS_OMM_VERS = (jdouble) 0;
              jint OmmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OmmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7cae0d769c2d9ccc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_17bd99da1e106002] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OMM_VERS = env->getStaticDoubleField(cls, "CCSDS_OMM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmWriter::OmmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_7cae0d769c2d9ccc, a0.this$, a1.this$, a2.this$)) {}
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
          namespace odm {
            namespace omm {
              static PyObject *t_OmmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmWriter_of_(t_OmmWriter *self, PyObject *args);
              static int t_OmmWriter_init_(t_OmmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmWriter_get__parameters_(t_OmmWriter *self, void *data);
              static PyGetSetDef t_OmmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OmmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmWriter__methods_[] = {
                DECLARE_METHOD(t_OmmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmWriter)[] = {
                { Py_tp_methods, t_OmmWriter__methods_ },
                { Py_tp_init, (void *) t_OmmWriter_init_ },
                { Py_tp_getset, t_OmmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OmmWriter, t_OmmWriter, OmmWriter);
              PyObject *t_OmmWriter::wrap_Object(const OmmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OmmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmWriter *self = (t_OmmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OmmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OmmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmWriter *self = (t_OmmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OmmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmWriter), &PY_TYPE_DEF(OmmWriter), module, "OmmWriter", 0);
              }

              void t_OmmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "class_", make_descriptor(OmmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "wrapfn_", make_descriptor(t_OmmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "CCSDS_OMM_VERS", make_descriptor(OmmWriter::CCSDS_OMM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "KVN_PADDING_WIDTH", make_descriptor(OmmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OmmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmWriter::initializeClass, 1)))
                  return NULL;
                return t_OmmWriter::wrap_Object(OmmWriter(((t_OmmWriter *) arg)->object.this$));
              }
              static PyObject *t_OmmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmWriter_of_(t_OmmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OmmWriter_init_(t_OmmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                OmmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = OmmWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::omm::PY_TYPE(Omm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_OmmWriter_get__parameters_(t_OmmWriter *self, void *data)
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
#include "org/hipparchus/analysis/function/Acos.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Acos::class$ = NULL;
        jmethodID *Acos::mids$ = NULL;
        bool Acos::live$ = false;

        jclass Acos::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Acos");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Acos::Acos() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Acos::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Acos::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Acos_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Acos_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Acos_init_(t_Acos *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Acos_value(t_Acos *self, PyObject *args);

        static PyMethodDef t_Acos__methods_[] = {
          DECLARE_METHOD(t_Acos, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acos, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acos, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Acos)[] = {
          { Py_tp_methods, t_Acos__methods_ },
          { Py_tp_init, (void *) t_Acos_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Acos)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Acos, t_Acos, Acos);

        void t_Acos::install(PyObject *module)
        {
          installType(&PY_TYPE(Acos), &PY_TYPE_DEF(Acos), module, "Acos", 0);
        }

        void t_Acos::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acos), "class_", make_descriptor(Acos::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acos), "wrapfn_", make_descriptor(t_Acos::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acos), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Acos_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Acos::initializeClass, 1)))
            return NULL;
          return t_Acos::wrap_Object(Acos(((t_Acos *) arg)->object.this$));
        }
        static PyObject *t_Acos_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Acos::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Acos_init_(t_Acos *self, PyObject *args, PyObject *kwds)
        {
          Acos object((jobject) NULL);

          INT_CALL(object = Acos());
          self->object = object;

          return 0;
        }

        static PyObject *t_Acos_value(t_Acos *self, PyObject *args)
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
#include "org/orekit/gnss/metric/messages/common/CodeBias.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *CodeBias::class$ = NULL;
            jmethodID *CodeBias::mids$ = NULL;
            bool CodeBias::live$ = false;

            jclass CodeBias::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/CodeBias");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
                mids$[mid_getCodeBias_456d9a2f64d6b28d] = env->getMethodID(cls, "getCodeBias", "()D");
                mids$[mid_getSignalID_f2f64475e4580546] = env->getMethodID(cls, "getSignalID", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CodeBias::CodeBias(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

            jdouble CodeBias::getCodeBias() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCodeBias_456d9a2f64d6b28d]);
            }

            jint CodeBias::getSignalID() const
            {
              return env->callIntMethod(this$, mids$[mid_getSignalID_f2f64475e4580546]);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            static PyObject *t_CodeBias_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CodeBias_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CodeBias_init_(t_CodeBias *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CodeBias_getCodeBias(t_CodeBias *self);
            static PyObject *t_CodeBias_getSignalID(t_CodeBias *self);
            static PyObject *t_CodeBias_get__codeBias(t_CodeBias *self, void *data);
            static PyObject *t_CodeBias_get__signalID(t_CodeBias *self, void *data);
            static PyGetSetDef t_CodeBias__fields_[] = {
              DECLARE_GET_FIELD(t_CodeBias, codeBias),
              DECLARE_GET_FIELD(t_CodeBias, signalID),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CodeBias__methods_[] = {
              DECLARE_METHOD(t_CodeBias, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CodeBias, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CodeBias, getCodeBias, METH_NOARGS),
              DECLARE_METHOD(t_CodeBias, getSignalID, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CodeBias)[] = {
              { Py_tp_methods, t_CodeBias__methods_ },
              { Py_tp_init, (void *) t_CodeBias_init_ },
              { Py_tp_getset, t_CodeBias__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CodeBias)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CodeBias, t_CodeBias, CodeBias);

            void t_CodeBias::install(PyObject *module)
            {
              installType(&PY_TYPE(CodeBias), &PY_TYPE_DEF(CodeBias), module, "CodeBias", 0);
            }

            void t_CodeBias::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CodeBias), "class_", make_descriptor(CodeBias::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CodeBias), "wrapfn_", make_descriptor(t_CodeBias::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CodeBias), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CodeBias_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CodeBias::initializeClass, 1)))
                return NULL;
              return t_CodeBias::wrap_Object(CodeBias(((t_CodeBias *) arg)->object.this$));
            }
            static PyObject *t_CodeBias_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CodeBias::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CodeBias_init_(t_CodeBias *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jdouble a1;
              CodeBias object((jobject) NULL);

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                INT_CALL(object = CodeBias(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CodeBias_getCodeBias(t_CodeBias *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCodeBias());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CodeBias_getSignalID(t_CodeBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSignalID());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CodeBias_get__codeBias(t_CodeBias *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCodeBias());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CodeBias_get__signalID(t_CodeBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSignalID());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AttitudeEntryKey::class$ = NULL;
              jmethodID *AttitudeEntryKey::mids$ = NULL;
              bool AttitudeEntryKey::live$ = false;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_1 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_1_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_2 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_2_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_3 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_3_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGVEL_X = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGVEL_Y = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGVEL_Z = NULL;
              AttitudeEntryKey *AttitudeEntryKey::EPOCH = NULL;
              AttitudeEntryKey *AttitudeEntryKey::MOMENTUM_ALPHA = NULL;
              AttitudeEntryKey *AttitudeEntryKey::MOMENTUM_DELTA = NULL;
              AttitudeEntryKey *AttitudeEntryKey::NUTATION = NULL;
              AttitudeEntryKey *AttitudeEntryKey::NUTATION_PER = NULL;
              AttitudeEntryKey *AttitudeEntryKey::NUTATION_PHASE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::NUTATION_VEL = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q1 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q1_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q2 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q2_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q3 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q3_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::QC = NULL;
              AttitudeEntryKey *AttitudeEntryKey::QC_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::SPIN_ALPHA = NULL;
              AttitudeEntryKey *AttitudeEntryKey::SPIN_ANGLE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::SPIN_ANGLE_VEL = NULL;
              AttitudeEntryKey *AttitudeEntryKey::SPIN_DELTA = NULL;
              AttitudeEntryKey *AttitudeEntryKey::X_ANGLE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::X_RATE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Y_ANGLE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Y_RATE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Z_ANGLE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Z_RATE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::angVel = NULL;
              AttitudeEntryKey *AttitudeEntryKey::eulerAngle = NULL;
              AttitudeEntryKey *AttitudeEntryKey::eulerAngleAngVel = NULL;
              AttitudeEntryKey *AttitudeEntryKey::eulerAngleDerivative = NULL;
              AttitudeEntryKey *AttitudeEntryKey::eulerAngleRate = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternion = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionAngVel = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionDerivative = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionDot = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionEphemeris = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionEulerRate = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionRate = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionState = NULL;
              AttitudeEntryKey *AttitudeEntryKey::rotationAngles = NULL;
              AttitudeEntryKey *AttitudeEntryKey::rotationRates = NULL;
              AttitudeEntryKey *AttitudeEntryKey::spin = NULL;
              AttitudeEntryKey *AttitudeEntryKey::spinNutation = NULL;
              AttitudeEntryKey *AttitudeEntryKey::spinNutationMom = NULL;

              jclass AttitudeEntryKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_6ffa9066dccce62c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;");
                  mids$[mid_values_d07cda501023bb6d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGLE_1 = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_1", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGLE_1_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_1_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGLE_2 = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_2", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGLE_2_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_2_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGLE_3 = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_3", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGLE_3_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_3_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGVEL_X = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGVEL_X", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGVEL_Y = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGVEL_Y", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGVEL_Z = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGVEL_Z", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  EPOCH = new AttitudeEntryKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  MOMENTUM_ALPHA = new AttitudeEntryKey(env->getStaticObjectField(cls, "MOMENTUM_ALPHA", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  MOMENTUM_DELTA = new AttitudeEntryKey(env->getStaticObjectField(cls, "MOMENTUM_DELTA", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  NUTATION = new AttitudeEntryKey(env->getStaticObjectField(cls, "NUTATION", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  NUTATION_PER = new AttitudeEntryKey(env->getStaticObjectField(cls, "NUTATION_PER", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  NUTATION_PHASE = new AttitudeEntryKey(env->getStaticObjectField(cls, "NUTATION_PHASE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  NUTATION_VEL = new AttitudeEntryKey(env->getStaticObjectField(cls, "NUTATION_VEL", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q1 = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q1", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q1_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q1_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q2 = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q2", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q2_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q2_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q3 = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q3", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q3_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q3_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  QC = new AttitudeEntryKey(env->getStaticObjectField(cls, "QC", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  QC_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "QC_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  SPIN_ALPHA = new AttitudeEntryKey(env->getStaticObjectField(cls, "SPIN_ALPHA", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  SPIN_ANGLE = new AttitudeEntryKey(env->getStaticObjectField(cls, "SPIN_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  SPIN_ANGLE_VEL = new AttitudeEntryKey(env->getStaticObjectField(cls, "SPIN_ANGLE_VEL", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  SPIN_DELTA = new AttitudeEntryKey(env->getStaticObjectField(cls, "SPIN_DELTA", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  X_ANGLE = new AttitudeEntryKey(env->getStaticObjectField(cls, "X_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  X_RATE = new AttitudeEntryKey(env->getStaticObjectField(cls, "X_RATE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Y_ANGLE = new AttitudeEntryKey(env->getStaticObjectField(cls, "Y_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Y_RATE = new AttitudeEntryKey(env->getStaticObjectField(cls, "Y_RATE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Z_ANGLE = new AttitudeEntryKey(env->getStaticObjectField(cls, "Z_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Z_RATE = new AttitudeEntryKey(env->getStaticObjectField(cls, "Z_RATE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  angVel = new AttitudeEntryKey(env->getStaticObjectField(cls, "angVel", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  eulerAngle = new AttitudeEntryKey(env->getStaticObjectField(cls, "eulerAngle", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  eulerAngleAngVel = new AttitudeEntryKey(env->getStaticObjectField(cls, "eulerAngleAngVel", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  eulerAngleDerivative = new AttitudeEntryKey(env->getStaticObjectField(cls, "eulerAngleDerivative", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  eulerAngleRate = new AttitudeEntryKey(env->getStaticObjectField(cls, "eulerAngleRate", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternion = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternion", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionAngVel = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionAngVel", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionDerivative = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionDerivative", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionDot = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionDot", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionEphemeris = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionEphemeris", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionEulerRate = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionEulerRate", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionRate = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionRate", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionState = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionState", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  rotationAngles = new AttitudeEntryKey(env->getStaticObjectField(cls, "rotationAngles", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  rotationRates = new AttitudeEntryKey(env->getStaticObjectField(cls, "rotationRates", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  spin = new AttitudeEntryKey(env->getStaticObjectField(cls, "spin", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  spinNutation = new AttitudeEntryKey(env->getStaticObjectField(cls, "spinNutation", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  spinNutationMom = new AttitudeEntryKey(env->getStaticObjectField(cls, "spinNutationMom", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeEntryKey AttitudeEntryKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeEntryKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6ffa9066dccce62c], a0.this$));
              }

              JArray< AttitudeEntryKey > AttitudeEntryKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeEntryKey >(env->callStaticObjectMethod(cls, mids$[mid_values_d07cda501023bb6d]));
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
            namespace aem {
              static PyObject *t_AttitudeEntryKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeEntryKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeEntryKey_of_(t_AttitudeEntryKey *self, PyObject *args);
              static PyObject *t_AttitudeEntryKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeEntryKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeEntryKey_get__parameters_(t_AttitudeEntryKey *self, void *data);
              static PyGetSetDef t_AttitudeEntryKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeEntryKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeEntryKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeEntryKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeEntryKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeEntryKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeEntryKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeEntryKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeEntryKey)[] = {
                { Py_tp_methods, t_AttitudeEntryKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeEntryKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeEntryKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeEntryKey, t_AttitudeEntryKey, AttitudeEntryKey);
              PyObject *t_AttitudeEntryKey::wrap_Object(const AttitudeEntryKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeEntryKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeEntryKey *self = (t_AttitudeEntryKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeEntryKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeEntryKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeEntryKey *self = (t_AttitudeEntryKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeEntryKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeEntryKey), &PY_TYPE_DEF(AttitudeEntryKey), module, "AttitudeEntryKey", 0);
              }

              void t_AttitudeEntryKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "class_", make_descriptor(AttitudeEntryKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "wrapfn_", make_descriptor(t_AttitudeEntryKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeEntryKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_1", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_1_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_1_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_2", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_2_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_2_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_3", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_3_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_3_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGVEL_X", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGVEL_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGVEL_Y", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGVEL_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGVEL_Z", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGVEL_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "EPOCH", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "MOMENTUM_ALPHA", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::MOMENTUM_ALPHA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "MOMENTUM_DELTA", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::MOMENTUM_DELTA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "NUTATION", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::NUTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "NUTATION_PER", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::NUTATION_PER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "NUTATION_PHASE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::NUTATION_PHASE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "NUTATION_VEL", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::NUTATION_VEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q1", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q1_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q1_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q2", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q2_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q2_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q3", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q3_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q3_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "QC", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::QC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "QC_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::QC_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "SPIN_ALPHA", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::SPIN_ALPHA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "SPIN_ANGLE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::SPIN_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "SPIN_ANGLE_VEL", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::SPIN_ANGLE_VEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "SPIN_DELTA", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::SPIN_DELTA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "X_ANGLE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::X_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "X_RATE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::X_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Y_ANGLE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Y_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Y_RATE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Y_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Z_ANGLE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Z_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Z_RATE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Z_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "angVel", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::angVel)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "eulerAngle", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::eulerAngle)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "eulerAngleAngVel", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::eulerAngleAngVel)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "eulerAngleDerivative", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::eulerAngleDerivative)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "eulerAngleRate", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::eulerAngleRate)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternion", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternion)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionAngVel", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionAngVel)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionDerivative", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionDerivative)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionDot", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionDot)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionEphemeris", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionEphemeris)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionEulerRate", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionEulerRate)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionRate", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionRate)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionState", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionState)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "rotationAngles", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::rotationAngles)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "rotationRates", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::rotationRates)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "spin", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::spin)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "spinNutation", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::spinNutation)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "spinNutationMom", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::spinNutationMom)));
              }

              static PyObject *t_AttitudeEntryKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeEntryKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeEntryKey::wrap_Object(AttitudeEntryKey(((t_AttitudeEntryKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeEntryKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeEntryKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeEntryKey_of_(t_AttitudeEntryKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeEntryKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeEntryKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AttitudeEntryKey::valueOf(a0));
                  return t_AttitudeEntryKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeEntryKey_values(PyTypeObject *type)
              {
                JArray< AttitudeEntryKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AttitudeEntryKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeEntryKey::wrap_jobject);
              }
              static PyObject *t_AttitudeEntryKey_get__parameters_(t_AttitudeEntryKey *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/HermiteInterpolator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *HermiteInterpolator::class$ = NULL;
        jmethodID *HermiteInterpolator::mids$ = NULL;
        bool HermiteInterpolator::live$ = false;

        jclass HermiteInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/HermiteInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSamplePoint_5be24d2f20fd4252] = env->getMethodID(cls, "addSamplePoint", "(D[[D)V");
            mids$[mid_derivatives_7582829a03f4b5f9] = env->getMethodID(cls, "derivatives", "(DI)[[D");
            mids$[mid_getPolynomials_4abf9ec9946ee32d] = env->getMethodID(cls, "getPolynomials", "()[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_value_e6753bb90e47a158] = env->getMethodID(cls, "value", "(D)[D");
            mids$[mid_value_8db78ffbf68761e3] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)[Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HermiteInterpolator::HermiteInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void HermiteInterpolator::addSamplePoint(jdouble a0, const JArray< JArray< jdouble > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSamplePoint_5be24d2f20fd4252], a0, a1.this$);
        }

        JArray< JArray< jdouble > > HermiteInterpolator::derivatives(jdouble a0, jint a1) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_derivatives_7582829a03f4b5f9], a0, a1));
        }

        JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > HermiteInterpolator::getPolynomials() const
        {
          return JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getPolynomials_4abf9ec9946ee32d]));
        }

        JArray< jdouble > HermiteInterpolator::value(jdouble a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_e6753bb90e47a158], a0));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > HermiteInterpolator::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_value_8db78ffbf68761e3], a0.this$));
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
      namespace interpolation {
        static PyObject *t_HermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HermiteInterpolator_init_(t_HermiteInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HermiteInterpolator_addSamplePoint(t_HermiteInterpolator *self, PyObject *args);
        static PyObject *t_HermiteInterpolator_derivatives(t_HermiteInterpolator *self, PyObject *args);
        static PyObject *t_HermiteInterpolator_getPolynomials(t_HermiteInterpolator *self);
        static PyObject *t_HermiteInterpolator_value(t_HermiteInterpolator *self, PyObject *args);
        static PyObject *t_HermiteInterpolator_get__polynomials(t_HermiteInterpolator *self, void *data);
        static PyGetSetDef t_HermiteInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_HermiteInterpolator, polynomials),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HermiteInterpolator__methods_[] = {
          DECLARE_METHOD(t_HermiteInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HermiteInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HermiteInterpolator, addSamplePoint, METH_VARARGS),
          DECLARE_METHOD(t_HermiteInterpolator, derivatives, METH_VARARGS),
          DECLARE_METHOD(t_HermiteInterpolator, getPolynomials, METH_NOARGS),
          DECLARE_METHOD(t_HermiteInterpolator, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HermiteInterpolator)[] = {
          { Py_tp_methods, t_HermiteInterpolator__methods_ },
          { Py_tp_init, (void *) t_HermiteInterpolator_init_ },
          { Py_tp_getset, t_HermiteInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HermiteInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HermiteInterpolator, t_HermiteInterpolator, HermiteInterpolator);

        void t_HermiteInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(HermiteInterpolator), &PY_TYPE_DEF(HermiteInterpolator), module, "HermiteInterpolator", 0);
        }

        void t_HermiteInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteInterpolator), "class_", make_descriptor(HermiteInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteInterpolator), "wrapfn_", make_descriptor(t_HermiteInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HermiteInterpolator::initializeClass, 1)))
            return NULL;
          return t_HermiteInterpolator::wrap_Object(HermiteInterpolator(((t_HermiteInterpolator *) arg)->object.this$));
        }
        static PyObject *t_HermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HermiteInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HermiteInterpolator_init_(t_HermiteInterpolator *self, PyObject *args, PyObject *kwds)
        {
          HermiteInterpolator object((jobject) NULL);

          INT_CALL(object = HermiteInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_HermiteInterpolator_addSamplePoint(t_HermiteInterpolator *self, PyObject *args)
        {
          jdouble a0;
          JArray< JArray< jdouble > > a1((jobject) NULL);

          if (!parseArgs(args, "D[[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addSamplePoint(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSamplePoint", args);
          return NULL;
        }

        static PyObject *t_HermiteInterpolator_derivatives(t_HermiteInterpolator *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, "DI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.derivatives(a0, a1));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "derivatives", args);
          return NULL;
        }

        static PyObject *t_HermiteInterpolator_getPolynomials(t_HermiteInterpolator *self)
        {
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolynomials());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
        }

        static PyObject *t_HermiteInterpolator_value(t_HermiteInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return result.wrap();
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_HermiteInterpolator_get__polynomials(t_HermiteInterpolator *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolynomials());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyDynamicContext.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTThirdBodyDynamicContext::class$ = NULL;
            jmethodID *DSSTThirdBodyDynamicContext::mids$ = NULL;
            bool DSSTThirdBodyDynamicContext::live$ = false;

            jclass DSSTThirdBodyDynamicContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyDynamicContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_55c5b6aea8221227] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/bodies/CelestialBody;[D)V");
                mids$[mid_getA_456d9a2f64d6b28d] = env->getMethodID(cls, "getA", "()D");
                mids$[mid_getAlpha_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlpha", "()D");
                mids$[mid_getBB_456d9a2f64d6b28d] = env->getMethodID(cls, "getBB", "()D");
                mids$[mid_getBBB_456d9a2f64d6b28d] = env->getMethodID(cls, "getBBB", "()D");
                mids$[mid_getBeta_456d9a2f64d6b28d] = env->getMethodID(cls, "getBeta", "()D");
                mids$[mid_getBoA_456d9a2f64d6b28d] = env->getMethodID(cls, "getBoA", "()D");
                mids$[mid_getBoABpo_456d9a2f64d6b28d] = env->getMethodID(cls, "getBoABpo", "()D");
                mids$[mid_getGamma_456d9a2f64d6b28d] = env->getMethodID(cls, "getGamma", "()D");
                mids$[mid_getHXXX_456d9a2f64d6b28d] = env->getMethodID(cls, "getHXXX", "()D");
                mids$[mid_getKXXX_456d9a2f64d6b28d] = env->getMethodID(cls, "getKXXX", "()D");
                mids$[mid_getM2aoA_456d9a2f64d6b28d] = env->getMethodID(cls, "getM2aoA", "()D");
                mids$[mid_getMCo2AB_456d9a2f64d6b28d] = env->getMethodID(cls, "getMCo2AB", "()D");
                mids$[mid_getMeanMotion_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMuoR3_456d9a2f64d6b28d] = env->getMethodID(cls, "getMuoR3", "()D");
                mids$[mid_getOoAB_456d9a2f64d6b28d] = env->getMethodID(cls, "getOoAB", "()D");
                mids$[mid_getR3_456d9a2f64d6b28d] = env->getMethodID(cls, "getR3", "()D");
                mids$[mid_getX_456d9a2f64d6b28d] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXX_456d9a2f64d6b28d] = env->getMethodID(cls, "getXX", "()D");
                mids$[mid_getb_456d9a2f64d6b28d] = env->getMethodID(cls, "getb", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTThirdBodyDynamicContext::DSSTThirdBodyDynamicContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::bodies::CelestialBody & a1, const JArray< jdouble > & a2) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_55c5b6aea8221227, a0.this$, a1.this$, a2.this$)) {}

            jdouble DSSTThirdBodyDynamicContext::getA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getA_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getAlpha() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBB_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBBB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBBB_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBeta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBeta_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoA_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBoABpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoABpo_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getGamma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGamma_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getHXXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHXXX_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getKXXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getKXXX_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getM2aoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM2aoA_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getMCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMCo2AB_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getMuoR3() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMuoR3_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getOoAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoAB_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getR3() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getR3_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXX_456d9a2f64d6b28d]);
            }

            jdouble DSSTThirdBodyDynamicContext::getb() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getb_456d9a2f64d6b28d]);
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
            static PyObject *t_DSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTThirdBodyDynamicContext_init_(t_DSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTThirdBodyDynamicContext_getA(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getAlpha(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBBB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBeta(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBoA(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBoABpo(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getGamma(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getHXXX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getKXXX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getM2aoA(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getMCo2AB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getMeanMotion(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getMuoR3(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getOoAB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getR3(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getXX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getb(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__a(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__alpha(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__b(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__bB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__bBB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__beta(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__boA(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__boABpo(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__gamma(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__hXXX(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__kXXX(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__m2aoA(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__mCo2AB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__meanMotion(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__muoR3(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__ooAB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__r3(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__x(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__xX(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyGetSetDef t_DSSTThirdBodyDynamicContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, a),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, alpha),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, b),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, bB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, bBB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, beta),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, boA),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, boABpo),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, gamma),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, hXXX),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, kXXX),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, m2aoA),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, mCo2AB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, meanMotion),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, muoR3),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, ooAB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, r3),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, x),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, xX),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTThirdBodyDynamicContext__methods_[] = {
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBBB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getHXXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getKXXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getMuoR3, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getR3, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getb, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTThirdBodyDynamicContext)[] = {
              { Py_tp_methods, t_DSSTThirdBodyDynamicContext__methods_ },
              { Py_tp_init, (void *) t_DSSTThirdBodyDynamicContext_init_ },
              { Py_tp_getset, t_DSSTThirdBodyDynamicContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTThirdBodyDynamicContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTThirdBodyDynamicContext, t_DSSTThirdBodyDynamicContext, DSSTThirdBodyDynamicContext);

            void t_DSSTThirdBodyDynamicContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTThirdBodyDynamicContext), &PY_TYPE_DEF(DSSTThirdBodyDynamicContext), module, "DSSTThirdBodyDynamicContext", 0);
            }

            void t_DSSTThirdBodyDynamicContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyDynamicContext), "class_", make_descriptor(DSSTThirdBodyDynamicContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyDynamicContext), "wrapfn_", make_descriptor(t_DSSTThirdBodyDynamicContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyDynamicContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTThirdBodyDynamicContext::initializeClass, 1)))
                return NULL;
              return t_DSSTThirdBodyDynamicContext::wrap_Object(DSSTThirdBodyDynamicContext(((t_DSSTThirdBodyDynamicContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTThirdBodyDynamicContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTThirdBodyDynamicContext_init_(t_DSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              DSSTThirdBodyDynamicContext object((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = DSSTThirdBodyDynamicContext(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getA(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getAlpha(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBBB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBBB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBeta(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBeta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBoA(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBoABpo(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoABpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getGamma(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGamma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getHXXX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHXXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getKXXX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getKXXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getM2aoA(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM2aoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getMCo2AB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getMeanMotion(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getMuoR3(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMuoR3());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getOoAB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getR3(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getR3());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getXX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getb(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getb());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__a(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__alpha(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__b(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getb());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__bB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__bBB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBBB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__beta(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBeta());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__boA(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__boABpo(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoABpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__gamma(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGamma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__hXXX(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHXXX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__kXXX(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getKXXX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__m2aoA(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM2aoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__mCo2AB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__meanMotion(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__muoR3(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMuoR3());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__ooAB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__r3(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getR3());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__x(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__xX(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXX());
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
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerLeastSquareSolver::class$ = NULL;
          jmethodID *IntegerLeastSquareSolver::mids$ = NULL;
          bool IntegerLeastSquareSolver::live$ = false;

          jclass IntegerLeastSquareSolver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_solveILS_fcede534b3836556] = env->getMethodID(cls, "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > IntegerLeastSquareSolver::solveILS(jint a0, const JArray< jdouble > & a1, const JArray< jint > & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
          {
            return JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution >(env->callObjectMethod(this$, mids$[mid_solveILS_fcede534b3836556], a0, a1.this$, a2.this$, a3.this$));
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_IntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareSolver_solveILS(t_IntegerLeastSquareSolver *self, PyObject *args);

          static PyMethodDef t_IntegerLeastSquareSolver__methods_[] = {
            DECLARE_METHOD(t_IntegerLeastSquareSolver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolver, solveILS, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerLeastSquareSolver)[] = {
            { Py_tp_methods, t_IntegerLeastSquareSolver__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerLeastSquareSolver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IntegerLeastSquareSolver, t_IntegerLeastSquareSolver, IntegerLeastSquareSolver);

          void t_IntegerLeastSquareSolver::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerLeastSquareSolver), &PY_TYPE_DEF(IntegerLeastSquareSolver), module, "IntegerLeastSquareSolver", 0);
          }

          void t_IntegerLeastSquareSolver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolver), "class_", make_descriptor(IntegerLeastSquareSolver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolver), "wrapfn_", make_descriptor(t_IntegerLeastSquareSolver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerLeastSquareSolver::initializeClass, 1)))
              return NULL;
            return t_IntegerLeastSquareSolver::wrap_Object(IntegerLeastSquareSolver(((t_IntegerLeastSquareSolver *) arg)->object.this$));
          }
          static PyObject *t_IntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerLeastSquareSolver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IntegerLeastSquareSolver_solveILS(t_IntegerLeastSquareSolver *self, PyObject *args)
          {
            jint a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > result((jobject) NULL);

            if (!parseArgs(args, "I[D[Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solveILS(a0, a1, a2, a3));
              return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "solveILS", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/BatchLSEstimator.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *BatchLSEstimator::class$ = NULL;
        jmethodID *BatchLSEstimator::mids$ = NULL;
        bool BatchLSEstimator::live$ = false;

        jclass BatchLSEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/BatchLSEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b2039c712d4cf408] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer;[Lorg/orekit/propagation/conversion/PropagatorBuilder;)V");
            mids$[mid_addMeasurement_54d78f04ce23dff7] = env->getMethodID(cls, "addMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
            mids$[mid_estimate_bba03978f79693ea] = env->getMethodID(cls, "estimate", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvaluationsCount_f2f64475e4580546] = env->getMethodID(cls, "getEvaluationsCount", "()I");
            mids$[mid_getIterationsCount_f2f64475e4580546] = env->getMethodID(cls, "getIterationsCount", "()I");
            mids$[mid_getLastEstimations_d6753b7055940a54] = env->getMethodID(cls, "getLastEstimations", "()Ljava/util/Map;");
            mids$[mid_getMeasurementsParametersDrivers_2ede96f23730e099] = env->getMethodID(cls, "getMeasurementsParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getOptimum_0e63047000e1d3fd] = env->getMethodID(cls, "getOptimum", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
            mids$[mid_getOrbitalParametersDrivers_2ede96f23730e099] = env->getMethodID(cls, "getOrbitalParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalCovariances_2461b653ab91779b] = env->getMethodID(cls, "getPhysicalCovariances", "(D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPropagatorParametersDrivers_2ede96f23730e099] = env->getMethodID(cls, "getPropagatorParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_setConvergenceChecker_762e7504cd26f616] = env->getMethodID(cls, "setConvergenceChecker", "(Lorg/hipparchus/optim/ConvergenceChecker;)V");
            mids$[mid_setMaxEvaluations_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");
            mids$[mid_setMaxIterations_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaxIterations", "(I)V");
            mids$[mid_setObserver_4e3ea99915cc2d2b] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/leastsquares/BatchLSObserver;)V");
            mids$[mid_setParametersConvergenceThreshold_77e0f9a1f260e2e5] = env->getMethodID(cls, "setParametersConvergenceThreshold", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BatchLSEstimator::BatchLSEstimator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer & a0, const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b2039c712d4cf408, a0.this$, a1.this$)) {}

        void BatchLSEstimator::addMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMeasurement_54d78f04ce23dff7], a0.this$);
        }

        JArray< ::org::orekit::propagation::Propagator > BatchLSEstimator::estimate() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_estimate_bba03978f79693ea]));
        }

        jint BatchLSEstimator::getEvaluationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluationsCount_f2f64475e4580546]);
        }

        jint BatchLSEstimator::getIterationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterationsCount_f2f64475e4580546]);
        }

        ::java::util::Map BatchLSEstimator::getLastEstimations() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getLastEstimations_d6753b7055940a54]));
        }

        ::org::orekit::utils::ParameterDriversList BatchLSEstimator::getMeasurementsParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getMeasurementsParametersDrivers_2ede96f23730e099], a0));
        }

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum BatchLSEstimator::getOptimum() const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_getOptimum_0e63047000e1d3fd]));
        }

        ::org::orekit::utils::ParameterDriversList BatchLSEstimator::getOrbitalParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_2ede96f23730e099], a0));
        }

        ::org::hipparchus::linear::RealMatrix BatchLSEstimator::getPhysicalCovariances(jdouble a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalCovariances_2461b653ab91779b], a0));
        }

        ::org::orekit::utils::ParameterDriversList BatchLSEstimator::getPropagatorParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagatorParametersDrivers_2ede96f23730e099], a0));
        }

        void BatchLSEstimator::setConvergenceChecker(const ::org::hipparchus::optim::ConvergenceChecker & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setConvergenceChecker_762e7504cd26f616], a0.this$);
        }

        void BatchLSEstimator::setMaxEvaluations(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_0a2a1ac2721c0336], a0);
        }

        void BatchLSEstimator::setMaxIterations(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxIterations_0a2a1ac2721c0336], a0);
        }

        void BatchLSEstimator::setObserver(const ::org::orekit::estimation::leastsquares::BatchLSObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_4e3ea99915cc2d2b], a0.this$);
        }

        void BatchLSEstimator::setParametersConvergenceThreshold(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setParametersConvergenceThreshold_77e0f9a1f260e2e5], a0);
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
      namespace leastsquares {
        static PyObject *t_BatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BatchLSEstimator_init_(t_BatchLSEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BatchLSEstimator_addMeasurement(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_estimate(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getEvaluationsCount(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getIterationsCount(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getLastEstimations(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getMeasurementsParametersDrivers(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_getOptimum(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getOrbitalParametersDrivers(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_getPhysicalCovariances(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_getPropagatorParametersDrivers(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setConvergenceChecker(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setMaxEvaluations(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setMaxIterations(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setObserver(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setParametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg);
        static int t_BatchLSEstimator_set__convergenceChecker(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static PyObject *t_BatchLSEstimator_get__evaluationsCount(t_BatchLSEstimator *self, void *data);
        static PyObject *t_BatchLSEstimator_get__iterationsCount(t_BatchLSEstimator *self, void *data);
        static PyObject *t_BatchLSEstimator_get__lastEstimations(t_BatchLSEstimator *self, void *data);
        static int t_BatchLSEstimator_set__maxEvaluations(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static int t_BatchLSEstimator_set__maxIterations(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static int t_BatchLSEstimator_set__observer(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static PyObject *t_BatchLSEstimator_get__optimum(t_BatchLSEstimator *self, void *data);
        static int t_BatchLSEstimator_set__parametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_BatchLSEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_BatchLSEstimator, convergenceChecker),
          DECLARE_GET_FIELD(t_BatchLSEstimator, evaluationsCount),
          DECLARE_GET_FIELD(t_BatchLSEstimator, iterationsCount),
          DECLARE_GET_FIELD(t_BatchLSEstimator, lastEstimations),
          DECLARE_SET_FIELD(t_BatchLSEstimator, maxEvaluations),
          DECLARE_SET_FIELD(t_BatchLSEstimator, maxIterations),
          DECLARE_SET_FIELD(t_BatchLSEstimator, observer),
          DECLARE_GET_FIELD(t_BatchLSEstimator, optimum),
          DECLARE_SET_FIELD(t_BatchLSEstimator, parametersConvergenceThreshold),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BatchLSEstimator__methods_[] = {
          DECLARE_METHOD(t_BatchLSEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSEstimator, addMeasurement, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, estimate, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getEvaluationsCount, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getIterationsCount, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getLastEstimations, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getMeasurementsParametersDrivers, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, getOptimum, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getOrbitalParametersDrivers, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, getPhysicalCovariances, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, getPropagatorParametersDrivers, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setConvergenceChecker, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setMaxEvaluations, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setMaxIterations, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setObserver, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setParametersConvergenceThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BatchLSEstimator)[] = {
          { Py_tp_methods, t_BatchLSEstimator__methods_ },
          { Py_tp_init, (void *) t_BatchLSEstimator_init_ },
          { Py_tp_getset, t_BatchLSEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BatchLSEstimator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BatchLSEstimator, t_BatchLSEstimator, BatchLSEstimator);

        void t_BatchLSEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(BatchLSEstimator), &PY_TYPE_DEF(BatchLSEstimator), module, "BatchLSEstimator", 0);
        }

        void t_BatchLSEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSEstimator), "class_", make_descriptor(BatchLSEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSEstimator), "wrapfn_", make_descriptor(t_BatchLSEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BatchLSEstimator::initializeClass, 1)))
            return NULL;
          return t_BatchLSEstimator::wrap_Object(BatchLSEstimator(((t_BatchLSEstimator *) arg)->object.this$));
        }
        static PyObject *t_BatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BatchLSEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BatchLSEstimator_init_(t_BatchLSEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer a0((jobject) NULL);
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a1((jobject) NULL);
          BatchLSEstimator object((jobject) NULL);

          if (!parseArgs(args, "k[k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer::initializeClass, ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1))
          {
            INT_CALL(object = BatchLSEstimator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BatchLSEstimator_addMeasurement(t_BatchLSEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
          {
            OBJ_CALL(self->object.addMeasurement(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMeasurement", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_estimate(t_BatchLSEstimator *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimate());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_BatchLSEstimator_getEvaluationsCount(t_BatchLSEstimator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BatchLSEstimator_getIterationsCount(t_BatchLSEstimator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BatchLSEstimator_getLastEstimations(t_BatchLSEstimator *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getLastEstimations());
          return ::java::util::t_Map::wrap_Object(result);
        }

        static PyObject *t_BatchLSEstimator_getMeasurementsParametersDrivers(t_BatchLSEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getMeasurementsParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getMeasurementsParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_getOptimum(t_BatchLSEstimator *self)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);
          OBJ_CALL(result = self->object.getOptimum());
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
        }

        static PyObject *t_BatchLSEstimator_getOrbitalParametersDrivers(t_BatchLSEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getOrbitalParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOrbitalParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_getPhysicalCovariances(t_BatchLSEstimator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getPhysicalCovariances(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPhysicalCovariances", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_getPropagatorParametersDrivers(t_BatchLSEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getPropagatorParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagatorParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setConvergenceChecker(t_BatchLSEstimator *self, PyObject *arg)
        {
          ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
          {
            OBJ_CALL(self->object.setConvergenceChecker(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setConvergenceChecker", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setMaxEvaluations(t_BatchLSEstimator *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setMaxEvaluations(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setMaxIterations(t_BatchLSEstimator *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setMaxIterations(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxIterations", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setObserver(t_BatchLSEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::leastsquares::BatchLSObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::leastsquares::BatchLSObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setParametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setParametersConvergenceThreshold(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setParametersConvergenceThreshold", arg);
          return NULL;
        }

        static int t_BatchLSEstimator_set__convergenceChecker(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &value))
            {
              INT_CALL(self->object.setConvergenceChecker(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "convergenceChecker", arg);
          return -1;
        }

        static PyObject *t_BatchLSEstimator_get__evaluationsCount(t_BatchLSEstimator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BatchLSEstimator_get__iterationsCount(t_BatchLSEstimator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterationsCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BatchLSEstimator_get__lastEstimations(t_BatchLSEstimator *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getLastEstimations());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static int t_BatchLSEstimator_set__maxEvaluations(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setMaxEvaluations(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
          return -1;
        }

        static int t_BatchLSEstimator_set__maxIterations(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setMaxIterations(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxIterations", arg);
          return -1;
        }

        static int t_BatchLSEstimator_set__observer(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::leastsquares::BatchLSObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::leastsquares::BatchLSObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }

        static PyObject *t_BatchLSEstimator_get__optimum(t_BatchLSEstimator *self, void *data)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum value((jobject) NULL);
          OBJ_CALL(value = self->object.getOptimum());
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(value);
        }

        static int t_BatchLSEstimator_set__parametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setParametersConvergenceThreshold(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "parametersConvergenceThreshold", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/SinexEopEntry.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *SinexEopEntry::class$ = NULL;
        jmethodID *SinexEopEntry::mids$ = NULL;
        bool SinexEopEntry::live$ = false;

        jclass SinexEopEntry::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/SinexEopEntry");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e82d68cd9f886886] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLod_456d9a2f64d6b28d] = env->getMethodID(cls, "getLod", "()D");
            mids$[mid_getNutLn_456d9a2f64d6b28d] = env->getMethodID(cls, "getNutLn", "()D");
            mids$[mid_getNutOb_456d9a2f64d6b28d] = env->getMethodID(cls, "getNutOb", "()D");
            mids$[mid_getNutX_456d9a2f64d6b28d] = env->getMethodID(cls, "getNutX", "()D");
            mids$[mid_getNutY_456d9a2f64d6b28d] = env->getMethodID(cls, "getNutY", "()D");
            mids$[mid_getUt1MinusUtc_456d9a2f64d6b28d] = env->getMethodID(cls, "getUt1MinusUtc", "()D");
            mids$[mid_getXPo_456d9a2f64d6b28d] = env->getMethodID(cls, "getXPo", "()D");
            mids$[mid_getYPo_456d9a2f64d6b28d] = env->getMethodID(cls, "getYPo", "()D");
            mids$[mid_setLod_77e0f9a1f260e2e5] = env->getMethodID(cls, "setLod", "(D)V");
            mids$[mid_setNutLn_77e0f9a1f260e2e5] = env->getMethodID(cls, "setNutLn", "(D)V");
            mids$[mid_setNutOb_77e0f9a1f260e2e5] = env->getMethodID(cls, "setNutOb", "(D)V");
            mids$[mid_setNutX_77e0f9a1f260e2e5] = env->getMethodID(cls, "setNutX", "(D)V");
            mids$[mid_setNutY_77e0f9a1f260e2e5] = env->getMethodID(cls, "setNutY", "(D)V");
            mids$[mid_setUt1MinusUtc_77e0f9a1f260e2e5] = env->getMethodID(cls, "setUt1MinusUtc", "(D)V");
            mids$[mid_setxPo_77e0f9a1f260e2e5] = env->getMethodID(cls, "setxPo", "(D)V");
            mids$[mid_setyPo_77e0f9a1f260e2e5] = env->getMethodID(cls, "setyPo", "(D)V");
            mids$[mid_toEopEntry_1b30883cfc3e0010] = env->getMethodID(cls, "toEopEntry", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Lorg/orekit/frames/ITRFVersion;Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/EOPEntry;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SinexEopEntry::SinexEopEntry(const ::org::orekit::time::AbsoluteDate & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e82d68cd9f886886, a0.this$)) {}

        ::org::orekit::time::AbsoluteDate SinexEopEntry::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
        }

        jdouble SinexEopEntry::getLod() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLod_456d9a2f64d6b28d]);
        }

        jdouble SinexEopEntry::getNutLn() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutLn_456d9a2f64d6b28d]);
        }

        jdouble SinexEopEntry::getNutOb() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutOb_456d9a2f64d6b28d]);
        }

        jdouble SinexEopEntry::getNutX() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutX_456d9a2f64d6b28d]);
        }

        jdouble SinexEopEntry::getNutY() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutY_456d9a2f64d6b28d]);
        }

        jdouble SinexEopEntry::getUt1MinusUtc() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUt1MinusUtc_456d9a2f64d6b28d]);
        }

        jdouble SinexEopEntry::getXPo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXPo_456d9a2f64d6b28d]);
        }

        jdouble SinexEopEntry::getYPo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getYPo_456d9a2f64d6b28d]);
        }

        void SinexEopEntry::setLod(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLod_77e0f9a1f260e2e5], a0);
        }

        void SinexEopEntry::setNutLn(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutLn_77e0f9a1f260e2e5], a0);
        }

        void SinexEopEntry::setNutOb(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutOb_77e0f9a1f260e2e5], a0);
        }

        void SinexEopEntry::setNutX(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutX_77e0f9a1f260e2e5], a0);
        }

        void SinexEopEntry::setNutY(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutY_77e0f9a1f260e2e5], a0);
        }

        void SinexEopEntry::setUt1MinusUtc(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setUt1MinusUtc_77e0f9a1f260e2e5], a0);
        }

        void SinexEopEntry::setxPo(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setxPo_77e0f9a1f260e2e5], a0);
        }

        void SinexEopEntry::setyPo(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setyPo_77e0f9a1f260e2e5], a0);
        }

        ::org::orekit::frames::EOPEntry SinexEopEntry::toEopEntry(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::org::orekit::frames::ITRFVersion & a1, const ::org::orekit::time::TimeScale & a2) const
        {
          return ::org::orekit::frames::EOPEntry(env->callObjectMethod(this$, mids$[mid_toEopEntry_1b30883cfc3e0010], a0.this$, a1.this$, a2.this$));
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
      namespace sinex {
        static PyObject *t_SinexEopEntry_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SinexEopEntry_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SinexEopEntry_init_(t_SinexEopEntry *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SinexEopEntry_getDate(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getLod(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutLn(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutOb(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutX(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutY(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getUt1MinusUtc(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getXPo(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getYPo(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_setLod(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutLn(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutOb(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutX(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutY(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setUt1MinusUtc(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setxPo(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setyPo(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_toEopEntry(t_SinexEopEntry *self, PyObject *args);
        static PyObject *t_SinexEopEntry_get__date(t_SinexEopEntry *self, void *data);
        static PyObject *t_SinexEopEntry_get__lod(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__lod(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutLn(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutLn(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutOb(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutOb(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutX(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutX(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutY(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutY(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__ut1MinusUtc(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__ut1MinusUtc(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__xPo(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__xPo(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__yPo(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__yPo(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyGetSetDef t_SinexEopEntry__fields_[] = {
          DECLARE_GET_FIELD(t_SinexEopEntry, date),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, lod),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutLn),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutOb),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutX),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutY),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, ut1MinusUtc),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, xPo),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, yPo),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SinexEopEntry__methods_[] = {
          DECLARE_METHOD(t_SinexEopEntry, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexEopEntry, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexEopEntry, getDate, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getLod, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutLn, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutOb, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutX, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutY, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getUt1MinusUtc, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getXPo, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getYPo, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, setLod, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutLn, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutOb, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutX, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutY, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setUt1MinusUtc, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setxPo, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setyPo, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, toEopEntry, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SinexEopEntry)[] = {
          { Py_tp_methods, t_SinexEopEntry__methods_ },
          { Py_tp_init, (void *) t_SinexEopEntry_init_ },
          { Py_tp_getset, t_SinexEopEntry__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SinexEopEntry)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SinexEopEntry, t_SinexEopEntry, SinexEopEntry);

        void t_SinexEopEntry::install(PyObject *module)
        {
          installType(&PY_TYPE(SinexEopEntry), &PY_TYPE_DEF(SinexEopEntry), module, "SinexEopEntry", 0);
        }

        void t_SinexEopEntry::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexEopEntry), "class_", make_descriptor(SinexEopEntry::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexEopEntry), "wrapfn_", make_descriptor(t_SinexEopEntry::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexEopEntry), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SinexEopEntry_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SinexEopEntry::initializeClass, 1)))
            return NULL;
          return t_SinexEopEntry::wrap_Object(SinexEopEntry(((t_SinexEopEntry *) arg)->object.this$));
        }
        static PyObject *t_SinexEopEntry_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SinexEopEntry::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SinexEopEntry_init_(t_SinexEopEntry *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          SinexEopEntry object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            INT_CALL(object = SinexEopEntry(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SinexEopEntry_getDate(t_SinexEopEntry *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexEopEntry_getLod(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLod());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutLn(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutLn());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutOb(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutOb());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutX(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutX());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutY(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutY());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getUt1MinusUtc(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getUt1MinusUtc());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getXPo(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXPo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getYPo(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getYPo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_setLod(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setLod(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLod", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutLn(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutLn(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutLn", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutOb(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutOb(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutOb", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutX(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutX(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutX", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutY(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutY(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutY", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setUt1MinusUtc(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setUt1MinusUtc(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setUt1MinusUtc", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setxPo(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setxPo(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setxPo", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setyPo(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setyPo(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setyPo", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_toEopEntry(t_SinexEopEntry *self, PyObject *args)
        {
          ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::ITRFVersion a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::time::TimeScale a2((jobject) NULL);
          ::org::orekit::frames::EOPEntry result((jobject) NULL);

          if (!parseArgs(args, "KKk", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &p1, ::org::orekit::frames::t_ITRFVersion::parameters_, &a2))
          {
            OBJ_CALL(result = self->object.toEopEntry(a0, a1, a2));
            return ::org::orekit::frames::t_EOPEntry::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "toEopEntry", args);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_get__date(t_SinexEopEntry *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexEopEntry_get__lod(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLod());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__lod(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setLod(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "lod", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutLn(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutLn());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutLn(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutLn(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutLn", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutOb(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutOb());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutOb(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutOb(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutOb", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutX(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutX());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutX(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutX(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutX", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutY(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutY());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutY(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutY(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutY", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__ut1MinusUtc(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getUt1MinusUtc());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__ut1MinusUtc(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setUt1MinusUtc(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ut1MinusUtc", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__xPo(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXPo());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__xPo(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setxPo(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "xPo", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__yPo(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getYPo());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__yPo(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setyPo(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "yPo", arg);
          return -1;
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
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_66531e3c1769dca9] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ContinueOnEvent::ContinueOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::hipparchus::ode::events::Action ContinueOnEvent::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_66531e3c1769dca9], a0.this$, a1.this$, a2));
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
#include "org/hipparchus/distribution/continuous/GammaDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *GammaDistribution::class$ = NULL;
        jmethodID *GammaDistribution::mids$ = NULL;
        bool GammaDistribution::live$ = false;

        jclass GammaDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/GammaDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_456d9a2f64d6b28d] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_456d9a2f64d6b28d] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_0ba5fed9597b693e] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GammaDistribution::GammaDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        GammaDistribution::GammaDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        jdouble GammaDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble GammaDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble GammaDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble GammaDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble GammaDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_456d9a2f64d6b28d]);
        }

        jdouble GammaDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_456d9a2f64d6b28d]);
        }

        jdouble GammaDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble GammaDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jboolean GammaDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble GammaDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_0ba5fed9597b693e], a0);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_GammaDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GammaDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GammaDistribution_init_(t_GammaDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GammaDistribution_cumulativeProbability(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_density(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getNumericalMean(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getNumericalVariance(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getScale(t_GammaDistribution *self);
        static PyObject *t_GammaDistribution_getShape(t_GammaDistribution *self);
        static PyObject *t_GammaDistribution_getSupportLowerBound(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getSupportUpperBound(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_isSupportConnected(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_logDensity(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_get__numericalMean(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__numericalVariance(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__scale(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__shape(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__supportConnected(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__supportLowerBound(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__supportUpperBound(t_GammaDistribution *self, void *data);
        static PyGetSetDef t_GammaDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_GammaDistribution, numericalMean),
          DECLARE_GET_FIELD(t_GammaDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_GammaDistribution, scale),
          DECLARE_GET_FIELD(t_GammaDistribution, shape),
          DECLARE_GET_FIELD(t_GammaDistribution, supportConnected),
          DECLARE_GET_FIELD(t_GammaDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_GammaDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GammaDistribution__methods_[] = {
          DECLARE_METHOD(t_GammaDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GammaDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GammaDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_GammaDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_GammaDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GammaDistribution)[] = {
          { Py_tp_methods, t_GammaDistribution__methods_ },
          { Py_tp_init, (void *) t_GammaDistribution_init_ },
          { Py_tp_getset, t_GammaDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GammaDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(GammaDistribution, t_GammaDistribution, GammaDistribution);

        void t_GammaDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(GammaDistribution), &PY_TYPE_DEF(GammaDistribution), module, "GammaDistribution", 0);
        }

        void t_GammaDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GammaDistribution), "class_", make_descriptor(GammaDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GammaDistribution), "wrapfn_", make_descriptor(t_GammaDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GammaDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GammaDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GammaDistribution::initializeClass, 1)))
            return NULL;
          return t_GammaDistribution::wrap_Object(GammaDistribution(((t_GammaDistribution *) arg)->object.this$));
        }
        static PyObject *t_GammaDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GammaDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GammaDistribution_init_(t_GammaDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              GammaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = GammaDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              GammaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = GammaDistribution(a0, a1, a2));
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

        static PyObject *t_GammaDistribution_cumulativeProbability(t_GammaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_GammaDistribution_density(t_GammaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_GammaDistribution_getNumericalMean(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_GammaDistribution_getNumericalVariance(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_GammaDistribution_getScale(t_GammaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GammaDistribution_getShape(t_GammaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GammaDistribution_getSupportLowerBound(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_GammaDistribution_getSupportUpperBound(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_GammaDistribution_isSupportConnected(t_GammaDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_GammaDistribution_logDensity(t_GammaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_GammaDistribution_get__numericalMean(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__numericalVariance(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__scale(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__shape(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__supportConnected(t_GammaDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_GammaDistribution_get__supportLowerBound(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__supportUpperBound(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1020::class$ = NULL;
              jmethodID *Rtcm1020::mids$ = NULL;
              bool Rtcm1020::live$ = false;

              jclass Rtcm1020::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_519bb72a7241182d] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1020::Rtcm1020(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1020Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_519bb72a7241182d, a0, a1.this$)) {}
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1020_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1020_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1020_of_(t_Rtcm1020 *self, PyObject *args);
              static int t_Rtcm1020_init_(t_Rtcm1020 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1020_get__parameters_(t_Rtcm1020 *self, void *data);
              static PyGetSetDef t_Rtcm1020__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1020, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1020__methods_[] = {
                DECLARE_METHOD(t_Rtcm1020, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1020)[] = {
                { Py_tp_methods, t_Rtcm1020__methods_ },
                { Py_tp_init, (void *) t_Rtcm1020_init_ },
                { Py_tp_getset, t_Rtcm1020__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1020)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1020, t_Rtcm1020, Rtcm1020);
              PyObject *t_Rtcm1020::wrap_Object(const Rtcm1020& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1020::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1020 *self = (t_Rtcm1020 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1020::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1020::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1020 *self = (t_Rtcm1020 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1020::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1020), &PY_TYPE_DEF(Rtcm1020), module, "Rtcm1020", 0);
              }

              void t_Rtcm1020::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020), "class_", make_descriptor(Rtcm1020::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020), "wrapfn_", make_descriptor(t_Rtcm1020::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1020_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1020::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1020::wrap_Object(Rtcm1020(((t_Rtcm1020 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1020_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1020::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1020_of_(t_Rtcm1020 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1020_init_(t_Rtcm1020 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1020Data a1((jobject) NULL);
                Rtcm1020 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1020Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1020(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1020Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1020_get__parameters_(t_Rtcm1020 *self, void *data)
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
#include "org/orekit/propagation/conversion/AbstractLimitedVariableStepFieldIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractLimitedVariableStepFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractLimitedVariableStepFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractLimitedVariableStepFieldIntegratorBuilder::live$ = false;

        jclass AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractLimitedVariableStepFieldIntegratorBuilder");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
      namespace conversion {
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_of_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractLimitedVariableStepFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractLimitedVariableStepFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractLimitedVariableStepFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractLimitedVariableStepFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractLimitedVariableStepFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractLimitedVariableStepFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder, t_AbstractLimitedVariableStepFieldIntegratorBuilder, AbstractLimitedVariableStepFieldIntegratorBuilder);
        PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_Object(const AbstractLimitedVariableStepFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractLimitedVariableStepFieldIntegratorBuilder *self = (t_AbstractLimitedVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractLimitedVariableStepFieldIntegratorBuilder *self = (t_AbstractLimitedVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractLimitedVariableStepFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractLimitedVariableStepFieldIntegratorBuilder), module, "AbstractLimitedVariableStepFieldIntegratorBuilder", 0);
        }

        void t_AbstractLimitedVariableStepFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), "class_", make_descriptor(AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_Object(AbstractLimitedVariableStepFieldIntegratorBuilder(((t_AbstractLimitedVariableStepFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_of_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/LegendrePolynomials.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *LegendrePolynomials::class$ = NULL;
      jmethodID *LegendrePolynomials::mids$ = NULL;
      bool LegendrePolynomials::live$ = false;

      jclass LegendrePolynomials::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/LegendrePolynomials");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_78e41e7b5124a628] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_getPnm_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getPnm", "(II)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LegendrePolynomials::LegendrePolynomials(jint a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_78e41e7b5124a628, a0, a1, a2)) {}

      jdouble LegendrePolynomials::getPnm(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPnm_a84e4ee1da3f1ab8], a0, a1);
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
      static PyObject *t_LegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LegendrePolynomials_init_(t_LegendrePolynomials *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LegendrePolynomials_getPnm(t_LegendrePolynomials *self, PyObject *args);

      static PyMethodDef t_LegendrePolynomials__methods_[] = {
        DECLARE_METHOD(t_LegendrePolynomials, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LegendrePolynomials, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LegendrePolynomials, getPnm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LegendrePolynomials)[] = {
        { Py_tp_methods, t_LegendrePolynomials__methods_ },
        { Py_tp_init, (void *) t_LegendrePolynomials_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LegendrePolynomials)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LegendrePolynomials, t_LegendrePolynomials, LegendrePolynomials);

      void t_LegendrePolynomials::install(PyObject *module)
      {
        installType(&PY_TYPE(LegendrePolynomials), &PY_TYPE_DEF(LegendrePolynomials), module, "LegendrePolynomials", 0);
      }

      void t_LegendrePolynomials::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LegendrePolynomials), "class_", make_descriptor(LegendrePolynomials::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LegendrePolynomials), "wrapfn_", make_descriptor(t_LegendrePolynomials::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LegendrePolynomials), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LegendrePolynomials::initializeClass, 1)))
          return NULL;
        return t_LegendrePolynomials::wrap_Object(LegendrePolynomials(((t_LegendrePolynomials *) arg)->object.this$));
      }
      static PyObject *t_LegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LegendrePolynomials::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LegendrePolynomials_init_(t_LegendrePolynomials *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        jdouble a2;
        LegendrePolynomials object((jobject) NULL);

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          INT_CALL(object = LegendrePolynomials(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LegendrePolynomials_getPnm(t_LegendrePolynomials *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPnm(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPnm", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *UpdatingMultipleLinearRegression::class$ = NULL;
        jmethodID *UpdatingMultipleLinearRegression::mids$ = NULL;
        bool UpdatingMultipleLinearRegression::live$ = false;

        jclass UpdatingMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/UpdatingMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addObservation_caadaecfce5fba2f] = env->getMethodID(cls, "addObservation", "([DD)V");
            mids$[mid_addObservations_f51b12ef24067352] = env->getMethodID(cls, "addObservations", "([[D[D)V");
            mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_hasIntercept_e470b6d9e0d979db] = env->getMethodID(cls, "hasIntercept", "()Z");
            mids$[mid_regress_b84c99961a7276a9] = env->getMethodID(cls, "regress", "()Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_d722bd798e38d351] = env->getMethodID(cls, "regress", "([I)Lorg/hipparchus/stat/regression/RegressionResults;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void UpdatingMultipleLinearRegression::addObservation(const JArray< jdouble > & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservation_caadaecfce5fba2f], a0.this$, a1);
        }

        void UpdatingMultipleLinearRegression::addObservations(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservations_f51b12ef24067352], a0.this$, a1.this$);
        }

        void UpdatingMultipleLinearRegression::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
        }

        jlong UpdatingMultipleLinearRegression::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
        }

        jboolean UpdatingMultipleLinearRegression::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_e470b6d9e0d979db]);
        }

        ::org::hipparchus::stat::regression::RegressionResults UpdatingMultipleLinearRegression::regress() const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_b84c99961a7276a9]));
        }

        ::org::hipparchus::stat::regression::RegressionResults UpdatingMultipleLinearRegression::regress(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_d722bd798e38d351], a0.this$));
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
    namespace stat {
      namespace regression {
        static PyObject *t_UpdatingMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatingMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatingMultipleLinearRegression_addObservation(t_UpdatingMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_UpdatingMultipleLinearRegression_addObservations(t_UpdatingMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_UpdatingMultipleLinearRegression_clear(t_UpdatingMultipleLinearRegression *self);
        static PyObject *t_UpdatingMultipleLinearRegression_getN(t_UpdatingMultipleLinearRegression *self);
        static PyObject *t_UpdatingMultipleLinearRegression_hasIntercept(t_UpdatingMultipleLinearRegression *self);
        static PyObject *t_UpdatingMultipleLinearRegression_regress(t_UpdatingMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_UpdatingMultipleLinearRegression_get__n(t_UpdatingMultipleLinearRegression *self, void *data);
        static PyGetSetDef t_UpdatingMultipleLinearRegression__fields_[] = {
          DECLARE_GET_FIELD(t_UpdatingMultipleLinearRegression, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UpdatingMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, addObservation, METH_VARARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, addObservations, METH_VARARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, clear, METH_NOARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, getN, METH_NOARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, hasIntercept, METH_NOARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, regress, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UpdatingMultipleLinearRegression)[] = {
          { Py_tp_methods, t_UpdatingMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UpdatingMultipleLinearRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UpdatingMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UpdatingMultipleLinearRegression, t_UpdatingMultipleLinearRegression, UpdatingMultipleLinearRegression);

        void t_UpdatingMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(UpdatingMultipleLinearRegression), &PY_TYPE_DEF(UpdatingMultipleLinearRegression), module, "UpdatingMultipleLinearRegression", 0);
        }

        void t_UpdatingMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatingMultipleLinearRegression), "class_", make_descriptor(UpdatingMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatingMultipleLinearRegression), "wrapfn_", make_descriptor(t_UpdatingMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatingMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UpdatingMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UpdatingMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_UpdatingMultipleLinearRegression::wrap_Object(UpdatingMultipleLinearRegression(((t_UpdatingMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_UpdatingMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UpdatingMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_addObservation(t_UpdatingMultipleLinearRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservation", args);
          return NULL;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_addObservations(t_UpdatingMultipleLinearRegression *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservations(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservations", args);
          return NULL;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_clear(t_UpdatingMultipleLinearRegression *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_getN(t_UpdatingMultipleLinearRegression *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_UpdatingMultipleLinearRegression_hasIntercept(t_UpdatingMultipleLinearRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_UpdatingMultipleLinearRegression_regress(t_UpdatingMultipleLinearRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);
              OBJ_CALL(result = self->object.regress());
              return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
            }
            break;
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "regress", args);
          return NULL;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_get__n(t_UpdatingMultipleLinearRegression *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TrackingCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TrackingCoordinates::class$ = NULL;
      jmethodID *TrackingCoordinates::mids$ = NULL;
      bool TrackingCoordinates::live$ = false;

      jclass TrackingCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TrackingCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
          mids$[mid_getAzimuth_456d9a2f64d6b28d] = env->getMethodID(cls, "getAzimuth", "()D");
          mids$[mid_getElevation_456d9a2f64d6b28d] = env->getMethodID(cls, "getElevation", "()D");
          mids$[mid_getRange_456d9a2f64d6b28d] = env->getMethodID(cls, "getRange", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TrackingCoordinates::TrackingCoordinates(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

      jdouble TrackingCoordinates::getAzimuth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAzimuth_456d9a2f64d6b28d]);
      }

      jdouble TrackingCoordinates::getElevation() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElevation_456d9a2f64d6b28d]);
      }

      jdouble TrackingCoordinates::getRange() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRange_456d9a2f64d6b28d]);
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
      static PyObject *t_TrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TrackingCoordinates_init_(t_TrackingCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TrackingCoordinates_getAzimuth(t_TrackingCoordinates *self);
      static PyObject *t_TrackingCoordinates_getElevation(t_TrackingCoordinates *self);
      static PyObject *t_TrackingCoordinates_getRange(t_TrackingCoordinates *self);
      static PyObject *t_TrackingCoordinates_get__azimuth(t_TrackingCoordinates *self, void *data);
      static PyObject *t_TrackingCoordinates_get__elevation(t_TrackingCoordinates *self, void *data);
      static PyObject *t_TrackingCoordinates_get__range(t_TrackingCoordinates *self, void *data);
      static PyGetSetDef t_TrackingCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TrackingCoordinates, azimuth),
        DECLARE_GET_FIELD(t_TrackingCoordinates, elevation),
        DECLARE_GET_FIELD(t_TrackingCoordinates, range),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TrackingCoordinates__methods_[] = {
        DECLARE_METHOD(t_TrackingCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrackingCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrackingCoordinates, getAzimuth, METH_NOARGS),
        DECLARE_METHOD(t_TrackingCoordinates, getElevation, METH_NOARGS),
        DECLARE_METHOD(t_TrackingCoordinates, getRange, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TrackingCoordinates)[] = {
        { Py_tp_methods, t_TrackingCoordinates__methods_ },
        { Py_tp_init, (void *) t_TrackingCoordinates_init_ },
        { Py_tp_getset, t_TrackingCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TrackingCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TrackingCoordinates, t_TrackingCoordinates, TrackingCoordinates);

      void t_TrackingCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TrackingCoordinates), &PY_TYPE_DEF(TrackingCoordinates), module, "TrackingCoordinates", 0);
      }

      void t_TrackingCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingCoordinates), "class_", make_descriptor(TrackingCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingCoordinates), "wrapfn_", make_descriptor(t_TrackingCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TrackingCoordinates::initializeClass, 1)))
          return NULL;
        return t_TrackingCoordinates::wrap_Object(TrackingCoordinates(((t_TrackingCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TrackingCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TrackingCoordinates_init_(t_TrackingCoordinates *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        TrackingCoordinates object((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          INT_CALL(object = TrackingCoordinates(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TrackingCoordinates_getAzimuth(t_TrackingCoordinates *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAzimuth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TrackingCoordinates_getElevation(t_TrackingCoordinates *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getElevation());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TrackingCoordinates_getRange(t_TrackingCoordinates *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRange());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TrackingCoordinates_get__azimuth(t_TrackingCoordinates *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAzimuth());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TrackingCoordinates_get__elevation(t_TrackingCoordinates *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getElevation());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TrackingCoordinates_get__range(t_TrackingCoordinates *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRange());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$CalibrationTargetConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$CalibrationTargetConfiguration::mids$ = NULL;
        bool CRDConfiguration$CalibrationTargetConfiguration::live$ = false;

        jclass CRDConfiguration$CalibrationTargetConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getProcessingSoftwareName_0090f7797e403f43] = env->getMethodID(cls, "getProcessingSoftwareName", "()Ljava/lang/String;");
            mids$[mid_getProcessingSoftwareVersion_0090f7797e403f43] = env->getMethodID(cls, "getProcessingSoftwareVersion", "()Ljava/lang/String;");
            mids$[mid_getPulseEnergy_456d9a2f64d6b28d] = env->getMethodID(cls, "getPulseEnergy", "()D");
            mids$[mid_getSumOfAllConstantDelays_456d9a2f64d6b28d] = env->getMethodID(cls, "getSumOfAllConstantDelays", "()D");
            mids$[mid_getSurveyError_456d9a2f64d6b28d] = env->getMethodID(cls, "getSurveyError", "()D");
            mids$[mid_getSurveyedTargetDistance_456d9a2f64d6b28d] = env->getMethodID(cls, "getSurveyedTargetDistance", "()D");
            mids$[mid_getTargetName_0090f7797e403f43] = env->getMethodID(cls, "getTargetName", "()Ljava/lang/String;");
            mids$[mid_setProcessingSoftwareName_e939c6558ae8d313] = env->getMethodID(cls, "setProcessingSoftwareName", "(Ljava/lang/String;)V");
            mids$[mid_setProcessingSoftwareVersion_e939c6558ae8d313] = env->getMethodID(cls, "setProcessingSoftwareVersion", "(Ljava/lang/String;)V");
            mids$[mid_setPulseEnergy_77e0f9a1f260e2e5] = env->getMethodID(cls, "setPulseEnergy", "(D)V");
            mids$[mid_setSumOfAllConstantDelays_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSumOfAllConstantDelays", "(D)V");
            mids$[mid_setSurveyError_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSurveyError", "(D)V");
            mids$[mid_setSurveyedTargetDistance_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSurveyedTargetDistance", "(D)V");
            mids$[mid_setTargetName_e939c6558ae8d313] = env->getMethodID(cls, "setTargetName", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$CalibrationTargetConfiguration::CRDConfiguration$CalibrationTargetConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::getProcessingSoftwareName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwareName_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::getProcessingSoftwareVersion() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwareVersion_0090f7797e403f43]));
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getPulseEnergy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPulseEnergy_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getSumOfAllConstantDelays() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfAllConstantDelays_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getSurveyError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSurveyError_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getSurveyedTargetDistance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSurveyedTargetDistance_456d9a2f64d6b28d]);
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::getTargetName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTargetName_0090f7797e403f43]));
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setProcessingSoftwareName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwareName_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setProcessingSoftwareVersion(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwareVersion_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setPulseEnergy(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseEnergy_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setSumOfAllConstantDelays(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSumOfAllConstantDelays_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setSurveyError(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSurveyError_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setSurveyedTargetDistance(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSurveyedTargetDistance_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setTargetName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTargetName_e939c6558ae8d313], a0.this$);
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      namespace ilrs {
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_init_(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toCrdString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$CalibrationTargetConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, processingSoftwareName),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, processingSoftwareVersion),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, pulseEnergy),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, sumOfAllConstantDelays),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, surveyError),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, surveyedTargetDistance),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, targetName),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$CalibrationTargetConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getProcessingSoftwareName, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getProcessingSoftwareVersion, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getPulseEnergy, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getSumOfAllConstantDelays, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getSurveyError, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getSurveyedTargetDistance, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getTargetName, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setProcessingSoftwareName, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setProcessingSoftwareVersion, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setPulseEnergy, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setSumOfAllConstantDelays, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setSurveyError, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setSurveyedTargetDistance, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setTargetName, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$CalibrationTargetConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$CalibrationTargetConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$CalibrationTargetConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$CalibrationTargetConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$CalibrationTargetConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$CalibrationTargetConfiguration, t_CRDConfiguration$CalibrationTargetConfiguration, CRDConfiguration$CalibrationTargetConfiguration);

        void t_CRDConfiguration$CalibrationTargetConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), &PY_TYPE_DEF(CRDConfiguration$CalibrationTargetConfiguration), module, "CRDConfiguration$CalibrationTargetConfiguration", 0);
        }

        void t_CRDConfiguration$CalibrationTargetConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), "class_", make_descriptor(CRDConfiguration$CalibrationTargetConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$CalibrationTargetConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$CalibrationTargetConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(CRDConfiguration$CalibrationTargetConfiguration(((t_CRDConfiguration$CalibrationTargetConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$CalibrationTargetConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$CalibrationTargetConfiguration_init_(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$CalibrationTargetConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$CalibrationTargetConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwareName());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwareVersion());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfAllConstantDelays());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSurveyError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSurveyedTargetDistance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTargetName());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwareName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwareName", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwareVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwareVersion", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPulseEnergy(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseEnergy", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSumOfAllConstantDelays(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSumOfAllConstantDelays", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSurveyError(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSurveyError", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSurveyedTargetDistance(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSurveyedTargetDistance", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTargetName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTargetName", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toCrdString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwareName());
          return j2p(value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwareName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwareName", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwareVersion());
          return j2p(value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwareVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwareVersion", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPulseEnergy(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseEnergy", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfAllConstantDelays());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSumOfAllConstantDelays(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "sumOfAllConstantDelays", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSurveyError());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSurveyError(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "surveyError", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSurveyedTargetDistance());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSurveyedTargetDistance(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "surveyedTargetDistance", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTargetName());
          return j2p(value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTargetName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "targetName", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GPSCivilianNavigationMessage::class$ = NULL;
            jmethodID *GPSCivilianNavigationMessage::mids$ = NULL;
            bool GPSCivilianNavigationMessage::live$ = false;

            jclass GPSCivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_50a2e0b139e80a58] = env->getMethodID(cls, "<init>", "(Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GPSCivilianNavigationMessage::GPSCivilianNavigationMessage(jboolean a0) : ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_50a2e0b139e80a58, a0)) {}
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
            static PyObject *t_GPSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GPSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GPSCivilianNavigationMessage_init_(t_GPSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_GPSCivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GPSCivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSCivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GPSCivilianNavigationMessage)[] = {
              { Py_tp_methods, t_GPSCivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GPSCivilianNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GPSCivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage),
              NULL
            };

            DEFINE_TYPE(GPSCivilianNavigationMessage, t_GPSCivilianNavigationMessage, GPSCivilianNavigationMessage);

            void t_GPSCivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GPSCivilianNavigationMessage), &PY_TYPE_DEF(GPSCivilianNavigationMessage), module, "GPSCivilianNavigationMessage", 0);
            }

            void t_GPSCivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSCivilianNavigationMessage), "class_", make_descriptor(GPSCivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSCivilianNavigationMessage), "wrapfn_", make_descriptor(t_GPSCivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSCivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GPSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GPSCivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GPSCivilianNavigationMessage::wrap_Object(GPSCivilianNavigationMessage(((t_GPSCivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GPSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GPSCivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GPSCivilianNavigationMessage_init_(t_GPSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              GPSCivilianNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = GPSCivilianNavigationMessage(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/ConjugateGradient.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ConjugateGradient::class$ = NULL;
      jmethodID *ConjugateGradient::mids$ = NULL;
      bool ConjugateGradient::live$ = false;
      ::java::lang::String *ConjugateGradient::OPERATOR = NULL;
      ::java::lang::String *ConjugateGradient::VECTOR = NULL;

      jclass ConjugateGradient::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ConjugateGradient");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_18b5cf63963cf251] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;DZ)V");
          mids$[mid_init$_726464cbb7d28c95] = env->getMethodID(cls, "<init>", "(IDZ)V");
          mids$[mid_shouldCheck_e470b6d9e0d979db] = env->getMethodID(cls, "shouldCheck", "()Z");
          mids$[mid_solveInPlace_914768267c38d49b] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          OPERATOR = new ::java::lang::String(env->getStaticObjectField(cls, "OPERATOR", "Ljava/lang/String;"));
          VECTOR = new ::java::lang::String(env->getStaticObjectField(cls, "VECTOR", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConjugateGradient::ConjugateGradient(const ::org::hipparchus::util::IterationManager & a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_18b5cf63963cf251, a0.this$, a1, a2)) {}

      ConjugateGradient::ConjugateGradient(jint a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_726464cbb7d28c95, a0, a1, a2)) {}

      jboolean ConjugateGradient::shouldCheck() const
      {
        return env->callBooleanMethod(this$, mids$[mid_shouldCheck_e470b6d9e0d979db]);
      }

      ::org::hipparchus::linear::RealVector ConjugateGradient::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_914768267c38d49b], a0.this$, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_ConjugateGradient_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConjugateGradient_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ConjugateGradient_init_(t_ConjugateGradient *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConjugateGradient_shouldCheck(t_ConjugateGradient *self);
      static PyObject *t_ConjugateGradient_solveInPlace(t_ConjugateGradient *self, PyObject *args);

      static PyMethodDef t_ConjugateGradient__methods_[] = {
        DECLARE_METHOD(t_ConjugateGradient, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConjugateGradient, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConjugateGradient, shouldCheck, METH_NOARGS),
        DECLARE_METHOD(t_ConjugateGradient, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConjugateGradient)[] = {
        { Py_tp_methods, t_ConjugateGradient__methods_ },
        { Py_tp_init, (void *) t_ConjugateGradient_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConjugateGradient)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::PreconditionedIterativeLinearSolver),
        NULL
      };

      DEFINE_TYPE(ConjugateGradient, t_ConjugateGradient, ConjugateGradient);

      void t_ConjugateGradient::install(PyObject *module)
      {
        installType(&PY_TYPE(ConjugateGradient), &PY_TYPE_DEF(ConjugateGradient), module, "ConjugateGradient", 0);
      }

      void t_ConjugateGradient::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "class_", make_descriptor(ConjugateGradient::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "wrapfn_", make_descriptor(t_ConjugateGradient::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "boxfn_", make_descriptor(boxObject));
        env->getClass(ConjugateGradient::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "OPERATOR", make_descriptor(j2p(*ConjugateGradient::OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "VECTOR", make_descriptor(j2p(*ConjugateGradient::VECTOR)));
      }

      static PyObject *t_ConjugateGradient_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConjugateGradient::initializeClass, 1)))
          return NULL;
        return t_ConjugateGradient::wrap_Object(ConjugateGradient(((t_ConjugateGradient *) arg)->object.this$));
      }
      static PyObject *t_ConjugateGradient_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConjugateGradient::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ConjugateGradient_init_(t_ConjugateGradient *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            ConjugateGradient object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::hipparchus::util::IterationManager::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ConjugateGradient(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            jboolean a2;
            ConjugateGradient object((jobject) NULL);

            if (!parseArgs(args, "IDZ", &a0, &a1, &a2))
            {
              INT_CALL(object = ConjugateGradient(a0, a1, a2));
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

      static PyObject *t_ConjugateGradient_shouldCheck(t_ConjugateGradient *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.shouldCheck());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ConjugateGradient_solveInPlace(t_ConjugateGradient *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
        ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ::org::hipparchus::linear::RealVector a3((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ConjugateGradient), (PyObject *) self, "solveInPlace", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *GravityFields::class$ = NULL;
          jmethodID *GravityFields::mids$ = NULL;
          bool GravityFields::live$ = false;

          jclass GravityFields::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/GravityFields");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConstantNormalizedProvider_f23a878f7162aa63] = env->getMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_4ff4b36d038a4d30] = env->getMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_cd3e5e7b86486169] = env->getMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanTidesWaves_4a0f7788a82593c4] = env->getMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizedProvider_d3751d16c1e699b1] = env->getMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFields::getConstantNormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantNormalizedProvider_f23a878f7162aa63], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFields::getConstantUnnormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantUnnormalizedProvider_4ff4b36d038a4d30], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFields::getNormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getNormalizedProvider_cd3e5e7b86486169], a0, a1));
          }

          ::java::util::List GravityFields::getOceanTidesWaves(jint a0, jint a1) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOceanTidesWaves_4a0f7788a82593c4], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFields::getUnnormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getUnnormalizedProvider_d3751d16c1e699b1], a0, a1));
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
          static PyObject *t_GravityFields_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFields_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFields_getConstantNormalizedProvider(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getConstantUnnormalizedProvider(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getNormalizedProvider(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getOceanTidesWaves(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getUnnormalizedProvider(t_GravityFields *self, PyObject *args);

          static PyMethodDef t_GravityFields__methods_[] = {
            DECLARE_METHOD(t_GravityFields, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFields, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFields, getConstantNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getConstantUnnormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getOceanTidesWaves, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getUnnormalizedProvider, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GravityFields)[] = {
            { Py_tp_methods, t_GravityFields__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GravityFields)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GravityFields, t_GravityFields, GravityFields);

          void t_GravityFields::install(PyObject *module)
          {
            installType(&PY_TYPE(GravityFields), &PY_TYPE_DEF(GravityFields), module, "GravityFields", 0);
          }

          void t_GravityFields::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFields), "class_", make_descriptor(GravityFields::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFields), "wrapfn_", make_descriptor(t_GravityFields::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFields), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GravityFields_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GravityFields::initializeClass, 1)))
              return NULL;
            return t_GravityFields::wrap_Object(GravityFields(((t_GravityFields *) arg)->object.this$));
          }
          static PyObject *t_GravityFields_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GravityFields::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GravityFields_getConstantNormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getConstantNormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConstantNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getConstantUnnormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getConstantUnnormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConstantUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getNormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedProvider(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getOceanTidesWaves(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getOceanTidesWaves(a0, a1));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
            }

            PyErr_SetArgsError((PyObject *) self, "getOceanTidesWaves", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getUnnormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedProvider(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedProvider", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/CommentsContainer.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/section/Section.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *CommentsContainer::class$ = NULL;
          jmethodID *CommentsContainer::mids$ = NULL;
          bool CommentsContainer::live$ = false;

          jclass CommentsContainer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/CommentsContainer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_acceptComments_e470b6d9e0d979db] = env->getMethodID(cls, "acceptComments", "()Z");
              mids$[mid_addComment_6b161f495ea569b8] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)Z");
              mids$[mid_checkAllowed_cb83b8411211f2d4] = env->getMethodID(cls, "checkAllowed", "(DLjava/lang/Object;Ljava/lang/String;DD)V");
              mids$[mid_checkNotNaN_12e361efba6cf261] = env->getMethodID(cls, "checkNotNaN", "(DLjava/lang/String;)V");
              mids$[mid_checkNotNegative_46ad99eaf34b9cef] = env->getMethodID(cls, "checkNotNegative", "(ILjava/lang/String;)V");
              mids$[mid_checkNotNull_9c0483a41eed4e2f] = env->getMethodID(cls, "checkNotNull", "(Ljava/lang/Object;Ljava/lang/String;)V");
              mids$[mid_getComments_a6156df500549a58] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
              mids$[mid_refuseFurtherComments_7ae3461a92a43152] = env->getMethodID(cls, "refuseFurtherComments", "()V");
              mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CommentsContainer::CommentsContainer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          jboolean CommentsContainer::acceptComments() const
          {
            return env->callBooleanMethod(this$, mids$[mid_acceptComments_e470b6d9e0d979db]);
          }

          jboolean CommentsContainer::addComment(const ::java::lang::String & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_addComment_6b161f495ea569b8], a0.this$);
          }

          void CommentsContainer::checkAllowed(jdouble a0, const ::java::lang::Object & a1, const ::java::lang::String & a2, jdouble a3, jdouble a4) const
          {
            env->callVoidMethod(this$, mids$[mid_checkAllowed_cb83b8411211f2d4], a0, a1.this$, a2.this$, a3, a4);
          }

          void CommentsContainer::checkNotNaN(jdouble a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_checkNotNaN_12e361efba6cf261], a0, a1.this$);
          }

          void CommentsContainer::checkNotNegative(jint a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_checkNotNegative_46ad99eaf34b9cef], a0, a1.this$);
          }

          void CommentsContainer::checkNotNull(const ::java::lang::Object & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_checkNotNull_9c0483a41eed4e2f], a0.this$, a1.this$);
          }

          ::java::util::List CommentsContainer::getComments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_a6156df500549a58]));
          }

          void CommentsContainer::refuseFurtherComments() const
          {
            env->callVoidMethod(this$, mids$[mid_refuseFurtherComments_7ae3461a92a43152]);
          }

          void CommentsContainer::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
          static PyObject *t_CommentsContainer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CommentsContainer_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CommentsContainer_init_(t_CommentsContainer *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CommentsContainer_acceptComments(t_CommentsContainer *self);
          static PyObject *t_CommentsContainer_addComment(t_CommentsContainer *self, PyObject *arg);
          static PyObject *t_CommentsContainer_checkAllowed(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_checkNotNaN(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_checkNotNegative(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_checkNotNull(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_getComments(t_CommentsContainer *self);
          static PyObject *t_CommentsContainer_refuseFurtherComments(t_CommentsContainer *self);
          static PyObject *t_CommentsContainer_validate(t_CommentsContainer *self, PyObject *arg);
          static PyObject *t_CommentsContainer_get__comments(t_CommentsContainer *self, void *data);
          static PyGetSetDef t_CommentsContainer__fields_[] = {
            DECLARE_GET_FIELD(t_CommentsContainer, comments),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CommentsContainer__methods_[] = {
            DECLARE_METHOD(t_CommentsContainer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommentsContainer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommentsContainer, acceptComments, METH_NOARGS),
            DECLARE_METHOD(t_CommentsContainer, addComment, METH_O),
            DECLARE_METHOD(t_CommentsContainer, checkAllowed, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, checkNotNaN, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, checkNotNegative, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, checkNotNull, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, getComments, METH_NOARGS),
            DECLARE_METHOD(t_CommentsContainer, refuseFurtherComments, METH_NOARGS),
            DECLARE_METHOD(t_CommentsContainer, validate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CommentsContainer)[] = {
            { Py_tp_methods, t_CommentsContainer__methods_ },
            { Py_tp_init, (void *) t_CommentsContainer_init_ },
            { Py_tp_getset, t_CommentsContainer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CommentsContainer)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CommentsContainer, t_CommentsContainer, CommentsContainer);

          void t_CommentsContainer::install(PyObject *module)
          {
            installType(&PY_TYPE(CommentsContainer), &PY_TYPE_DEF(CommentsContainer), module, "CommentsContainer", 0);
          }

          void t_CommentsContainer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommentsContainer), "class_", make_descriptor(CommentsContainer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommentsContainer), "wrapfn_", make_descriptor(t_CommentsContainer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommentsContainer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CommentsContainer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CommentsContainer::initializeClass, 1)))
              return NULL;
            return t_CommentsContainer::wrap_Object(CommentsContainer(((t_CommentsContainer *) arg)->object.this$));
          }
          static PyObject *t_CommentsContainer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CommentsContainer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CommentsContainer_init_(t_CommentsContainer *self, PyObject *args, PyObject *kwds)
          {
            CommentsContainer object((jobject) NULL);

            INT_CALL(object = CommentsContainer());
            self->object = object;

            return 0;
          }

          static PyObject *t_CommentsContainer_acceptComments(t_CommentsContainer *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.acceptComments());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_CommentsContainer_addComment(t_CommentsContainer *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.addComment(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addComment", arg);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkAllowed(t_CommentsContainer *self, PyObject *args)
          {
            jdouble a0;
            ::java::lang::Object a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jdouble a3;
            jdouble a4;

            if (!parseArgs(args, "DosDD", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(self->object.checkAllowed(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkAllowed", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkNotNaN(t_CommentsContainer *self, PyObject *args)
          {
            jdouble a0;
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "Ds", &a0, &a1))
            {
              OBJ_CALL(self->object.checkNotNaN(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkNotNaN", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkNotNegative(t_CommentsContainer *self, PyObject *args)
          {
            jint a0;
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "Is", &a0, &a1))
            {
              OBJ_CALL(self->object.checkNotNegative(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkNotNegative", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkNotNull(t_CommentsContainer *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "os", &a0, &a1))
            {
              OBJ_CALL(self->object.checkNotNull(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkNotNull", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_getComments(t_CommentsContainer *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getComments());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_CommentsContainer_refuseFurtherComments(t_CommentsContainer *self)
          {
            OBJ_CALL(self->object.refuseFurtherComments());
            Py_RETURN_NONE;
          }

          static PyObject *t_CommentsContainer_validate(t_CommentsContainer *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "validate", arg);
            return NULL;
          }

          static PyObject *t_CommentsContainer_get__comments(t_CommentsContainer *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getComments());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/PythonMessageType.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonMessageType::class$ = NULL;
          jmethodID *PythonMessageType::mids$ = NULL;
          bool PythonMessageType::live$ = false;

          jclass PythonMessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonMessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_parse_c877a901fff4f40f] = env->getMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Lorg/orekit/gnss/metric/messages/ParsedMessage;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMessageType::PythonMessageType() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonMessageType::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonMessageType::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonMessageType::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_PythonMessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMessageType_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMessageType_init_(t_PythonMessageType *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMessageType_finalize(t_PythonMessageType *self);
          static PyObject *t_PythonMessageType_pythonExtension(t_PythonMessageType *self, PyObject *args);
          static jobject JNICALL t_PythonMessageType_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1);
          static void JNICALL t_PythonMessageType_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMessageType_get__self(t_PythonMessageType *self, void *data);
          static PyGetSetDef t_PythonMessageType__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMessageType, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMessageType__methods_[] = {
            DECLARE_METHOD(t_PythonMessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageType, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMessageType, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMessageType)[] = {
            { Py_tp_methods, t_PythonMessageType__methods_ },
            { Py_tp_init, (void *) t_PythonMessageType_init_ },
            { Py_tp_getset, t_PythonMessageType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMessageType, t_PythonMessageType, PythonMessageType);

          void t_PythonMessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMessageType), &PY_TYPE_DEF(PythonMessageType), module, "PythonMessageType", 1);
          }

          void t_PythonMessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageType), "class_", make_descriptor(PythonMessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageType), "wrapfn_", make_descriptor(t_PythonMessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageType), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMessageType::initializeClass);
            JNINativeMethod methods[] = {
              { "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Lorg/orekit/gnss/metric/messages/ParsedMessage;", (void *) t_PythonMessageType_parse0 },
              { "pythonDecRef", "()V", (void *) t_PythonMessageType_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonMessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMessageType::initializeClass, 1)))
              return NULL;
            return t_PythonMessageType::wrap_Object(PythonMessageType(((t_PythonMessageType *) arg)->object.this$));
          }
          static PyObject *t_PythonMessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMessageType_init_(t_PythonMessageType *self, PyObject *args, PyObject *kwds)
          {
            PythonMessageType object((jobject) NULL);

            INT_CALL(object = PythonMessageType());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMessageType_finalize(t_PythonMessageType *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMessageType_pythonExtension(t_PythonMessageType *self, PyObject *args)
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

          static jobject JNICALL t_PythonMessageType_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageType::mids$[PythonMessageType::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::gnss::metric::messages::ParsedMessage value((jobject) NULL);
            PyObject *o0 = ::org::orekit::gnss::metric::parser::t_EncodedMessage::wrap_Object(::org::orekit::gnss::metric::parser::EncodedMessage(a0));
            PyObject *result = PyObject_CallMethod(obj, "parse", "Oi", o0, (int) a1);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::gnss::metric::messages::ParsedMessage::initializeClass, &value))
            {
              throwTypeError("parse", result);
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

          static void JNICALL t_PythonMessageType_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageType::mids$[PythonMessageType::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMessageType::mids$[PythonMessageType::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMessageType_get__self(t_PythonMessageType *self, void *data)
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
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *AngularRaDec::class$ = NULL;
        jmethodID *AngularRaDec::mids$ = NULL;
        bool AngularRaDec::live$ = false;
        ::java::lang::String *AngularRaDec::MEASUREMENT_TYPE = NULL;

        jclass AngularRaDec::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/AngularRaDec");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3fb53c28cbce9d59] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;[D[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getObservedLineOfSight_b070efa02e5e2595] = env->getMethodID(cls, "getObservedLineOfSight", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getReferenceFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularRaDec::AngularRaDec(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_3fb53c28cbce9d59, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularRaDec::getObservedLineOfSight(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getObservedLineOfSight_b070efa02e5e2595], a0.this$));
        }

        ::org::orekit::frames::Frame AngularRaDec::getReferenceFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_c8fe21bcdac65bf6]));
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
        static PyObject *t_AngularRaDec_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularRaDec_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularRaDec_of_(t_AngularRaDec *self, PyObject *args);
        static int t_AngularRaDec_init_(t_AngularRaDec *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularRaDec_getObservedLineOfSight(t_AngularRaDec *self, PyObject *arg);
        static PyObject *t_AngularRaDec_getReferenceFrame(t_AngularRaDec *self);
        static PyObject *t_AngularRaDec_get__referenceFrame(t_AngularRaDec *self, void *data);
        static PyObject *t_AngularRaDec_get__parameters_(t_AngularRaDec *self, void *data);
        static PyGetSetDef t_AngularRaDec__fields_[] = {
          DECLARE_GET_FIELD(t_AngularRaDec, referenceFrame),
          DECLARE_GET_FIELD(t_AngularRaDec, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularRaDec__methods_[] = {
          DECLARE_METHOD(t_AngularRaDec, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularRaDec, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularRaDec, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularRaDec, getObservedLineOfSight, METH_O),
          DECLARE_METHOD(t_AngularRaDec, getReferenceFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularRaDec)[] = {
          { Py_tp_methods, t_AngularRaDec__methods_ },
          { Py_tp_init, (void *) t_AngularRaDec_init_ },
          { Py_tp_getset, t_AngularRaDec__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularRaDec)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(AngularRaDec, t_AngularRaDec, AngularRaDec);
        PyObject *t_AngularRaDec::wrap_Object(const AngularRaDec& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularRaDec::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularRaDec *self = (t_AngularRaDec *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularRaDec::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularRaDec::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularRaDec *self = (t_AngularRaDec *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularRaDec::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularRaDec), &PY_TYPE_DEF(AngularRaDec), module, "AngularRaDec", 0);
        }

        void t_AngularRaDec::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "class_", make_descriptor(AngularRaDec::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "wrapfn_", make_descriptor(t_AngularRaDec::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "boxfn_", make_descriptor(boxObject));
          env->getClass(AngularRaDec::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "MEASUREMENT_TYPE", make_descriptor(j2p(*AngularRaDec::MEASUREMENT_TYPE)));
        }

        static PyObject *t_AngularRaDec_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularRaDec::initializeClass, 1)))
            return NULL;
          return t_AngularRaDec::wrap_Object(AngularRaDec(((t_AngularRaDec *) arg)->object.this$));
        }
        static PyObject *t_AngularRaDec_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularRaDec::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularRaDec_of_(t_AngularRaDec *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularRaDec_init_(t_AngularRaDec *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          JArray< jdouble > a3((jobject) NULL);
          JArray< jdouble > a4((jobject) NULL);
          JArray< jdouble > a5((jobject) NULL);
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          AngularRaDec object((jobject) NULL);

          if (!parseArgs(args, "kkk[D[D[Dk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = AngularRaDec(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularRaDec);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularRaDec_getObservedLineOfSight(t_AngularRaDec *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getObservedLineOfSight(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getObservedLineOfSight", arg);
          return NULL;
        }

        static PyObject *t_AngularRaDec_getReferenceFrame(t_AngularRaDec *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_AngularRaDec_get__parameters_(t_AngularRaDec *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AngularRaDec_get__referenceFrame(t_AngularRaDec *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *SbasId::class$ = NULL;
          jmethodID *SbasId::mids$ = NULL;
          bool SbasId::live$ = false;
          SbasId *SbasId::A_SBAS = NULL;
          SbasId *SbasId::BDSBAS = NULL;
          SbasId *SbasId::EGNOS = NULL;
          SbasId *SbasId::GAGAN = NULL;
          SbasId *SbasId::KASS = NULL;
          SbasId *SbasId::MSAS = NULL;
          SbasId *SbasId::SACCSA = NULL;
          SbasId *SbasId::SDCM = NULL;
          SbasId *SbasId::SPAN = NULL;
          SbasId *SbasId::WAAS = NULL;

          jclass SbasId::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/SbasId");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_496c0b13cf01a634] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/SbasId;");
              mids$[mid_values_904655b2c454c78b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/SbasId;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              A_SBAS = new SbasId(env->getStaticObjectField(cls, "A_SBAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              BDSBAS = new SbasId(env->getStaticObjectField(cls, "BDSBAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              EGNOS = new SbasId(env->getStaticObjectField(cls, "EGNOS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              GAGAN = new SbasId(env->getStaticObjectField(cls, "GAGAN", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              KASS = new SbasId(env->getStaticObjectField(cls, "KASS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              MSAS = new SbasId(env->getStaticObjectField(cls, "MSAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              SACCSA = new SbasId(env->getStaticObjectField(cls, "SACCSA", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              SDCM = new SbasId(env->getStaticObjectField(cls, "SDCM", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              SPAN = new SbasId(env->getStaticObjectField(cls, "SPAN", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              WAAS = new SbasId(env->getStaticObjectField(cls, "WAAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SbasId SbasId::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SbasId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_496c0b13cf01a634], a0.this$));
          }

          JArray< SbasId > SbasId::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SbasId >(env->callStaticObjectMethod(cls, mids$[mid_values_904655b2c454c78b]));
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
        namespace navigation {
          static PyObject *t_SbasId_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SbasId_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SbasId_of_(t_SbasId *self, PyObject *args);
          static PyObject *t_SbasId_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SbasId_values(PyTypeObject *type);
          static PyObject *t_SbasId_get__parameters_(t_SbasId *self, void *data);
          static PyGetSetDef t_SbasId__fields_[] = {
            DECLARE_GET_FIELD(t_SbasId, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SbasId__methods_[] = {
            DECLARE_METHOD(t_SbasId, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SbasId, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SbasId, of_, METH_VARARGS),
            DECLARE_METHOD(t_SbasId, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SbasId, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SbasId)[] = {
            { Py_tp_methods, t_SbasId__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SbasId__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SbasId)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SbasId, t_SbasId, SbasId);
          PyObject *t_SbasId::wrap_Object(const SbasId& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SbasId::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SbasId *self = (t_SbasId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SbasId::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SbasId::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SbasId *self = (t_SbasId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SbasId::install(PyObject *module)
          {
            installType(&PY_TYPE(SbasId), &PY_TYPE_DEF(SbasId), module, "SbasId", 0);
          }

          void t_SbasId::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "class_", make_descriptor(SbasId::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "wrapfn_", make_descriptor(t_SbasId::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "boxfn_", make_descriptor(boxObject));
            env->getClass(SbasId::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "A_SBAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::A_SBAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "BDSBAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::BDSBAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "EGNOS", make_descriptor(t_SbasId::wrap_Object(*SbasId::EGNOS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "GAGAN", make_descriptor(t_SbasId::wrap_Object(*SbasId::GAGAN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "KASS", make_descriptor(t_SbasId::wrap_Object(*SbasId::KASS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "MSAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::MSAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "SACCSA", make_descriptor(t_SbasId::wrap_Object(*SbasId::SACCSA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "SDCM", make_descriptor(t_SbasId::wrap_Object(*SbasId::SDCM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "SPAN", make_descriptor(t_SbasId::wrap_Object(*SbasId::SPAN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "WAAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::WAAS)));
          }

          static PyObject *t_SbasId_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SbasId::initializeClass, 1)))
              return NULL;
            return t_SbasId::wrap_Object(SbasId(((t_SbasId *) arg)->object.this$));
          }
          static PyObject *t_SbasId_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SbasId::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SbasId_of_(t_SbasId *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SbasId_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SbasId result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::SbasId::valueOf(a0));
              return t_SbasId::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SbasId_values(PyTypeObject *type)
          {
            JArray< SbasId > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::SbasId::values());
            return JArray<jobject>(result.this$).wrap(t_SbasId::wrap_jobject);
          }
          static PyObject *t_SbasId_get__parameters_(t_SbasId *self, void *data)
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
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *SpacecraftToObservedBody::class$ = NULL;
        jmethodID *SpacecraftToObservedBody::mids$ = NULL;
        bool SpacecraftToObservedBody::live$ = false;

        jclass SpacecraftToObservedBody::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/SpacecraftToObservedBody");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ef5497a4dfef0861] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;DDLjava/util/List;Ljava/util/List;)V");
            mids$[mid_init$_6b13bb0e20d61609] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;DDLjava/util/List;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)V");
            mids$[mid_getBodyFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getBodyToInertial_d55545a64ea4a9a7] = env->getMethodID(cls, "getBodyToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getInertialFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInertialToBody_d55545a64ea4a9a7] = env->getMethodID(cls, "getInertialToBody", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getOvershootTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getOvershootTolerance", "()D");
            mids$[mid_getScToInertial_d55545a64ea4a9a7] = env->getMethodID(cls, "getScToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getTStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getTStep", "()D");
            mids$[mid_isInRange_ee2067c5768b6768] = env->getMethodID(cls, "isInRange", "(Lorg/orekit/time/AbsoluteDate;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SpacecraftToObservedBody::SpacecraftToObservedBody(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, const ::java::util::List & a6, const ::java::util::List & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ef5497a4dfef0861, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6.this$, a7.this$)) {}

        SpacecraftToObservedBody::SpacecraftToObservedBody(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, const ::java::util::List & a6, jint a7, const ::org::orekit::utils::CartesianDerivativesFilter & a8, const ::java::util::List & a9, jint a10, const ::org::orekit::utils::AngularDerivativesFilter & a11) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6b13bb0e20d61609, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6.this$, a7, a8.this$, a9.this$, a10, a11.this$)) {}

        ::org::orekit::frames::Frame SpacecraftToObservedBody::getBodyFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_c8fe21bcdac65bf6]));
        }

        ::org::orekit::frames::Transform SpacecraftToObservedBody::getBodyToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getBodyToInertial_d55545a64ea4a9a7], a0.this$));
        }

        ::org::orekit::frames::Frame SpacecraftToObservedBody::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_c8fe21bcdac65bf6]));
        }

        ::org::orekit::frames::Transform SpacecraftToObservedBody::getInertialToBody(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getInertialToBody_d55545a64ea4a9a7], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SpacecraftToObservedBody::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate SpacecraftToObservedBody::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
        }

        jdouble SpacecraftToObservedBody::getOvershootTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOvershootTolerance_456d9a2f64d6b28d]);
        }

        ::org::orekit::frames::Transform SpacecraftToObservedBody::getScToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getScToInertial_d55545a64ea4a9a7], a0.this$));
        }

        jdouble SpacecraftToObservedBody::getTStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTStep_456d9a2f64d6b28d]);
        }

        jboolean SpacecraftToObservedBody::isInRange(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isInRange_ee2067c5768b6768], a0.this$);
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
      namespace utils {
        static PyObject *t_SpacecraftToObservedBody_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SpacecraftToObservedBody_init_(t_SpacecraftToObservedBody *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SpacecraftToObservedBody_getBodyFrame(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getBodyToInertial(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_getInertialFrame(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getInertialToBody(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_getMaxDate(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getMinDate(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getOvershootTolerance(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getScToInertial(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_getTStep(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_isInRange(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_get__bodyFrame(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__inertialFrame(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__maxDate(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__minDate(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__overshootTolerance(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__tStep(t_SpacecraftToObservedBody *self, void *data);
        static PyGetSetDef t_SpacecraftToObservedBody__fields_[] = {
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, bodyFrame),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, inertialFrame),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, maxDate),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, minDate),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, overshootTolerance),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, tStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SpacecraftToObservedBody__methods_[] = {
          DECLARE_METHOD(t_SpacecraftToObservedBody, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getBodyFrame, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getBodyToInertial, METH_O),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getInertialToBody, METH_O),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getOvershootTolerance, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getScToInertial, METH_O),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getTStep, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, isInRange, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SpacecraftToObservedBody)[] = {
          { Py_tp_methods, t_SpacecraftToObservedBody__methods_ },
          { Py_tp_init, (void *) t_SpacecraftToObservedBody_init_ },
          { Py_tp_getset, t_SpacecraftToObservedBody__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SpacecraftToObservedBody)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SpacecraftToObservedBody, t_SpacecraftToObservedBody, SpacecraftToObservedBody);

        void t_SpacecraftToObservedBody::install(PyObject *module)
        {
          installType(&PY_TYPE(SpacecraftToObservedBody), &PY_TYPE_DEF(SpacecraftToObservedBody), module, "SpacecraftToObservedBody", 0);
        }

        void t_SpacecraftToObservedBody::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftToObservedBody), "class_", make_descriptor(SpacecraftToObservedBody::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftToObservedBody), "wrapfn_", make_descriptor(t_SpacecraftToObservedBody::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftToObservedBody), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SpacecraftToObservedBody_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SpacecraftToObservedBody::initializeClass, 1)))
            return NULL;
          return t_SpacecraftToObservedBody::wrap_Object(SpacecraftToObservedBody(((t_SpacecraftToObservedBody *) arg)->object.this$));
        }
        static PyObject *t_SpacecraftToObservedBody_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SpacecraftToObservedBody::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SpacecraftToObservedBody_init_(t_SpacecraftToObservedBody *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              jdouble a4;
              jdouble a5;
              ::java::util::List a6((jobject) NULL);
              PyTypeObject **p6;
              ::java::util::List a7((jobject) NULL);
              PyTypeObject **p7;
              SpacecraftToObservedBody object((jobject) NULL);

              if (!parseArgs(args, "kkkkDDKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_List::parameters_, &a7, &p7, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = SpacecraftToObservedBody(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 12:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              jdouble a4;
              jdouble a5;
              ::java::util::List a6((jobject) NULL);
              PyTypeObject **p6;
              jint a7;
              ::org::orekit::utils::CartesianDerivativesFilter a8((jobject) NULL);
              PyTypeObject **p8;
              ::java::util::List a9((jobject) NULL);
              PyTypeObject **p9;
              jint a10;
              ::org::orekit::utils::AngularDerivativesFilter a11((jobject) NULL);
              PyTypeObject **p11;
              SpacecraftToObservedBody object((jobject) NULL);

              if (!parseArgs(args, "kkkkDDKIKKIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_List::parameters_, &a7, &a8, &p8, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a9, &p9, ::java::util::t_List::parameters_, &a10, &a11, &p11, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
              {
                INT_CALL(object = SpacecraftToObservedBody(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
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

        static PyObject *t_SpacecraftToObservedBody_getBodyFrame(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getBodyToInertial(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getBodyToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getBodyToInertial", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_getInertialFrame(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getInertialToBody(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInertialToBody(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInertialToBody", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_getMaxDate(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getMinDate(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getOvershootTolerance(t_SpacecraftToObservedBody *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SpacecraftToObservedBody_getScToInertial(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getScToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getScToInertial", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_getTStep(t_SpacecraftToObservedBody *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SpacecraftToObservedBody_isInRange(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.isInRange(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isInRange", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_get__bodyFrame(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__inertialFrame(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__maxDate(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__minDate(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__overshootTolerance(t_SpacecraftToObservedBody *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__tStep(t_SpacecraftToObservedBody *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Side::class$ = NULL;
        jmethodID *Side::mids$ = NULL;
        bool Side::live$ = false;
        Side *Side::BOTH = NULL;
        Side *Side::HYPER = NULL;
        Side *Side::MINUS = NULL;
        Side *Side::PLUS = NULL;

        jclass Side::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Side");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_39e8b5ae99e73699] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/partitioning/Side;");
            mids$[mid_values_71cf5da689c4a3d8] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/partitioning/Side;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BOTH = new Side(env->getStaticObjectField(cls, "BOTH", "Lorg/hipparchus/geometry/partitioning/Side;"));
            HYPER = new Side(env->getStaticObjectField(cls, "HYPER", "Lorg/hipparchus/geometry/partitioning/Side;"));
            MINUS = new Side(env->getStaticObjectField(cls, "MINUS", "Lorg/hipparchus/geometry/partitioning/Side;"));
            PLUS = new Side(env->getStaticObjectField(cls, "PLUS", "Lorg/hipparchus/geometry/partitioning/Side;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Side Side::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Side(env->callStaticObjectMethod(cls, mids$[mid_valueOf_39e8b5ae99e73699], a0.this$));
        }

        JArray< Side > Side::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Side >(env->callStaticObjectMethod(cls, mids$[mid_values_71cf5da689c4a3d8]));
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
        static PyObject *t_Side_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Side_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Side_of_(t_Side *self, PyObject *args);
        static PyObject *t_Side_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Side_values(PyTypeObject *type);
        static PyObject *t_Side_get__parameters_(t_Side *self, void *data);
        static PyGetSetDef t_Side__fields_[] = {
          DECLARE_GET_FIELD(t_Side, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Side__methods_[] = {
          DECLARE_METHOD(t_Side, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Side, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Side, of_, METH_VARARGS),
          DECLARE_METHOD(t_Side, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Side, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Side)[] = {
          { Py_tp_methods, t_Side__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Side__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Side)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Side, t_Side, Side);
        PyObject *t_Side::wrap_Object(const Side& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Side::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Side *self = (t_Side *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Side::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Side::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Side *self = (t_Side *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Side::install(PyObject *module)
        {
          installType(&PY_TYPE(Side), &PY_TYPE_DEF(Side), module, "Side", 0);
        }

        void t_Side::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "class_", make_descriptor(Side::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "wrapfn_", make_descriptor(t_Side::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "boxfn_", make_descriptor(boxObject));
          env->getClass(Side::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "BOTH", make_descriptor(t_Side::wrap_Object(*Side::BOTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "HYPER", make_descriptor(t_Side::wrap_Object(*Side::HYPER)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "MINUS", make_descriptor(t_Side::wrap_Object(*Side::MINUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "PLUS", make_descriptor(t_Side::wrap_Object(*Side::PLUS)));
        }

        static PyObject *t_Side_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Side::initializeClass, 1)))
            return NULL;
          return t_Side::wrap_Object(Side(((t_Side *) arg)->object.this$));
        }
        static PyObject *t_Side_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Side::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Side_of_(t_Side *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Side_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Side result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Side::valueOf(a0));
            return t_Side::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Side_values(PyTypeObject *type)
        {
          JArray< Side > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Side::values());
          return JArray<jobject>(result.this$).wrap(t_Side::wrap_jobject);
        }
        static PyObject *t_Side_get__parameters_(t_Side *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
