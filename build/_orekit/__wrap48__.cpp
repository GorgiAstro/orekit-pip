#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm04::class$ = NULL;
              jmethodID *SsrIgm04::mids$ = NULL;
              bool SsrIgm04::live$ = false;

              jclass SsrIgm04::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_75b701a8d6ae6349] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm04Data_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSsrIgm04Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm04::SsrIgm04(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_75b701a8d6ae6349, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm04::getSsrIgm04Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm04Data_dbcb8bbac6b35e0d]));
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm04_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04_of_(t_SsrIgm04 *self, PyObject *args);
              static int t_SsrIgm04_init_(t_SsrIgm04 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm04_getSsrIgm04Data(t_SsrIgm04 *self);
              static PyObject *t_SsrIgm04_get__ssrIgm04Data(t_SsrIgm04 *self, void *data);
              static PyObject *t_SsrIgm04_get__parameters_(t_SsrIgm04 *self, void *data);
              static PyGetSetDef t_SsrIgm04__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm04, ssrIgm04Data),
                DECLARE_GET_FIELD(t_SsrIgm04, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm04__methods_[] = {
                DECLARE_METHOD(t_SsrIgm04, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm04, getSsrIgm04Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm04)[] = {
                { Py_tp_methods, t_SsrIgm04__methods_ },
                { Py_tp_init, (void *) t_SsrIgm04_init_ },
                { Py_tp_getset, t_SsrIgm04__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm04)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm04, t_SsrIgm04, SsrIgm04);
              PyObject *t_SsrIgm04::wrap_Object(const SsrIgm04& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm04::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm04 *self = (t_SsrIgm04 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm04::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm04::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm04 *self = (t_SsrIgm04 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm04::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm04), &PY_TYPE_DEF(SsrIgm04), module, "SsrIgm04", 0);
              }

              void t_SsrIgm04::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04), "class_", make_descriptor(SsrIgm04::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04), "wrapfn_", make_descriptor(t_SsrIgm04::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm04_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm04::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm04::wrap_Object(SsrIgm04(((t_SsrIgm04 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm04_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm04::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm04_of_(t_SsrIgm04 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm04_init_(t_SsrIgm04 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm04 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm04(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm04Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm04Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm04_getSsrIgm04Data(t_SsrIgm04 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm04Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm04_get__parameters_(t_SsrIgm04 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm04_get__ssrIgm04Data(t_SsrIgm04 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm04Data());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/orekit/gnss/attitude/PythonGNSSAttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *PythonGNSSAttitudeProvider::class$ = NULL;
        jmethodID *PythonGNSSAttitudeProvider::mids$ = NULL;
        bool PythonGNSSAttitudeProvider::live$ = false;

        jclass PythonGNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/PythonGNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
            mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_validityEnd_80e11148db499dda] = env->getMethodID(cls, "validityEnd", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_validityStart_80e11148db499dda] = env->getMethodID(cls, "validityStart", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonGNSSAttitudeProvider::PythonGNSSAttitudeProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonGNSSAttitudeProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonGNSSAttitudeProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonGNSSAttitudeProvider::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace attitude {
        static PyObject *t_PythonGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonGNSSAttitudeProvider_init_(t_PythonGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonGNSSAttitudeProvider_finalize(t_PythonGNSSAttitudeProvider *self);
        static PyObject *t_PythonGNSSAttitudeProvider_pythonExtension(t_PythonGNSSAttitudeProvider *self, PyObject *args);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonGNSSAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityEnd3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityStart4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonGNSSAttitudeProvider_get__self(t_PythonGNSSAttitudeProvider *self, void *data);
        static PyGetSetDef t_PythonGNSSAttitudeProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonGNSSAttitudeProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonGNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonGNSSAttitudeProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonGNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_PythonGNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) t_PythonGNSSAttitudeProvider_init_ },
          { Py_tp_getset, t_PythonGNSSAttitudeProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonGNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonGNSSAttitudeProvider, t_PythonGNSSAttitudeProvider, PythonGNSSAttitudeProvider);

        void t_PythonGNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonGNSSAttitudeProvider), &PY_TYPE_DEF(PythonGNSSAttitudeProvider), module, "PythonGNSSAttitudeProvider", 1);
        }

        void t_PythonGNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGNSSAttitudeProvider), "class_", make_descriptor(PythonGNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGNSSAttitudeProvider), "wrapfn_", make_descriptor(t_PythonGNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonGNSSAttitudeProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonGNSSAttitudeProvider_getAttitude0 },
            { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonGNSSAttitudeProvider_getAttitude1 },
            { "pythonDecRef", "()V", (void *) t_PythonGNSSAttitudeProvider_pythonDecRef2 },
            { "validityEnd", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonGNSSAttitudeProvider_validityEnd3 },
            { "validityStart", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonGNSSAttitudeProvider_validityStart4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonGNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_PythonGNSSAttitudeProvider::wrap_Object(PythonGNSSAttitudeProvider(((t_PythonGNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonGNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonGNSSAttitudeProvider_init_(t_PythonGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonGNSSAttitudeProvider object((jobject) NULL);

          INT_CALL(object = PythonGNSSAttitudeProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonGNSSAttitudeProvider_finalize(t_PythonGNSSAttitudeProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonGNSSAttitudeProvider_pythonExtension(t_PythonGNSSAttitudeProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::Attitude value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
          {
            throwTypeError("getAttitude", result);
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

        static jobject JNICALL t_PythonGNSSAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
          {
            throwTypeError("getAttitude", result);
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

        static void JNICALL t_PythonGNSSAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityEnd3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "validityEnd", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("validityEnd", result);
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

        static jobject JNICALL t_PythonGNSSAttitudeProvider_validityStart4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGNSSAttitudeProvider::mids$[PythonGNSSAttitudeProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "validityStart", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("validityStart", result);
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

        static PyObject *t_PythonGNSSAttitudeProvider_get__self(t_PythonGNSSAttitudeProvider *self, void *data)
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
#include "org/hipparchus/stat/regression/MultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *MultipleLinearRegression::class$ = NULL;
        jmethodID *MultipleLinearRegression::mids$ = NULL;
        bool MultipleLinearRegression::live$ = false;

        jclass MultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/MultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimateRegressandVariance_9981f74b2d109da6] = env->getMethodID(cls, "estimateRegressandVariance", "()D");
            mids$[mid_estimateRegressionParameters_be783177b060994b] = env->getMethodID(cls, "estimateRegressionParameters", "()[D");
            mids$[mid_estimateRegressionParametersStandardErrors_be783177b060994b] = env->getMethodID(cls, "estimateRegressionParametersStandardErrors", "()[D");
            mids$[mid_estimateRegressionParametersVariance_eda3f19b8225f78f] = env->getMethodID(cls, "estimateRegressionParametersVariance", "()[[D");
            mids$[mid_estimateResiduals_be783177b060994b] = env->getMethodID(cls, "estimateResiduals", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble MultipleLinearRegression::estimateRegressandVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateRegressandVariance_9981f74b2d109da6]);
        }

        JArray< jdouble > MultipleLinearRegression::estimateRegressionParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParameters_be783177b060994b]));
        }

        JArray< jdouble > MultipleLinearRegression::estimateRegressionParametersStandardErrors() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersStandardErrors_be783177b060994b]));
        }

        JArray< JArray< jdouble > > MultipleLinearRegression::estimateRegressionParametersVariance() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersVariance_eda3f19b8225f78f]));
        }

        JArray< jdouble > MultipleLinearRegression::estimateResiduals() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateResiduals_be783177b060994b]));
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
        static PyObject *t_MultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultipleLinearRegression_estimateRegressandVariance(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateRegressionParameters(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersStandardErrors(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersVariance(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateResiduals(t_MultipleLinearRegression *self);

        static PyMethodDef t_MultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_MultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressandVariance, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressionParameters, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressionParametersStandardErrors, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressionParametersVariance, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateResiduals, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultipleLinearRegression)[] = {
          { Py_tp_methods, t_MultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultipleLinearRegression, t_MultipleLinearRegression, MultipleLinearRegression);

        void t_MultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(MultipleLinearRegression), &PY_TYPE_DEF(MultipleLinearRegression), module, "MultipleLinearRegression", 0);
        }

        void t_MultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleLinearRegression), "class_", make_descriptor(MultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleLinearRegression), "wrapfn_", make_descriptor(t_MultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_MultipleLinearRegression::wrap_Object(MultipleLinearRegression(((t_MultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_MultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressandVariance(t_MultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateRegressandVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressionParameters(t_MultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParameters());
          return result.wrap();
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersStandardErrors(t_MultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersStandardErrors());
          return result.wrap();
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersVariance(t_MultipleLinearRegression *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersVariance());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_MultipleLinearRegression_estimateResiduals(t_MultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateResiduals());
          return result.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonShortPeriodTerms.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonShortPeriodTerms::class$ = NULL;
            jmethodID *PythonShortPeriodTerms::mids$ = NULL;
            bool PythonShortPeriodTerms::live$ = false;

            jclass PythonShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getCoefficients_e36d03a99e00e4c3] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_d2c8eb4129821f0e] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_value_12bafed5e5351c0d] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/Orbit;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonShortPeriodTerms::PythonShortPeriodTerms() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonShortPeriodTerms::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonShortPeriodTerms::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonShortPeriodTerms::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
            static PyObject *t_PythonShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonShortPeriodTerms_init_(t_PythonShortPeriodTerms *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonShortPeriodTerms_finalize(t_PythonShortPeriodTerms *self);
            static PyObject *t_PythonShortPeriodTerms_pythonExtension(t_PythonShortPeriodTerms *self, PyObject *args);
            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonShortPeriodTerms_get__self(t_PythonShortPeriodTerms *self, void *data);
            static PyGetSetDef t_PythonShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_PythonShortPeriodTerms, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_PythonShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonShortPeriodTerms, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonShortPeriodTerms, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonShortPeriodTerms)[] = {
              { Py_tp_methods, t_PythonShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) t_PythonShortPeriodTerms_init_ },
              { Py_tp_getset, t_PythonShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonShortPeriodTerms, t_PythonShortPeriodTerms, PythonShortPeriodTerms);

            void t_PythonShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonShortPeriodTerms), &PY_TYPE_DEF(PythonShortPeriodTerms), module, "PythonShortPeriodTerms", 1);
            }

            void t_PythonShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortPeriodTerms), "class_", make_descriptor(PythonShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortPeriodTerms), "wrapfn_", make_descriptor(t_PythonShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonShortPeriodTerms::initializeClass);
              JNINativeMethod methods[] = {
                { "getCoefficients", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Set;)Ljava/util/Map;", (void *) t_PythonShortPeriodTerms_getCoefficients0 },
                { "getCoefficientsKeyPrefix", "()Ljava/lang/String;", (void *) t_PythonShortPeriodTerms_getCoefficientsKeyPrefix1 },
                { "pythonDecRef", "()V", (void *) t_PythonShortPeriodTerms_pythonDecRef2 },
                { "value", "(Lorg/orekit/orbits/Orbit;)[D", (void *) t_PythonShortPeriodTerms_value3 },
              };
              env->registerNatives(cls, methods, 4);
            }

            static PyObject *t_PythonShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_PythonShortPeriodTerms::wrap_Object(PythonShortPeriodTerms(((t_PythonShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_PythonShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonShortPeriodTerms_init_(t_PythonShortPeriodTerms *self, PyObject *args, PyObject *kwds)
            {
              PythonShortPeriodTerms object((jobject) NULL);

              INT_CALL(object = PythonShortPeriodTerms());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonShortPeriodTerms_finalize(t_PythonShortPeriodTerms *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonShortPeriodTerms_pythonExtension(t_PythonShortPeriodTerms *self, PyObject *args)
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

            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::Map value((jobject) NULL);
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *o1 = ::java::util::t_Set::wrap_Object(::java::util::Set(a1));
              PyObject *result = PyObject_CallMethod(obj, "getCoefficients", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
              {
                throwTypeError("getCoefficients", result);
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

            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getCoefficientsKeyPrefix", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getCoefficientsKeyPrefix", result);
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

            static void JNICALL t_PythonShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jobject JNICALL t_PythonShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
              PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("value", result);
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

            static PyObject *t_PythonShortPeriodTerms_get__self(t_PythonShortPeriodTerms *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsBashforthFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsBashforthFieldIntegrator::class$ = NULL;
        jmethodID *AdamsBashforthFieldIntegrator::mids$ = NULL;
        bool AdamsBashforthFieldIntegrator::live$ = false;

        jclass AdamsBashforthFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsBashforthFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d184aa390d2d04c4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDD[D[D)V");
            mids$[mid_init$_a87bd547f4148176] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDDDD)V");
            mids$[mid_errorEstimation_6aa3626a66e9d9b5] = env->getMethodID(cls, "errorEstimation", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/FieldMatrix;)D");
            mids$[mid_finalizeStep_0548923e7e2ccdf5] = env->getMethodID(cls, "finalizeStep", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthFieldIntegrator::AdamsBashforthFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_d184aa390d2d04c4, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        AdamsBashforthFieldIntegrator::AdamsBashforthFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a87bd547f4148176, a0.this$, a1, a2, a3, a4, a5)) {}
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
      namespace nonstiff {
        static PyObject *t_AdamsBashforthFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegrator_of_(t_AdamsBashforthFieldIntegrator *self, PyObject *args);
        static int t_AdamsBashforthFieldIntegrator_init_(t_AdamsBashforthFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsBashforthFieldIntegrator_get__parameters_(t_AdamsBashforthFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdamsBashforthFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsBashforthFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsBashforthFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthFieldIntegrator)[] = {
          { Py_tp_methods, t_AdamsBashforthFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthFieldIntegrator_init_ },
          { Py_tp_getset, t_AdamsBashforthFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthFieldIntegrator, t_AdamsBashforthFieldIntegrator, AdamsBashforthFieldIntegrator);
        PyObject *t_AdamsBashforthFieldIntegrator::wrap_Object(const AdamsBashforthFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegrator *self = (t_AdamsBashforthFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsBashforthFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegrator *self = (t_AdamsBashforthFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsBashforthFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthFieldIntegrator), &PY_TYPE_DEF(AdamsBashforthFieldIntegrator), module, "AdamsBashforthFieldIntegrator", 0);
        }

        void t_AdamsBashforthFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegrator), "class_", make_descriptor(AdamsBashforthFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegrator), "wrapfn_", make_descriptor(t_AdamsBashforthFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthFieldIntegrator::wrap_Object(AdamsBashforthFieldIntegrator(((t_AdamsBashforthFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsBashforthFieldIntegrator_of_(t_AdamsBashforthFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsBashforthFieldIntegrator_init_(t_AdamsBashforthFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              AdamsBashforthFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsBashforthFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              AdamsBashforthFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsBashforthFieldIntegrator(a0, a1, a2, a3, a4, a5));
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
        static PyObject *t_AdamsBashforthFieldIntegrator_get__parameters_(t_AdamsBashforthFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/LenseThirringRelativity.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *LenseThirringRelativity::class$ = NULL;
        jmethodID *LenseThirringRelativity::mids$ = NULL;
        bool LenseThirringRelativity::live$ = false;

        jclass LenseThirringRelativity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/LenseThirringRelativity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_868ec0d787c86da6] = env->getMethodID(cls, "<init>", "(DLorg/orekit/frames/Frame;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LenseThirringRelativity::LenseThirringRelativity(jdouble a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_868ec0d787c86da6, a0, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LenseThirringRelativity::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LenseThirringRelativity::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        jboolean LenseThirringRelativity::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        ::java::util::List LenseThirringRelativity::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
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
        static PyObject *t_LenseThirringRelativity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LenseThirringRelativity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LenseThirringRelativity_init_(t_LenseThirringRelativity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LenseThirringRelativity_acceleration(t_LenseThirringRelativity *self, PyObject *args);
        static PyObject *t_LenseThirringRelativity_dependsOnPositionOnly(t_LenseThirringRelativity *self);
        static PyObject *t_LenseThirringRelativity_getParametersDrivers(t_LenseThirringRelativity *self);
        static PyObject *t_LenseThirringRelativity_get__parametersDrivers(t_LenseThirringRelativity *self, void *data);
        static PyGetSetDef t_LenseThirringRelativity__fields_[] = {
          DECLARE_GET_FIELD(t_LenseThirringRelativity, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LenseThirringRelativity__methods_[] = {
          DECLARE_METHOD(t_LenseThirringRelativity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LenseThirringRelativity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LenseThirringRelativity, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_LenseThirringRelativity, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_LenseThirringRelativity, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LenseThirringRelativity)[] = {
          { Py_tp_methods, t_LenseThirringRelativity__methods_ },
          { Py_tp_init, (void *) t_LenseThirringRelativity_init_ },
          { Py_tp_getset, t_LenseThirringRelativity__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LenseThirringRelativity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LenseThirringRelativity, t_LenseThirringRelativity, LenseThirringRelativity);

        void t_LenseThirringRelativity::install(PyObject *module)
        {
          installType(&PY_TYPE(LenseThirringRelativity), &PY_TYPE_DEF(LenseThirringRelativity), module, "LenseThirringRelativity", 0);
        }

        void t_LenseThirringRelativity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LenseThirringRelativity), "class_", make_descriptor(LenseThirringRelativity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LenseThirringRelativity), "wrapfn_", make_descriptor(t_LenseThirringRelativity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LenseThirringRelativity), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LenseThirringRelativity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LenseThirringRelativity::initializeClass, 1)))
            return NULL;
          return t_LenseThirringRelativity::wrap_Object(LenseThirringRelativity(((t_LenseThirringRelativity *) arg)->object.this$));
        }
        static PyObject *t_LenseThirringRelativity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LenseThirringRelativity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LenseThirringRelativity_init_(t_LenseThirringRelativity *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          LenseThirringRelativity object((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            INT_CALL(object = LenseThirringRelativity(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LenseThirringRelativity_acceleration(t_LenseThirringRelativity *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_LenseThirringRelativity_dependsOnPositionOnly(t_LenseThirringRelativity *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_LenseThirringRelativity_getParametersDrivers(t_LenseThirringRelativity *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_LenseThirringRelativity_get__parametersDrivers(t_LenseThirringRelativity *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonThrustDirectionProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonThrustDirectionProvider::class$ = NULL;
          jmethodID *PythonThrustDirectionProvider::mids$ = NULL;
          bool PythonThrustDirectionProvider::live$ = false;

          jclass PythonThrustDirectionProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonThrustDirectionProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeThrustDirection_f778d81301c7076a] = env->getMethodID(cls, "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonThrustDirectionProvider::PythonThrustDirectionProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonThrustDirectionProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonThrustDirectionProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonThrustDirectionProvider::pythonExtension(jlong a0) const
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
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_PythonThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonThrustDirectionProvider_init_(t_PythonThrustDirectionProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonThrustDirectionProvider_finalize(t_PythonThrustDirectionProvider *self);
          static PyObject *t_PythonThrustDirectionProvider_pythonExtension(t_PythonThrustDirectionProvider *self, PyObject *args);
          static jobject JNICALL t_PythonThrustDirectionProvider_computeThrustDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonThrustDirectionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonThrustDirectionProvider_get__self(t_PythonThrustDirectionProvider *self, void *data);
          static PyGetSetDef t_PythonThrustDirectionProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonThrustDirectionProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonThrustDirectionProvider__methods_[] = {
            DECLARE_METHOD(t_PythonThrustDirectionProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustDirectionProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustDirectionProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonThrustDirectionProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonThrustDirectionProvider)[] = {
            { Py_tp_methods, t_PythonThrustDirectionProvider__methods_ },
            { Py_tp_init, (void *) t_PythonThrustDirectionProvider_init_ },
            { Py_tp_getset, t_PythonThrustDirectionProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonThrustDirectionProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonThrustDirectionProvider, t_PythonThrustDirectionProvider, PythonThrustDirectionProvider);

          void t_PythonThrustDirectionProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonThrustDirectionProvider), &PY_TYPE_DEF(PythonThrustDirectionProvider), module, "PythonThrustDirectionProvider", 1);
          }

          void t_PythonThrustDirectionProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustDirectionProvider), "class_", make_descriptor(PythonThrustDirectionProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustDirectionProvider), "wrapfn_", make_descriptor(t_PythonThrustDirectionProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustDirectionProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonThrustDirectionProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonThrustDirectionProvider_computeThrustDirection0 },
              { "pythonDecRef", "()V", (void *) t_PythonThrustDirectionProvider_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonThrustDirectionProvider::initializeClass, 1)))
              return NULL;
            return t_PythonThrustDirectionProvider::wrap_Object(PythonThrustDirectionProvider(((t_PythonThrustDirectionProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonThrustDirectionProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonThrustDirectionProvider_init_(t_PythonThrustDirectionProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonThrustDirectionProvider object((jobject) NULL);

            INT_CALL(object = PythonThrustDirectionProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonThrustDirectionProvider_finalize(t_PythonThrustDirectionProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonThrustDirectionProvider_pythonExtension(t_PythonThrustDirectionProvider *self, PyObject *args)
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

          static jobject JNICALL t_PythonThrustDirectionProvider_computeThrustDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustDirectionProvider::mids$[PythonThrustDirectionProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "computeThrustDirection", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("computeThrustDirection", result);
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

          static void JNICALL t_PythonThrustDirectionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustDirectionProvider::mids$[PythonThrustDirectionProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonThrustDirectionProvider::mids$[PythonThrustDirectionProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonThrustDirectionProvider_get__self(t_PythonThrustDirectionProvider *self, void *data)
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
#include "org/hipparchus/special/elliptic/jacobi/FieldTheta.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldTheta::class$ = NULL;
          jmethodID *FieldTheta::mids$ = NULL;
          bool FieldTheta::live$ = false;

          jclass FieldTheta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldTheta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_theta1_08d37e3f77b7239d] = env->getMethodID(cls, "theta1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_theta2_08d37e3f77b7239d] = env->getMethodID(cls, "theta2", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_theta3_08d37e3f77b7239d] = env->getMethodID(cls, "theta3", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_theta4_08d37e3f77b7239d] = env->getMethodID(cls, "theta4", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta1_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta2() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta2_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta3() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta3_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta4() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta4_08d37e3f77b7239d]));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldTheta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTheta_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTheta_of_(t_FieldTheta *self, PyObject *args);
          static PyObject *t_FieldTheta_theta1(t_FieldTheta *self);
          static PyObject *t_FieldTheta_theta2(t_FieldTheta *self);
          static PyObject *t_FieldTheta_theta3(t_FieldTheta *self);
          static PyObject *t_FieldTheta_theta4(t_FieldTheta *self);
          static PyObject *t_FieldTheta_get__parameters_(t_FieldTheta *self, void *data);
          static PyGetSetDef t_FieldTheta__fields_[] = {
            DECLARE_GET_FIELD(t_FieldTheta, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldTheta__methods_[] = {
            DECLARE_METHOD(t_FieldTheta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTheta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTheta, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldTheta, theta1, METH_NOARGS),
            DECLARE_METHOD(t_FieldTheta, theta2, METH_NOARGS),
            DECLARE_METHOD(t_FieldTheta, theta3, METH_NOARGS),
            DECLARE_METHOD(t_FieldTheta, theta4, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldTheta)[] = {
            { Py_tp_methods, t_FieldTheta__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldTheta__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldTheta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldTheta, t_FieldTheta, FieldTheta);
          PyObject *t_FieldTheta::wrap_Object(const FieldTheta& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTheta::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTheta *self = (t_FieldTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldTheta::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTheta::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTheta *self = (t_FieldTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldTheta::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldTheta), &PY_TYPE_DEF(FieldTheta), module, "FieldTheta", 0);
          }

          void t_FieldTheta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTheta), "class_", make_descriptor(FieldTheta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTheta), "wrapfn_", make_descriptor(t_FieldTheta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTheta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldTheta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldTheta::initializeClass, 1)))
              return NULL;
            return t_FieldTheta::wrap_Object(FieldTheta(((t_FieldTheta *) arg)->object.this$));
          }
          static PyObject *t_FieldTheta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldTheta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldTheta_of_(t_FieldTheta *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldTheta_theta1(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTheta_theta2(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta2());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTheta_theta3(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta3());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTheta_theta4(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta4());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldTheta_get__parameters_(t_FieldTheta *self, void *data)
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
#include "org/hipparchus/fitting/GaussianCurveFitter$ParameterGuesser.h"
#include "java/util/Collection.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *GaussianCurveFitter$ParameterGuesser::class$ = NULL;
      jmethodID *GaussianCurveFitter$ParameterGuesser::mids$ = NULL;
      bool GaussianCurveFitter$ParameterGuesser::live$ = false;

      jclass GaussianCurveFitter$ParameterGuesser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/GaussianCurveFitter$ParameterGuesser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_82af91bc8dfb5029] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
          mids$[mid_guess_be783177b060994b] = env->getMethodID(cls, "guess", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GaussianCurveFitter$ParameterGuesser::GaussianCurveFitter$ParameterGuesser(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_82af91bc8dfb5029, a0.this$)) {}

      JArray< jdouble > GaussianCurveFitter$ParameterGuesser::guess() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_guess_be783177b060994b]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GaussianCurveFitter$ParameterGuesser_init_(t_GaussianCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_guess(t_GaussianCurveFitter$ParameterGuesser *self);

      static PyMethodDef t_GaussianCurveFitter$ParameterGuesser__methods_[] = {
        DECLARE_METHOD(t_GaussianCurveFitter$ParameterGuesser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter$ParameterGuesser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter$ParameterGuesser, guess, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GaussianCurveFitter$ParameterGuesser)[] = {
        { Py_tp_methods, t_GaussianCurveFitter$ParameterGuesser__methods_ },
        { Py_tp_init, (void *) t_GaussianCurveFitter$ParameterGuesser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GaussianCurveFitter$ParameterGuesser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GaussianCurveFitter$ParameterGuesser, t_GaussianCurveFitter$ParameterGuesser, GaussianCurveFitter$ParameterGuesser);

      void t_GaussianCurveFitter$ParameterGuesser::install(PyObject *module)
      {
        installType(&PY_TYPE(GaussianCurveFitter$ParameterGuesser), &PY_TYPE_DEF(GaussianCurveFitter$ParameterGuesser), module, "GaussianCurveFitter$ParameterGuesser", 0);
      }

      void t_GaussianCurveFitter$ParameterGuesser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter$ParameterGuesser), "class_", make_descriptor(GaussianCurveFitter$ParameterGuesser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter$ParameterGuesser), "wrapfn_", make_descriptor(t_GaussianCurveFitter$ParameterGuesser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter$ParameterGuesser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GaussianCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GaussianCurveFitter$ParameterGuesser::initializeClass, 1)))
          return NULL;
        return t_GaussianCurveFitter$ParameterGuesser::wrap_Object(GaussianCurveFitter$ParameterGuesser(((t_GaussianCurveFitter$ParameterGuesser *) arg)->object.this$));
      }
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GaussianCurveFitter$ParameterGuesser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GaussianCurveFitter$ParameterGuesser_init_(t_GaussianCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        GaussianCurveFitter$ParameterGuesser object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = GaussianCurveFitter$ParameterGuesser(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_GaussianCurveFitter$ParameterGuesser_guess(t_GaussianCurveFitter$ParameterGuesser *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.guess());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/SmoothFieldOfView.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Transform.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *SmoothFieldOfView::class$ = NULL;
        jmethodID *SmoothFieldOfView::mids$ = NULL;
        bool SmoothFieldOfView::live$ = false;

        jclass SmoothFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/SmoothFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCenter_032312bdeb3f2f93] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getFootprint_0ed2f5155c3855f6] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getX_032312bdeb3f2f93] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getY_032312bdeb3f2f93] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getZ_032312bdeb3f2f93] = env->getMethodID(cls, "getZ", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_directionAt_98a3eeef43dce47a] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getCenter() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenter_032312bdeb3f2f93]));
        }

        ::java::util::List SmoothFieldOfView::getFootprint(const ::org::orekit::frames::Transform & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFootprint_0ed2f5155c3855f6], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getX() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getX_032312bdeb3f2f93]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getY() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getY_032312bdeb3f2f93]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getZ() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getZ_032312bdeb3f2f93]));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_SmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothFieldOfView_getCenter(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_getFootprint(t_SmoothFieldOfView *self, PyObject *args);
        static PyObject *t_SmoothFieldOfView_getX(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_getY(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_getZ(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_get__center(t_SmoothFieldOfView *self, void *data);
        static PyObject *t_SmoothFieldOfView_get__x(t_SmoothFieldOfView *self, void *data);
        static PyObject *t_SmoothFieldOfView_get__y(t_SmoothFieldOfView *self, void *data);
        static PyObject *t_SmoothFieldOfView_get__z(t_SmoothFieldOfView *self, void *data);
        static PyGetSetDef t_SmoothFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_SmoothFieldOfView, center),
          DECLARE_GET_FIELD(t_SmoothFieldOfView, x),
          DECLARE_GET_FIELD(t_SmoothFieldOfView, y),
          DECLARE_GET_FIELD(t_SmoothFieldOfView, z),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmoothFieldOfView__methods_[] = {
          DECLARE_METHOD(t_SmoothFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothFieldOfView, getCenter, METH_NOARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getFootprint, METH_VARARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getX, METH_NOARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getY, METH_NOARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getZ, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothFieldOfView)[] = {
          { Py_tp_methods, t_SmoothFieldOfView__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SmoothFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::AbstractFieldOfView),
          NULL
        };

        DEFINE_TYPE(SmoothFieldOfView, t_SmoothFieldOfView, SmoothFieldOfView);

        void t_SmoothFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothFieldOfView), &PY_TYPE_DEF(SmoothFieldOfView), module, "SmoothFieldOfView", 0);
        }

        void t_SmoothFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothFieldOfView), "class_", make_descriptor(SmoothFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothFieldOfView), "wrapfn_", make_descriptor(t_SmoothFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothFieldOfView::initializeClass, 1)))
            return NULL;
          return t_SmoothFieldOfView::wrap_Object(SmoothFieldOfView(((t_SmoothFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_SmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothFieldOfView_getCenter(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenter());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_getFootprint(t_SmoothFieldOfView *self, PyObject *args)
        {
          ::org::orekit::frames::Transform a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          jdouble a2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::frames::Transform::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getFootprint(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result);
          }

          return callSuper(PY_TYPE(SmoothFieldOfView), (PyObject *) self, "getFootprint", args, 2);
        }

        static PyObject *t_SmoothFieldOfView_getX(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getX());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_getY(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getY());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_getZ(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getZ());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_get__center(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenter());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmoothFieldOfView_get__x(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getX());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmoothFieldOfView_get__y(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getY());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmoothFieldOfView_get__z(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getZ());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/OrbitHermiteInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *OrbitHermiteInterpolator::class$ = NULL;
      jmethodID *OrbitHermiteInterpolator::mids$ = NULL;
      bool OrbitHermiteInterpolator::live$ = false;

      jclass OrbitHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/OrbitHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9725b246c9e25f68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_b744963488fb11c5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_77d14de7cb3c9585] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_d72d0265fbc6575b] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getPVAFilter_b9dfc27d8c56b5de] = env->getMethodID(cls, "getPVAFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_9e247e5fad360ea6] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_9725b246c9e25f68, a0.this$)) {}

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b744963488fb11c5, a0, a1.this$)) {}

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_77d14de7cb3c9585, a0, a1.this$, a2.this$)) {}

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_d72d0265fbc6575b, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter OrbitHermiteInterpolator::getPVAFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getPVAFilter_b9dfc27d8c56b5de]));
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
      static PyObject *t_OrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitHermiteInterpolator_of_(t_OrbitHermiteInterpolator *self, PyObject *args);
      static int t_OrbitHermiteInterpolator_init_(t_OrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrbitHermiteInterpolator_getPVAFilter(t_OrbitHermiteInterpolator *self);
      static PyObject *t_OrbitHermiteInterpolator_get__pVAFilter(t_OrbitHermiteInterpolator *self, void *data);
      static PyObject *t_OrbitHermiteInterpolator_get__parameters_(t_OrbitHermiteInterpolator *self, void *data);
      static PyGetSetDef t_OrbitHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_OrbitHermiteInterpolator, pVAFilter),
        DECLARE_GET_FIELD(t_OrbitHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrbitHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_OrbitHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrbitHermiteInterpolator, getPVAFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrbitHermiteInterpolator)[] = {
        { Py_tp_methods, t_OrbitHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_OrbitHermiteInterpolator_init_ },
        { Py_tp_getset, t_OrbitHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrbitHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(OrbitHermiteInterpolator, t_OrbitHermiteInterpolator, OrbitHermiteInterpolator);
      PyObject *t_OrbitHermiteInterpolator::wrap_Object(const OrbitHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitHermiteInterpolator *self = (t_OrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrbitHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitHermiteInterpolator *self = (t_OrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrbitHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(OrbitHermiteInterpolator), &PY_TYPE_DEF(OrbitHermiteInterpolator), module, "OrbitHermiteInterpolator", 0);
      }

      void t_OrbitHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitHermiteInterpolator), "class_", make_descriptor(OrbitHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitHermiteInterpolator), "wrapfn_", make_descriptor(t_OrbitHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrbitHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_OrbitHermiteInterpolator::wrap_Object(OrbitHermiteInterpolator(((t_OrbitHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_OrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrbitHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrbitHermiteInterpolator_of_(t_OrbitHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OrbitHermiteInterpolator_init_(t_OrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
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

      static PyObject *t_OrbitHermiteInterpolator_getPVAFilter(t_OrbitHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_OrbitHermiteInterpolator_get__parameters_(t_OrbitHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OrbitHermiteInterpolator_get__pVAFilter(t_OrbitHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *IRNSSScale::class$ = NULL;
      jmethodID *IRNSSScale::mids$ = NULL;
      bool IRNSSScale::live$ = false;

      jclass IRNSSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/IRNSSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_50aa1fdea9b81950] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String IRNSSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jdouble IRNSSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement IRNSSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      jdouble IRNSSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_50aa1fdea9b81950], a0.this$, a1.this$);
      }

      ::java::lang::String IRNSSScale::toString() const
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
    namespace time {
      static PyObject *t_IRNSSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IRNSSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IRNSSScale_getName(t_IRNSSScale *self);
      static PyObject *t_IRNSSScale_offsetFromTAI(t_IRNSSScale *self, PyObject *args);
      static PyObject *t_IRNSSScale_offsetToTAI(t_IRNSSScale *self, PyObject *args);
      static PyObject *t_IRNSSScale_toString(t_IRNSSScale *self, PyObject *args);
      static PyObject *t_IRNSSScale_get__name(t_IRNSSScale *self, void *data);
      static PyGetSetDef t_IRNSSScale__fields_[] = {
        DECLARE_GET_FIELD(t_IRNSSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IRNSSScale__methods_[] = {
        DECLARE_METHOD(t_IRNSSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IRNSSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IRNSSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_IRNSSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_IRNSSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_IRNSSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IRNSSScale)[] = {
        { Py_tp_methods, t_IRNSSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IRNSSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IRNSSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IRNSSScale, t_IRNSSScale, IRNSSScale);

      void t_IRNSSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(IRNSSScale), &PY_TYPE_DEF(IRNSSScale), module, "IRNSSScale", 0);
      }

      void t_IRNSSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSScale), "class_", make_descriptor(IRNSSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSScale), "wrapfn_", make_descriptor(t_IRNSSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IRNSSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IRNSSScale::initializeClass, 1)))
          return NULL;
        return t_IRNSSScale::wrap_Object(IRNSSScale(((t_IRNSSScale *) arg)->object.this$));
      }
      static PyObject *t_IRNSSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IRNSSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IRNSSScale_getName(t_IRNSSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_IRNSSScale_offsetFromTAI(t_IRNSSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_IRNSSScale_offsetToTAI(t_IRNSSScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_IRNSSScale_toString(t_IRNSSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(IRNSSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_IRNSSScale_get__name(t_IRNSSScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *LazyLoadedGravityFields::class$ = NULL;
          jmethodID *LazyLoadedGravityFields::mids$ = NULL;
          bool LazyLoadedGravityFields::live$ = false;

          jclass LazyLoadedGravityFields::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/LazyLoadedGravityFields");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6f5123b8c0023b4a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_addDefaultOceanTidesReaders_ff7cb6c242604316] = env->getMethodID(cls, "addDefaultOceanTidesReaders", "()V");
              mids$[mid_addDefaultPotentialCoefficientsReaders_ff7cb6c242604316] = env->getMethodID(cls, "addDefaultPotentialCoefficientsReaders", "()V");
              mids$[mid_addOceanTidesReader_ee0d26b4bbabbfbf] = env->getMethodID(cls, "addOceanTidesReader", "(Lorg/orekit/forces/gravity/potential/OceanTidesReader;)V");
              mids$[mid_addPotentialCoefficientsReader_71869fcd17a69cc7] = env->getMethodID(cls, "addPotentialCoefficientsReader", "(Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;)V");
              mids$[mid_clearOceanTidesReaders_ff7cb6c242604316] = env->getMethodID(cls, "clearOceanTidesReaders", "()V");
              mids$[mid_clearPotentialCoefficientsReaders_ff7cb6c242604316] = env->getMethodID(cls, "clearPotentialCoefficientsReaders", "()V");
              mids$[mid_configureOceanLoadDeformationCoefficients_c836e871c1d3958a] = env->getMethodID(cls, "configureOceanLoadDeformationCoefficients", "(Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;)V");
              mids$[mid_getConstantNormalizedProvider_bb5918e0884e4ae2] = env->getMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_c4894db538d805f8] = env->getMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_47519026ac46bd97] = env->getMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanLoadDeformationCoefficients_73c3e0c37fcdfda8] = env->getMethodID(cls, "getOceanLoadDeformationCoefficients", "()Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");
              mids$[mid_getOceanTidesWaves_4e3c0741dd4bb632] = env->getMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizedProvider_bc2bae0b3b31fcf0] = env->getMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_readGravityField_d70c66dab04a3d84] = env->getMethodID(cls, "readGravityField", "(II)Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LazyLoadedGravityFields::LazyLoadedGravityFields(const ::org::orekit::data::DataProvidersManager & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f5123b8c0023b4a, a0.this$, a1.this$)) {}

          void LazyLoadedGravityFields::addDefaultOceanTidesReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_addDefaultOceanTidesReaders_ff7cb6c242604316]);
          }

          void LazyLoadedGravityFields::addDefaultPotentialCoefficientsReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_addDefaultPotentialCoefficientsReaders_ff7cb6c242604316]);
          }

          void LazyLoadedGravityFields::addOceanTidesReader(const ::org::orekit::forces::gravity::potential::OceanTidesReader & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addOceanTidesReader_ee0d26b4bbabbfbf], a0.this$);
          }

          void LazyLoadedGravityFields::addPotentialCoefficientsReader(const ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addPotentialCoefficientsReader_71869fcd17a69cc7], a0.this$);
          }

          void LazyLoadedGravityFields::clearOceanTidesReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_clearOceanTidesReaders_ff7cb6c242604316]);
          }

          void LazyLoadedGravityFields::clearPotentialCoefficientsReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_clearPotentialCoefficientsReaders_ff7cb6c242604316]);
          }

          void LazyLoadedGravityFields::configureOceanLoadDeformationCoefficients(const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_configureOceanLoadDeformationCoefficients_c836e871c1d3958a], a0.this$);
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getConstantNormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantNormalizedProvider_bb5918e0884e4ae2], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getConstantUnnormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantUnnormalizedProvider_c4894db538d805f8], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getNormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getNormalizedProvider_47519026ac46bd97], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients LazyLoadedGravityFields::getOceanLoadDeformationCoefficients() const
          {
            return ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients(env->callObjectMethod(this$, mids$[mid_getOceanLoadDeformationCoefficients_73c3e0c37fcdfda8]));
          }

          ::java::util::List LazyLoadedGravityFields::getOceanTidesWaves(jint a0, jint a1) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOceanTidesWaves_4e3c0741dd4bb632], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getUnnormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getUnnormalizedProvider_bc2bae0b3b31fcf0], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader LazyLoadedGravityFields::readGravityField(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->callObjectMethod(this$, mids$[mid_readGravityField_d70c66dab04a3d84], a0, a1));
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
          static PyObject *t_LazyLoadedGravityFields_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LazyLoadedGravityFields_init_(t_LazyLoadedGravityFields *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LazyLoadedGravityFields_addDefaultOceanTidesReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_addDefaultPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_addOceanTidesReader(t_LazyLoadedGravityFields *self, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_addPotentialCoefficientsReader(t_LazyLoadedGravityFields *self, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_clearOceanTidesReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_clearPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_configureOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_getConstantNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getConstantUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_getOceanTidesWaves(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_readGravityField(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_get__oceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, void *data);
          static PyGetSetDef t_LazyLoadedGravityFields__fields_[] = {
            DECLARE_GET_FIELD(t_LazyLoadedGravityFields, oceanLoadDeformationCoefficients),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LazyLoadedGravityFields__methods_[] = {
            DECLARE_METHOD(t_LazyLoadedGravityFields, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addDefaultOceanTidesReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addDefaultPotentialCoefficientsReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addOceanTidesReader, METH_O),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addPotentialCoefficientsReader, METH_O),
            DECLARE_METHOD(t_LazyLoadedGravityFields, clearOceanTidesReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, clearPotentialCoefficientsReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, configureOceanLoadDeformationCoefficients, METH_O),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getConstantNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getConstantUnnormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getOceanLoadDeformationCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getOceanTidesWaves, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getUnnormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, readGravityField, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LazyLoadedGravityFields)[] = {
            { Py_tp_methods, t_LazyLoadedGravityFields__methods_ },
            { Py_tp_init, (void *) t_LazyLoadedGravityFields_init_ },
            { Py_tp_getset, t_LazyLoadedGravityFields__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LazyLoadedGravityFields)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LazyLoadedGravityFields, t_LazyLoadedGravityFields, LazyLoadedGravityFields);

          void t_LazyLoadedGravityFields::install(PyObject *module)
          {
            installType(&PY_TYPE(LazyLoadedGravityFields), &PY_TYPE_DEF(LazyLoadedGravityFields), module, "LazyLoadedGravityFields", 0);
          }

          void t_LazyLoadedGravityFields::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGravityFields), "class_", make_descriptor(LazyLoadedGravityFields::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGravityFields), "wrapfn_", make_descriptor(t_LazyLoadedGravityFields::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGravityFields), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LazyLoadedGravityFields_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LazyLoadedGravityFields::initializeClass, 1)))
              return NULL;
            return t_LazyLoadedGravityFields::wrap_Object(LazyLoadedGravityFields(((t_LazyLoadedGravityFields *) arg)->object.this$));
          }
          static PyObject *t_LazyLoadedGravityFields_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LazyLoadedGravityFields::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LazyLoadedGravityFields_init_(t_LazyLoadedGravityFields *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            LazyLoadedGravityFields object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LazyLoadedGravityFields(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LazyLoadedGravityFields_addDefaultOceanTidesReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.addDefaultOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_addDefaultPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.addDefaultPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_addOceanTidesReader(t_LazyLoadedGravityFields *self, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanTidesReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::OceanTidesReader::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addOceanTidesReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addOceanTidesReader", arg);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_addPotentialCoefficientsReader(t_LazyLoadedGravityFields *self, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addPotentialCoefficientsReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addPotentialCoefficientsReader", arg);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_clearOceanTidesReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.clearOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_clearPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.clearPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_configureOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::initializeClass, &a0, &p0, ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::parameters_))
            {
              OBJ_CALL(self->object.configureOceanLoadDeformationCoefficients(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "configureOceanLoadDeformationCoefficients", arg);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getConstantNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
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

          static PyObject *t_LazyLoadedGravityFields_getConstantUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
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

          static PyObject *t_LazyLoadedGravityFields_getNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
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

          static PyObject *t_LazyLoadedGravityFields_getOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients result((jobject) NULL);
            OBJ_CALL(result = self->object.getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(result);
          }

          static PyObject *t_LazyLoadedGravityFields_getOceanTidesWaves(t_LazyLoadedGravityFields *self, PyObject *args)
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

          static PyObject *t_LazyLoadedGravityFields_getUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
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

          static PyObject *t_LazyLoadedGravityFields_readGravityField(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.readGravityField(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_PotentialCoefficientsReader::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "readGravityField", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_get__oceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients value((jobject) NULL);
            OBJ_CALL(value = self->object.getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/RungeKuttaIntegrator.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *RungeKuttaIntegrator::class$ = NULL;
        jmethodID *RungeKuttaIntegrator::mids$ = NULL;
        bool RungeKuttaIntegrator::live$ = false;

        jclass RungeKuttaIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/RungeKuttaIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDefaultStep_9981f74b2d109da6] = env->getMethodID(cls, "getDefaultStep", "()D");
            mids$[mid_integrate_3b00c059d3ccb86d] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_singleStep_be5108d61ad9817f] = env->getMethodID(cls, "singleStep", "(Lorg/hipparchus/ode/OrdinaryDifferentialEquation;D[DD)[D");
            mids$[mid_createInterpolator_044d72e449b4501a] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble RungeKuttaIntegrator::getDefaultStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDefaultStep_9981f74b2d109da6]);
        }

        ::org::hipparchus::ode::ODEStateAndDerivative RungeKuttaIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_3b00c059d3ccb86d], a0.this$, a1.this$, a2));
        }

        JArray< jdouble > RungeKuttaIntegrator::singleStep(const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a0, jdouble a1, const JArray< jdouble > & a2, jdouble a3) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_singleStep_be5108d61ad9817f], a0.this$, a1, a2.this$, a3));
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
      namespace nonstiff {
        static PyObject *t_RungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaIntegrator_getDefaultStep(t_RungeKuttaIntegrator *self);
        static PyObject *t_RungeKuttaIntegrator_integrate(t_RungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaIntegrator_singleStep(t_RungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaIntegrator_get__defaultStep(t_RungeKuttaIntegrator *self, void *data);
        static PyGetSetDef t_RungeKuttaIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_RungeKuttaIntegrator, defaultStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RungeKuttaIntegrator__methods_[] = {
          DECLARE_METHOD(t_RungeKuttaIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, getDefaultStep, METH_NOARGS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, singleStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RungeKuttaIntegrator)[] = {
          { Py_tp_methods, t_RungeKuttaIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RungeKuttaIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RungeKuttaIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractIntegrator),
          NULL
        };

        DEFINE_TYPE(RungeKuttaIntegrator, t_RungeKuttaIntegrator, RungeKuttaIntegrator);

        void t_RungeKuttaIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(RungeKuttaIntegrator), &PY_TYPE_DEF(RungeKuttaIntegrator), module, "RungeKuttaIntegrator", 0);
        }

        void t_RungeKuttaIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaIntegrator), "class_", make_descriptor(RungeKuttaIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaIntegrator), "wrapfn_", make_descriptor(t_RungeKuttaIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RungeKuttaIntegrator::initializeClass, 1)))
            return NULL;
          return t_RungeKuttaIntegrator::wrap_Object(RungeKuttaIntegrator(((t_RungeKuttaIntegrator *) arg)->object.this$));
        }
        static PyObject *t_RungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RungeKuttaIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RungeKuttaIntegrator_getDefaultStep(t_RungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDefaultStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RungeKuttaIntegrator_integrate(t_RungeKuttaIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(RungeKuttaIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_RungeKuttaIntegrator_singleStep(t_RungeKuttaIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::OrdinaryDifferentialEquation a0((jobject) NULL);
          jdouble a1;
          JArray< jdouble > a2((jobject) NULL);
          jdouble a3;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "kD[DD", ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.singleStep(a0, a1, a2, a3));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "singleStep", args);
          return NULL;
        }

        static PyObject *t_RungeKuttaIntegrator_get__defaultStep(t_RungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDefaultStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialsUtils.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialsUtils::class$ = NULL;
        jmethodID *PolynomialsUtils::mids$ = NULL;
        bool PolynomialsUtils::live$ = false;

        jclass PolynomialsUtils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialsUtils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createChebyshevPolynomial_447f79a1520e2b2e] = env->getStaticMethodID(cls, "createChebyshevPolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createHermitePolynomial_447f79a1520e2b2e] = env->getStaticMethodID(cls, "createHermitePolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createJacobiPolynomial_4b1e630ab22dc3f8] = env->getStaticMethodID(cls, "createJacobiPolynomial", "(III)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createLaguerrePolynomial_447f79a1520e2b2e] = env->getStaticMethodID(cls, "createLaguerrePolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createLegendrePolynomial_447f79a1520e2b2e] = env->getStaticMethodID(cls, "createLegendrePolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_shift_8c3d418d3dab4cd1] = env->getStaticMethodID(cls, "shift", "([DD)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createChebyshevPolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createChebyshevPolynomial_447f79a1520e2b2e], a0));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createHermitePolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createHermitePolynomial_447f79a1520e2b2e], a0));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createJacobiPolynomial(jint a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createJacobiPolynomial_4b1e630ab22dc3f8], a0, a1, a2));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createLaguerrePolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createLaguerrePolynomial_447f79a1520e2b2e], a0));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createLegendrePolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createLegendrePolynomial_447f79a1520e2b2e], a0));
        }

        JArray< jdouble > PolynomialsUtils::shift(const JArray< jdouble > & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_shift_8c3d418d3dab4cd1], a0.this$, a1));
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
      namespace polynomials {
        static PyObject *t_PolynomialsUtils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createChebyshevPolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createHermitePolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createJacobiPolynomial(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialsUtils_createLaguerrePolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createLegendrePolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_shift(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_PolynomialsUtils__methods_[] = {
          DECLARE_METHOD(t_PolynomialsUtils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createChebyshevPolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createHermitePolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createJacobiPolynomial, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createLaguerrePolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createLegendrePolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, shift, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialsUtils)[] = {
          { Py_tp_methods, t_PolynomialsUtils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialsUtils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialsUtils, t_PolynomialsUtils, PolynomialsUtils);

        void t_PolynomialsUtils::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialsUtils), &PY_TYPE_DEF(PolynomialsUtils), module, "PolynomialsUtils", 0);
        }

        void t_PolynomialsUtils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialsUtils), "class_", make_descriptor(PolynomialsUtils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialsUtils), "wrapfn_", make_descriptor(t_PolynomialsUtils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialsUtils), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialsUtils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialsUtils::initializeClass, 1)))
            return NULL;
          return t_PolynomialsUtils::wrap_Object(PolynomialsUtils(((t_PolynomialsUtils *) arg)->object.this$));
        }
        static PyObject *t_PolynomialsUtils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialsUtils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PolynomialsUtils_createChebyshevPolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createChebyshevPolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createChebyshevPolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createHermitePolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createHermitePolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createHermitePolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createJacobiPolynomial(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          jint a2;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createJacobiPolynomial(a0, a1, a2));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createJacobiPolynomial", args);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createLaguerrePolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createLaguerrePolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createLaguerrePolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createLegendrePolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createLegendrePolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createLegendrePolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_shift(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::shift(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError(type, "shift", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonGravityFields.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonGravityFields::class$ = NULL;
          jmethodID *PythonGravityFields::mids$ = NULL;
          bool PythonGravityFields::live$ = false;

          jclass PythonGravityFields::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonGravityFields");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getConstantNormalizedProvider_bb5918e0884e4ae2] = env->getMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_c4894db538d805f8] = env->getMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_47519026ac46bd97] = env->getMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanTidesWaves_4e3c0741dd4bb632] = env->getMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizedProvider_bc2bae0b3b31fcf0] = env->getMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonGravityFields::PythonGravityFields() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonGravityFields::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonGravityFields::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonGravityFields::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonGravityFields_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonGravityFields_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonGravityFields_init_(t_PythonGravityFields *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonGravityFields_finalize(t_PythonGravityFields *self);
          static PyObject *t_PythonGravityFields_pythonExtension(t_PythonGravityFields *self, PyObject *args);
          static jobject JNICALL t_PythonGravityFields_getConstantNormalizedProvider0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
          static jobject JNICALL t_PythonGravityFields_getConstantUnnormalizedProvider1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
          static jobject JNICALL t_PythonGravityFields_getNormalizedProvider2(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static jobject JNICALL t_PythonGravityFields_getOceanTidesWaves3(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static jobject JNICALL t_PythonGravityFields_getUnnormalizedProvider4(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static void JNICALL t_PythonGravityFields_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonGravityFields_get__self(t_PythonGravityFields *self, void *data);
          static PyGetSetDef t_PythonGravityFields__fields_[] = {
            DECLARE_GET_FIELD(t_PythonGravityFields, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonGravityFields__methods_[] = {
            DECLARE_METHOD(t_PythonGravityFields, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGravityFields, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGravityFields, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonGravityFields, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonGravityFields)[] = {
            { Py_tp_methods, t_PythonGravityFields__methods_ },
            { Py_tp_init, (void *) t_PythonGravityFields_init_ },
            { Py_tp_getset, t_PythonGravityFields__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonGravityFields)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonGravityFields, t_PythonGravityFields, PythonGravityFields);

          void t_PythonGravityFields::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonGravityFields), &PY_TYPE_DEF(PythonGravityFields), module, "PythonGravityFields", 1);
          }

          void t_PythonGravityFields::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGravityFields), "class_", make_descriptor(PythonGravityFields::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGravityFields), "wrapfn_", make_descriptor(t_PythonGravityFields::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGravityFields), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonGravityFields::initializeClass);
            JNINativeMethod methods[] = {
              { "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getConstantNormalizedProvider0 },
              { "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getConstantUnnormalizedProvider1 },
              { "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getNormalizedProvider2 },
              { "getOceanTidesWaves", "(II)Ljava/util/List;", (void *) t_PythonGravityFields_getOceanTidesWaves3 },
              { "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getUnnormalizedProvider4 },
              { "pythonDecRef", "()V", (void *) t_PythonGravityFields_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonGravityFields_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonGravityFields::initializeClass, 1)))
              return NULL;
            return t_PythonGravityFields::wrap_Object(PythonGravityFields(((t_PythonGravityFields *) arg)->object.this$));
          }
          static PyObject *t_PythonGravityFields_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonGravityFields::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonGravityFields_init_(t_PythonGravityFields *self, PyObject *args, PyObject *kwds)
          {
            PythonGravityFields object((jobject) NULL);

            INT_CALL(object = PythonGravityFields());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonGravityFields_finalize(t_PythonGravityFields *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonGravityFields_pythonExtension(t_PythonGravityFields *self, PyObject *args)
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

          static jobject JNICALL t_PythonGravityFields_getConstantNormalizedProvider0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "getConstantNormalizedProvider", "iiO", (int) a0, (int) a1, o2);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getConstantNormalizedProvider", result);
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

          static jobject JNICALL t_PythonGravityFields_getConstantUnnormalizedProvider1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "getConstantUnnormalizedProvider", "iiO", (int) a0, (int) a1, o2);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getConstantUnnormalizedProvider", result);
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

          static jobject JNICALL t_PythonGravityFields_getNormalizedProvider2(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getNormalizedProvider", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getNormalizedProvider", result);
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

          static jobject JNICALL t_PythonGravityFields_getOceanTidesWaves3(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getOceanTidesWaves", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getOceanTidesWaves", result);
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

          static jobject JNICALL t_PythonGravityFields_getUnnormalizedProvider4(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getUnnormalizedProvider", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getUnnormalizedProvider", result);
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

          static void JNICALL t_PythonGravityFields_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonGravityFields_get__self(t_PythonGravityFields *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/Segment.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Segment::class$ = NULL;
          jmethodID *Segment::mids$ = NULL;
          bool Segment::live$ = false;

          jclass Segment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Segment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9afd025fd8b6ee2b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Line;)V");
              mids$[mid_getEnd_032312bdeb3f2f93] = env->getMethodID(cls, "getEnd", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getLine_9d5e1fb92f24d9b0] = env->getMethodID(cls, "getLine", "()Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_getStart_032312bdeb3f2f93] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Segment::Segment(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Line & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9afd025fd8b6ee2b, a0.this$, a1.this$, a2.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Segment::getEnd() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEnd_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Line Segment::getLine() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Line(env->callObjectMethod(this$, mids$[mid_getLine_9d5e1fb92f24d9b0]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Segment::getStart() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getStart_032312bdeb3f2f93]));
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
        namespace threed {
          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Segment_getEnd(t_Segment *self);
          static PyObject *t_Segment_getLine(t_Segment *self);
          static PyObject *t_Segment_getStart(t_Segment *self);
          static PyObject *t_Segment_get__end(t_Segment *self, void *data);
          static PyObject *t_Segment_get__line(t_Segment *self, void *data);
          static PyObject *t_Segment_get__start(t_Segment *self, void *data);
          static PyGetSetDef t_Segment__fields_[] = {
            DECLARE_GET_FIELD(t_Segment, end),
            DECLARE_GET_FIELD(t_Segment, line),
            DECLARE_GET_FIELD(t_Segment, start),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Segment__methods_[] = {
            DECLARE_METHOD(t_Segment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getLine, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getStart, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Segment)[] = {
            { Py_tp_methods, t_Segment__methods_ },
            { Py_tp_init, (void *) t_Segment_init_ },
            { Py_tp_getset, t_Segment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Segment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Segment, t_Segment, Segment);

          void t_Segment::install(PyObject *module)
          {
            installType(&PY_TYPE(Segment), &PY_TYPE_DEF(Segment), module, "Segment", 0);
          }

          void t_Segment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "class_", make_descriptor(Segment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "wrapfn_", make_descriptor(t_Segment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Segment::initializeClass, 1)))
              return NULL;
            return t_Segment::wrap_Object(Segment(((t_Segment *) arg)->object.this$));
          }
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Segment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Line a2((jobject) NULL);
            Segment object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Segment(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Segment_getEnd(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Segment_getLine(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Line result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(result);
          }

          static PyObject *t_Segment_getStart(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Segment_get__end(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Segment_get__line(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Line value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(value);
          }

          static PyObject *t_Segment_get__start(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/io/Serializable.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldTLE::class$ = NULL;
          jmethodID *FieldTLE::mids$ = NULL;
          bool FieldTLE::live$ = false;
          ::java::lang::String *FieldTLE::B_STAR = NULL;
          jint FieldTLE::DEFAULT = (jint) 0;
          jint FieldTLE::SDP4 = (jint) 0;
          jint FieldTLE::SDP8 = (jint) 0;
          jint FieldTLE::SGP = (jint) 0;
          jint FieldTLE::SGP4 = (jint) 0;
          jint FieldTLE::SGP8 = (jint) 0;

          jclass FieldTLE::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldTLE");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7f0dc0eafede08bd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_f7a2e0cb9bc2a0b8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_init$_994ea1ea83cebd47] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;ID)V");
              mids$[mid_init$_c802499a6e014075] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;IDLorg/orekit/time/TimeScale;)V");
              mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getBStar_9981f74b2d109da6] = env->getMethodID(cls, "getBStar", "()D");
              mids$[mid_getClassification_153df32fe8b51cb6] = env->getMethodID(cls, "getClassification", "()C");
              mids$[mid_getDate_1fea28374011eef5] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
              mids$[mid_getE_08d37e3f77b7239d] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getElementNumber_d6ab429752e7c267] = env->getMethodID(cls, "getElementNumber", "()I");
              mids$[mid_getEphemerisType_d6ab429752e7c267] = env->getMethodID(cls, "getEphemerisType", "()I");
              mids$[mid_getI_08d37e3f77b7239d] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getLaunchNumber_d6ab429752e7c267] = env->getMethodID(cls, "getLaunchNumber", "()I");
              mids$[mid_getLaunchPiece_d2c8eb4129821f0e] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
              mids$[mid_getLaunchYear_d6ab429752e7c267] = env->getMethodID(cls, "getLaunchYear", "()I");
              mids$[mid_getLine1_d2c8eb4129821f0e] = env->getMethodID(cls, "getLine1", "()Ljava/lang/String;");
              mids$[mid_getLine2_d2c8eb4129821f0e] = env->getMethodID(cls, "getLine2", "()Ljava/lang/String;");
              mids$[mid_getMeanAnomaly_08d37e3f77b7239d] = env->getMethodID(cls, "getMeanAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMeanMotion_08d37e3f77b7239d] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMeanMotionFirstDerivative_08d37e3f77b7239d] = env->getMethodID(cls, "getMeanMotionFirstDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMeanMotionSecondDerivative_08d37e3f77b7239d] = env->getMethodID(cls, "getMeanMotionSecondDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getPerigeeArgument_08d37e3f77b7239d] = env->getMethodID(cls, "getPerigeeArgument", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getRaan_08d37e3f77b7239d] = env->getMethodID(cls, "getRaan", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getRevolutionNumberAtEpoch_d6ab429752e7c267] = env->getMethodID(cls, "getRevolutionNumberAtEpoch", "()I");
              mids$[mid_getSatelliteNumber_d6ab429752e7c267] = env->getMethodID(cls, "getSatelliteNumber", "()I");
              mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isFormatOK_15b8a96a7eadea1e] = env->getStaticMethodID(cls, "isFormatOK", "(Ljava/lang/String;Ljava/lang/String;)Z");
              mids$[mid_stateToTLE_4da10b2505db87df] = env->getStaticMethodID(cls, "stateToTLE", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
              mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toTLE_dacb215ad36dee42] = env->getMethodID(cls, "toTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              B_STAR = new ::java::lang::String(env->getStaticObjectField(cls, "B_STAR", "Ljava/lang/String;"));
              DEFAULT = env->getStaticIntField(cls, "DEFAULT");
              SDP4 = env->getStaticIntField(cls, "SDP4");
              SDP8 = env->getStaticIntField(cls, "SDP8");
              SGP = env->getStaticIntField(cls, "SGP");
              SGP4 = env->getStaticIntField(cls, "SGP4");
              SGP8 = env->getStaticIntField(cls, "SGP8");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldTLE::FieldTLE(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7f0dc0eafede08bd, a0.this$, a1.this$, a2.this$)) {}

          FieldTLE::FieldTLE(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f7a2e0cb9bc2a0b8, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldTLE::FieldTLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::FieldAbsoluteDate & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13, const ::org::hipparchus::CalculusFieldElement & a14, const ::org::hipparchus::CalculusFieldElement & a15, jint a16, jdouble a17) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_994ea1ea83cebd47, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16, a17)) {}

          FieldTLE::FieldTLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::FieldAbsoluteDate & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13, const ::org::hipparchus::CalculusFieldElement & a14, const ::org::hipparchus::CalculusFieldElement & a15, jint a16, jdouble a17, const ::org::orekit::time::TimeScale & a18) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c802499a6e014075, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16, a17, a18.this$)) {}

          jboolean FieldTLE::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
          }

          jdouble FieldTLE::getBStar() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBStar_9981f74b2d109da6]);
          }

          jchar FieldTLE::getClassification() const
          {
            return env->callCharMethod(this$, mids$[mid_getClassification_153df32fe8b51cb6]);
          }

          ::org::orekit::time::FieldAbsoluteDate FieldTLE::getDate() const
          {
            return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_1fea28374011eef5]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getE() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_08d37e3f77b7239d]));
          }

          jint FieldTLE::getElementNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getElementNumber_d6ab429752e7c267]);
          }

          jint FieldTLE::getEphemerisType() const
          {
            return env->callIntMethod(this$, mids$[mid_getEphemerisType_d6ab429752e7c267]);
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getI() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_08d37e3f77b7239d]));
          }

          jint FieldTLE::getLaunchNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchNumber_d6ab429752e7c267]);
          }

          ::java::lang::String FieldTLE::getLaunchPiece() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_d2c8eb4129821f0e]));
          }

          jint FieldTLE::getLaunchYear() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchYear_d6ab429752e7c267]);
          }

          ::java::lang::String FieldTLE::getLine1() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine1_d2c8eb4129821f0e]));
          }

          ::java::lang::String FieldTLE::getLine2() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine2_d2c8eb4129821f0e]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanAnomaly() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomaly_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanMotion() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanMotionFirstDerivative() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotionFirstDerivative_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanMotionSecondDerivative() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotionSecondDerivative_08d37e3f77b7239d]));
          }

          ::java::util::List FieldTLE::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getPerigeeArgument() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPerigeeArgument_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getRaan() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRaan_08d37e3f77b7239d]));
          }

          jint FieldTLE::getRevolutionNumberAtEpoch() const
          {
            return env->callIntMethod(this$, mids$[mid_getRevolutionNumberAtEpoch_d6ab429752e7c267]);
          }

          jint FieldTLE::getSatelliteNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteNumber_d6ab429752e7c267]);
          }

          jint FieldTLE::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
          }

          jboolean FieldTLE::isFormatOK(const ::java::lang::String & a0, const ::java::lang::String & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticBooleanMethod(cls, mids$[mid_isFormatOK_15b8a96a7eadea1e], a0.this$, a1.this$);
          }

          FieldTLE FieldTLE::stateToTLE(const ::org::orekit::propagation::FieldSpacecraftState & a0, const FieldTLE & a1, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLE(env->callStaticObjectMethod(cls, mids$[mid_stateToTLE_4da10b2505db87df], a0.this$, a1.this$, a2.this$));
          }

          ::java::lang::String FieldTLE::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
          }

          ::org::orekit::propagation::analytical::tle::TLE FieldTLE::toTLE() const
          {
            return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_toTLE_dacb215ad36dee42]));
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
          static PyObject *t_FieldTLE_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLE_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLE_of_(t_FieldTLE *self, PyObject *args);
          static int t_FieldTLE_init_(t_FieldTLE *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldTLE_equals(t_FieldTLE *self, PyObject *args);
          static PyObject *t_FieldTLE_getBStar(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getClassification(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getDate(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getE(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getElementNumber(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getEphemerisType(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getI(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLaunchNumber(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLaunchPiece(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLaunchYear(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLine1(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLine2(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanAnomaly(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanMotion(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanMotionFirstDerivative(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanMotionSecondDerivative(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getParametersDrivers(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getPerigeeArgument(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getRaan(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getRevolutionNumberAtEpoch(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getSatelliteNumber(t_FieldTLE *self);
          static PyObject *t_FieldTLE_hashCode(t_FieldTLE *self, PyObject *args);
          static PyObject *t_FieldTLE_isFormatOK(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldTLE_stateToTLE(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldTLE_toString(t_FieldTLE *self, PyObject *args);
          static PyObject *t_FieldTLE_toTLE(t_FieldTLE *self);
          static PyObject *t_FieldTLE_get__bStar(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__classification(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__date(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__e(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__elementNumber(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__ephemerisType(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__i(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__launchNumber(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__launchPiece(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__launchYear(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__line1(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__line2(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanAnomaly(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanMotion(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanMotionFirstDerivative(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanMotionSecondDerivative(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__parametersDrivers(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__perigeeArgument(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__raan(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__revolutionNumberAtEpoch(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__satelliteNumber(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__parameters_(t_FieldTLE *self, void *data);
          static PyGetSetDef t_FieldTLE__fields_[] = {
            DECLARE_GET_FIELD(t_FieldTLE, bStar),
            DECLARE_GET_FIELD(t_FieldTLE, classification),
            DECLARE_GET_FIELD(t_FieldTLE, date),
            DECLARE_GET_FIELD(t_FieldTLE, e),
            DECLARE_GET_FIELD(t_FieldTLE, elementNumber),
            DECLARE_GET_FIELD(t_FieldTLE, ephemerisType),
            DECLARE_GET_FIELD(t_FieldTLE, i),
            DECLARE_GET_FIELD(t_FieldTLE, launchNumber),
            DECLARE_GET_FIELD(t_FieldTLE, launchPiece),
            DECLARE_GET_FIELD(t_FieldTLE, launchYear),
            DECLARE_GET_FIELD(t_FieldTLE, line1),
            DECLARE_GET_FIELD(t_FieldTLE, line2),
            DECLARE_GET_FIELD(t_FieldTLE, meanAnomaly),
            DECLARE_GET_FIELD(t_FieldTLE, meanMotion),
            DECLARE_GET_FIELD(t_FieldTLE, meanMotionFirstDerivative),
            DECLARE_GET_FIELD(t_FieldTLE, meanMotionSecondDerivative),
            DECLARE_GET_FIELD(t_FieldTLE, parametersDrivers),
            DECLARE_GET_FIELD(t_FieldTLE, perigeeArgument),
            DECLARE_GET_FIELD(t_FieldTLE, raan),
            DECLARE_GET_FIELD(t_FieldTLE, revolutionNumberAtEpoch),
            DECLARE_GET_FIELD(t_FieldTLE, satelliteNumber),
            DECLARE_GET_FIELD(t_FieldTLE, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldTLE__methods_[] = {
            DECLARE_METHOD(t_FieldTLE, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, equals, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, getBStar, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getClassification, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getDate, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getE, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getElementNumber, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getEphemerisType, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getI, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLaunchNumber, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLaunchPiece, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLaunchYear, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLine1, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLine2, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanAnomaly, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanMotion, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanMotionFirstDerivative, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanMotionSecondDerivative, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getPerigeeArgument, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getRaan, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getRevolutionNumberAtEpoch, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getSatelliteNumber, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, isFormatOK, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, stateToTLE, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, toString, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, toTLE, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldTLE)[] = {
            { Py_tp_methods, t_FieldTLE__methods_ },
            { Py_tp_init, (void *) t_FieldTLE_init_ },
            { Py_tp_getset, t_FieldTLE__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldTLE)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldTLE, t_FieldTLE, FieldTLE);
          PyObject *t_FieldTLE::wrap_Object(const FieldTLE& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLE::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLE *self = (t_FieldTLE *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldTLE::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLE::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLE *self = (t_FieldTLE *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldTLE::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldTLE), &PY_TYPE_DEF(FieldTLE), module, "FieldTLE", 0);
          }

          void t_FieldTLE::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "class_", make_descriptor(FieldTLE::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "wrapfn_", make_descriptor(t_FieldTLE::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "boxfn_", make_descriptor(boxObject));
            env->getClass(FieldTLE::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "B_STAR", make_descriptor(j2p(*FieldTLE::B_STAR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "DEFAULT", make_descriptor(FieldTLE::DEFAULT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SDP4", make_descriptor(FieldTLE::SDP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SDP8", make_descriptor(FieldTLE::SDP8));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SGP", make_descriptor(FieldTLE::SGP));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SGP4", make_descriptor(FieldTLE::SGP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SGP8", make_descriptor(FieldTLE::SGP8));
          }

          static PyObject *t_FieldTLE_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldTLE::initializeClass, 1)))
              return NULL;
            return t_FieldTLE::wrap_Object(FieldTLE(((t_FieldTLE *) arg)->object.this$));
          }
          static PyObject *t_FieldTLE_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldTLE::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldTLE_of_(t_FieldTLE *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldTLE_init_(t_FieldTLE *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "Kss", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "Kssk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 18:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::FieldAbsoluteDate a7((jobject) NULL);
                PyTypeObject **p7;
                ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
                PyTypeObject **p8;
                ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
                PyTypeObject **p9;
                ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
                PyTypeObject **p10;
                ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
                PyTypeObject **p11;
                ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
                PyTypeObject **p12;
                ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
                PyTypeObject **p13;
                ::org::hipparchus::CalculusFieldElement a14((jobject) NULL);
                PyTypeObject **p14;
                ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
                PyTypeObject **p15;
                jint a16;
                jdouble a17;
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIKKKKKKKKKID", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a14, &p14, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a16, &a17))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 19:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::FieldAbsoluteDate a7((jobject) NULL);
                PyTypeObject **p7;
                ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
                PyTypeObject **p8;
                ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
                PyTypeObject **p9;
                ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
                PyTypeObject **p10;
                ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
                PyTypeObject **p11;
                ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
                PyTypeObject **p12;
                ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
                PyTypeObject **p13;
                ::org::hipparchus::CalculusFieldElement a14((jobject) NULL);
                PyTypeObject **p14;
                ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
                PyTypeObject **p15;
                jint a16;
                jdouble a17;
                ::org::orekit::time::TimeScale a18((jobject) NULL);
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIKKKKKKKKKIDk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a14, &p14, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a16, &a17, &a18))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18));
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

          static PyObject *t_FieldTLE_equals(t_FieldTLE *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(FieldTLE), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_FieldTLE_getBStar(t_FieldTLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBStar());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_FieldTLE_getClassification(t_FieldTLE *self)
          {
            jchar result;
            OBJ_CALL(result = self->object.getClassification());
            return c2p(result);
          }

          static PyObject *t_FieldTLE_getDate(t_FieldTLE *self)
          {
            ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldTLE_getE(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getE());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getElementNumber(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getElementNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getEphemerisType(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getEphemerisType());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getI(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getI());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getLaunchNumber(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getLaunchPiece(t_FieldTLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLaunchPiece());
            return j2p(result);
          }

          static PyObject *t_FieldTLE_getLaunchYear(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchYear());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getLine1(t_FieldTLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine1());
            return j2p(result);
          }

          static PyObject *t_FieldTLE_getLine2(t_FieldTLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine2());
            return j2p(result);
          }

          static PyObject *t_FieldTLE_getMeanAnomaly(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanAnomaly());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getMeanMotion(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanMotion());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getMeanMotionFirstDerivative(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanMotionFirstDerivative());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getMeanMotionSecondDerivative(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanMotionSecondDerivative());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getParametersDrivers(t_FieldTLE *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_FieldTLE_getPerigeeArgument(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getPerigeeArgument());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getRaan(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getRaan());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getRevolutionNumberAtEpoch(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getSatelliteNumber(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_hashCode(t_FieldTLE *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(FieldTLE), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_FieldTLE_isFormatOK(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLE::isFormatOK(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError(type, "isFormatOK", args);
            return NULL;
          }

          static PyObject *t_FieldTLE_stateToTLE(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTLE a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a2((jobject) NULL);
            FieldTLE result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, FieldTLE::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, t_FieldTLE::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLE::stateToTLE(a0, a1, a2));
              return t_FieldTLE::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "stateToTLE", args);
            return NULL;
          }

          static PyObject *t_FieldTLE_toString(t_FieldTLE *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(FieldTLE), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_FieldTLE_toTLE(t_FieldTLE *self)
          {
            ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
            OBJ_CALL(result = self->object.toTLE());
            return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
          }
          static PyObject *t_FieldTLE_get__parameters_(t_FieldTLE *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldTLE_get__bStar(t_FieldTLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBStar());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_FieldTLE_get__classification(t_FieldTLE *self, void *data)
          {
            jchar value;
            OBJ_CALL(value = self->object.getClassification());
            return c2p(value);
          }

          static PyObject *t_FieldTLE_get__date(t_FieldTLE *self, void *data)
          {
            ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__e(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getE());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__elementNumber(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getElementNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__ephemerisType(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getEphemerisType());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__i(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getI());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__launchNumber(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__launchPiece(t_FieldTLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLaunchPiece());
            return j2p(value);
          }

          static PyObject *t_FieldTLE_get__launchYear(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchYear());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__line1(t_FieldTLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine1());
            return j2p(value);
          }

          static PyObject *t_FieldTLE_get__line2(t_FieldTLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine2());
            return j2p(value);
          }

          static PyObject *t_FieldTLE_get__meanAnomaly(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanAnomaly());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__meanMotion(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanMotion());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__meanMotionFirstDerivative(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanMotionFirstDerivative());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__meanMotionSecondDerivative(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanMotionSecondDerivative());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__parametersDrivers(t_FieldTLE *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__perigeeArgument(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getPerigeeArgument());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__raan(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getRaan());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__revolutionNumberAtEpoch(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__satelliteNumber(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Data.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm01Data::class$ = NULL;
              jmethodID *SsrIgm01Data::mids$ = NULL;
              bool SsrIgm01Data::live$ = false;

              jclass SsrIgm01Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGnssIod_d6ab429752e7c267] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_a878e7837a73c516] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setGnssIod_8fd427ab23829bf5] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_cdebebf3a62a7ec1] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm01Data::SsrIgm01Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jint SsrIgm01Data::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_d6ab429752e7c267]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection SsrIgm01Data::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_a878e7837a73c516]));
              }

              void SsrIgm01Data::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_8fd427ab23829bf5], a0);
              }

              void SsrIgm01Data::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_cdebebf3a62a7ec1], a0.this$);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm01Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm01Data_init_(t_SsrIgm01Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm01Data_getGnssIod(t_SsrIgm01Data *self);
              static PyObject *t_SsrIgm01Data_getOrbitCorrection(t_SsrIgm01Data *self);
              static PyObject *t_SsrIgm01Data_setGnssIod(t_SsrIgm01Data *self, PyObject *arg);
              static PyObject *t_SsrIgm01Data_setOrbitCorrection(t_SsrIgm01Data *self, PyObject *arg);
              static PyObject *t_SsrIgm01Data_get__gnssIod(t_SsrIgm01Data *self, void *data);
              static int t_SsrIgm01Data_set__gnssIod(t_SsrIgm01Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm01Data_get__orbitCorrection(t_SsrIgm01Data *self, void *data);
              static int t_SsrIgm01Data_set__orbitCorrection(t_SsrIgm01Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm01Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm01Data, gnssIod),
                DECLARE_GETSET_FIELD(t_SsrIgm01Data, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm01Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm01Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Data, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm01Data, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm01Data, setGnssIod, METH_O),
                DECLARE_METHOD(t_SsrIgm01Data, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm01Data)[] = {
                { Py_tp_methods, t_SsrIgm01Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm01Data_init_ },
                { Py_tp_getset, t_SsrIgm01Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm01Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm01Data, t_SsrIgm01Data, SsrIgm01Data);

              void t_SsrIgm01Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm01Data), &PY_TYPE_DEF(SsrIgm01Data), module, "SsrIgm01Data", 0);
              }

              void t_SsrIgm01Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Data), "class_", make_descriptor(SsrIgm01Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Data), "wrapfn_", make_descriptor(t_SsrIgm01Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm01Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm01Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm01Data::wrap_Object(SsrIgm01Data(((t_SsrIgm01Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm01Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm01Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm01Data_init_(t_SsrIgm01Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm01Data object((jobject) NULL);

                INT_CALL(object = SsrIgm01Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm01Data_getGnssIod(t_SsrIgm01Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm01Data_getOrbitCorrection(t_SsrIgm01Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm01Data_setGnssIod(t_SsrIgm01Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGnssIod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGnssIod", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm01Data_setOrbitCorrection(t_SsrIgm01Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setOrbitCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm01Data_get__gnssIod(t_SsrIgm01Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm01Data_set__gnssIod(t_SsrIgm01Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGnssIod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gnssIod", arg);
                return -1;
              }

              static PyObject *t_SsrIgm01Data_get__orbitCorrection(t_SsrIgm01Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_SsrIgm01Data_set__orbitCorrection(t_SsrIgm01Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCorrection", arg);
                return -1;
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
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/UpdatableTile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *TileUpdater::class$ = NULL;
        jmethodID *TileUpdater::mids$ = NULL;
        bool TileUpdater::live$ = false;

        jclass TileUpdater::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/TileUpdater");

            mids$ = new jmethodID[max_mid];
            mids$[mid_updateTile_9be60dc0a7c39204] = env->getMethodID(cls, "updateTile", "(DDLorg/orekit/rugged/raster/UpdatableTile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void TileUpdater::updateTile(jdouble a0, jdouble a1, const ::org::orekit::rugged::raster::UpdatableTile & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateTile_9be60dc0a7c39204], a0, a1, a2.this$);
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
      namespace raster {
        static PyObject *t_TileUpdater_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileUpdater_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileUpdater_updateTile(t_TileUpdater *self, PyObject *args);

        static PyMethodDef t_TileUpdater__methods_[] = {
          DECLARE_METHOD(t_TileUpdater, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileUpdater, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileUpdater, updateTile, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TileUpdater)[] = {
          { Py_tp_methods, t_TileUpdater__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TileUpdater)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TileUpdater, t_TileUpdater, TileUpdater);

        void t_TileUpdater::install(PyObject *module)
        {
          installType(&PY_TYPE(TileUpdater), &PY_TYPE_DEF(TileUpdater), module, "TileUpdater", 0);
        }

        void t_TileUpdater::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileUpdater), "class_", make_descriptor(TileUpdater::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileUpdater), "wrapfn_", make_descriptor(t_TileUpdater::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileUpdater), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TileUpdater_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TileUpdater::initializeClass, 1)))
            return NULL;
          return t_TileUpdater::wrap_Object(TileUpdater(((t_TileUpdater *) arg)->object.this$));
        }
        static PyObject *t_TileUpdater_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TileUpdater::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TileUpdater_updateTile(t_TileUpdater *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::UpdatableTile a2((jobject) NULL);

          if (!parseArgs(args, "DDk", ::org::orekit::rugged::raster::UpdatableTile::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.updateTile(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateTile", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonFrames.h"
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonFrames::class$ = NULL;
      jmethodID *PythonFrames::mids$ = NULL;
      bool PythonFrames::live$ = false;

      jclass PythonFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_buildUncachedITRF_b3c0898cffa17768] = env->getMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getCIRF_84e014d661e18862] = env->getMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_449c13dc13254059] = env->getMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEOPHistory_5f3b1864e8a02d51] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEcliptic_6c55c8e7e159d424] = env->getMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_2914574e34e220d9] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getGCRF_cb151471db4570f0] = env->getMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_7aa0049260c7fcad] = env->getMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_84e014d661e18862] = env->getMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_cb151471db4570f0] = env->getMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_84e014d661e18862] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_8580ffa0332936c5] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_84e014d661e18862] = env->getMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_d7c1cc155dc219ec] = env->getMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_7aa0049260c7fcad] = env->getMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getPZ9011_84e014d661e18862] = env->getMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_449c13dc13254059] = env->getMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_d7c1cc155dc219ec] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_84e014d661e18862] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_7aa0049260c7fcad] = env->getMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_84e014d661e18862] = env->getMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_449c13dc13254059] = env->getMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFrames::PythonFrames() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonFrames::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonFrames::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonFrames::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_PythonFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonFrames_init_(t_PythonFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFrames_finalize(t_PythonFrames *self);
      static PyObject *t_PythonFrames_pythonExtension(t_PythonFrames *self, PyObject *args);
      static jobject JNICALL t_PythonFrames_buildUncachedITRF0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getCIRF1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getEME20002(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getEOPHistory3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getEcliptic4(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getFrame5(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getGCRF6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getGTOD7(JNIEnv *jenv, jobject jobj, jboolean a0);
      static jobject JNICALL t_PythonFrames_getGTOD8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getICRF9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getITRF10(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getITRF11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
      static jobject JNICALL t_PythonFrames_getITRFEquinox12(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getMOD13(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getMOD14(JNIEnv *jenv, jobject jobj, jboolean a0);
      static jobject JNICALL t_PythonFrames_getPZ901115(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getTEME16(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getTIRF17(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getTIRF18(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getTOD19(JNIEnv *jenv, jobject jobj, jboolean a0);
      static jobject JNICALL t_PythonFrames_getTOD20(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getVeis195021(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFrames_pythonDecRef22(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFrames_get__self(t_PythonFrames *self, void *data);
      static PyGetSetDef t_PythonFrames__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFrames, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFrames__methods_[] = {
        DECLARE_METHOD(t_PythonFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFrames, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFrames, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFrames)[] = {
        { Py_tp_methods, t_PythonFrames__methods_ },
        { Py_tp_init, (void *) t_PythonFrames_init_ },
        { Py_tp_getset, t_PythonFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFrames)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFrames, t_PythonFrames, PythonFrames);

      void t_PythonFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFrames), &PY_TYPE_DEF(PythonFrames), module, "PythonFrames", 1);
      }

      void t_PythonFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFrames), "class_", make_descriptor(PythonFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFrames), "wrapfn_", make_descriptor(t_PythonFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFrames), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFrames::initializeClass);
        JNINativeMethod methods[] = {
          { "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_buildUncachedITRF0 },
          { "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getCIRF1 },
          { "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getEME20002 },
          { "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;", (void *) t_PythonFrames_getEOPHistory3 },
          { "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getEcliptic4 },
          { "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getFrame5 },
          { "getGCRF", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getGCRF6 },
          { "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getGTOD7 },
          { "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getGTOD8 },
          { "getICRF", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getICRF9 },
          { "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getITRF10 },
          { "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;", (void *) t_PythonFrames_getITRF11 },
          { "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getITRFEquinox12 },
          { "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getMOD13 },
          { "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getMOD14 },
          { "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getPZ901115 },
          { "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTEME16 },
          { "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTIRF17 },
          { "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTIRF18 },
          { "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTOD19 },
          { "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTOD20 },
          { "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getVeis195021 },
          { "pythonDecRef", "()V", (void *) t_PythonFrames_pythonDecRef22 },
        };
        env->registerNatives(cls, methods, 23);
      }

      static PyObject *t_PythonFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFrames::initializeClass, 1)))
          return NULL;
        return t_PythonFrames::wrap_Object(PythonFrames(((t_PythonFrames *) arg)->object.this$));
      }
      static PyObject *t_PythonFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonFrames_init_(t_PythonFrames *self, PyObject *args, PyObject *kwds)
      {
        PythonFrames object((jobject) NULL);

        INT_CALL(object = PythonFrames());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFrames_finalize(t_PythonFrames *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFrames_pythonExtension(t_PythonFrames *self, PyObject *args)
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

      static jobject JNICALL t_PythonFrames_buildUncachedITRF0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_UT1Scale::wrap_Object(::org::orekit::time::UT1Scale(a0));
        PyObject *result = PyObject_CallMethod(obj, "buildUncachedITRF", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("buildUncachedITRF", result);
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

      static jobject JNICALL t_PythonFrames_getCIRF1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getCIRF", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getCIRF", result);
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

      static jobject JNICALL t_PythonFrames_getEME20002(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEME2000", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getEME2000", result);
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

      static jobject JNICALL t_PythonFrames_getEOPHistory3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getEOPHistory", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEOPHistory", result);
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

      static jobject JNICALL t_PythonFrames_getEcliptic4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *result = PyObject_CallMethod(obj, "getEcliptic", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getEcliptic", result);
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

      static jobject JNICALL t_PythonFrames_getFrame5(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_Predefined::wrap_Object(::org::orekit::frames::Predefined(a0));
        PyObject *result = PyObject_CallMethod(obj, "getFrame", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getFrame", result);
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

      static jobject JNICALL t_PythonFrames_getGCRF6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGCRF", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getGCRF", result);
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

      static jobject JNICALL t_PythonFrames_getGTOD7(JNIEnv *jenv, jobject jobj, jboolean a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = (a0 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getGTOD", "O", o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getGTOD", result);
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

      static jobject JNICALL t_PythonFrames_getGTOD8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getGTOD", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getGTOD", result);
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

      static jobject JNICALL t_PythonFrames_getICRF9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getICRF", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getICRF", result);
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

      static jobject JNICALL t_PythonFrames_getITRF10(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getITRF", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getITRF", result);
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

      static jobject JNICALL t_PythonFrames_getITRF11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::VersionedITRF value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_ITRFVersion::wrap_Object(::org::orekit::frames::ITRFVersion(a0));
        PyObject *o1 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a1));
        PyObject *o2 = (a2 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getITRF", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::VersionedITRF::initializeClass, &value))
        {
          throwTypeError("getITRF", result);
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

      static jobject JNICALL t_PythonFrames_getITRFEquinox12(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getITRFEquinox", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getITRFEquinox", result);
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

      static jobject JNICALL t_PythonFrames_getMOD13(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *result = PyObject_CallMethod(obj, "getMOD", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getMOD", result);
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

      static jobject JNICALL t_PythonFrames_getMOD14(JNIEnv *jenv, jobject jobj, jboolean a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = (a0 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getMOD", "O", o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getMOD", result);
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

      static jobject JNICALL t_PythonFrames_getPZ901115(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getPZ9011", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getPZ9011", result);
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

      static jobject JNICALL t_PythonFrames_getTEME16(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTEME", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTEME", result);
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

      static jobject JNICALL t_PythonFrames_getTIRF17(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTIRF", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTIRF", result);
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

      static jobject JNICALL t_PythonFrames_getTIRF18(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getTIRF", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTIRF", result);
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

      static jobject JNICALL t_PythonFrames_getTOD19(JNIEnv *jenv, jobject jobj, jboolean a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = (a0 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getTOD", "O", o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTOD", result);
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

      static jobject JNICALL t_PythonFrames_getTOD20(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getTOD", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTOD", result);
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

      static jobject JNICALL t_PythonFrames_getVeis195021(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getVeis1950", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getVeis1950", result);
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

      static void JNICALL t_PythonFrames_pythonDecRef22(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFrames_get__self(t_PythonFrames *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/UtcId.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/files/rinex/navigation/UtcId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *UtcId::class$ = NULL;
          jmethodID *UtcId::mids$ = NULL;
          bool UtcId::live$ = false;
          UtcId *UtcId::GAL = NULL;
          UtcId *UtcId::IRN = NULL;
          UtcId *UtcId::NICT = NULL;
          UtcId *UtcId::NIST = NULL;
          UtcId *UtcId::NTSC = NULL;
          UtcId *UtcId::OP = NULL;
          UtcId *UtcId::SU = NULL;
          UtcId *UtcId::USNO = NULL;

          jclass UtcId::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/UtcId");

              mids$ = new jmethodID[max_mid];
              mids$[mid_parseUtcId_85e0255bcf2c873a] = env->getStaticMethodID(cls, "parseUtcId", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/UtcId;");
              mids$[mid_valueOf_85e0255bcf2c873a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/UtcId;");
              mids$[mid_values_a69c9bb180bd5e45] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/UtcId;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GAL = new UtcId(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              IRN = new UtcId(env->getStaticObjectField(cls, "IRN", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              NICT = new UtcId(env->getStaticObjectField(cls, "NICT", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              NIST = new UtcId(env->getStaticObjectField(cls, "NIST", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              NTSC = new UtcId(env->getStaticObjectField(cls, "NTSC", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              OP = new UtcId(env->getStaticObjectField(cls, "OP", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              SU = new UtcId(env->getStaticObjectField(cls, "SU", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              USNO = new UtcId(env->getStaticObjectField(cls, "USNO", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          UtcId UtcId::parseUtcId(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return UtcId(env->callStaticObjectMethod(cls, mids$[mid_parseUtcId_85e0255bcf2c873a], a0.this$));
          }

          UtcId UtcId::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return UtcId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_85e0255bcf2c873a], a0.this$));
          }

          JArray< UtcId > UtcId::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< UtcId >(env->callStaticObjectMethod(cls, mids$[mid_values_a69c9bb180bd5e45]));
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
          static PyObject *t_UtcId_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UtcId_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UtcId_of_(t_UtcId *self, PyObject *args);
          static PyObject *t_UtcId_parseUtcId(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UtcId_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_UtcId_values(PyTypeObject *type);
          static PyObject *t_UtcId_get__parameters_(t_UtcId *self, void *data);
          static PyGetSetDef t_UtcId__fields_[] = {
            DECLARE_GET_FIELD(t_UtcId, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UtcId__methods_[] = {
            DECLARE_METHOD(t_UtcId, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UtcId, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UtcId, of_, METH_VARARGS),
            DECLARE_METHOD(t_UtcId, parseUtcId, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UtcId, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_UtcId, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UtcId)[] = {
            { Py_tp_methods, t_UtcId__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_UtcId__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UtcId)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(UtcId, t_UtcId, UtcId);
          PyObject *t_UtcId::wrap_Object(const UtcId& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UtcId::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UtcId *self = (t_UtcId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_UtcId::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UtcId::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UtcId *self = (t_UtcId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_UtcId::install(PyObject *module)
          {
            installType(&PY_TYPE(UtcId), &PY_TYPE_DEF(UtcId), module, "UtcId", 0);
          }

          void t_UtcId::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "class_", make_descriptor(UtcId::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "wrapfn_", make_descriptor(t_UtcId::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "boxfn_", make_descriptor(boxObject));
            env->getClass(UtcId::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "GAL", make_descriptor(t_UtcId::wrap_Object(*UtcId::GAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "IRN", make_descriptor(t_UtcId::wrap_Object(*UtcId::IRN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "NICT", make_descriptor(t_UtcId::wrap_Object(*UtcId::NICT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "NIST", make_descriptor(t_UtcId::wrap_Object(*UtcId::NIST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "NTSC", make_descriptor(t_UtcId::wrap_Object(*UtcId::NTSC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "OP", make_descriptor(t_UtcId::wrap_Object(*UtcId::OP)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "SU", make_descriptor(t_UtcId::wrap_Object(*UtcId::SU)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "USNO", make_descriptor(t_UtcId::wrap_Object(*UtcId::USNO)));
          }

          static PyObject *t_UtcId_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UtcId::initializeClass, 1)))
              return NULL;
            return t_UtcId::wrap_Object(UtcId(((t_UtcId *) arg)->object.this$));
          }
          static PyObject *t_UtcId_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UtcId::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UtcId_of_(t_UtcId *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_UtcId_parseUtcId(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            UtcId result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::UtcId::parseUtcId(a0));
              return t_UtcId::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parseUtcId", arg);
            return NULL;
          }

          static PyObject *t_UtcId_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            UtcId result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::UtcId::valueOf(a0));
              return t_UtcId::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_UtcId_values(PyTypeObject *type)
          {
            JArray< UtcId > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::UtcId::values());
            return JArray<jobject>(result.this$).wrap(t_UtcId::wrap_jobject);
          }
          static PyObject *t_UtcId_get__parameters_(t_UtcId *self, void *data)
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
#include "org/orekit/models/earth/weather/GlobalPressureTemperature2Model.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/Geoid.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *GlobalPressureTemperature2Model::class$ = NULL;
          jmethodID *GlobalPressureTemperature2Model::mids$ = NULL;
          bool GlobalPressureTemperature2Model::live$ = false;
          ::java::lang::String *GlobalPressureTemperature2Model::DEFAULT_SUPPORTED_NAMES = NULL;

          jclass GlobalPressureTemperature2Model::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/GlobalPressureTemperature2Model");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c1da53fcf22e801d] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/models/earth/Geoid;)V");
              mids$[mid_init$_4db0b7c5261bb3ef] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/Geoid;)V");
              mids$[mid_init$_253074503d2950e9] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/Geoid;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getA_be783177b060994b] = env->getMethodID(cls, "getA", "()[D");
              mids$[mid_getPressure_9981f74b2d109da6] = env->getMethodID(cls, "getPressure", "()D");
              mids$[mid_getTemperature_9981f74b2d109da6] = env->getMethodID(cls, "getTemperature", "()D");
              mids$[mid_getWaterVaporPressure_9981f74b2d109da6] = env->getMethodID(cls, "getWaterVaporPressure", "()D");
              mids$[mid_weatherParameters_281401e03841f11f] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalPressureTemperature2Model::GlobalPressureTemperature2Model(jdouble a0, jdouble a1, const ::org::orekit::models::earth::Geoid & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c1da53fcf22e801d, a0, a1, a2.this$)) {}

          GlobalPressureTemperature2Model::GlobalPressureTemperature2Model(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::Geoid & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4db0b7c5261bb3ef, a0.this$, a1, a2, a3.this$)) {}

          GlobalPressureTemperature2Model::GlobalPressureTemperature2Model(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::Geoid & a3, const ::org::orekit::data::DataProvidersManager & a4, const ::org::orekit::time::TimeScale & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_253074503d2950e9, a0.this$, a1, a2, a3.this$, a4.this$, a5.this$)) {}

          JArray< jdouble > GlobalPressureTemperature2Model::getA() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getA_be783177b060994b]));
          }

          jdouble GlobalPressureTemperature2Model::getPressure() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPressure_9981f74b2d109da6]);
          }

          jdouble GlobalPressureTemperature2Model::getTemperature() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTemperature_9981f74b2d109da6]);
          }

          jdouble GlobalPressureTemperature2Model::getWaterVaporPressure() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWaterVaporPressure_9981f74b2d109da6]);
          }

          void GlobalPressureTemperature2Model::weatherParameters(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_weatherParameters_281401e03841f11f], a0, a1.this$);
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
    namespace models {
      namespace earth {
        namespace weather {
          static PyObject *t_GlobalPressureTemperature2Model_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalPressureTemperature2Model_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalPressureTemperature2Model_init_(t_GlobalPressureTemperature2Model *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalPressureTemperature2Model_getA(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_getPressure(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_getTemperature(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_getWaterVaporPressure(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_weatherParameters(t_GlobalPressureTemperature2Model *self, PyObject *args);
          static PyObject *t_GlobalPressureTemperature2Model_get__a(t_GlobalPressureTemperature2Model *self, void *data);
          static PyObject *t_GlobalPressureTemperature2Model_get__pressure(t_GlobalPressureTemperature2Model *self, void *data);
          static PyObject *t_GlobalPressureTemperature2Model_get__temperature(t_GlobalPressureTemperature2Model *self, void *data);
          static PyObject *t_GlobalPressureTemperature2Model_get__waterVaporPressure(t_GlobalPressureTemperature2Model *self, void *data);
          static PyGetSetDef t_GlobalPressureTemperature2Model__fields_[] = {
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, a),
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, pressure),
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, temperature),
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, waterVaporPressure),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlobalPressureTemperature2Model__methods_[] = {
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getA, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getPressure, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getTemperature, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getWaterVaporPressure, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, weatherParameters, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalPressureTemperature2Model)[] = {
            { Py_tp_methods, t_GlobalPressureTemperature2Model__methods_ },
            { Py_tp_init, (void *) t_GlobalPressureTemperature2Model_init_ },
            { Py_tp_getset, t_GlobalPressureTemperature2Model__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalPressureTemperature2Model)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalPressureTemperature2Model, t_GlobalPressureTemperature2Model, GlobalPressureTemperature2Model);

          void t_GlobalPressureTemperature2Model::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalPressureTemperature2Model), &PY_TYPE_DEF(GlobalPressureTemperature2Model), module, "GlobalPressureTemperature2Model", 0);
          }

          void t_GlobalPressureTemperature2Model::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "class_", make_descriptor(GlobalPressureTemperature2Model::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "wrapfn_", make_descriptor(t_GlobalPressureTemperature2Model::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "boxfn_", make_descriptor(boxObject));
            env->getClass(GlobalPressureTemperature2Model::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*GlobalPressureTemperature2Model::DEFAULT_SUPPORTED_NAMES)));
          }

          static PyObject *t_GlobalPressureTemperature2Model_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalPressureTemperature2Model::initializeClass, 1)))
              return NULL;
            return t_GlobalPressureTemperature2Model::wrap_Object(GlobalPressureTemperature2Model(((t_GlobalPressureTemperature2Model *) arg)->object.this$));
          }
          static PyObject *t_GlobalPressureTemperature2Model_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalPressureTemperature2Model::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalPressureTemperature2Model_init_(t_GlobalPressureTemperature2Model *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::models::earth::Geoid a2((jobject) NULL);
                GlobalPressureTemperature2Model object((jobject) NULL);

                if (!parseArgs(args, "DDk", ::org::orekit::models::earth::Geoid::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GlobalPressureTemperature2Model(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::Geoid a3((jobject) NULL);
                GlobalPressureTemperature2Model object((jobject) NULL);

                if (!parseArgs(args, "sDDk", ::org::orekit::models::earth::Geoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = GlobalPressureTemperature2Model(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::Geoid a3((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a4((jobject) NULL);
                ::org::orekit::time::TimeScale a5((jobject) NULL);
                GlobalPressureTemperature2Model object((jobject) NULL);

                if (!parseArgs(args, "sDDkkk", ::org::orekit::models::earth::Geoid::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = GlobalPressureTemperature2Model(a0, a1, a2, a3, a4, a5));
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

          static PyObject *t_GlobalPressureTemperature2Model_getA(t_GlobalPressureTemperature2Model *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getA());
            return result.wrap();
          }

          static PyObject *t_GlobalPressureTemperature2Model_getPressure(t_GlobalPressureTemperature2Model *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPressure());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperature2Model_getTemperature(t_GlobalPressureTemperature2Model *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTemperature());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperature2Model_getWaterVaporPressure(t_GlobalPressureTemperature2Model *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWaterVaporPressure());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperature2Model_weatherParameters(t_GlobalPressureTemperature2Model *self, PyObject *args)
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.weatherParameters(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "weatherParameters", args);
            return NULL;
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__a(t_GlobalPressureTemperature2Model *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getA());
            return value.wrap();
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__pressure(t_GlobalPressureTemperature2Model *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPressure());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__temperature(t_GlobalPressureTemperature2Model *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTemperature());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__waterVaporPressure(t_GlobalPressureTemperature2Model *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getWaterVaporPressure());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::class$ = NULL;
          jmethodID *DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::mids$ = NULL;
          bool DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::live$ = false;

          jclass DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_partialsComputed_9f0a8665b3e460cf] = env->getMethodID(cls, "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/linear/RealMatrix;[D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::partialsComputed(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::linear::RealMatrix & a1, const JArray< jdouble > & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_partialsComputed_9f0a8665b3e460cf], a0.this$, a1.this$, a2.this$);
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
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_partialsComputed(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver *self, PyObject *args);

          static PyMethodDef t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver__methods_[] = {
            DECLARE_METHOD(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, partialsComputed, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver)[] = {
            { Py_tp_methods, t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver);

          void t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::install(PyObject *module)
          {
            installType(&PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), &PY_TYPE_DEF(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), module, "DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver", 0);
          }

          void t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), "class_", make_descriptor(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), "wrapfn_", make_descriptor(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass, 1)))
              return NULL;
            return t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::wrap_Object(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver(((t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver *) arg)->object.this$));
          }
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_partialsComputed(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);

            if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.partialsComputed(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "partialsComputed", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/enclosing/Encloser.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *Encloser::class$ = NULL;
        jmethodID *Encloser::mids$ = NULL;
        bool Encloser::live$ = false;

        jclass Encloser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/Encloser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_enclose_fc71bba104f0320f] = env->getMethodID(cls, "enclose", "(Ljava/lang/Iterable;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::enclosing::EnclosingBall Encloser::enclose(const ::java::lang::Iterable & a0) const
        {
          return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_enclose_fc71bba104f0320f], a0.this$));
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
      namespace enclosing {
        static PyObject *t_Encloser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Encloser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Encloser_of_(t_Encloser *self, PyObject *args);
        static PyObject *t_Encloser_enclose(t_Encloser *self, PyObject *arg);
        static PyObject *t_Encloser_get__parameters_(t_Encloser *self, void *data);
        static PyGetSetDef t_Encloser__fields_[] = {
          DECLARE_GET_FIELD(t_Encloser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Encloser__methods_[] = {
          DECLARE_METHOD(t_Encloser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Encloser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Encloser, of_, METH_VARARGS),
          DECLARE_METHOD(t_Encloser, enclose, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Encloser)[] = {
          { Py_tp_methods, t_Encloser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Encloser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Encloser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Encloser, t_Encloser, Encloser);
        PyObject *t_Encloser::wrap_Object(const Encloser& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Encloser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Encloser *self = (t_Encloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_Encloser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Encloser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Encloser *self = (t_Encloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_Encloser::install(PyObject *module)
        {
          installType(&PY_TYPE(Encloser), &PY_TYPE_DEF(Encloser), module, "Encloser", 0);
        }

        void t_Encloser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Encloser), "class_", make_descriptor(Encloser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Encloser), "wrapfn_", make_descriptor(t_Encloser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Encloser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Encloser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Encloser::initializeClass, 1)))
            return NULL;
          return t_Encloser::wrap_Object(Encloser(((t_Encloser *) arg)->object.this$));
        }
        static PyObject *t_Encloser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Encloser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Encloser_of_(t_Encloser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Encloser_enclose(t_Encloser *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = self->object.enclose(a0));
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "enclose", arg);
          return NULL;
        }
        static PyObject *t_Encloser_get__parameters_(t_Encloser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Frames.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Frames::class$ = NULL;
      jmethodID *Frames::mids$ = NULL;
      bool Frames::live$ = false;

      jclass Frames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Frames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_buildUncachedITRF_b3c0898cffa17768] = env->getMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;");
          mids$[mid_getCIRF_84e014d661e18862] = env->getMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_449c13dc13254059] = env->getMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEOPHistory_5f3b1864e8a02d51] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEcliptic_6c55c8e7e159d424] = env->getMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_2914574e34e220d9] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getGCRF_cb151471db4570f0] = env->getMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_7aa0049260c7fcad] = env->getMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_84e014d661e18862] = env->getMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_cb151471db4570f0] = env->getMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_84e014d661e18862] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_8580ffa0332936c5] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_84e014d661e18862] = env->getMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_d7c1cc155dc219ec] = env->getMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_7aa0049260c7fcad] = env->getMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getPZ9011_84e014d661e18862] = env->getMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_449c13dc13254059] = env->getMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_d7c1cc155dc219ec] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_84e014d661e18862] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_7aa0049260c7fcad] = env->getMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_84e014d661e18862] = env->getMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_449c13dc13254059] = env->getMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_of_061c68576adbc60a] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/TimeScales;Ljava/util/function/Supplier;)Lorg/orekit/frames/Frames;");
          mids$[mid_of_7962b11a6db722ec] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/TimeScales;Lorg/orekit/bodies/CelestialBodies;)Lorg/orekit/frames/Frames;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame Frames::buildUncachedITRF(const ::org::orekit::time::UT1Scale & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_buildUncachedITRF_b3c0898cffa17768], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getCIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getCIRF_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getEME2000() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getEME2000_449c13dc13254059]));
      }

      ::org::orekit::frames::EOPHistory Frames::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_5f3b1864e8a02d51], a0.this$, a1));
      }

      ::org::orekit::frames::Frame Frames::getEcliptic(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getEcliptic_6c55c8e7e159d424], a0.this$));
      }

      ::org::orekit::frames::Frame Frames::getFrame(const ::org::orekit::frames::Predefined & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2914574e34e220d9], a0.this$));
      }

      ::org::orekit::frames::Frame Frames::getGCRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getGCRF_cb151471db4570f0]));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getGTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_7aa0049260c7fcad], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getGTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::Frame Frames::getICRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getICRF_cb151471db4570f0]));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getITRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRF_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::VersionedITRF Frames::getITRF(const ::org::orekit::frames::ITRFVersion & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2) const
      {
        return ::org::orekit::frames::VersionedITRF(env->callObjectMethod(this$, mids$[mid_getITRF_8580ffa0332936c5], a0.this$, a1.this$, a2));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getITRFEquinox(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRFEquinox_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getMOD(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_d7c1cc155dc219ec], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getMOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_7aa0049260c7fcad], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getPZ9011(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getPZ9011_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTEME() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTEME_449c13dc13254059]));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTIRF(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_d7c1cc155dc219ec], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_7aa0049260c7fcad], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getVeis1950() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getVeis1950_449c13dc13254059]));
      }

      Frames Frames::of(const ::org::orekit::time::TimeScales & a0, const ::java::util::function::Supplier & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Frames(env->callStaticObjectMethod(cls, mids$[mid_of_061c68576adbc60a], a0.this$, a1.this$));
      }

      Frames Frames::of(const ::org::orekit::time::TimeScales & a0, const ::org::orekit::bodies::CelestialBodies & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Frames(env->callStaticObjectMethod(cls, mids$[mid_of_7962b11a6db722ec], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_Frames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frames_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frames_buildUncachedITRF(t_Frames *self, PyObject *arg);
      static PyObject *t_Frames_getCIRF(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getEME2000(t_Frames *self);
      static PyObject *t_Frames_getEOPHistory(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getEcliptic(t_Frames *self, PyObject *arg);
      static PyObject *t_Frames_getFrame(t_Frames *self, PyObject *arg);
      static PyObject *t_Frames_getGCRF(t_Frames *self);
      static PyObject *t_Frames_getGTOD(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getICRF(t_Frames *self);
      static PyObject *t_Frames_getITRF(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getITRFEquinox(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getMOD(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getPZ9011(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getTEME(t_Frames *self);
      static PyObject *t_Frames_getTIRF(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getTOD(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getVeis1950(t_Frames *self);
      static PyObject *t_Frames_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_Frames_get__eME2000(t_Frames *self, void *data);
      static PyObject *t_Frames_get__gCRF(t_Frames *self, void *data);
      static PyObject *t_Frames_get__iCRF(t_Frames *self, void *data);
      static PyObject *t_Frames_get__tEME(t_Frames *self, void *data);
      static PyObject *t_Frames_get__veis1950(t_Frames *self, void *data);
      static PyGetSetDef t_Frames__fields_[] = {
        DECLARE_GET_FIELD(t_Frames, eME2000),
        DECLARE_GET_FIELD(t_Frames, gCRF),
        DECLARE_GET_FIELD(t_Frames, iCRF),
        DECLARE_GET_FIELD(t_Frames, tEME),
        DECLARE_GET_FIELD(t_Frames, veis1950),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frames__methods_[] = {
        DECLARE_METHOD(t_Frames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frames, buildUncachedITRF, METH_O),
        DECLARE_METHOD(t_Frames, getCIRF, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getEME2000, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getEOPHistory, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getEcliptic, METH_O),
        DECLARE_METHOD(t_Frames, getFrame, METH_O),
        DECLARE_METHOD(t_Frames, getGCRF, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getGTOD, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getICRF, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getITRF, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getITRFEquinox, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getMOD, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getPZ9011, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getTEME, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getTIRF, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getTOD, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getVeis1950, METH_NOARGS),
        DECLARE_METHOD(t_Frames, of, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frames)[] = {
        { Py_tp_methods, t_Frames__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Frames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frames)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Frames, t_Frames, Frames);

      void t_Frames::install(PyObject *module)
      {
        installType(&PY_TYPE(Frames), &PY_TYPE_DEF(Frames), module, "Frames", 0);
      }

      void t_Frames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frames), "class_", make_descriptor(Frames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frames), "wrapfn_", make_descriptor(t_Frames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frames), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Frames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frames::initializeClass, 1)))
          return NULL;
        return t_Frames::wrap_Object(Frames(((t_Frames *) arg)->object.this$));
      }
      static PyObject *t_Frames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Frames_buildUncachedITRF(t_Frames *self, PyObject *arg)
      {
        ::org::orekit::time::UT1Scale a0((jobject) NULL);
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UT1Scale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.buildUncachedITRF(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "buildUncachedITRF", arg);
        return NULL;
      }

      static PyObject *t_Frames_getCIRF(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getCIRF(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCIRF", args);
        return NULL;
      }

      static PyObject *t_Frames_getEME2000(t_Frames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_Frames_getEOPHistory(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getEOPHistory(a0, a1));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEOPHistory", args);
        return NULL;
      }

      static PyObject *t_Frames_getEcliptic(t_Frames *self, PyObject *arg)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
        {
          OBJ_CALL(result = self->object.getEcliptic(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEcliptic", arg);
        return NULL;
      }

      static PyObject *t_Frames_getFrame(t_Frames *self, PyObject *arg)
      {
        ::org::orekit::frames::Predefined a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::frames::Predefined::initializeClass, &a0, &p0, ::org::orekit::frames::t_Predefined::parameters_))
        {
          OBJ_CALL(result = self->object.getFrame(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrame", arg);
        return NULL;
      }

      static PyObject *t_Frames_getGCRF(t_Frames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frames_getGTOD(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getGTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getGTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGTOD", args);
        return NULL;
      }

      static PyObject *t_Frames_getICRF(t_Frames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frames_getITRF(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getITRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::frames::VersionedITRF result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::frames::t_ITRFVersion::parameters_, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getITRF(a0, a1, a2));
              return ::org::orekit::frames::t_VersionedITRF::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getITRF", args);
        return NULL;
      }

      static PyObject *t_Frames_getITRFEquinox(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getITRFEquinox(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getITRFEquinox", args);
        return NULL;
      }

      static PyObject *t_Frames_getMOD(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getMOD", args);
        return NULL;
      }

      static PyObject *t_Frames_getPZ9011(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPZ9011(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPZ9011", args);
        return NULL;
      }

      static PyObject *t_Frames_getTEME(t_Frames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_Frames_getTIRF(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getTIRF(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getTIRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTIRF", args);
        return NULL;
      }

      static PyObject *t_Frames_getTOD(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTOD", args);
        return NULL;
      }

      static PyObject *t_Frames_getVeis1950(t_Frames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_Frames_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::java::util::function::Supplier a1((jobject) NULL);
            PyTypeObject **p1;
            Frames result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::TimeScales::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::Frames::of(a0, a1));
              return t_Frames::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
            Frames result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::Frames::of(a0, a1));
              return t_Frames::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_Frames_get__eME2000(t_Frames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__gCRF(t_Frames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__iCRF(t_Frames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__tEME(t_Frames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__veis1950(t_Frames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/PythonFieldSDP4.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *PythonFieldSDP4::class$ = NULL;
          jmethodID *PythonFieldSDP4::mids$ = NULL;
          bool PythonFieldSDP4::live$ = false;

          jclass PythonFieldSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/PythonFieldSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cb79b5ee065880cd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepPeriodicEffects_f63ca9e3185c722e] = env->getMethodID(cls, "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepSecularEffects_f63ca9e3185c722e] = env->getMethodID(cls, "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_luniSolarTermsComputation_ff7cb6c242604316] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonFieldSDP4::PythonFieldSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4) : ::org::orekit::propagation::analytical::tle::FieldSDP4(env->newObject(initializeClass, &mids$, mid_init$_cb79b5ee065880cd, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          void PythonFieldSDP4::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonFieldSDP4::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonFieldSDP4::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_PythonFieldSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldSDP4_of_(t_PythonFieldSDP4 *self, PyObject *args);
          static int t_PythonFieldSDP4_init_(t_PythonFieldSDP4 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonFieldSDP4_finalize(t_PythonFieldSDP4 *self);
          static PyObject *t_PythonFieldSDP4_pythonExtension(t_PythonFieldSDP4 *self, PyObject *args);
          static void JNICALL t_PythonFieldSDP4_deepPeriodicEffects0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonFieldSDP4_deepSecularEffects1(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonFieldSDP4_luniSolarTermsComputation2(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonFieldSDP4_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonFieldSDP4_get__self(t_PythonFieldSDP4 *self, void *data);
          static PyObject *t_PythonFieldSDP4_get__parameters_(t_PythonFieldSDP4 *self, void *data);
          static PyGetSetDef t_PythonFieldSDP4__fields_[] = {
            DECLARE_GET_FIELD(t_PythonFieldSDP4, self),
            DECLARE_GET_FIELD(t_PythonFieldSDP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonFieldSDP4__methods_[] = {
            DECLARE_METHOD(t_PythonFieldSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldSDP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldSDP4, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonFieldSDP4, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonFieldSDP4, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonFieldSDP4)[] = {
            { Py_tp_methods, t_PythonFieldSDP4__methods_ },
            { Py_tp_init, (void *) t_PythonFieldSDP4_init_ },
            { Py_tp_getset, t_PythonFieldSDP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonFieldSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldSDP4),
            NULL
          };

          DEFINE_TYPE(PythonFieldSDP4, t_PythonFieldSDP4, PythonFieldSDP4);
          PyObject *t_PythonFieldSDP4::wrap_Object(const PythonFieldSDP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldSDP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldSDP4 *self = (t_PythonFieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonFieldSDP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldSDP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldSDP4 *self = (t_PythonFieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonFieldSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonFieldSDP4), &PY_TYPE_DEF(PythonFieldSDP4), module, "PythonFieldSDP4", 1);
          }

          void t_PythonFieldSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldSDP4), "class_", make_descriptor(PythonFieldSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldSDP4), "wrapfn_", make_descriptor(t_PythonFieldSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldSDP4), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonFieldSDP4::initializeClass);
            JNINativeMethod methods[] = {
              { "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldSDP4_deepPeriodicEffects0 },
              { "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldSDP4_deepSecularEffects1 },
              { "luniSolarTermsComputation", "()V", (void *) t_PythonFieldSDP4_luniSolarTermsComputation2 },
              { "pythonDecRef", "()V", (void *) t_PythonFieldSDP4_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonFieldSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonFieldSDP4::initializeClass, 1)))
              return NULL;
            return t_PythonFieldSDP4::wrap_Object(PythonFieldSDP4(((t_PythonFieldSDP4 *) arg)->object.this$));
          }
          static PyObject *t_PythonFieldSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonFieldSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonFieldSDP4_of_(t_PythonFieldSDP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonFieldSDP4_init_(t_PythonFieldSDP4 *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
            PyTypeObject **p4;
            PythonFieldSDP4 object((jobject) NULL);

            if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = PythonFieldSDP4(a0, a1, a2, a3, a4));
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

          static PyObject *t_PythonFieldSDP4_finalize(t_PythonFieldSDP4 *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonFieldSDP4_pythonExtension(t_PythonFieldSDP4 *self, PyObject *args)
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

          static void JNICALL t_PythonFieldSDP4_deepPeriodicEffects0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "deepPeriodicEffects", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldSDP4_deepSecularEffects1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "deepSecularEffects", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldSDP4_luniSolarTermsComputation2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "luniSolarTermsComputation", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldSDP4_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonFieldSDP4_get__self(t_PythonFieldSDP4 *self, void *data)
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
          static PyObject *t_PythonFieldSDP4_get__parameters_(t_PythonFieldSDP4 *self, void *data)
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
#include "org/orekit/files/ilrs/PythonILRSHeader.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *PythonILRSHeader::class$ = NULL;
        jmethodID *PythonILRSHeader::mids$ = NULL;
        bool PythonILRSHeader::live$ = false;

        jclass PythonILRSHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/PythonILRSHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonILRSHeader::PythonILRSHeader() : ::org::orekit::files::ilrs::ILRSHeader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonILRSHeader::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonILRSHeader::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonILRSHeader::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ilrs {
        static PyObject *t_PythonILRSHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonILRSHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonILRSHeader_init_(t_PythonILRSHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonILRSHeader_finalize(t_PythonILRSHeader *self);
        static PyObject *t_PythonILRSHeader_pythonExtension(t_PythonILRSHeader *self, PyObject *args);
        static void JNICALL t_PythonILRSHeader_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonILRSHeader_get__self(t_PythonILRSHeader *self, void *data);
        static PyGetSetDef t_PythonILRSHeader__fields_[] = {
          DECLARE_GET_FIELD(t_PythonILRSHeader, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonILRSHeader__methods_[] = {
          DECLARE_METHOD(t_PythonILRSHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonILRSHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonILRSHeader, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonILRSHeader, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonILRSHeader)[] = {
          { Py_tp_methods, t_PythonILRSHeader__methods_ },
          { Py_tp_init, (void *) t_PythonILRSHeader_init_ },
          { Py_tp_getset, t_PythonILRSHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonILRSHeader)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::ILRSHeader),
          NULL
        };

        DEFINE_TYPE(PythonILRSHeader, t_PythonILRSHeader, PythonILRSHeader);

        void t_PythonILRSHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonILRSHeader), &PY_TYPE_DEF(PythonILRSHeader), module, "PythonILRSHeader", 1);
        }

        void t_PythonILRSHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonILRSHeader), "class_", make_descriptor(PythonILRSHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonILRSHeader), "wrapfn_", make_descriptor(t_PythonILRSHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonILRSHeader), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonILRSHeader::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonILRSHeader_pythonDecRef0 },
          };
          env->registerNatives(cls, methods, 1);
        }

        static PyObject *t_PythonILRSHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonILRSHeader::initializeClass, 1)))
            return NULL;
          return t_PythonILRSHeader::wrap_Object(PythonILRSHeader(((t_PythonILRSHeader *) arg)->object.this$));
        }
        static PyObject *t_PythonILRSHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonILRSHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonILRSHeader_init_(t_PythonILRSHeader *self, PyObject *args, PyObject *kwds)
        {
          PythonILRSHeader object((jobject) NULL);

          INT_CALL(object = PythonILRSHeader());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonILRSHeader_finalize(t_PythonILRSHeader *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonILRSHeader_pythonExtension(t_PythonILRSHeader *self, PyObject *args)
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

        static void JNICALL t_PythonILRSHeader_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonILRSHeader::mids$[PythonILRSHeader::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonILRSHeader::mids$[PythonILRSHeader::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonILRSHeader_get__self(t_PythonILRSHeader *self, void *data)
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
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GPSScale::class$ = NULL;
      jmethodID *GPSScale::mids$ = NULL;
      bool GPSScale::live$ = false;

      jclass GPSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GPSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_50aa1fdea9b81950] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String GPSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jdouble GPSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GPSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      jdouble GPSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_50aa1fdea9b81950], a0.this$, a1.this$);
      }

      ::java::lang::String GPSScale::toString() const
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
    namespace time {
      static PyObject *t_GPSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GPSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GPSScale_getName(t_GPSScale *self);
      static PyObject *t_GPSScale_offsetFromTAI(t_GPSScale *self, PyObject *args);
      static PyObject *t_GPSScale_offsetToTAI(t_GPSScale *self, PyObject *args);
      static PyObject *t_GPSScale_toString(t_GPSScale *self, PyObject *args);
      static PyObject *t_GPSScale_get__name(t_GPSScale *self, void *data);
      static PyGetSetDef t_GPSScale__fields_[] = {
        DECLARE_GET_FIELD(t_GPSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GPSScale__methods_[] = {
        DECLARE_METHOD(t_GPSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GPSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GPSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GPSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GPSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_GPSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GPSScale)[] = {
        { Py_tp_methods, t_GPSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GPSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GPSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GPSScale, t_GPSScale, GPSScale);

      void t_GPSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GPSScale), &PY_TYPE_DEF(GPSScale), module, "GPSScale", 0);
      }

      void t_GPSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GPSScale), "class_", make_descriptor(GPSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GPSScale), "wrapfn_", make_descriptor(t_GPSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GPSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GPSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GPSScale::initializeClass, 1)))
          return NULL;
        return t_GPSScale::wrap_Object(GPSScale(((t_GPSScale *) arg)->object.this$));
      }
      static PyObject *t_GPSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GPSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GPSScale_getName(t_GPSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GPSScale_offsetFromTAI(t_GPSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_GPSScale_offsetToTAI(t_GPSScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_GPSScale_toString(t_GPSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GPSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GPSScale_get__name(t_GPSScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexODEState.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexODEState::class$ = NULL;
      jmethodID *ComplexODEState::mids$ = NULL;
      bool ComplexODEState::live$ = false;

      jclass ComplexODEState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexODEState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_96eaad35f587723b] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_init$_44385e2122bf7dd0] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;[[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_getCompleteState_6bea1b718c2aa50b] = env->getMethodID(cls, "getCompleteState", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getCompleteStateDimension_d6ab429752e7c267] = env->getMethodID(cls, "getCompleteStateDimension", "()I");
          mids$[mid_getNumberOfSecondaryStates_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfSecondaryStates", "()I");
          mids$[mid_getPrimaryState_6bea1b718c2aa50b] = env->getMethodID(cls, "getPrimaryState", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getPrimaryStateDimension_d6ab429752e7c267] = env->getMethodID(cls, "getPrimaryStateDimension", "()I");
          mids$[mid_getSecondaryState_aeabb9821b423b35] = env->getMethodID(cls, "getSecondaryState", "(I)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getSecondaryStateDimension_d938fc64e8c6df2d] = env->getMethodID(cls, "getSecondaryStateDimension", "(I)I");
          mids$[mid_getTime_9981f74b2d109da6] = env->getMethodID(cls, "getTime", "()D");
          mids$[mid_copy_99167a6e5a2173ab] = env->getMethodID(cls, "copy", "([[Lorg/hipparchus/complex/Complex;)[[Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexODEState::ComplexODEState(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96eaad35f587723b, a0, a1.this$)) {}

      ComplexODEState::ComplexODEState(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< JArray< ::org::hipparchus::complex::Complex > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44385e2122bf7dd0, a0, a1.this$, a2.this$)) {}

      JArray< ::org::hipparchus::complex::Complex > ComplexODEState::getCompleteState() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getCompleteState_6bea1b718c2aa50b]));
      }

      jint ComplexODEState::getCompleteStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getCompleteStateDimension_d6ab429752e7c267]);
      }

      jint ComplexODEState::getNumberOfSecondaryStates() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfSecondaryStates_d6ab429752e7c267]);
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEState::getPrimaryState() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getPrimaryState_6bea1b718c2aa50b]));
      }

      jint ComplexODEState::getPrimaryStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getPrimaryStateDimension_d6ab429752e7c267]);
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEState::getSecondaryState(jint a0) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getSecondaryState_aeabb9821b423b35], a0));
      }

      jint ComplexODEState::getSecondaryStateDimension(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getSecondaryStateDimension_d938fc64e8c6df2d], a0);
      }

      jdouble ComplexODEState::getTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTime_9981f74b2d109da6]);
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
      static PyObject *t_ComplexODEState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexODEState_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexODEState_init_(t_ComplexODEState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexODEState_getCompleteState(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getCompleteStateDimension(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getNumberOfSecondaryStates(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getPrimaryState(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getPrimaryStateDimension(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getSecondaryState(t_ComplexODEState *self, PyObject *arg);
      static PyObject *t_ComplexODEState_getSecondaryStateDimension(t_ComplexODEState *self, PyObject *arg);
      static PyObject *t_ComplexODEState_getTime(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_get__completeState(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__completeStateDimension(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__numberOfSecondaryStates(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__primaryState(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__primaryStateDimension(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__time(t_ComplexODEState *self, void *data);
      static PyGetSetDef t_ComplexODEState__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexODEState, completeState),
        DECLARE_GET_FIELD(t_ComplexODEState, completeStateDimension),
        DECLARE_GET_FIELD(t_ComplexODEState, numberOfSecondaryStates),
        DECLARE_GET_FIELD(t_ComplexODEState, primaryState),
        DECLARE_GET_FIELD(t_ComplexODEState, primaryStateDimension),
        DECLARE_GET_FIELD(t_ComplexODEState, time),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexODEState__methods_[] = {
        DECLARE_METHOD(t_ComplexODEState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEState, getCompleteState, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getCompleteStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getNumberOfSecondaryStates, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getPrimaryState, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getPrimaryStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getSecondaryState, METH_O),
        DECLARE_METHOD(t_ComplexODEState, getSecondaryStateDimension, METH_O),
        DECLARE_METHOD(t_ComplexODEState, getTime, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexODEState)[] = {
        { Py_tp_methods, t_ComplexODEState__methods_ },
        { Py_tp_init, (void *) t_ComplexODEState_init_ },
        { Py_tp_getset, t_ComplexODEState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexODEState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexODEState, t_ComplexODEState, ComplexODEState);

      void t_ComplexODEState::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexODEState), &PY_TYPE_DEF(ComplexODEState), module, "ComplexODEState", 0);
      }

      void t_ComplexODEState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEState), "class_", make_descriptor(ComplexODEState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEState), "wrapfn_", make_descriptor(t_ComplexODEState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexODEState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexODEState::initializeClass, 1)))
          return NULL;
        return t_ComplexODEState::wrap_Object(ComplexODEState(((t_ComplexODEState *) arg)->object.this$));
      }
      static PyObject *t_ComplexODEState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexODEState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexODEState_init_(t_ComplexODEState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            ComplexODEState object((jobject) NULL);

            if (!parseArgs(args, "D[k", ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ComplexODEState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            JArray< JArray< ::org::hipparchus::complex::Complex > > a2((jobject) NULL);
            ComplexODEState object((jobject) NULL);

            if (!parseArgs(args, "D[k[[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ComplexODEState(a0, a1, a2));
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

      static PyObject *t_ComplexODEState_getCompleteState(t_ComplexODEState *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_getCompleteStateDimension(t_ComplexODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexODEState_getNumberOfSecondaryStates(t_ComplexODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexODEState_getPrimaryState(t_ComplexODEState *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_getPrimaryStateDimension(t_ComplexODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexODEState_getSecondaryState(t_ComplexODEState *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryState", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEState_getSecondaryStateDimension(t_ComplexODEState *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryStateDimension(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryStateDimension", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEState_getTime(t_ComplexODEState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ComplexODEState_get__completeState(t_ComplexODEState *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_get__completeStateDimension(t_ComplexODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ComplexODEState_get__numberOfSecondaryStates(t_ComplexODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ComplexODEState_get__primaryState(t_ComplexODEState *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_get__primaryStateDimension(t_ComplexODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ComplexODEState_get__time(t_ComplexODEState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTime());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GNSSOrbitalElements::class$ = NULL;
            jmethodID *GNSSOrbitalElements::mids$ = NULL;
            bool GNSSOrbitalElements::live$ = false;

            jclass GNSSOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAngularVelocity_9981f74b2d109da6] = env->getMethodID(cls, "getAngularVelocity", "()D");
                mids$[mid_getCic_9981f74b2d109da6] = env->getMethodID(cls, "getCic", "()D");
                mids$[mid_getCis_9981f74b2d109da6] = env->getMethodID(cls, "getCis", "()D");
                mids$[mid_getCrc_9981f74b2d109da6] = env->getMethodID(cls, "getCrc", "()D");
                mids$[mid_getCrs_9981f74b2d109da6] = env->getMethodID(cls, "getCrs", "()D");
                mids$[mid_getCuc_9981f74b2d109da6] = env->getMethodID(cls, "getCuc", "()D");
                mids$[mid_getCus_9981f74b2d109da6] = env->getMethodID(cls, "getCus", "()D");
                mids$[mid_getCycleDuration_9981f74b2d109da6] = env->getMethodID(cls, "getCycleDuration", "()D");
                mids$[mid_getE_9981f74b2d109da6] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getI0_9981f74b2d109da6] = env->getMethodID(cls, "getI0", "()D");
                mids$[mid_getIDot_9981f74b2d109da6] = env->getMethodID(cls, "getIDot", "()D");
                mids$[mid_getM0_9981f74b2d109da6] = env->getMethodID(cls, "getM0", "()D");
                mids$[mid_getMeanMotion_9981f74b2d109da6] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getOmega0_9981f74b2d109da6] = env->getMethodID(cls, "getOmega0", "()D");
                mids$[mid_getOmegaDot_9981f74b2d109da6] = env->getMethodID(cls, "getOmegaDot", "()D");
                mids$[mid_getPRN_d6ab429752e7c267] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getPa_9981f74b2d109da6] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getPropagator_75cb4356e458488d] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
                mids$[mid_getPropagator_ca0d0889bd02787a] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
                mids$[mid_getPropagator_2fc27ad3b39f195f] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;D)Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
                mids$[mid_getSma_9981f74b2d109da6] = env->getMethodID(cls, "getSma", "()D");
                mids$[mid_getTime_9981f74b2d109da6] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getWeek_d6ab429752e7c267] = env->getMethodID(cls, "getWeek", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble GNSSOrbitalElements::getAngularVelocity() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAngularVelocity_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getCic() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCic_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getCis() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCis_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getCrc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrc_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getCrs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrs_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getCuc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCuc_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getCus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCus_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getCycleDuration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCycleDuration_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getI0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getI0_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getIDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIDot_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getM0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM0_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getOmega0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmega0_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getOmegaDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_9981f74b2d109da6]);
            }

            jint GNSSOrbitalElements::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_d6ab429752e7c267]);
            }

            jdouble GNSSOrbitalElements::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_9981f74b2d109da6]);
            }

            ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSOrbitalElements::getPropagator() const
            {
              return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_75cb4356e458488d]));
            }

            ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSOrbitalElements::getPropagator(const ::org::orekit::frames::Frames & a0) const
            {
              return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_ca0d0889bd02787a], a0.this$));
            }

            ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSOrbitalElements::getPropagator(const ::org::orekit::frames::Frames & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, jdouble a4) const
            {
              return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_2fc27ad3b39f195f], a0.this$, a1.this$, a2.this$, a3.this$, a4));
            }

            jdouble GNSSOrbitalElements::getSma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSma_9981f74b2d109da6]);
            }

            jdouble GNSSOrbitalElements::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_9981f74b2d109da6]);
            }

            jint GNSSOrbitalElements::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_d6ab429752e7c267]);
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
            static PyObject *t_GNSSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSOrbitalElements_getAngularVelocity(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCic(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCis(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCrc(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCrs(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCuc(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCus(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCycleDuration(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getE(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getI0(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getIDot(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getM0(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getMeanMotion(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getMu(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getOmega0(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getOmegaDot(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getPRN(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getPa(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getPropagator(t_GNSSOrbitalElements *self, PyObject *args);
            static PyObject *t_GNSSOrbitalElements_getSma(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getTime(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getWeek(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_get__angularVelocity(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cic(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cis(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__crc(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__crs(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cuc(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cus(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cycleDuration(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__e(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__i0(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__iDot(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__m0(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__meanMotion(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__mu(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__omega0(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__omegaDot(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__pRN(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__pa(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__propagator(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__sma(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__time(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__week(t_GNSSOrbitalElements *self, void *data);
            static PyGetSetDef t_GNSSOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, angularVelocity),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cic),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cis),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, crc),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, crs),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cuc),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cus),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cycleDuration),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, e),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, i0),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, iDot),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, m0),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, meanMotion),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, mu),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, omega0),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, omegaDot),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, pRN),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, pa),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, propagator),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, sma),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, time),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, week),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GNSSOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_GNSSOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getAngularVelocity, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCic, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCis, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCrc, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCrs, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCuc, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCus, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCycleDuration, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getE, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getI0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getIDot, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getM0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getMu, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getOmega0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getOmegaDot, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getPa, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getSma, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getWeek, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GNSSOrbitalElements)[] = {
              { Py_tp_methods, t_GNSSOrbitalElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_GNSSOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GNSSOrbitalElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(GNSSOrbitalElements, t_GNSSOrbitalElements, GNSSOrbitalElements);

            void t_GNSSOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(GNSSOrbitalElements), &PY_TYPE_DEF(GNSSOrbitalElements), module, "GNSSOrbitalElements", 0);
            }

            void t_GNSSOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSOrbitalElements), "class_", make_descriptor(GNSSOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSOrbitalElements), "wrapfn_", make_descriptor(t_GNSSOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSOrbitalElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GNSSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GNSSOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_GNSSOrbitalElements::wrap_Object(GNSSOrbitalElements(((t_GNSSOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_GNSSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GNSSOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_GNSSOrbitalElements_getAngularVelocity(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCic(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCic());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCis(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCis());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCrc(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCrs(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCuc(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCuc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCus(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCycleDuration(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getE(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getI0(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getI0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getIDot(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getM0(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getMeanMotion(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getMu(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getOmega0(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmega0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getOmegaDot(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getPRN(t_GNSSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GNSSOrbitalElements_getPa(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getPropagator(t_GNSSOrbitalElements *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);
                  OBJ_CALL(result = self->object.getPropagator());
                  return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
                }
                break;
               case 1:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::frames::Frames::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
                  }
                }
                break;
               case 5:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);

                  if (!parseArgs(args, "kkkkD", ::org::orekit::frames::Frames::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4));
                    return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_GNSSOrbitalElements_getSma(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getTime(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getWeek(t_GNSSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GNSSOrbitalElements_get__angularVelocity(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cic(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCic());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cis(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCis());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__crc(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__crs(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cuc(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCuc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cus(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCus());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cycleDuration(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__e(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__i0(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getI0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__iDot(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__m0(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__meanMotion(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__mu(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__omega0(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmega0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__omegaDot(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__pRN(t_GNSSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__pa(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__propagator(t_GNSSOrbitalElements *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::GNSSPropagator value((jobject) NULL);
              OBJ_CALL(value = self->object.getPropagator());
              return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(value);
            }

            static PyObject *t_GNSSOrbitalElements_get__sma(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__time(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__week(t_GNSSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
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
#include "org/orekit/estimation/measurements/gnss/PythonAbstractDualFrequencyCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "java/lang/Throwable.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/Frequency.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractDualFrequencyCombination::class$ = NULL;
          jmethodID *PythonAbstractDualFrequencyCombination::mids$ = NULL;
          bool PythonAbstractDualFrequencyCombination::live$ = false;

          jclass PythonAbstractDualFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractDualFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_43eea351c64a25e1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/CombinationType;Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getCombinedFrequency_9364fb0b7015b098] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedValue_ac28f5c378fae636] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractDualFrequencyCombination::PythonAbstractDualFrequencyCombination(const ::org::orekit::estimation::measurements::gnss::CombinationType & a0, const ::org::orekit::gnss::SatelliteSystem & a1) : ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination(env->newObject(initializeClass, &mids$, mid_init$_43eea351c64a25e1, a0.this$, a1.this$)) {}

          void PythonAbstractDualFrequencyCombination::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonAbstractDualFrequencyCombination::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonAbstractDualFrequencyCombination::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PythonAbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractDualFrequencyCombination_init_(t_PythonAbstractDualFrequencyCombination *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractDualFrequencyCombination_finalize(t_PythonAbstractDualFrequencyCombination *self);
          static PyObject *t_PythonAbstractDualFrequencyCombination_pythonExtension(t_PythonAbstractDualFrequencyCombination *self, PyObject *args);
          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedFrequency0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedValue1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jdouble a2, jobject a3);
          static void JNICALL t_PythonAbstractDualFrequencyCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractDualFrequencyCombination_get__self(t_PythonAbstractDualFrequencyCombination *self, void *data);
          static PyGetSetDef t_PythonAbstractDualFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractDualFrequencyCombination, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractDualFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractDualFrequencyCombination)[] = {
            { Py_tp_methods, t_PythonAbstractDualFrequencyCombination__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractDualFrequencyCombination_init_ },
            { Py_tp_getset, t_PythonAbstractDualFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractDualFrequencyCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(PythonAbstractDualFrequencyCombination, t_PythonAbstractDualFrequencyCombination, PythonAbstractDualFrequencyCombination);

          void t_PythonAbstractDualFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractDualFrequencyCombination), &PY_TYPE_DEF(PythonAbstractDualFrequencyCombination), module, "PythonAbstractDualFrequencyCombination", 1);
          }

          void t_PythonAbstractDualFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDualFrequencyCombination), "class_", make_descriptor(PythonAbstractDualFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDualFrequencyCombination), "wrapfn_", make_descriptor(t_PythonAbstractDualFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDualFrequencyCombination), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractDualFrequencyCombination::initializeClass);
            JNINativeMethod methods[] = {
              { "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D", (void *) t_PythonAbstractDualFrequencyCombination_getCombinedFrequency0 },
              { "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D", (void *) t_PythonAbstractDualFrequencyCombination_getCombinedValue1 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractDualFrequencyCombination_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonAbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractDualFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractDualFrequencyCombination::wrap_Object(PythonAbstractDualFrequencyCombination(((t_PythonAbstractDualFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractDualFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractDualFrequencyCombination_init_(t_PythonAbstractDualFrequencyCombination *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            PythonAbstractDualFrequencyCombination object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::estimation::measurements::gnss::CombinationType::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::gnss::t_CombinationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = PythonAbstractDualFrequencyCombination(a0, a1));
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

          static PyObject *t_PythonAbstractDualFrequencyCombination_finalize(t_PythonAbstractDualFrequencyCombination *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractDualFrequencyCombination_pythonExtension(t_PythonAbstractDualFrequencyCombination *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedFrequency0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a0));
            PyObject *o1 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a1));
            PyObject *result = PyObject_CallMethod(obj, "getCombinedFrequency", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getCombinedFrequency", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedValue1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jdouble a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o1 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a1));
            PyObject *o3 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a3));
            PyObject *result = PyObject_CallMethod(obj, "getCombinedValue", "dOdO", (double) a0, o1, (double) a2, o3);
            Py_DECREF(o1);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getCombinedValue", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonAbstractDualFrequencyCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractDualFrequencyCombination_get__self(t_PythonAbstractDualFrequencyCombination *self, void *data)
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
