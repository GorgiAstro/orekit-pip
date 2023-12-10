#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/ApsideDetector.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/ApsideDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ApsideDetector::class$ = NULL;
        jmethodID *ApsideDetector::mids$ = NULL;
        bool ApsideDetector::live$ = false;

        jclass ApsideDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ApsideDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e5b8a6a44355183e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
            mids$[mid_init$_cabf1e33b54f56ee] = env->getMethodID(cls, "<init>", "(DLorg/orekit/orbits/Orbit;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_70aca8d6a1e7bff2] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ApsideDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ApsideDetector::ApsideDetector(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_e5b8a6a44355183e, a0.this$)) {}

        ApsideDetector::ApsideDetector(jdouble a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_cabf1e33b54f56ee, a0, a1.this$)) {}

        jdouble ApsideDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
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
        static PyObject *t_ApsideDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ApsideDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ApsideDetector_of_(t_ApsideDetector *self, PyObject *args);
        static int t_ApsideDetector_init_(t_ApsideDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ApsideDetector_g(t_ApsideDetector *self, PyObject *args);
        static PyObject *t_ApsideDetector_get__parameters_(t_ApsideDetector *self, void *data);
        static PyGetSetDef t_ApsideDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ApsideDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ApsideDetector__methods_[] = {
          DECLARE_METHOD(t_ApsideDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ApsideDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ApsideDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ApsideDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ApsideDetector)[] = {
          { Py_tp_methods, t_ApsideDetector__methods_ },
          { Py_tp_init, (void *) t_ApsideDetector_init_ },
          { Py_tp_getset, t_ApsideDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ApsideDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ApsideDetector, t_ApsideDetector, ApsideDetector);
        PyObject *t_ApsideDetector::wrap_Object(const ApsideDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ApsideDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ApsideDetector *self = (t_ApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ApsideDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ApsideDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ApsideDetector *self = (t_ApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ApsideDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ApsideDetector), &PY_TYPE_DEF(ApsideDetector), module, "ApsideDetector", 0);
        }

        void t_ApsideDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ApsideDetector), "class_", make_descriptor(ApsideDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ApsideDetector), "wrapfn_", make_descriptor(t_ApsideDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ApsideDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ApsideDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ApsideDetector::initializeClass, 1)))
            return NULL;
          return t_ApsideDetector::wrap_Object(ApsideDetector(((t_ApsideDetector *) arg)->object.this$));
        }
        static PyObject *t_ApsideDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ApsideDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ApsideDetector_of_(t_ApsideDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ApsideDetector_init_(t_ApsideDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                INT_CALL(object = ApsideDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ApsideDetector);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
              {
                INT_CALL(object = ApsideDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ApsideDetector);
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

        static PyObject *t_ApsideDetector_g(t_ApsideDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ApsideDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_ApsideDetector_get__parameters_(t_ApsideDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *TideSystemProvider::class$ = NULL;
          jmethodID *TideSystemProvider::mids$ = NULL;
          bool TideSystemProvider::live$ = false;

          jclass TideSystemProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/TideSystemProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getTideSystem_b3b39360f3c8a6ac] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::TideSystem TideSystemProvider::getTideSystem() const
          {
            return ::org::orekit::forces::gravity::potential::TideSystem(env->callObjectMethod(this$, mids$[mid_getTideSystem_b3b39360f3c8a6ac]));
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
          static PyObject *t_TideSystemProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystemProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystemProvider_getTideSystem(t_TideSystemProvider *self);
          static PyObject *t_TideSystemProvider_get__tideSystem(t_TideSystemProvider *self, void *data);
          static PyGetSetDef t_TideSystemProvider__fields_[] = {
            DECLARE_GET_FIELD(t_TideSystemProvider, tideSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TideSystemProvider__methods_[] = {
            DECLARE_METHOD(t_TideSystemProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystemProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystemProvider, getTideSystem, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TideSystemProvider)[] = {
            { Py_tp_methods, t_TideSystemProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TideSystemProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TideSystemProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TideSystemProvider, t_TideSystemProvider, TideSystemProvider);

          void t_TideSystemProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(TideSystemProvider), &PY_TYPE_DEF(TideSystemProvider), module, "TideSystemProvider", 0);
          }

          void t_TideSystemProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystemProvider), "class_", make_descriptor(TideSystemProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystemProvider), "wrapfn_", make_descriptor(t_TideSystemProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystemProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TideSystemProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TideSystemProvider::initializeClass, 1)))
              return NULL;
            return t_TideSystemProvider::wrap_Object(TideSystemProvider(((t_TideSystemProvider *) arg)->object.this$));
          }
          static PyObject *t_TideSystemProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TideSystemProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TideSystemProvider_getTideSystem(t_TideSystemProvider *self)
          {
            ::org::orekit::forces::gravity::potential::TideSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(result);
          }

          static PyObject *t_TideSystemProvider_get__tideSystem(t_TideSystemProvider *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonics.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonUnnormalizedSphericalHarmonics::class$ = NULL;
          jmethodID *PythonUnnormalizedSphericalHarmonics::mids$ = NULL;
          bool PythonUnnormalizedSphericalHarmonics::live$ = false;

          jclass PythonUnnormalizedSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getUnnormalizedCnm_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getUnnormalizedCnm", "(II)D");
              mids$[mid_getUnnormalizedSnm_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getUnnormalizedSnm", "(II)D");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonUnnormalizedSphericalHarmonics::PythonUnnormalizedSphericalHarmonics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonUnnormalizedSphericalHarmonics::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonUnnormalizedSphericalHarmonics::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonUnnormalizedSphericalHarmonics::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonUnnormalizedSphericalHarmonics_init_(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_finalize(t_PythonUnnormalizedSphericalHarmonics *self);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_pythonExtension(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonics_getDate0(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedCnm1(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedSnm2(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static void JNICALL t_PythonUnnormalizedSphericalHarmonics_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_get__self(t_PythonUnnormalizedSphericalHarmonics *self, void *data);
          static PyGetSetDef t_PythonUnnormalizedSphericalHarmonics__fields_[] = {
            DECLARE_GET_FIELD(t_PythonUnnormalizedSphericalHarmonics, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonUnnormalizedSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonUnnormalizedSphericalHarmonics)[] = {
            { Py_tp_methods, t_PythonUnnormalizedSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) t_PythonUnnormalizedSphericalHarmonics_init_ },
            { Py_tp_getset, t_PythonUnnormalizedSphericalHarmonics__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonUnnormalizedSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonUnnormalizedSphericalHarmonics, t_PythonUnnormalizedSphericalHarmonics, PythonUnnormalizedSphericalHarmonics);

          void t_PythonUnnormalizedSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonUnnormalizedSphericalHarmonics), &PY_TYPE_DEF(PythonUnnormalizedSphericalHarmonics), module, "PythonUnnormalizedSphericalHarmonics", 1);
          }

          void t_PythonUnnormalizedSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonics), "class_", make_descriptor(PythonUnnormalizedSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonics), "wrapfn_", make_descriptor(t_PythonUnnormalizedSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonUnnormalizedSphericalHarmonics::initializeClass);
            JNINativeMethod methods[] = {
              { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonUnnormalizedSphericalHarmonics_getDate0 },
              { "getUnnormalizedCnm", "(II)D", (void *) t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedCnm1 },
              { "getUnnormalizedSnm", "(II)D", (void *) t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedSnm2 },
              { "pythonDecRef", "()V", (void *) t_PythonUnnormalizedSphericalHarmonics_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonUnnormalizedSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_PythonUnnormalizedSphericalHarmonics::wrap_Object(PythonUnnormalizedSphericalHarmonics(((t_PythonUnnormalizedSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonUnnormalizedSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonUnnormalizedSphericalHarmonics_init_(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args, PyObject *kwds)
          {
            PythonUnnormalizedSphericalHarmonics object((jobject) NULL);

            INT_CALL(object = PythonUnnormalizedSphericalHarmonics());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_finalize(t_PythonUnnormalizedSphericalHarmonics *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_pythonExtension(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args)
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

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonics_getDate0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getDate", result);
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

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedCnm1(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getUnnormalizedCnm", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getUnnormalizedCnm", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedSnm2(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getUnnormalizedSnm", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getUnnormalizedSnm", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonUnnormalizedSphericalHarmonics_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_get__self(t_PythonUnnormalizedSphericalHarmonics *self, void *data)
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
#include "org/hipparchus/stat/descriptive/rank/Max.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/stat/descriptive/rank/Max.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Max::class$ = NULL;
          jmethodID *Max::mids$ = NULL;
          bool Max::live$ = false;

          jclass Max::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Max");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_64ea23b66e381366] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/rank/Max;)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_630672b11a9e1054] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Max;");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Max::Max() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void Max::aggregate(const Max & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_64ea23b66e381366], a0.this$);
          }

          void Max::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          Max Max::copy() const
          {
            return Max(env->callObjectMethod(this$, mids$[mid_copy_630672b11a9e1054]));
          }

          jdouble Max::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          jlong Max::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          jdouble Max::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          void Max::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
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
    namespace stat {
      namespace descriptive {
        namespace rank {
          static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Max_aggregate(t_Max *self, PyObject *arg);
          static PyObject *t_Max_clear(t_Max *self, PyObject *args);
          static PyObject *t_Max_copy(t_Max *self, PyObject *args);
          static PyObject *t_Max_evaluate(t_Max *self, PyObject *args);
          static PyObject *t_Max_getN(t_Max *self, PyObject *args);
          static PyObject *t_Max_getResult(t_Max *self, PyObject *args);
          static PyObject *t_Max_increment(t_Max *self, PyObject *args);
          static PyObject *t_Max_get__n(t_Max *self, void *data);
          static PyObject *t_Max_get__result(t_Max *self, void *data);
          static PyGetSetDef t_Max__fields_[] = {
            DECLARE_GET_FIELD(t_Max, n),
            DECLARE_GET_FIELD(t_Max, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Max__methods_[] = {
            DECLARE_METHOD(t_Max, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Max, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Max, aggregate, METH_O),
            DECLARE_METHOD(t_Max, clear, METH_VARARGS),
            DECLARE_METHOD(t_Max, copy, METH_VARARGS),
            DECLARE_METHOD(t_Max, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Max, getN, METH_VARARGS),
            DECLARE_METHOD(t_Max, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Max, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Max)[] = {
            { Py_tp_methods, t_Max__methods_ },
            { Py_tp_init, (void *) t_Max_init_ },
            { Py_tp_getset, t_Max__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Max)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Max, t_Max, Max);

          void t_Max::install(PyObject *module)
          {
            installType(&PY_TYPE(Max), &PY_TYPE_DEF(Max), module, "Max", 0);
          }

          void t_Max::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "class_", make_descriptor(Max::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "wrapfn_", make_descriptor(t_Max::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Max::initializeClass, 1)))
              return NULL;
            return t_Max::wrap_Object(Max(((t_Max *) arg)->object.this$));
          }
          static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Max::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds)
          {
            Max object((jobject) NULL);

            INT_CALL(object = Max());
            self->object = object;

            return 0;
          }

          static PyObject *t_Max_aggregate(t_Max *self, PyObject *arg)
          {
            Max a0((jobject) NULL);

            if (!parseArg(arg, "k", Max::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Max_clear(t_Max *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Max_copy(t_Max *self, PyObject *args)
          {
            Max result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Max::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Max_evaluate(t_Max *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Max_getN(t_Max *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Max_getResult(t_Max *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Max_increment(t_Max *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Max_get__n(t_Max *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Max_get__result(t_Max *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/PythonPhaseCenterVariationFunction.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *PythonPhaseCenterVariationFunction::class$ = NULL;
        jmethodID *PythonPhaseCenterVariationFunction::mids$ = NULL;
        bool PythonPhaseCenterVariationFunction::live$ = false;

        jclass PythonPhaseCenterVariationFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/PythonPhaseCenterVariationFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPhaseCenterVariationFunction::PythonPhaseCenterVariationFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonPhaseCenterVariationFunction::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonPhaseCenterVariationFunction::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonPhaseCenterVariationFunction::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace antenna {
        static PyObject *t_PythonPhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPhaseCenterVariationFunction_init_(t_PythonPhaseCenterVariationFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPhaseCenterVariationFunction_finalize(t_PythonPhaseCenterVariationFunction *self);
        static PyObject *t_PythonPhaseCenterVariationFunction_pythonExtension(t_PythonPhaseCenterVariationFunction *self, PyObject *args);
        static void JNICALL t_PythonPhaseCenterVariationFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonPhaseCenterVariationFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
        static PyObject *t_PythonPhaseCenterVariationFunction_get__self(t_PythonPhaseCenterVariationFunction *self, void *data);
        static PyGetSetDef t_PythonPhaseCenterVariationFunction__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPhaseCenterVariationFunction, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPhaseCenterVariationFunction__methods_[] = {
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPhaseCenterVariationFunction)[] = {
          { Py_tp_methods, t_PythonPhaseCenterVariationFunction__methods_ },
          { Py_tp_init, (void *) t_PythonPhaseCenterVariationFunction_init_ },
          { Py_tp_getset, t_PythonPhaseCenterVariationFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPhaseCenterVariationFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPhaseCenterVariationFunction, t_PythonPhaseCenterVariationFunction, PythonPhaseCenterVariationFunction);

        void t_PythonPhaseCenterVariationFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPhaseCenterVariationFunction), &PY_TYPE_DEF(PythonPhaseCenterVariationFunction), module, "PythonPhaseCenterVariationFunction", 1);
        }

        void t_PythonPhaseCenterVariationFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPhaseCenterVariationFunction), "class_", make_descriptor(PythonPhaseCenterVariationFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPhaseCenterVariationFunction), "wrapfn_", make_descriptor(t_PythonPhaseCenterVariationFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPhaseCenterVariationFunction), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPhaseCenterVariationFunction::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonPhaseCenterVariationFunction_pythonDecRef0 },
            { "value", "(DD)D", (void *) t_PythonPhaseCenterVariationFunction_value1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPhaseCenterVariationFunction::initializeClass, 1)))
            return NULL;
          return t_PythonPhaseCenterVariationFunction::wrap_Object(PythonPhaseCenterVariationFunction(((t_PythonPhaseCenterVariationFunction *) arg)->object.this$));
        }
        static PyObject *t_PythonPhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPhaseCenterVariationFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPhaseCenterVariationFunction_init_(t_PythonPhaseCenterVariationFunction *self, PyObject *args, PyObject *kwds)
        {
          PythonPhaseCenterVariationFunction object((jobject) NULL);

          INT_CALL(object = PythonPhaseCenterVariationFunction());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_finalize(t_PythonPhaseCenterVariationFunction *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_pythonExtension(t_PythonPhaseCenterVariationFunction *self, PyObject *args)
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

        static void JNICALL t_PythonPhaseCenterVariationFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPhaseCenterVariationFunction::mids$[PythonPhaseCenterVariationFunction::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPhaseCenterVariationFunction::mids$[PythonPhaseCenterVariationFunction::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jdouble JNICALL t_PythonPhaseCenterVariationFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPhaseCenterVariationFunction::mids$[PythonPhaseCenterVariationFunction::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "value", "dd", (double) a0, (double) a1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("value", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_get__self(t_PythonPhaseCenterVariationFunction *self, void *data)
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
#include "org/orekit/time/PythonTimeScales.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/UTCScale.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/GMSTScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeScales::class$ = NULL;
      jmethodID *PythonTimeScales::mids$ = NULL;
      bool PythonTimeScales::live$ = false;

      jclass PythonTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_createBesselianEpoch_a76f1ca2cc1b76e5] = env->getMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_a76f1ca2cc1b76e5] = env->getMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBDT_deaa012966748070] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getBeidouEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getCcsdsEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFiftiesEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFutureInfinity_aaa854c403487cf3] = env->getMethodID(cls, "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGLONASS_c91e99b6d55c6edd] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_9d529a30e942a554] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_c3529b957726f144] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_11ee1ca64364e897] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getGalileoEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGlonassEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGpsEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getIRNSS_ec0466e710e3daab] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getIrnssEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJ2000Epoch_aaa854c403487cf3] = env->getMethodID(cls, "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJavaEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJulianEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPastInfinity_aaa854c403487cf3] = env->getMethodID(cls, "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getQZSS_7f540f12419eda56] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getQzssEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTAI_9316322b62b6b656] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_2460e78d331af28f] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_30aeac15cc80b3c1] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_0bcc4110bc5be1d2] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_9be074c5a298fe1e] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_603d1058a5002a04] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_ed870393143e8ecb] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeScales::PythonTimeScales() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonTimeScales::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonTimeScales::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonTimeScales::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeScales_init_(t_PythonTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeScales_finalize(t_PythonTimeScales *self);
      static PyObject *t_PythonTimeScales_pythonExtension(t_PythonTimeScales *self, PyObject *args);
      static jobject JNICALL t_PythonTimeScales_createBesselianEpoch0(JNIEnv *jenv, jobject jobj, jdouble a0);
      static jobject JNICALL t_PythonTimeScales_createJulianEpoch1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static jobject JNICALL t_PythonTimeScales_getBDT2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getBeidouEpoch3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getCcsdsEpoch4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getFiftiesEpoch5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getFutureInfinity6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGLONASS7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGMST8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonTimeScales_getGPS9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGST10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGalileoEpoch11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGlonassEpoch12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGpsEpoch13(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getIRNSS14(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getIrnssEpoch15(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getJ2000Epoch16(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getJavaEpoch17(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getJulianEpoch18(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getModifiedJulianEpoch19(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getPastInfinity20(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getQZSS21(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getQzssEpoch22(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTAI23(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTCB24(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTCG25(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTDB26(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTT27(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getUT128(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonTimeScales_getUTC29(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonTimeScales_pythonDecRef30(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeScales_get__self(t_PythonTimeScales *self, void *data);
      static PyGetSetDef t_PythonTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeScales, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeScales__methods_[] = {
        DECLARE_METHOD(t_PythonTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScales, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeScales, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeScales)[] = {
        { Py_tp_methods, t_PythonTimeScales__methods_ },
        { Py_tp_init, (void *) t_PythonTimeScales_init_ },
        { Py_tp_getset, t_PythonTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeScales)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeScales, t_PythonTimeScales, PythonTimeScales);

      void t_PythonTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeScales), &PY_TYPE_DEF(PythonTimeScales), module, "PythonTimeScales", 1);
      }

      void t_PythonTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScales), "class_", make_descriptor(PythonTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScales), "wrapfn_", make_descriptor(t_PythonTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScales), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeScales::initializeClass);
        JNINativeMethod methods[] = {
          { "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_createBesselianEpoch0 },
          { "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_createJulianEpoch1 },
          { "getBDT", "()Lorg/orekit/time/BDTScale;", (void *) t_PythonTimeScales_getBDT2 },
          { "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getBeidouEpoch3 },
          { "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getCcsdsEpoch4 },
          { "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getFiftiesEpoch5 },
          { "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getFutureInfinity6 },
          { "getGLONASS", "()Lorg/orekit/time/GLONASSScale;", (void *) t_PythonTimeScales_getGLONASS7 },
          { "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;", (void *) t_PythonTimeScales_getGMST8 },
          { "getGPS", "()Lorg/orekit/time/GPSScale;", (void *) t_PythonTimeScales_getGPS9 },
          { "getGST", "()Lorg/orekit/time/GalileoScale;", (void *) t_PythonTimeScales_getGST10 },
          { "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getGalileoEpoch11 },
          { "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getGlonassEpoch12 },
          { "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getGpsEpoch13 },
          { "getIRNSS", "()Lorg/orekit/time/IRNSSScale;", (void *) t_PythonTimeScales_getIRNSS14 },
          { "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getIrnssEpoch15 },
          { "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getJ2000Epoch16 },
          { "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getJavaEpoch17 },
          { "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getJulianEpoch18 },
          { "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getModifiedJulianEpoch19 },
          { "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getPastInfinity20 },
          { "getQZSS", "()Lorg/orekit/time/QZSSScale;", (void *) t_PythonTimeScales_getQZSS21 },
          { "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getQzssEpoch22 },
          { "getTAI", "()Lorg/orekit/time/TAIScale;", (void *) t_PythonTimeScales_getTAI23 },
          { "getTCB", "()Lorg/orekit/time/TCBScale;", (void *) t_PythonTimeScales_getTCB24 },
          { "getTCG", "()Lorg/orekit/time/TCGScale;", (void *) t_PythonTimeScales_getTCG25 },
          { "getTDB", "()Lorg/orekit/time/TDBScale;", (void *) t_PythonTimeScales_getTDB26 },
          { "getTT", "()Lorg/orekit/time/TTScale;", (void *) t_PythonTimeScales_getTT27 },
          { "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;", (void *) t_PythonTimeScales_getUT128 },
          { "getUTC", "()Lorg/orekit/time/UTCScale;", (void *) t_PythonTimeScales_getUTC29 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeScales_pythonDecRef30 },
        };
        env->registerNatives(cls, methods, 31);
      }

      static PyObject *t_PythonTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeScales::initializeClass, 1)))
          return NULL;
        return t_PythonTimeScales::wrap_Object(PythonTimeScales(((t_PythonTimeScales *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeScales_init_(t_PythonTimeScales *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeScales object((jobject) NULL);

        INT_CALL(object = PythonTimeScales());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeScales_finalize(t_PythonTimeScales *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeScales_pythonExtension(t_PythonTimeScales *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeScales_createBesselianEpoch0(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "createBesselianEpoch", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("createBesselianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_createJulianEpoch1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "createJulianEpoch", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("createJulianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getBDT2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::BDTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBDT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::BDTScale::initializeClass, &value))
        {
          throwTypeError("getBDT", result);
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

      static jobject JNICALL t_PythonTimeScales_getBeidouEpoch3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBeidouEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getBeidouEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getCcsdsEpoch4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getCcsdsEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getCcsdsEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getFiftiesEpoch5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFiftiesEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getFiftiesEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getFutureInfinity6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFutureInfinity", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getFutureInfinity", result);
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

      static jobject JNICALL t_PythonTimeScales_getGLONASS7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGLONASS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GLONASSScale::initializeClass, &value))
        {
          throwTypeError("getGLONASS", result);
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

      static jobject JNICALL t_PythonTimeScales_getGMST8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GMSTScale value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getGMST", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GMSTScale::initializeClass, &value))
        {
          throwTypeError("getGMST", result);
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

      static jobject JNICALL t_PythonTimeScales_getGPS9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GPSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGPS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GPSScale::initializeClass, &value))
        {
          throwTypeError("getGPS", result);
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

      static jobject JNICALL t_PythonTimeScales_getGST10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGST", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GalileoScale::initializeClass, &value))
        {
          throwTypeError("getGST", result);
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

      static jobject JNICALL t_PythonTimeScales_getGalileoEpoch11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGalileoEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getGalileoEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getGlonassEpoch12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGlonassEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getGlonassEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getGpsEpoch13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGpsEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getGpsEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getIRNSS14(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getIRNSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::IRNSSScale::initializeClass, &value))
        {
          throwTypeError("getIRNSS", result);
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

      static jobject JNICALL t_PythonTimeScales_getIrnssEpoch15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getIrnssEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getIrnssEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getJ2000Epoch16(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJ2000Epoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getJ2000Epoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getJavaEpoch17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJavaEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getJavaEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getJulianEpoch18(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJulianEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getJulianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getModifiedJulianEpoch19(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getModifiedJulianEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getModifiedJulianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getPastInfinity20(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPastInfinity", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getPastInfinity", result);
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

      static jobject JNICALL t_PythonTimeScales_getQZSS21(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getQZSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::QZSSScale::initializeClass, &value))
        {
          throwTypeError("getQZSS", result);
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

      static jobject JNICALL t_PythonTimeScales_getQzssEpoch22(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getQzssEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getQzssEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getTAI23(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TAIScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTAI", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TAIScale::initializeClass, &value))
        {
          throwTypeError("getTAI", result);
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

      static jobject JNICALL t_PythonTimeScales_getTCB24(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCBScale::initializeClass, &value))
        {
          throwTypeError("getTCB", result);
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

      static jobject JNICALL t_PythonTimeScales_getTCG25(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCGScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCG", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCGScale::initializeClass, &value))
        {
          throwTypeError("getTCG", result);
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

      static jobject JNICALL t_PythonTimeScales_getTDB26(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TDBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTDB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TDBScale::initializeClass, &value))
        {
          throwTypeError("getTDB", result);
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

      static jobject JNICALL t_PythonTimeScales_getTT27(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TTScale::initializeClass, &value))
        {
          throwTypeError("getTT", result);
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

      static jobject JNICALL t_PythonTimeScales_getUT128(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::UT1Scale value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getUT1", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::UT1Scale::initializeClass, &value))
        {
          throwTypeError("getUT1", result);
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

      static jobject JNICALL t_PythonTimeScales_getUTC29(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::UTCScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUTC", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::UTCScale::initializeClass, &value))
        {
          throwTypeError("getUTC", result);
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

      static void JNICALL t_PythonTimeScales_pythonDecRef30(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeScales_get__self(t_PythonTimeScales *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/XmlLexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *XmlLexicalAnalyzer::class$ = NULL;
            jmethodID *XmlLexicalAnalyzer::mids$ = NULL;
            bool XmlLexicalAnalyzer::live$ = false;

            jclass XmlLexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/XmlLexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_178426610ec237d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
                mids$[mid_accept_b8fbb626a8a68048] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            XmlLexicalAnalyzer::XmlLexicalAnalyzer(const ::org::orekit::data::DataSource & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_178426610ec237d4, a0.this$)) {}

            ::java::lang::Object XmlLexicalAnalyzer::accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser & a0) const
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
            static PyObject *t_XmlLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_XmlLexicalAnalyzer_init_(t_XmlLexicalAnalyzer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_XmlLexicalAnalyzer_accept(t_XmlLexicalAnalyzer *self, PyObject *arg);

            static PyMethodDef t_XmlLexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_XmlLexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlLexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlLexicalAnalyzer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlLexicalAnalyzer)[] = {
              { Py_tp_methods, t_XmlLexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) t_XmlLexicalAnalyzer_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlLexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(XmlLexicalAnalyzer, t_XmlLexicalAnalyzer, XmlLexicalAnalyzer);

            void t_XmlLexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlLexicalAnalyzer), &PY_TYPE_DEF(XmlLexicalAnalyzer), module, "XmlLexicalAnalyzer", 0);
            }

            void t_XmlLexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlLexicalAnalyzer), "class_", make_descriptor(XmlLexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlLexicalAnalyzer), "wrapfn_", make_descriptor(t_XmlLexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlLexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_XmlLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlLexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_XmlLexicalAnalyzer::wrap_Object(XmlLexicalAnalyzer(((t_XmlLexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_XmlLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlLexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_XmlLexicalAnalyzer_init_(t_XmlLexicalAnalyzer *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              XmlLexicalAnalyzer object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                INT_CALL(object = XmlLexicalAnalyzer(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_XmlLexicalAnalyzer_accept(t_XmlLexicalAnalyzer *self, PyObject *arg)
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
#include "org/orekit/data/UnixCompressFilter.h"
#include "org/orekit/data/DataFilter.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *UnixCompressFilter::class$ = NULL;
      jmethodID *UnixCompressFilter::mids$ = NULL;
      bool UnixCompressFilter::live$ = false;

      jclass UnixCompressFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/UnixCompressFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_filter_446488bfc679a21b] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UnixCompressFilter::UnixCompressFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ::org::orekit::data::DataSource UnixCompressFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_446488bfc679a21b], a0.this$));
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
      static PyObject *t_UnixCompressFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnixCompressFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UnixCompressFilter_init_(t_UnixCompressFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UnixCompressFilter_filter(t_UnixCompressFilter *self, PyObject *arg);

      static PyMethodDef t_UnixCompressFilter__methods_[] = {
        DECLARE_METHOD(t_UnixCompressFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnixCompressFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnixCompressFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnixCompressFilter)[] = {
        { Py_tp_methods, t_UnixCompressFilter__methods_ },
        { Py_tp_init, (void *) t_UnixCompressFilter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnixCompressFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnixCompressFilter, t_UnixCompressFilter, UnixCompressFilter);

      void t_UnixCompressFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(UnixCompressFilter), &PY_TYPE_DEF(UnixCompressFilter), module, "UnixCompressFilter", 0);
      }

      void t_UnixCompressFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnixCompressFilter), "class_", make_descriptor(UnixCompressFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnixCompressFilter), "wrapfn_", make_descriptor(t_UnixCompressFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnixCompressFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnixCompressFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnixCompressFilter::initializeClass, 1)))
          return NULL;
        return t_UnixCompressFilter::wrap_Object(UnixCompressFilter(((t_UnixCompressFilter *) arg)->object.this$));
      }
      static PyObject *t_UnixCompressFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnixCompressFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UnixCompressFilter_init_(t_UnixCompressFilter *self, PyObject *args, PyObject *kwds)
      {
        UnixCompressFilter object((jobject) NULL);

        INT_CALL(object = UnixCompressFilter());
        self->object = object;

        return 0;
      }

      static PyObject *t_UnixCompressFilter_filter(t_UnixCompressFilter *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.filter(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldODEStepEndHandler::class$ = NULL;
        jmethodID *FieldODEStepEndHandler::mids$ = NULL;
        bool FieldODEStepEndHandler::live$ = false;

        jclass FieldODEStepEndHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldODEStepEndHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init_e6d23212b178b64e] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_resetState_39033fa3c1d22b92] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/FieldODEState;");
            mids$[mid_stepEndOccurred_8a1b6b13b4ee0123] = env->getMethodID(cls, "stepEndOccurred", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Z)Lorg/hipparchus/ode/events/Action;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldODEStepEndHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_e6d23212b178b64e], a0.this$, a1.this$);
        }

        ::org::hipparchus::ode::FieldODEState FieldODEStepEndHandler::resetState(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::FieldODEState(env->callObjectMethod(this$, mids$[mid_resetState_39033fa3c1d22b92], a0.this$));
        }

        ::org::hipparchus::ode::events::Action FieldODEStepEndHandler::stepEndOccurred(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, jboolean a1) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_stepEndOccurred_8a1b6b13b4ee0123], a0.this$, a1));
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
        static PyObject *t_FieldODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepEndHandler_of_(t_FieldODEStepEndHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepEndHandler_init(t_FieldODEStepEndHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepEndHandler_resetState(t_FieldODEStepEndHandler *self, PyObject *arg);
        static PyObject *t_FieldODEStepEndHandler_stepEndOccurred(t_FieldODEStepEndHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepEndHandler_get__parameters_(t_FieldODEStepEndHandler *self, void *data);
        static PyGetSetDef t_FieldODEStepEndHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEStepEndHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEStepEndHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEStepEndHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, resetState, METH_O),
          DECLARE_METHOD(t_FieldODEStepEndHandler, stepEndOccurred, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEStepEndHandler)[] = {
          { Py_tp_methods, t_FieldODEStepEndHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEStepEndHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEStepEndHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEStepEndHandler, t_FieldODEStepEndHandler, FieldODEStepEndHandler);
        PyObject *t_FieldODEStepEndHandler::wrap_Object(const FieldODEStepEndHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepEndHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepEndHandler *self = (t_FieldODEStepEndHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEStepEndHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepEndHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepEndHandler *self = (t_FieldODEStepEndHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEStepEndHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEStepEndHandler), &PY_TYPE_DEF(FieldODEStepEndHandler), module, "FieldODEStepEndHandler", 0);
        }

        void t_FieldODEStepEndHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepEndHandler), "class_", make_descriptor(FieldODEStepEndHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepEndHandler), "wrapfn_", make_descriptor(t_FieldODEStepEndHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepEndHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEStepEndHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEStepEndHandler::wrap_Object(FieldODEStepEndHandler(((t_FieldODEStepEndHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEStepEndHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEStepEndHandler_of_(t_FieldODEStepEndHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEStepEndHandler_init(t_FieldODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldODEStepEndHandler_resetState(t_FieldODEStepEndHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.resetState(a0));
            return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStepEndHandler_stepEndOccurred(t_FieldODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean a1;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "KZ", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.stepEndOccurred(a0, a1));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "stepEndOccurred", args);
          return NULL;
        }
        static PyObject *t_FieldODEStepEndHandler_get__parameters_(t_FieldODEStepEndHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Logit$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logit$Parametric::class$ = NULL;
        jmethodID *Logit$Parametric::mids$ = NULL;
        bool Logit$Parametric::live$ = false;

        jclass Logit$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logit$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_7b8ea6f669f90156] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_618a40a0b95154fa] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logit$Parametric::Logit$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        JArray< jdouble > Logit$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_7b8ea6f669f90156], a0, a1.this$));
        }

        jdouble Logit$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_618a40a0b95154fa], a0, a1.this$);
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
        static PyObject *t_Logit$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logit$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logit$Parametric_init_(t_Logit$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logit$Parametric_gradient(t_Logit$Parametric *self, PyObject *args);
        static PyObject *t_Logit$Parametric_value(t_Logit$Parametric *self, PyObject *args);

        static PyMethodDef t_Logit$Parametric__methods_[] = {
          DECLARE_METHOD(t_Logit$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Logit$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logit$Parametric)[] = {
          { Py_tp_methods, t_Logit$Parametric__methods_ },
          { Py_tp_init, (void *) t_Logit$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logit$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logit$Parametric, t_Logit$Parametric, Logit$Parametric);

        void t_Logit$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Logit$Parametric), &PY_TYPE_DEF(Logit$Parametric), module, "Logit$Parametric", 0);
        }

        void t_Logit$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit$Parametric), "class_", make_descriptor(Logit$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit$Parametric), "wrapfn_", make_descriptor(t_Logit$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logit$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logit$Parametric::initializeClass, 1)))
            return NULL;
          return t_Logit$Parametric::wrap_Object(Logit$Parametric(((t_Logit$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Logit$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logit$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logit$Parametric_init_(t_Logit$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Logit$Parametric object((jobject) NULL);

          INT_CALL(object = Logit$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Logit$Parametric_gradient(t_Logit$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gradient(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_Logit$Parametric_value(t_Logit$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "D[D", &a0, &a1))
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
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitException::class$ = NULL;
      jmethodID *OrekitException::mids$ = NULL;
      bool OrekitException::live$ = false;

      jclass OrekitException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2171b09f9faab92f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/MathRuntimeException;)V");
          mids$[mid_init$_3d6784947cb48668] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_f03459011cf1d5d9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;Ljava/lang/Throwable;)V");
          mids$[mid_init$_ca997976b075d32c] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_0090f7797e403f43] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_0090f7797e403f43] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_bab3be9b232acc5a] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_e81d7907eea7e008] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_2e589a53386da289] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");
          mids$[mid_unwrap_bdd7f7bad3198ab9] = env->getStaticMethodID(cls, "unwrap", "(Lorg/hipparchus/exception/MathRuntimeException;)Lorg/orekit/errors/OrekitException;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitException::OrekitException(const ::org::hipparchus::exception::MathRuntimeException & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_2171b09f9faab92f, a0.this$)) {}

      OrekitException::OrekitException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_3d6784947cb48668, a0.this$, a1.this$)) {}

      OrekitException::OrekitException(const ::org::hipparchus::exception::Localizable & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_f03459011cf1d5d9, a0.this$, a1.this$)) {}

      OrekitException::OrekitException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ca997976b075d32c, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::String OrekitException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_0090f7797e403f43]));
      }

      ::java::lang::String OrekitException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_0090f7797e403f43]));
      }

      ::java::lang::String OrekitException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_bab3be9b232acc5a], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_e81d7907eea7e008]));
      }

      ::org::hipparchus::exception::Localizable OrekitException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_2e589a53386da289]));
      }

      OrekitException OrekitException::unwrap(const ::org::hipparchus::exception::MathRuntimeException & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return OrekitException(env->callStaticObjectMethod(cls, mids$[mid_unwrap_bdd7f7bad3198ab9], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitException_init_(t_OrekitException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitException_getLocalizedMessage(t_OrekitException *self, PyObject *args);
      static PyObject *t_OrekitException_getMessage(t_OrekitException *self, PyObject *args);
      static PyObject *t_OrekitException_getParts(t_OrekitException *self);
      static PyObject *t_OrekitException_getSpecifier(t_OrekitException *self);
      static PyObject *t_OrekitException_unwrap(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitException_get__localizedMessage(t_OrekitException *self, void *data);
      static PyObject *t_OrekitException_get__message(t_OrekitException *self, void *data);
      static PyObject *t_OrekitException_get__parts(t_OrekitException *self, void *data);
      static PyObject *t_OrekitException_get__specifier(t_OrekitException *self, void *data);
      static PyGetSetDef t_OrekitException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitException, message),
        DECLARE_GET_FIELD(t_OrekitException, parts),
        DECLARE_GET_FIELD(t_OrekitException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitException__methods_[] = {
        DECLARE_METHOD(t_OrekitException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitException, getSpecifier, METH_NOARGS),
        DECLARE_METHOD(t_OrekitException, unwrap, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitException)[] = {
        { Py_tp_methods, t_OrekitException__methods_ },
        { Py_tp_init, (void *) t_OrekitException_init_ },
        { Py_tp_getset, t_OrekitException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitException)[] = {
        &PY_TYPE_DEF(::java::lang::RuntimeException),
        NULL
      };

      DEFINE_TYPE(OrekitException, t_OrekitException, OrekitException);

      void t_OrekitException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitException), &PY_TYPE_DEF(OrekitException), module, "OrekitException", 0);
      }

      void t_OrekitException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitException), "class_", make_descriptor(OrekitException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitException), "wrapfn_", make_descriptor(t_OrekitException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitException::initializeClass, 1)))
          return NULL;
        return t_OrekitException::wrap_Object(OrekitException(((t_OrekitException *) arg)->object.this$));
      }
      static PyObject *t_OrekitException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitException_init_(t_OrekitException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
            {
              INT_CALL(object = OrekitException(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OrekitException(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            ::java::lang::Throwable a1((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::exception::Localizable::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OrekitException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OrekitException(a0, a1, a2));
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

      static PyObject *t_OrekitException_getLocalizedMessage(t_OrekitException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitException_getMessage(t_OrekitException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(OrekitException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitException_getParts(t_OrekitException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitException_getSpecifier(t_OrekitException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitException_unwrap(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
        OrekitException result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::errors::OrekitException::unwrap(a0));
          return t_OrekitException::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "unwrap", arg);
        return NULL;
      }

      static PyObject *t_OrekitException_get__localizedMessage(t_OrekitException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitException_get__message(t_OrekitException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitException_get__parts(t_OrekitException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitException_get__specifier(t_OrekitException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTSolarRadiationPressure.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTSolarRadiationPressure::class$ = NULL;
            jmethodID *DSSTSolarRadiationPressure::mids$ = NULL;
            bool DSSTSolarRadiationPressure::live$ = false;

            jclass DSSTSolarRadiationPressure::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTSolarRadiationPressure");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0051a626c6c8523b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;D)V");
                mids$[mid_init$_3f2c3635f944dc47] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
                mids$[mid_init$_4d9dda243b5d66bd] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;D)V");
                mids$[mid_init$_4e97cdcac87a62b7] = env->getMethodID(cls, "<init>", "(DDDDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
                mids$[mid_getEquatorialRadius_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquatorialRadius", "()D");
                mids$[mid_getSpacecraft_a0124c4a4e37e849] = env->getMethodID(cls, "getSpacecraft", "()Lorg/orekit/forces/radiation/RadiationSensitive;");
                mids$[mid_getParametersDriversWithoutMu_a6156df500549a58] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");
                mids$[mid_getLLimits_4ece4b82b4394674] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLLimits_f53f254b7878e0dd] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const ::org::orekit::forces::radiation::RadiationSensitive & a2, jdouble a3) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_0051a626c6c8523b, a0.this$, a1.this$, a2.this$, a3)) {}

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(jdouble a0, jdouble a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3, jdouble a4) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_3f2c3635f944dc47, a0, a1, a2.this$, a3.this$, a4)) {}

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(jdouble a0, jdouble a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3, const ::org::orekit::forces::radiation::RadiationSensitive & a4, jdouble a5) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_4d9dda243b5d66bd, a0, a1, a2.this$, a3.this$, a4.this$, a5)) {}

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(jdouble a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a4, const ::org::orekit::bodies::OneAxisEllipsoid & a5, jdouble a6) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_4e97cdcac87a62b7, a0, a1, a2, a3, a4.this$, a5.this$, a6)) {}

            jdouble DSSTSolarRadiationPressure::getEquatorialRadius() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_456d9a2f64d6b28d]);
            }

            ::org::orekit::forces::radiation::RadiationSensitive DSSTSolarRadiationPressure::getSpacecraft() const
            {
              return ::org::orekit::forces::radiation::RadiationSensitive(env->callObjectMethod(this$, mids$[mid_getSpacecraft_a0124c4a4e37e849]));
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
            static PyObject *t_DSSTSolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTSolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTSolarRadiationPressure_init_(t_DSSTSolarRadiationPressure *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTSolarRadiationPressure_getEquatorialRadius(t_DSSTSolarRadiationPressure *self);
            static PyObject *t_DSSTSolarRadiationPressure_getSpacecraft(t_DSSTSolarRadiationPressure *self);
            static PyObject *t_DSSTSolarRadiationPressure_get__equatorialRadius(t_DSSTSolarRadiationPressure *self, void *data);
            static PyObject *t_DSSTSolarRadiationPressure_get__spacecraft(t_DSSTSolarRadiationPressure *self, void *data);
            static PyGetSetDef t_DSSTSolarRadiationPressure__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTSolarRadiationPressure, equatorialRadius),
              DECLARE_GET_FIELD(t_DSSTSolarRadiationPressure, spacecraft),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTSolarRadiationPressure__methods_[] = {
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, getEquatorialRadius, METH_NOARGS),
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, getSpacecraft, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTSolarRadiationPressure)[] = {
              { Py_tp_methods, t_DSSTSolarRadiationPressure__methods_ },
              { Py_tp_init, (void *) t_DSSTSolarRadiationPressure_init_ },
              { Py_tp_getset, t_DSSTSolarRadiationPressure__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTSolarRadiationPressure)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution),
              NULL
            };

            DEFINE_TYPE(DSSTSolarRadiationPressure, t_DSSTSolarRadiationPressure, DSSTSolarRadiationPressure);

            void t_DSSTSolarRadiationPressure::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTSolarRadiationPressure), &PY_TYPE_DEF(DSSTSolarRadiationPressure), module, "DSSTSolarRadiationPressure", 0);
            }

            void t_DSSTSolarRadiationPressure::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTSolarRadiationPressure), "class_", make_descriptor(DSSTSolarRadiationPressure::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTSolarRadiationPressure), "wrapfn_", make_descriptor(t_DSSTSolarRadiationPressure::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTSolarRadiationPressure), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTSolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTSolarRadiationPressure::initializeClass, 1)))
                return NULL;
              return t_DSSTSolarRadiationPressure::wrap_Object(DSSTSolarRadiationPressure(((t_DSSTSolarRadiationPressure *) arg)->object.this$));
            }
            static PyObject *t_DSSTSolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTSolarRadiationPressure::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTSolarRadiationPressure_init_(t_DSSTSolarRadiationPressure *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                  ::org::orekit::forces::radiation::RadiationSensitive a2((jobject) NULL);
                  jdouble a3;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "kkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
                  jdouble a4;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "DDkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  jdouble a0;
                  jdouble a1;
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
                  ::org::orekit::forces::radiation::RadiationSensitive a4((jobject) NULL);
                  jdouble a5;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "DDkkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a4((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a5((jobject) NULL);
                  jdouble a6;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "DDDDkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3, a4, a5, a6));
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

            static PyObject *t_DSSTSolarRadiationPressure_getEquatorialRadius(t_DSSTSolarRadiationPressure *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getEquatorialRadius());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTSolarRadiationPressure_getSpacecraft(t_DSSTSolarRadiationPressure *self)
            {
              ::org::orekit::forces::radiation::RadiationSensitive result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpacecraft());
              return ::org::orekit::forces::radiation::t_RadiationSensitive::wrap_Object(result);
            }

            static PyObject *t_DSSTSolarRadiationPressure_get__equatorialRadius(t_DSSTSolarRadiationPressure *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getEquatorialRadius());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTSolarRadiationPressure_get__spacecraft(t_DSSTSolarRadiationPressure *self, void *data)
            {
              ::org::orekit::forces::radiation::RadiationSensitive value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpacecraft());
              return ::org::orekit::forces::radiation::t_RadiationSensitive::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/AbstractAlmanac.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *AbstractAlmanac::class$ = NULL;
            jmethodID *AbstractAlmanac::mids$ = NULL;
            bool AbstractAlmanac::live$ = false;

            jclass AbstractAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/AbstractAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b05c288d5068eccb] = env->getMethodID(cls, "<init>", "(DDI)V");
                mids$[mid_getAf2_456d9a2f64d6b28d] = env->getMethodID(cls, "getAf2", "()D");
                mids$[mid_getCic_456d9a2f64d6b28d] = env->getMethodID(cls, "getCic", "()D");
                mids$[mid_getCis_456d9a2f64d6b28d] = env->getMethodID(cls, "getCis", "()D");
                mids$[mid_getCrc_456d9a2f64d6b28d] = env->getMethodID(cls, "getCrc", "()D");
                mids$[mid_getCrs_456d9a2f64d6b28d] = env->getMethodID(cls, "getCrs", "()D");
                mids$[mid_getCuc_456d9a2f64d6b28d] = env->getMethodID(cls, "getCuc", "()D");
                mids$[mid_getCus_456d9a2f64d6b28d] = env->getMethodID(cls, "getCus", "()D");
                mids$[mid_getIDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getIDot", "()D");
                mids$[mid_getMeanMotion_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanMotion", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractAlmanac::AbstractAlmanac(jdouble a0, jdouble a1, jint a2) : ::org::orekit::propagation::analytical::gnss::data::CommonGnssData(env->newObject(initializeClass, &mids$, mid_init$_b05c288d5068eccb, a0, a1, a2)) {}

            jdouble AbstractAlmanac::getAf2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf2_456d9a2f64d6b28d]);
            }

            jdouble AbstractAlmanac::getCic() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCic_456d9a2f64d6b28d]);
            }

            jdouble AbstractAlmanac::getCis() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCis_456d9a2f64d6b28d]);
            }

            jdouble AbstractAlmanac::getCrc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrc_456d9a2f64d6b28d]);
            }

            jdouble AbstractAlmanac::getCrs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrs_456d9a2f64d6b28d]);
            }

            jdouble AbstractAlmanac::getCuc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCuc_456d9a2f64d6b28d]);
            }

            jdouble AbstractAlmanac::getCus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCus_456d9a2f64d6b28d]);
            }

            jdouble AbstractAlmanac::getIDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIDot_456d9a2f64d6b28d]);
            }

            jdouble AbstractAlmanac::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_456d9a2f64d6b28d]);
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
            static PyObject *t_AbstractAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractAlmanac_init_(t_AbstractAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractAlmanac_getAf2(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCic(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCis(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCrc(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCrs(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCuc(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCus(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getIDot(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getMeanMotion(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_get__af2(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cic(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cis(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__crc(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__crs(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cuc(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cus(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__iDot(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__meanMotion(t_AbstractAlmanac *self, void *data);
            static PyGetSetDef t_AbstractAlmanac__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractAlmanac, af2),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cic),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cis),
              DECLARE_GET_FIELD(t_AbstractAlmanac, crc),
              DECLARE_GET_FIELD(t_AbstractAlmanac, crs),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cuc),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cus),
              DECLARE_GET_FIELD(t_AbstractAlmanac, iDot),
              DECLARE_GET_FIELD(t_AbstractAlmanac, meanMotion),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractAlmanac__methods_[] = {
              DECLARE_METHOD(t_AbstractAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractAlmanac, getAf2, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCic, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCis, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCrc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCrs, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCuc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCus, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getIDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getMeanMotion, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractAlmanac)[] = {
              { Py_tp_methods, t_AbstractAlmanac__methods_ },
              { Py_tp_init, (void *) t_AbstractAlmanac_init_ },
              { Py_tp_getset, t_AbstractAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CommonGnssData),
              NULL
            };

            DEFINE_TYPE(AbstractAlmanac, t_AbstractAlmanac, AbstractAlmanac);

            void t_AbstractAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractAlmanac), &PY_TYPE_DEF(AbstractAlmanac), module, "AbstractAlmanac", 0);
            }

            void t_AbstractAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlmanac), "class_", make_descriptor(AbstractAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlmanac), "wrapfn_", make_descriptor(t_AbstractAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractAlmanac::initializeClass, 1)))
                return NULL;
              return t_AbstractAlmanac::wrap_Object(AbstractAlmanac(((t_AbstractAlmanac *) arg)->object.this$));
            }
            static PyObject *t_AbstractAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractAlmanac_init_(t_AbstractAlmanac *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              AbstractAlmanac object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = AbstractAlmanac(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractAlmanac_getAf2(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCic(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCic());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCis(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCis());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCrc(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCrs(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCuc(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCuc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCus(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getIDot(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getMeanMotion(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_get__af2(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cic(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCic());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cis(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCis());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__crc(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__crs(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cuc(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCuc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cus(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCus());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__iDot(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__meanMotion(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
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
#include "org/hipparchus/stat/descriptive/moment/Kurtosis.h"
#include "org/hipparchus/stat/descriptive/moment/Kurtosis.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Kurtosis::class$ = NULL;
          jmethodID *Kurtosis::mids$ = NULL;
          bool Kurtosis::live$ = false;

          jclass Kurtosis::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Kurtosis");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_903198c07a0792c7] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Kurtosis;");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Kurtosis::Kurtosis() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void Kurtosis::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          Kurtosis Kurtosis::copy() const
          {
            return Kurtosis(env->callObjectMethod(this$, mids$[mid_copy_903198c07a0792c7]));
          }

          jdouble Kurtosis::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          jlong Kurtosis::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          jdouble Kurtosis::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          void Kurtosis::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
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
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_Kurtosis_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Kurtosis_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Kurtosis_init_(t_Kurtosis *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Kurtosis_clear(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_copy(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_evaluate(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_getN(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_getResult(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_increment(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_get__n(t_Kurtosis *self, void *data);
          static PyObject *t_Kurtosis_get__result(t_Kurtosis *self, void *data);
          static PyGetSetDef t_Kurtosis__fields_[] = {
            DECLARE_GET_FIELD(t_Kurtosis, n),
            DECLARE_GET_FIELD(t_Kurtosis, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Kurtosis__methods_[] = {
            DECLARE_METHOD(t_Kurtosis, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Kurtosis, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Kurtosis, clear, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, copy, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, getN, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Kurtosis)[] = {
            { Py_tp_methods, t_Kurtosis__methods_ },
            { Py_tp_init, (void *) t_Kurtosis_init_ },
            { Py_tp_getset, t_Kurtosis__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Kurtosis)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Kurtosis, t_Kurtosis, Kurtosis);

          void t_Kurtosis::install(PyObject *module)
          {
            installType(&PY_TYPE(Kurtosis), &PY_TYPE_DEF(Kurtosis), module, "Kurtosis", 0);
          }

          void t_Kurtosis::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Kurtosis), "class_", make_descriptor(Kurtosis::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Kurtosis), "wrapfn_", make_descriptor(t_Kurtosis::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Kurtosis), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Kurtosis_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Kurtosis::initializeClass, 1)))
              return NULL;
            return t_Kurtosis::wrap_Object(Kurtosis(((t_Kurtosis *) arg)->object.this$));
          }
          static PyObject *t_Kurtosis_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Kurtosis::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Kurtosis_init_(t_Kurtosis *self, PyObject *args, PyObject *kwds)
          {
            Kurtosis object((jobject) NULL);

            INT_CALL(object = Kurtosis());
            self->object = object;

            return 0;
          }

          static PyObject *t_Kurtosis_clear(t_Kurtosis *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Kurtosis_copy(t_Kurtosis *self, PyObject *args)
          {
            Kurtosis result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Kurtosis::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Kurtosis_evaluate(t_Kurtosis *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Kurtosis_getN(t_Kurtosis *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Kurtosis_getResult(t_Kurtosis *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Kurtosis_increment(t_Kurtosis *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Kurtosis_get__n(t_Kurtosis *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Kurtosis_get__result(t_Kurtosis *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Cos.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Cos::class$ = NULL;
        jmethodID *Cos::mids$ = NULL;
        bool Cos::live$ = false;

        jclass Cos::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Cos");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Cos::Cos() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Cos::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Cos::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Cos_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Cos_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Cos_init_(t_Cos *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Cos_value(t_Cos *self, PyObject *args);

        static PyMethodDef t_Cos__methods_[] = {
          DECLARE_METHOD(t_Cos, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cos, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cos, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Cos)[] = {
          { Py_tp_methods, t_Cos__methods_ },
          { Py_tp_init, (void *) t_Cos_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Cos)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Cos, t_Cos, Cos);

        void t_Cos::install(PyObject *module)
        {
          installType(&PY_TYPE(Cos), &PY_TYPE_DEF(Cos), module, "Cos", 0);
        }

        void t_Cos::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cos), "class_", make_descriptor(Cos::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cos), "wrapfn_", make_descriptor(t_Cos::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cos), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Cos_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Cos::initializeClass, 1)))
            return NULL;
          return t_Cos::wrap_Object(Cos(((t_Cos *) arg)->object.this$));
        }
        static PyObject *t_Cos_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Cos::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Cos_init_(t_Cos *self, PyObject *args, PyObject *kwds)
        {
          Cos object((jobject) NULL);

          INT_CALL(object = Cos());
          self->object = object;

          return 0;
        }

        static PyObject *t_Cos_value(t_Cos *self, PyObject *args)
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
#include "org/hipparchus/analysis/differentiation/GradientFunction.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *GradientFunction::class$ = NULL;
        jmethodID *GradientFunction::mids$ = NULL;
        bool GradientFunction::live$ = false;

        jclass GradientFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/GradientFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_489e30ecc3872b00] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction;)V");
            mids$[mid_value_4b742fe429c22ba8] = env->getMethodID(cls, "value", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GradientFunction::GradientFunction(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_489e30ecc3872b00, a0.this$)) {}

        JArray< jdouble > GradientFunction::value(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_4b742fe429c22ba8], a0.this$));
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
      namespace differentiation {
        static PyObject *t_GradientFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GradientFunction_init_(t_GradientFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GradientFunction_value(t_GradientFunction *self, PyObject *arg);

        static PyMethodDef t_GradientFunction__methods_[] = {
          DECLARE_METHOD(t_GradientFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientFunction, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GradientFunction)[] = {
          { Py_tp_methods, t_GradientFunction__methods_ },
          { Py_tp_init, (void *) t_GradientFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GradientFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GradientFunction, t_GradientFunction, GradientFunction);

        void t_GradientFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(GradientFunction), &PY_TYPE_DEF(GradientFunction), module, "GradientFunction", 0);
        }

        void t_GradientFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientFunction), "class_", make_descriptor(GradientFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientFunction), "wrapfn_", make_descriptor(t_GradientFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GradientFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GradientFunction::initializeClass, 1)))
            return NULL;
          return t_GradientFunction::wrap_Object(GradientFunction(((t_GradientFunction *) arg)->object.this$));
        }
        static PyObject *t_GradientFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GradientFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GradientFunction_init_(t_GradientFunction *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction a0((jobject) NULL);
          GradientFunction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction::initializeClass, &a0))
          {
            INT_CALL(object = GradientFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GradientFunction_value(t_GradientFunction *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/AbstractEopParser.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *AbstractEopParser::class$ = NULL;
      jmethodID *AbstractEopParser::mids$ = NULL;
      bool AbstractEopParser::live$ = false;

      jclass AbstractEopParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/AbstractEopParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConverter_4c6face5636e3d4a] = env->getMethodID(cls, "getConverter", "()Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;");
          mids$[mid_getUtc_63ac10047983bd43] = env->getMethodID(cls, "getUtc", "()Lorg/orekit/time/TimeScale;");
          mids$[mid_getItrfVersionProvider_b740eba42ec8c01f] = env->getMethodID(cls, "getItrfVersionProvider", "()Lorg/orekit/frames/ItrfVersionProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
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
      static PyObject *t_AbstractEopParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractEopParser_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_AbstractEopParser__methods_[] = {
        DECLARE_METHOD(t_AbstractEopParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractEopParser, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractEopParser)[] = {
        { Py_tp_methods, t_AbstractEopParser__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractEopParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractEopParser, t_AbstractEopParser, AbstractEopParser);

      void t_AbstractEopParser::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractEopParser), &PY_TYPE_DEF(AbstractEopParser), module, "AbstractEopParser", 0);
      }

      void t_AbstractEopParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopParser), "class_", make_descriptor(AbstractEopParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopParser), "wrapfn_", make_descriptor(t_AbstractEopParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractEopParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractEopParser::initializeClass, 1)))
          return NULL;
        return t_AbstractEopParser::wrap_Object(AbstractEopParser(((t_AbstractEopParser *) arg)->object.this$));
      }
      static PyObject *t_AbstractEopParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractEopParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldDetectorBasedEventState.h"
#include "org/hipparchus/ode/events/FieldEventState.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldDetectorBasedEventState::class$ = NULL;
        jmethodID *FieldDetectorBasedEventState::mids$ = NULL;
        bool FieldDetectorBasedEventState::live$ = false;

        jclass FieldDetectorBasedEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldDetectorBasedEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_51c8f19515e56fc6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
            mids$[mid_doEvent_9a5ac4ec8957dcbf] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/events/FieldEventOccurrence;");
            mids$[mid_evaluateStep_68d98c2570e5130d] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");
            mids$[mid_getEventDetector_da01eb6db2e32536] = env->getMethodID(cls, "getEventDetector", "()Lorg/hipparchus/ode/events/FieldODEEventDetector;");
            mids$[mid_getEventTime_e6d4d3215c30992a] = env->getMethodID(cls, "getEventTime", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_e6d23212b178b64e] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_reinitializeBegin_bcb27fe1570581e2] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
            mids$[mid_tryAdvance_1de30ef49dbfdc7b] = env->getMethodID(cls, "tryAdvance", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldDetectorBasedEventState::FieldDetectorBasedEventState(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_51c8f19515e56fc6, a0.this$)) {}

        ::org::hipparchus::ode::events::FieldEventOccurrence FieldDetectorBasedEventState::doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::FieldEventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_9a5ac4ec8957dcbf], a0.this$));
        }

        jboolean FieldDetectorBasedEventState::evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_68d98c2570e5130d], a0.this$);
        }

        ::org::hipparchus::ode::events::FieldODEEventDetector FieldDetectorBasedEventState::getEventDetector() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_da01eb6db2e32536]));
        }

        ::org::hipparchus::CalculusFieldElement FieldDetectorBasedEventState::getEventTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEventTime_e6d4d3215c30992a]));
        }

        void FieldDetectorBasedEventState::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_e6d23212b178b64e], a0.this$, a1.this$);
        }

        void FieldDetectorBasedEventState::reinitializeBegin(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_bcb27fe1570581e2], a0.this$);
        }

        jboolean FieldDetectorBasedEventState::tryAdvance(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_1de30ef49dbfdc7b], a0.this$, a1.this$);
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
        static PyObject *t_FieldDetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_of_(t_FieldDetectorBasedEventState *self, PyObject *args);
        static int t_FieldDetectorBasedEventState_init_(t_FieldDetectorBasedEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldDetectorBasedEventState_doEvent(t_FieldDetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_evaluateStep(t_FieldDetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_getEventDetector(t_FieldDetectorBasedEventState *self);
        static PyObject *t_FieldDetectorBasedEventState_getEventTime(t_FieldDetectorBasedEventState *self);
        static PyObject *t_FieldDetectorBasedEventState_init(t_FieldDetectorBasedEventState *self, PyObject *args);
        static PyObject *t_FieldDetectorBasedEventState_reinitializeBegin(t_FieldDetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_tryAdvance(t_FieldDetectorBasedEventState *self, PyObject *args);
        static PyObject *t_FieldDetectorBasedEventState_get__eventDetector(t_FieldDetectorBasedEventState *self, void *data);
        static PyObject *t_FieldDetectorBasedEventState_get__eventTime(t_FieldDetectorBasedEventState *self, void *data);
        static PyObject *t_FieldDetectorBasedEventState_get__parameters_(t_FieldDetectorBasedEventState *self, void *data);
        static PyGetSetDef t_FieldDetectorBasedEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDetectorBasedEventState, eventDetector),
          DECLARE_GET_FIELD(t_FieldDetectorBasedEventState, eventTime),
          DECLARE_GET_FIELD(t_FieldDetectorBasedEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDetectorBasedEventState__methods_[] = {
          DECLARE_METHOD(t_FieldDetectorBasedEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDetectorBasedEventState)[] = {
          { Py_tp_methods, t_FieldDetectorBasedEventState__methods_ },
          { Py_tp_init, (void *) t_FieldDetectorBasedEventState_init_ },
          { Py_tp_getset, t_FieldDetectorBasedEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDetectorBasedEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldDetectorBasedEventState, t_FieldDetectorBasedEventState, FieldDetectorBasedEventState);
        PyObject *t_FieldDetectorBasedEventState::wrap_Object(const FieldDetectorBasedEventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDetectorBasedEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDetectorBasedEventState *self = (t_FieldDetectorBasedEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldDetectorBasedEventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDetectorBasedEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDetectorBasedEventState *self = (t_FieldDetectorBasedEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldDetectorBasedEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDetectorBasedEventState), &PY_TYPE_DEF(FieldDetectorBasedEventState), module, "FieldDetectorBasedEventState", 0);
        }

        void t_FieldDetectorBasedEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDetectorBasedEventState), "class_", make_descriptor(FieldDetectorBasedEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDetectorBasedEventState), "wrapfn_", make_descriptor(t_FieldDetectorBasedEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDetectorBasedEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldDetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDetectorBasedEventState::initializeClass, 1)))
            return NULL;
          return t_FieldDetectorBasedEventState::wrap_Object(FieldDetectorBasedEventState(((t_FieldDetectorBasedEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldDetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDetectorBasedEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDetectorBasedEventState_of_(t_FieldDetectorBasedEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldDetectorBasedEventState_init_(t_FieldDetectorBasedEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDetectorBasedEventState object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
          {
            INT_CALL(object = FieldDetectorBasedEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldDetectorBasedEventState_doEvent(t_FieldDetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldEventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_FieldEventOccurrence::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_evaluateStep(t_FieldDetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_getEventDetector(t_FieldDetectorBasedEventState *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDetectorBasedEventState_getEventTime(t_FieldDetectorBasedEventState *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldDetectorBasedEventState_init(t_FieldDetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_reinitializeBegin(t_FieldDetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_tryAdvance(t_FieldDetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }
        static PyObject *t_FieldDetectorBasedEventState_get__parameters_(t_FieldDetectorBasedEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDetectorBasedEventState_get__eventDetector(t_FieldDetectorBasedEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldDetectorBasedEventState_get__eventTime(t_FieldDetectorBasedEventState *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathUtils$FieldSumAndResidual.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathUtils$FieldSumAndResidual::class$ = NULL;
      jmethodID *MathUtils$FieldSumAndResidual::mids$ = NULL;
      bool MathUtils$FieldSumAndResidual::live$ = false;

      jclass MathUtils$FieldSumAndResidual::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathUtils$FieldSumAndResidual");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getResidual_7e89936bdf79375b] = env->getMethodID(cls, "getResidual", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_getSum_7e89936bdf79375b] = env->getMethodID(cls, "getSum", "()Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement MathUtils$FieldSumAndResidual::getResidual() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getResidual_7e89936bdf79375b]));
      }

      ::org::hipparchus::FieldElement MathUtils$FieldSumAndResidual::getSum() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getSum_7e89936bdf79375b]));
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
      static PyObject *t_MathUtils$FieldSumAndResidual_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$FieldSumAndResidual_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$FieldSumAndResidual_of_(t_MathUtils$FieldSumAndResidual *self, PyObject *args);
      static PyObject *t_MathUtils$FieldSumAndResidual_getResidual(t_MathUtils$FieldSumAndResidual *self);
      static PyObject *t_MathUtils$FieldSumAndResidual_getSum(t_MathUtils$FieldSumAndResidual *self);
      static PyObject *t_MathUtils$FieldSumAndResidual_get__residual(t_MathUtils$FieldSumAndResidual *self, void *data);
      static PyObject *t_MathUtils$FieldSumAndResidual_get__sum(t_MathUtils$FieldSumAndResidual *self, void *data);
      static PyObject *t_MathUtils$FieldSumAndResidual_get__parameters_(t_MathUtils$FieldSumAndResidual *self, void *data);
      static PyGetSetDef t_MathUtils$FieldSumAndResidual__fields_[] = {
        DECLARE_GET_FIELD(t_MathUtils$FieldSumAndResidual, residual),
        DECLARE_GET_FIELD(t_MathUtils$FieldSumAndResidual, sum),
        DECLARE_GET_FIELD(t_MathUtils$FieldSumAndResidual, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathUtils$FieldSumAndResidual__methods_[] = {
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, of_, METH_VARARGS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, getResidual, METH_NOARGS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, getSum, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathUtils$FieldSumAndResidual)[] = {
        { Py_tp_methods, t_MathUtils$FieldSumAndResidual__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathUtils$FieldSumAndResidual__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathUtils$FieldSumAndResidual)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathUtils$FieldSumAndResidual, t_MathUtils$FieldSumAndResidual, MathUtils$FieldSumAndResidual);
      PyObject *t_MathUtils$FieldSumAndResidual::wrap_Object(const MathUtils$FieldSumAndResidual& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathUtils$FieldSumAndResidual::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathUtils$FieldSumAndResidual *self = (t_MathUtils$FieldSumAndResidual *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MathUtils$FieldSumAndResidual::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathUtils$FieldSumAndResidual::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathUtils$FieldSumAndResidual *self = (t_MathUtils$FieldSumAndResidual *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MathUtils$FieldSumAndResidual::install(PyObject *module)
      {
        installType(&PY_TYPE(MathUtils$FieldSumAndResidual), &PY_TYPE_DEF(MathUtils$FieldSumAndResidual), module, "MathUtils$FieldSumAndResidual", 0);
      }

      void t_MathUtils$FieldSumAndResidual::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$FieldSumAndResidual), "class_", make_descriptor(MathUtils$FieldSumAndResidual::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$FieldSumAndResidual), "wrapfn_", make_descriptor(t_MathUtils$FieldSumAndResidual::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$FieldSumAndResidual), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathUtils$FieldSumAndResidual::initializeClass, 1)))
          return NULL;
        return t_MathUtils$FieldSumAndResidual::wrap_Object(MathUtils$FieldSumAndResidual(((t_MathUtils$FieldSumAndResidual *) arg)->object.this$));
      }
      static PyObject *t_MathUtils$FieldSumAndResidual_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathUtils$FieldSumAndResidual::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_of_(t_MathUtils$FieldSumAndResidual *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_getResidual(t_MathUtils$FieldSumAndResidual *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getResidual());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_getSum(t_MathUtils$FieldSumAndResidual *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getSum());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }
      static PyObject *t_MathUtils$FieldSumAndResidual_get__parameters_(t_MathUtils$FieldSumAndResidual *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_get__residual(t_MathUtils$FieldSumAndResidual *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getResidual());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_get__sum(t_MathUtils$FieldSumAndResidual *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getSum());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/UtcId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/UtcId.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
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
              mids$[mid_parseUtcId_efdc3d036c3c05a9] = env->getStaticMethodID(cls, "parseUtcId", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/UtcId;");
              mids$[mid_valueOf_efdc3d036c3c05a9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/UtcId;");
              mids$[mid_values_efbcf3660b9b5e05] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/UtcId;");

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
            return UtcId(env->callStaticObjectMethod(cls, mids$[mid_parseUtcId_efdc3d036c3c05a9], a0.this$));
          }

          UtcId UtcId::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return UtcId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_efdc3d036c3c05a9], a0.this$));
          }

          JArray< UtcId > UtcId::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< UtcId >(env->callStaticObjectMethod(cls, mids$[mid_values_efbcf3660b9b5e05]));
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
#include "org/orekit/files/ccsds/ndm/NdmParser.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *NdmParser::class$ = NULL;
          jmethodID *NdmParser::mids$ = NULL;
          bool NdmParser::live$ = false;

          jclass NdmParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/NdmParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addComment_6b161f495ea569b8] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)Z");
              mids$[mid_build_26b168f74ccd608c] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/Ndm;");
              mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
              mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean NdmParser::addComment(const ::java::lang::String & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_addComment_6b161f495ea569b8], a0.this$);
          }

          ::org::orekit::files::ccsds::ndm::Ndm NdmParser::build() const
          {
            return ::org::orekit::files::ccsds::ndm::Ndm(env->callObjectMethod(this$, mids$[mid_build_26b168f74ccd608c]));
          }

          ::java::util::Map NdmParser::getSpecialXmlElementsBuilders() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54]));
          }

          void NdmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_052c3a3464b50355], a0.this$);
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
          static PyObject *t_NdmParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmParser_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmParser_of_(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_addComment(t_NdmParser *self, PyObject *arg);
          static PyObject *t_NdmParser_build(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_getSpecialXmlElementsBuilders(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_reset(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_get__specialXmlElementsBuilders(t_NdmParser *self, void *data);
          static PyObject *t_NdmParser_get__parameters_(t_NdmParser *self, void *data);
          static PyGetSetDef t_NdmParser__fields_[] = {
            DECLARE_GET_FIELD(t_NdmParser, specialXmlElementsBuilders),
            DECLARE_GET_FIELD(t_NdmParser, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NdmParser__methods_[] = {
            DECLARE_METHOD(t_NdmParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmParser, of_, METH_VARARGS),
            DECLARE_METHOD(t_NdmParser, addComment, METH_O),
            DECLARE_METHOD(t_NdmParser, build, METH_VARARGS),
            DECLARE_METHOD(t_NdmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
            DECLARE_METHOD(t_NdmParser, reset, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NdmParser)[] = {
            { Py_tp_methods, t_NdmParser__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NdmParser__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NdmParser)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser),
            NULL
          };

          DEFINE_TYPE(NdmParser, t_NdmParser, NdmParser);
          PyObject *t_NdmParser::wrap_Object(const NdmParser& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NdmParser::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmParser *self = (t_NdmParser *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NdmParser::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmParser *self = (t_NdmParser *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NdmParser::install(PyObject *module)
          {
            installType(&PY_TYPE(NdmParser), &PY_TYPE_DEF(NdmParser), module, "NdmParser", 0);
          }

          void t_NdmParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmParser), "class_", make_descriptor(NdmParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmParser), "wrapfn_", make_descriptor(t_NdmParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NdmParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NdmParser::initializeClass, 1)))
              return NULL;
            return t_NdmParser::wrap_Object(NdmParser(((t_NdmParser *) arg)->object.this$));
          }
          static PyObject *t_NdmParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NdmParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NdmParser_of_(t_NdmParser *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NdmParser_addComment(t_NdmParser *self, PyObject *arg)
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

          static PyObject *t_NdmParser_build(t_NdmParser *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::ndm::Ndm result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.build());
              return ::org::orekit::files::ccsds::ndm::t_Ndm::wrap_Object(result);
            }

            return callSuper(PY_TYPE(NdmParser), (PyObject *) self, "build", args, 2);
          }

          static PyObject *t_NdmParser_getSpecialXmlElementsBuilders(t_NdmParser *self, PyObject *args)
          {
            ::java::util::Map result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
            }

            return callSuper(PY_TYPE(NdmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
          }

          static PyObject *t_NdmParser_reset(t_NdmParser *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
            {
              OBJ_CALL(self->object.reset(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(NdmParser), (PyObject *) self, "reset", args, 2);
          }
          static PyObject *t_NdmParser_get__parameters_(t_NdmParser *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_NdmParser_get__specialXmlElementsBuilders(t_NdmParser *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
            return ::java::util::t_Map::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ImmutableFieldTimeStampedCache::class$ = NULL;
      jmethodID *ImmutableFieldTimeStampedCache::mids$ = NULL;
      bool ImmutableFieldTimeStampedCache::live$ = false;

      jclass ImmutableFieldTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ImmutableFieldTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_23703d999b776f91] = env->getMethodID(cls, "<init>", "(ILjava/util/Collection;)V");
          mids$[mid_emptyCache_c50aa02b5080c185] = env->getStaticMethodID(cls, "emptyCache", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/ImmutableFieldTimeStampedCache;");
          mids$[mid_getAll_a6156df500549a58] = env->getMethodID(cls, "getAll", "()Ljava/util/List;");
          mids$[mid_getEarliest_2ac58ed946476d4e] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getLatest_2ac58ed946476d4e] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getNeighbors_a39ee104977ad16b] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighborsSize_f2f64475e4580546] = env->getMethodID(cls, "getNeighborsSize", "()I");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ImmutableFieldTimeStampedCache::ImmutableFieldTimeStampedCache(jint a0, const ::java::util::Collection & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_23703d999b776f91, a0, a1.this$)) {}

      ImmutableFieldTimeStampedCache ImmutableFieldTimeStampedCache::emptyCache(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ImmutableFieldTimeStampedCache(env->callStaticObjectMethod(cls, mids$[mid_emptyCache_c50aa02b5080c185], a0.this$));
      }

      ::java::util::List ImmutableFieldTimeStampedCache::getAll() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAll_a6156df500549a58]));
      }

      ::org::orekit::time::FieldTimeStamped ImmutableFieldTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_2ac58ed946476d4e]));
      }

      ::org::orekit::time::FieldTimeStamped ImmutableFieldTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_2ac58ed946476d4e]));
      }

      ::java::util::stream::Stream ImmutableFieldTimeStampedCache::getNeighbors(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_a39ee104977ad16b], a0.this$));
      }

      jint ImmutableFieldTimeStampedCache::getNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getNeighborsSize_f2f64475e4580546]);
      }

      ::java::lang::String ImmutableFieldTimeStampedCache::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_ImmutableFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_of_(t_ImmutableFieldTimeStampedCache *self, PyObject *args);
      static int t_ImmutableFieldTimeStampedCache_init_(t_ImmutableFieldTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ImmutableFieldTimeStampedCache_emptyCache(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_getAll(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_getEarliest(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_getLatest(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighbors(t_ImmutableFieldTimeStampedCache *self, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighborsSize(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_toString(t_ImmutableFieldTimeStampedCache *self, PyObject *args);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__all(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__earliest(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__latest(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__neighborsSize(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__parameters_(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyGetSetDef t_ImmutableFieldTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, all),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, neighborsSize),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ImmutableFieldTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, emptyCache, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getAll, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getNeighbors, METH_O),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ImmutableFieldTimeStampedCache)[] = {
        { Py_tp_methods, t_ImmutableFieldTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_ImmutableFieldTimeStampedCache_init_ },
        { Py_tp_getset, t_ImmutableFieldTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ImmutableFieldTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ImmutableFieldTimeStampedCache, t_ImmutableFieldTimeStampedCache, ImmutableFieldTimeStampedCache);
      PyObject *t_ImmutableFieldTimeStampedCache::wrap_Object(const ImmutableFieldTimeStampedCache& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_ImmutableFieldTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableFieldTimeStampedCache *self = (t_ImmutableFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_ImmutableFieldTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_ImmutableFieldTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableFieldTimeStampedCache *self = (t_ImmutableFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_ImmutableFieldTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(ImmutableFieldTimeStampedCache), &PY_TYPE_DEF(ImmutableFieldTimeStampedCache), module, "ImmutableFieldTimeStampedCache", 0);
      }

      void t_ImmutableFieldTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableFieldTimeStampedCache), "class_", make_descriptor(ImmutableFieldTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableFieldTimeStampedCache), "wrapfn_", make_descriptor(t_ImmutableFieldTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableFieldTimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ImmutableFieldTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_ImmutableFieldTimeStampedCache::wrap_Object(ImmutableFieldTimeStampedCache(((t_ImmutableFieldTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_ImmutableFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ImmutableFieldTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_of_(t_ImmutableFieldTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ImmutableFieldTimeStampedCache_init_(t_ImmutableFieldTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ImmutableFieldTimeStampedCache object((jobject) NULL);

        if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = ImmutableFieldTimeStampedCache(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_emptyCache(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ImmutableFieldTimeStampedCache result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::ImmutableFieldTimeStampedCache::emptyCache(a0));
          return t_ImmutableFieldTimeStampedCache::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "emptyCache", arg);
        return NULL;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getAll(t_ImmutableFieldTimeStampedCache *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAll());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getEarliest(t_ImmutableFieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getLatest(t_ImmutableFieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighbors(t_ImmutableFieldTimeStampedCache *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", arg);
        return NULL;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighborsSize(t_ImmutableFieldTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_toString(t_ImmutableFieldTimeStampedCache *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ImmutableFieldTimeStampedCache), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_ImmutableFieldTimeStampedCache_get__parameters_(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__all(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAll());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__earliest(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__latest(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__neighborsSize(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/Frequency.h"
#include "java/util/Iterator.h"
#include "java/util/Map$Entry.h"
#include "java/util/Comparator.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/lang/Long.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/stat/Frequency.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *Frequency::class$ = NULL;
      jmethodID *Frequency::mids$ = NULL;
      bool Frequency::live$ = false;

      jclass Frequency::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/Frequency");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_4aed3eb33e58d2f7] = env->getMethodID(cls, "<init>", "(Ljava/util/Comparator;)V");
          mids$[mid_addValue_cacac2f4e763c5ca] = env->getMethodID(cls, "addValue", "(Ljava/lang/Comparable;)V");
          mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_entrySetIterator_035c6167e6569aac] = env->getMethodID(cls, "entrySetIterator", "()Ljava/util/Iterator;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getCount_990f22f08fe85ef8] = env->getMethodID(cls, "getCount", "(Ljava/lang/Comparable;)J");
          mids$[mid_getCumFreq_990f22f08fe85ef8] = env->getMethodID(cls, "getCumFreq", "(Ljava/lang/Comparable;)J");
          mids$[mid_getCumPct_81203a22ca0a6d61] = env->getMethodID(cls, "getCumPct", "(Ljava/lang/Comparable;)D");
          mids$[mid_getMode_a6156df500549a58] = env->getMethodID(cls, "getMode", "()Ljava/util/List;");
          mids$[mid_getPct_81203a22ca0a6d61] = env->getMethodID(cls, "getPct", "(Ljava/lang/Comparable;)D");
          mids$[mid_getSumFreq_a27fc9afd27e559d] = env->getMethodID(cls, "getSumFreq", "()J");
          mids$[mid_getUniqueCount_f2f64475e4580546] = env->getMethodID(cls, "getUniqueCount", "()I");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_incrementValue_e42888256fa3df2b] = env->getMethodID(cls, "incrementValue", "(Ljava/lang/Comparable;J)V");
          mids$[mid_merge_6de594515559bcfa] = env->getMethodID(cls, "merge", "(Lorg/hipparchus/stat/Frequency;)V");
          mids$[mid_merge_26b3669ec54017ce] = env->getMethodID(cls, "merge", "(Ljava/util/Collection;)V");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_valuesIterator_035c6167e6569aac] = env->getMethodID(cls, "valuesIterator", "()Ljava/util/Iterator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Frequency::Frequency() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      Frequency::Frequency(const ::java::util::Comparator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4aed3eb33e58d2f7, a0.this$)) {}

      void Frequency::addValue(const ::java::lang::Comparable & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addValue_cacac2f4e763c5ca], a0.this$);
      }

      void Frequency::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
      }

      ::java::util::Iterator Frequency::entrySetIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_entrySetIterator_035c6167e6569aac]));
      }

      jboolean Frequency::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      jlong Frequency::getCount(const ::java::lang::Comparable & a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCount_990f22f08fe85ef8], a0.this$);
      }

      jlong Frequency::getCumFreq(const ::java::lang::Comparable & a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCumFreq_990f22f08fe85ef8], a0.this$);
      }

      jdouble Frequency::getCumPct(const ::java::lang::Comparable & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCumPct_81203a22ca0a6d61], a0.this$);
      }

      ::java::util::List Frequency::getMode() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getMode_a6156df500549a58]));
      }

      jdouble Frequency::getPct(const ::java::lang::Comparable & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPct_81203a22ca0a6d61], a0.this$);
      }

      jlong Frequency::getSumFreq() const
      {
        return env->callLongMethod(this$, mids$[mid_getSumFreq_a27fc9afd27e559d]);
      }

      jint Frequency::getUniqueCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getUniqueCount_f2f64475e4580546]);
      }

      jint Frequency::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      void Frequency::incrementValue(const ::java::lang::Comparable & a0, jlong a1) const
      {
        env->callVoidMethod(this$, mids$[mid_incrementValue_e42888256fa3df2b], a0.this$, a1);
      }

      void Frequency::merge(const Frequency & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_merge_6de594515559bcfa], a0.this$);
      }

      void Frequency::merge(const ::java::util::Collection & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_merge_26b3669ec54017ce], a0.this$);
      }

      ::java::lang::String Frequency::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      ::java::util::Iterator Frequency::valuesIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_valuesIterator_035c6167e6569aac]));
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
      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args);
      static int t_Frequency_init_(t_Frequency *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Frequency_addValue(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_clear(t_Frequency *self);
      static PyObject *t_Frequency_entrySetIterator(t_Frequency *self);
      static PyObject *t_Frequency_equals(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_getCount(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getCumFreq(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getCumPct(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getMode(t_Frequency *self);
      static PyObject *t_Frequency_getPct(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getSumFreq(t_Frequency *self);
      static PyObject *t_Frequency_getUniqueCount(t_Frequency *self);
      static PyObject *t_Frequency_hashCode(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_incrementValue(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_merge(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_toString(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_valuesIterator(t_Frequency *self);
      static PyObject *t_Frequency_get__mode(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__sumFreq(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__uniqueCount(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data);
      static PyGetSetDef t_Frequency__fields_[] = {
        DECLARE_GET_FIELD(t_Frequency, mode),
        DECLARE_GET_FIELD(t_Frequency, sumFreq),
        DECLARE_GET_FIELD(t_Frequency, uniqueCount),
        DECLARE_GET_FIELD(t_Frequency, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frequency__methods_[] = {
        DECLARE_METHOD(t_Frequency, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, of_, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, addValue, METH_O),
        DECLARE_METHOD(t_Frequency, clear, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, entrySetIterator, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, equals, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, getCount, METH_O),
        DECLARE_METHOD(t_Frequency, getCumFreq, METH_O),
        DECLARE_METHOD(t_Frequency, getCumPct, METH_O),
        DECLARE_METHOD(t_Frequency, getMode, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getPct, METH_O),
        DECLARE_METHOD(t_Frequency, getSumFreq, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getUniqueCount, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, incrementValue, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, merge, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, toString, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, valuesIterator, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frequency)[] = {
        { Py_tp_methods, t_Frequency__methods_ },
        { Py_tp_init, (void *) t_Frequency_init_ },
        { Py_tp_getset, t_Frequency__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frequency)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Frequency, t_Frequency, Frequency);
      PyObject *t_Frequency::wrap_Object(const Frequency& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Frequency::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Frequency::install(PyObject *module)
      {
        installType(&PY_TYPE(Frequency), &PY_TYPE_DEF(Frequency), module, "Frequency", 0);
      }

      void t_Frequency::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "class_", make_descriptor(Frequency::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "wrapfn_", make_descriptor(t_Frequency::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frequency::initializeClass, 1)))
          return NULL;
        return t_Frequency::wrap_Object(Frequency(((t_Frequency *) arg)->object.this$));
      }
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frequency::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_Frequency_init_(t_Frequency *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Frequency object((jobject) NULL);

            INT_CALL(object = Frequency());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;
            Frequency object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              INT_CALL(object = Frequency(a0));
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

      static PyObject *t_Frequency_addValue(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(self->object.addValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addValue", arg);
        return NULL;
      }

      static PyObject *t_Frequency_clear(t_Frequency *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_Frequency_entrySetIterator(t_Frequency *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.entrySetIterator());
        return ::java::util::t_Iterator::wrap_Object(result);
      }

      static PyObject *t_Frequency_equals(t_Frequency *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Frequency), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Frequency_getCount(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jlong result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getCount(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCount", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getCumFreq(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jlong result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getCumFreq(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCumFreq", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getCumPct(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getCumPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCumPct", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getMode(t_Frequency *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getMode());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Frequency_getPct(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPct", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getSumFreq(t_Frequency *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.getSumFreq());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_Frequency_getUniqueCount(t_Frequency *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getUniqueCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Frequency_hashCode(t_Frequency *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Frequency), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Frequency_incrementValue(t_Frequency *self, PyObject *args)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jlong a1;

        if (!parseArgs(args, "KJ", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1))
        {
          OBJ_CALL(self->object.incrementValue(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "incrementValue", args);
        return NULL;
      }

      static PyObject *t_Frequency_merge(t_Frequency *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Frequency a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", Frequency::initializeClass, &a0, &p0, t_Frequency::parameters_))
            {
              OBJ_CALL(self->object.merge(a0));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(self->object.merge(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "merge", args);
        return NULL;
      }

      static PyObject *t_Frequency_toString(t_Frequency *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Frequency), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Frequency_valuesIterator(t_Frequency *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.valuesIterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Frequency_get__mode(t_Frequency *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getMode());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_Frequency_get__sumFreq(t_Frequency *self, void *data)
      {
        jlong value;
        OBJ_CALL(value = self->object.getSumFreq());
        return PyLong_FromLongLong((PY_LONG_LONG) value);
      }

      static PyObject *t_Frequency_get__uniqueCount(t_Frequency *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getUniqueCount());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/SimpleTileFactory.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "org/orekit/rugged/raster/SimpleTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *SimpleTileFactory::class$ = NULL;
        jmethodID *SimpleTileFactory::mids$ = NULL;
        bool SimpleTileFactory::live$ = false;

        jclass SimpleTileFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/SimpleTileFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_createTile_32c3cc6b29687ee6] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/raster/SimpleTile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpleTileFactory::SimpleTileFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::orekit::rugged::raster::SimpleTile SimpleTileFactory::createTile() const
        {
          return ::org::orekit::rugged::raster::SimpleTile(env->callObjectMethod(this$, mids$[mid_createTile_32c3cc6b29687ee6]));
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
        static PyObject *t_SimpleTileFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleTileFactory_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SimpleTileFactory_init_(t_SimpleTileFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimpleTileFactory_createTile(t_SimpleTileFactory *self);

        static PyMethodDef t_SimpleTileFactory__methods_[] = {
          DECLARE_METHOD(t_SimpleTileFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTileFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTileFactory, createTile, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleTileFactory)[] = {
          { Py_tp_methods, t_SimpleTileFactory__methods_ },
          { Py_tp_init, (void *) t_SimpleTileFactory_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleTileFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SimpleTileFactory, t_SimpleTileFactory, SimpleTileFactory);

        void t_SimpleTileFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleTileFactory), &PY_TYPE_DEF(SimpleTileFactory), module, "SimpleTileFactory", 0);
        }

        void t_SimpleTileFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTileFactory), "class_", make_descriptor(SimpleTileFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTileFactory), "wrapfn_", make_descriptor(t_SimpleTileFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTileFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleTileFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleTileFactory::initializeClass, 1)))
            return NULL;
          return t_SimpleTileFactory::wrap_Object(SimpleTileFactory(((t_SimpleTileFactory *) arg)->object.this$));
        }
        static PyObject *t_SimpleTileFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleTileFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SimpleTileFactory_init_(t_SimpleTileFactory *self, PyObject *args, PyObject *kwds)
        {
          SimpleTileFactory object((jobject) NULL);

          INT_CALL(object = SimpleTileFactory());
          self->object = object;

          return 0;
        }

        static PyObject *t_SimpleTileFactory_createTile(t_SimpleTileFactory *self)
        {
          ::org::orekit::rugged::raster::SimpleTile result((jobject) NULL);
          OBJ_CALL(result = self->object.createTile());
          return ::org::orekit::rugged::raster::t_SimpleTile::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/DcbStation.h"
#include "java/lang/Iterable.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/files/sinex/Dcb.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sinex/DcbDescription.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *DcbStation::class$ = NULL;
        jmethodID *DcbStation::mids$ = NULL;
        bool DcbStation::live$ = false;

        jclass DcbStation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/DcbStation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_addDcb_8d19eb512b93a6c6] = env->getMethodID(cls, "addDcb", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/files/sinex/Dcb;)V");
            mids$[mid_getAvailableSatelliteSystems_fa141f4fca81e737] = env->getMethodID(cls, "getAvailableSatelliteSystems", "()Ljava/lang/Iterable;");
            mids$[mid_getDcbData_c1a9a5094c4575eb] = env->getMethodID(cls, "getDcbData", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/files/sinex/Dcb;");
            mids$[mid_getDescription_d11de623496594e3] = env->getMethodID(cls, "getDescription", "()Lorg/orekit/files/sinex/DcbDescription;");
            mids$[mid_getSiteCode_0090f7797e403f43] = env->getMethodID(cls, "getSiteCode", "()Ljava/lang/String;");
            mids$[mid_setDescription_8b883f3a6778fd13] = env->getMethodID(cls, "setDescription", "(Lorg/orekit/files/sinex/DcbDescription;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DcbStation::DcbStation(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

        void DcbStation::addDcb(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::files::sinex::Dcb & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addDcb_8d19eb512b93a6c6], a0.this$, a1.this$);
        }

        ::java::lang::Iterable DcbStation::getAvailableSatelliteSystems() const
        {
          return ::java::lang::Iterable(env->callObjectMethod(this$, mids$[mid_getAvailableSatelliteSystems_fa141f4fca81e737]));
        }

        ::org::orekit::files::sinex::Dcb DcbStation::getDcbData(const ::org::orekit::gnss::SatelliteSystem & a0) const
        {
          return ::org::orekit::files::sinex::Dcb(env->callObjectMethod(this$, mids$[mid_getDcbData_c1a9a5094c4575eb], a0.this$));
        }

        ::org::orekit::files::sinex::DcbDescription DcbStation::getDescription() const
        {
          return ::org::orekit::files::sinex::DcbDescription(env->callObjectMethod(this$, mids$[mid_getDescription_d11de623496594e3]));
        }

        ::java::lang::String DcbStation::getSiteCode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSiteCode_0090f7797e403f43]));
        }

        void DcbStation::setDescription(const ::org::orekit::files::sinex::DcbDescription & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDescription_8b883f3a6778fd13], a0.this$);
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
        static PyObject *t_DcbStation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DcbStation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DcbStation_init_(t_DcbStation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DcbStation_addDcb(t_DcbStation *self, PyObject *args);
        static PyObject *t_DcbStation_getAvailableSatelliteSystems(t_DcbStation *self);
        static PyObject *t_DcbStation_getDcbData(t_DcbStation *self, PyObject *arg);
        static PyObject *t_DcbStation_getDescription(t_DcbStation *self);
        static PyObject *t_DcbStation_getSiteCode(t_DcbStation *self);
        static PyObject *t_DcbStation_setDescription(t_DcbStation *self, PyObject *arg);
        static PyObject *t_DcbStation_get__availableSatelliteSystems(t_DcbStation *self, void *data);
        static PyObject *t_DcbStation_get__description(t_DcbStation *self, void *data);
        static int t_DcbStation_set__description(t_DcbStation *self, PyObject *arg, void *data);
        static PyObject *t_DcbStation_get__siteCode(t_DcbStation *self, void *data);
        static PyGetSetDef t_DcbStation__fields_[] = {
          DECLARE_GET_FIELD(t_DcbStation, availableSatelliteSystems),
          DECLARE_GETSET_FIELD(t_DcbStation, description),
          DECLARE_GET_FIELD(t_DcbStation, siteCode),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DcbStation__methods_[] = {
          DECLARE_METHOD(t_DcbStation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbStation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbStation, addDcb, METH_VARARGS),
          DECLARE_METHOD(t_DcbStation, getAvailableSatelliteSystems, METH_NOARGS),
          DECLARE_METHOD(t_DcbStation, getDcbData, METH_O),
          DECLARE_METHOD(t_DcbStation, getDescription, METH_NOARGS),
          DECLARE_METHOD(t_DcbStation, getSiteCode, METH_NOARGS),
          DECLARE_METHOD(t_DcbStation, setDescription, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DcbStation)[] = {
          { Py_tp_methods, t_DcbStation__methods_ },
          { Py_tp_init, (void *) t_DcbStation_init_ },
          { Py_tp_getset, t_DcbStation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DcbStation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DcbStation, t_DcbStation, DcbStation);

        void t_DcbStation::install(PyObject *module)
        {
          installType(&PY_TYPE(DcbStation), &PY_TYPE_DEF(DcbStation), module, "DcbStation", 0);
        }

        void t_DcbStation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbStation), "class_", make_descriptor(DcbStation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbStation), "wrapfn_", make_descriptor(t_DcbStation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbStation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DcbStation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DcbStation::initializeClass, 1)))
            return NULL;
          return t_DcbStation::wrap_Object(DcbStation(((t_DcbStation *) arg)->object.this$));
        }
        static PyObject *t_DcbStation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DcbStation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DcbStation_init_(t_DcbStation *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          DcbStation object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = DcbStation(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DcbStation_addDcb(t_DcbStation *self, PyObject *args)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::files::sinex::Dcb a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::files::sinex::Dcb::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
          {
            OBJ_CALL(self->object.addDcb(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDcb", args);
          return NULL;
        }

        static PyObject *t_DcbStation_getAvailableSatelliteSystems(t_DcbStation *self)
        {
          ::java::lang::Iterable result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableSatelliteSystems());
          return ::java::lang::t_Iterable::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(SatelliteSystem));
        }

        static PyObject *t_DcbStation_getDcbData(t_DcbStation *self, PyObject *arg)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::files::sinex::Dcb result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
          {
            OBJ_CALL(result = self->object.getDcbData(a0));
            return ::org::orekit::files::sinex::t_Dcb::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDcbData", arg);
          return NULL;
        }

        static PyObject *t_DcbStation_getDescription(t_DcbStation *self)
        {
          ::org::orekit::files::sinex::DcbDescription result((jobject) NULL);
          OBJ_CALL(result = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(result);
        }

        static PyObject *t_DcbStation_getSiteCode(t_DcbStation *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSiteCode());
          return j2p(result);
        }

        static PyObject *t_DcbStation_setDescription(t_DcbStation *self, PyObject *arg)
        {
          ::org::orekit::files::sinex::DcbDescription a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setDescription(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDescription", arg);
          return NULL;
        }

        static PyObject *t_DcbStation_get__availableSatelliteSystems(t_DcbStation *self, void *data)
        {
          ::java::lang::Iterable value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableSatelliteSystems());
          return ::java::lang::t_Iterable::wrap_Object(value);
        }

        static PyObject *t_DcbStation_get__description(t_DcbStation *self, void *data)
        {
          ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
          OBJ_CALL(value = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(value);
        }
        static int t_DcbStation_set__description(t_DcbStation *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &value))
            {
              INT_CALL(self->object.setDescription(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "description", arg);
          return -1;
        }

        static PyObject *t_DcbStation_get__siteCode(t_DcbStation *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSiteCode());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/SsrUpdateInterval.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *SsrUpdateInterval::class$ = NULL;
            jmethodID *SsrUpdateInterval::mids$ = NULL;
            bool SsrUpdateInterval::live$ = false;

            jclass SsrUpdateInterval::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/SsrUpdateInterval");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getUpdateInterval_456d9a2f64d6b28d] = env->getMethodID(cls, "getUpdateInterval", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrUpdateInterval::SsrUpdateInterval(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

            jdouble SsrUpdateInterval::getUpdateInterval() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getUpdateInterval_456d9a2f64d6b28d]);
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
            static PyObject *t_SsrUpdateInterval_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrUpdateInterval_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SsrUpdateInterval_init_(t_SsrUpdateInterval *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SsrUpdateInterval_getUpdateInterval(t_SsrUpdateInterval *self);
            static PyObject *t_SsrUpdateInterval_get__updateInterval(t_SsrUpdateInterval *self, void *data);
            static PyGetSetDef t_SsrUpdateInterval__fields_[] = {
              DECLARE_GET_FIELD(t_SsrUpdateInterval, updateInterval),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SsrUpdateInterval__methods_[] = {
              DECLARE_METHOD(t_SsrUpdateInterval, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrUpdateInterval, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrUpdateInterval, getUpdateInterval, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrUpdateInterval)[] = {
              { Py_tp_methods, t_SsrUpdateInterval__methods_ },
              { Py_tp_init, (void *) t_SsrUpdateInterval_init_ },
              { Py_tp_getset, t_SsrUpdateInterval__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrUpdateInterval)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SsrUpdateInterval, t_SsrUpdateInterval, SsrUpdateInterval);

            void t_SsrUpdateInterval::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrUpdateInterval), &PY_TYPE_DEF(SsrUpdateInterval), module, "SsrUpdateInterval", 0);
            }

            void t_SsrUpdateInterval::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrUpdateInterval), "class_", make_descriptor(SsrUpdateInterval::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrUpdateInterval), "wrapfn_", make_descriptor(t_SsrUpdateInterval::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrUpdateInterval), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrUpdateInterval_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrUpdateInterval::initializeClass, 1)))
                return NULL;
              return t_SsrUpdateInterval::wrap_Object(SsrUpdateInterval(((t_SsrUpdateInterval *) arg)->object.this$));
            }
            static PyObject *t_SsrUpdateInterval_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrUpdateInterval::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SsrUpdateInterval_init_(t_SsrUpdateInterval *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              SsrUpdateInterval object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = SsrUpdateInterval(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SsrUpdateInterval_getUpdateInterval(t_SsrUpdateInterval *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getUpdateInterval());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SsrUpdateInterval_get__updateInterval(t_SsrUpdateInterval *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getUpdateInterval());
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
#include "org/orekit/data/PythonDataContext.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Throwable.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataContext::class$ = NULL;
      jmethodID *PythonDataContext::mids$ = NULL;
      bool PythonDataContext::live$ = false;

      jclass PythonDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getCelestialBodies_6b0502739530e079] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;");
          mids$[mid_getFrames_6a1d0c689f9e630b] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/Frames;");
          mids$[mid_getGeoMagneticFields_cfa6ccfb44255043] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;");
          mids$[mid_getGravityFields_f5e7fe4d5e10b51a] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;");
          mids$[mid_getTimeScales_5912acf3bafa785f] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataContext::PythonDataContext() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonDataContext::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonDataContext::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonDataContext::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataContext_init_(t_PythonDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataContext_finalize(t_PythonDataContext *self);
      static PyObject *t_PythonDataContext_pythonExtension(t_PythonDataContext *self, PyObject *args);
      static jobject JNICALL t_PythonDataContext_getCelestialBodies0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getFrames1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getGeoMagneticFields2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getGravityFields3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getTimeScales4(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonDataContext_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataContext_get__self(t_PythonDataContext *self, void *data);
      static PyGetSetDef t_PythonDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataContext, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataContext__methods_[] = {
        DECLARE_METHOD(t_PythonDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataContext, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataContext, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataContext)[] = {
        { Py_tp_methods, t_PythonDataContext__methods_ },
        { Py_tp_init, (void *) t_PythonDataContext_init_ },
        { Py_tp_getset, t_PythonDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataContext, t_PythonDataContext, PythonDataContext);

      void t_PythonDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataContext), &PY_TYPE_DEF(PythonDataContext), module, "PythonDataContext", 1);
      }

      void t_PythonDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataContext), "class_", make_descriptor(PythonDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataContext), "wrapfn_", make_descriptor(t_PythonDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataContext), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataContext::initializeClass);
        JNINativeMethod methods[] = {
          { "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;", (void *) t_PythonDataContext_getCelestialBodies0 },
          { "getFrames", "()Lorg/orekit/frames/Frames;", (void *) t_PythonDataContext_getFrames1 },
          { "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;", (void *) t_PythonDataContext_getGeoMagneticFields2 },
          { "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;", (void *) t_PythonDataContext_getGravityFields3 },
          { "getTimeScales", "()Lorg/orekit/time/TimeScales;", (void *) t_PythonDataContext_getTimeScales4 },
          { "pythonDecRef", "()V", (void *) t_PythonDataContext_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataContext::initializeClass, 1)))
          return NULL;
        return t_PythonDataContext::wrap_Object(PythonDataContext(((t_PythonDataContext *) arg)->object.this$));
      }
      static PyObject *t_PythonDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataContext_init_(t_PythonDataContext *self, PyObject *args, PyObject *kwds)
      {
        PythonDataContext object((jobject) NULL);

        INT_CALL(object = PythonDataContext());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataContext_finalize(t_PythonDataContext *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataContext_pythonExtension(t_PythonDataContext *self, PyObject *args)
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

      static jobject JNICALL t_PythonDataContext_getCelestialBodies0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBodies value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getCelestialBodies", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBodies::initializeClass, &value))
        {
          throwTypeError("getCelestialBodies", result);
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

      static jobject JNICALL t_PythonDataContext_getFrames1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frames value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrames", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frames::initializeClass, &value))
        {
          throwTypeError("getFrames", result);
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

      static jobject JNICALL t_PythonDataContext_getGeoMagneticFields2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::models::earth::GeoMagneticFields value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGeoMagneticFields", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::models::earth::GeoMagneticFields::initializeClass, &value))
        {
          throwTypeError("getGeoMagneticFields", result);
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

      static jobject JNICALL t_PythonDataContext_getGravityFields3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::forces::gravity::potential::GravityFields value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGravityFields", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::GravityFields::initializeClass, &value))
        {
          throwTypeError("getGravityFields", result);
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

      static jobject JNICALL t_PythonDataContext_getTimeScales4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeScales value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTimeScales", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeScales::initializeClass, &value))
        {
          throwTypeError("getTimeScales", result);
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

      static void JNICALL t_PythonDataContext_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonDataContext_get__self(t_PythonDataContext *self, void *data)
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
#include "org/orekit/gnss/metric/messages/common/PythonAccuracyProvider.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *PythonAccuracyProvider::class$ = NULL;
            jmethodID *PythonAccuracyProvider::mids$ = NULL;
            bool PythonAccuracyProvider::live$ = false;

            jclass PythonAccuracyProvider::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/PythonAccuracyProvider");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getAccuracy", "()D");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAccuracyProvider::PythonAccuracyProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonAccuracyProvider::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonAccuracyProvider::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonAccuracyProvider::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            static PyObject *t_PythonAccuracyProvider_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAccuracyProvider_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonAccuracyProvider_init_(t_PythonAccuracyProvider *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAccuracyProvider_finalize(t_PythonAccuracyProvider *self);
            static PyObject *t_PythonAccuracyProvider_pythonExtension(t_PythonAccuracyProvider *self, PyObject *args);
            static jdouble JNICALL t_PythonAccuracyProvider_getAccuracy0(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAccuracyProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonAccuracyProvider_get__self(t_PythonAccuracyProvider *self, void *data);
            static PyGetSetDef t_PythonAccuracyProvider__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAccuracyProvider, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAccuracyProvider__methods_[] = {
              DECLARE_METHOD(t_PythonAccuracyProvider, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAccuracyProvider, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAccuracyProvider, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAccuracyProvider, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAccuracyProvider)[] = {
              { Py_tp_methods, t_PythonAccuracyProvider__methods_ },
              { Py_tp_init, (void *) t_PythonAccuracyProvider_init_ },
              { Py_tp_getset, t_PythonAccuracyProvider__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAccuracyProvider)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonAccuracyProvider, t_PythonAccuracyProvider, PythonAccuracyProvider);

            void t_PythonAccuracyProvider::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAccuracyProvider), &PY_TYPE_DEF(PythonAccuracyProvider), module, "PythonAccuracyProvider", 1);
            }

            void t_PythonAccuracyProvider::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccuracyProvider), "class_", make_descriptor(PythonAccuracyProvider::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccuracyProvider), "wrapfn_", make_descriptor(t_PythonAccuracyProvider::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccuracyProvider), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAccuracyProvider::initializeClass);
              JNINativeMethod methods[] = {
                { "getAccuracy", "()D", (void *) t_PythonAccuracyProvider_getAccuracy0 },
                { "pythonDecRef", "()V", (void *) t_PythonAccuracyProvider_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonAccuracyProvider_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAccuracyProvider::initializeClass, 1)))
                return NULL;
              return t_PythonAccuracyProvider::wrap_Object(PythonAccuracyProvider(((t_PythonAccuracyProvider *) arg)->object.this$));
            }
            static PyObject *t_PythonAccuracyProvider_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAccuracyProvider::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonAccuracyProvider_init_(t_PythonAccuracyProvider *self, PyObject *args, PyObject *kwds)
            {
              PythonAccuracyProvider object((jobject) NULL);

              INT_CALL(object = PythonAccuracyProvider());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonAccuracyProvider_finalize(t_PythonAccuracyProvider *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAccuracyProvider_pythonExtension(t_PythonAccuracyProvider *self, PyObject *args)
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

            static jdouble JNICALL t_PythonAccuracyProvider_getAccuracy0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAccuracyProvider::mids$[PythonAccuracyProvider::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getAccuracy", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAccuracy", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonAccuracyProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAccuracyProvider::mids$[PythonAccuracyProvider::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAccuracyProvider::mids$[PythonAccuracyProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonAccuracyProvider_get__self(t_PythonAccuracyProvider *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/ZeisModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *ZeisModel::class$ = NULL;
            jmethodID *ZeisModel::mids$ = NULL;
            bool ZeisModel::live$ = false;

            jclass ZeisModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/ZeisModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_computeC2Z_d2aba67d7a20690f] = env->getMethodID(cls, "computeC2Z", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)D");
                mids$[mid_computeC2Z_d0f3fc732fcd5929] = env->getMethodID(cls, "computeC2Z", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_e32239e65f2894b6] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_567add3558894c9e] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ZeisModel::ZeisModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jdouble ZeisModel::computeC2Z(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_computeC2Z_d2aba67d7a20690f], a0.this$);
            }

            ::org::hipparchus::CalculusFieldElement ZeisModel::computeC2Z(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext & a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeC2Z_d0f3fc732fcd5929], a0.this$));
            }

            JArray< jdouble > ZeisModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_e32239e65f2894b6], a0.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > ZeisModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_567add3558894c9e], a0.this$));
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
            static PyObject *t_ZeisModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ZeisModel_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ZeisModel_init_(t_ZeisModel *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ZeisModel_computeC2Z(t_ZeisModel *self, PyObject *args);
            static PyObject *t_ZeisModel_computeMeanEquinoctialSecondOrderTerms(t_ZeisModel *self, PyObject *args);

            static PyMethodDef t_ZeisModel__methods_[] = {
              DECLARE_METHOD(t_ZeisModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ZeisModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ZeisModel, computeC2Z, METH_VARARGS),
              DECLARE_METHOD(t_ZeisModel, computeMeanEquinoctialSecondOrderTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ZeisModel)[] = {
              { Py_tp_methods, t_ZeisModel__methods_ },
              { Py_tp_init, (void *) t_ZeisModel_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ZeisModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ZeisModel, t_ZeisModel, ZeisModel);

            void t_ZeisModel::install(PyObject *module)
            {
              installType(&PY_TYPE(ZeisModel), &PY_TYPE_DEF(ZeisModel), module, "ZeisModel", 0);
            }

            void t_ZeisModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ZeisModel), "class_", make_descriptor(ZeisModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ZeisModel), "wrapfn_", make_descriptor(t_ZeisModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ZeisModel), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ZeisModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ZeisModel::initializeClass, 1)))
                return NULL;
              return t_ZeisModel::wrap_Object(ZeisModel(((t_ZeisModel *) arg)->object.this$));
            }
            static PyObject *t_ZeisModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ZeisModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ZeisModel_init_(t_ZeisModel *self, PyObject *args, PyObject *kwds)
            {
              ZeisModel object((jobject) NULL);

              INT_CALL(object = ZeisModel());
              self->object = object;

              return 0;
            }

            static PyObject *t_ZeisModel_computeC2Z(t_ZeisModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  jdouble result;

                  if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.computeC2Z(a0));
                    return PyFloat_FromDouble((double) result);
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::parameters_))
                  {
                    OBJ_CALL(result = self->object.computeC2Z(a0));
                    return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "computeC2Z", args);
              return NULL;
            }

            static PyObject *t_ZeisModel_computeMeanEquinoctialSecondOrderTerms(t_ZeisModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::parameters_))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "computeMeanEquinoctialSecondOrderTerms", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
