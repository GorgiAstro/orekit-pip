#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/WindUpFactory.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/gnss/WindUp.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *WindUpFactory::class$ = NULL;
          jmethodID *WindUpFactory::mids$ = NULL;
          bool WindUpFactory::live$ = false;

          jclass WindUpFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/WindUpFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getWindUp_b5ce2e03b1b3656d] = env->getMethodID(cls, "getWindUp", "(Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/estimation/measurements/gnss/Dipole;Ljava/lang/String;)Lorg/orekit/estimation/measurements/gnss/WindUp;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          WindUpFactory::WindUpFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::orekit::estimation::measurements::gnss::WindUp WindUpFactory::getWindUp(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::org::orekit::estimation::measurements::gnss::Dipole & a2, const ::java::lang::String & a3) const
          {
            return ::org::orekit::estimation::measurements::gnss::WindUp(env->callObjectMethod(this$, mids$[mid_getWindUp_b5ce2e03b1b3656d], a0.this$, a1, a2.this$, a3.this$));
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
          static PyObject *t_WindUpFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WindUpFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_WindUpFactory_init_(t_WindUpFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_WindUpFactory_getWindUp(t_WindUpFactory *self, PyObject *args);

          static PyMethodDef t_WindUpFactory__methods_[] = {
            DECLARE_METHOD(t_WindUpFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUpFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUpFactory, getWindUp, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WindUpFactory)[] = {
            { Py_tp_methods, t_WindUpFactory__methods_ },
            { Py_tp_init, (void *) t_WindUpFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WindUpFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(WindUpFactory, t_WindUpFactory, WindUpFactory);

          void t_WindUpFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(WindUpFactory), &PY_TYPE_DEF(WindUpFactory), module, "WindUpFactory", 0);
          }

          void t_WindUpFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUpFactory), "class_", make_descriptor(WindUpFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUpFactory), "wrapfn_", make_descriptor(t_WindUpFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUpFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WindUpFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WindUpFactory::initializeClass, 1)))
              return NULL;
            return t_WindUpFactory::wrap_Object(WindUpFactory(((t_WindUpFactory *) arg)->object.this$));
          }
          static PyObject *t_WindUpFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WindUpFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_WindUpFactory_init_(t_WindUpFactory *self, PyObject *args, PyObject *kwds)
          {
            WindUpFactory object((jobject) NULL);

            INT_CALL(object = WindUpFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_WindUpFactory_getWindUp(t_WindUpFactory *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::estimation::measurements::gnss::Dipole a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::WindUp result((jobject) NULL);

            if (!parseArgs(args, "KIks", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getWindUp(a0, a1, a2, a3));
              return ::org::orekit::estimation::measurements::gnss::t_WindUp::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWindUp", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/PythonAbstractSolarActivityData.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *PythonAbstractSolarActivityData::class$ = NULL;
            jmethodID *PythonAbstractSolarActivityData::mids$ = NULL;
            bool PythonAbstractSolarActivityData::live$ = false;

            jclass PythonAbstractSolarActivityData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/PythonAbstractSolarActivityData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_cf6f4d8e548d5b58] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_get24HoursKp_209f08246d708042] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getAp_9b63d19c31941c0f] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_getAverageFlux_209f08246d708042] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getDailyFlux_209f08246d708042] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getInstantFlux_209f08246d708042] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMeanFlux_209f08246d708042] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getThreeHourlyKP_209f08246d708042] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractSolarActivityData::PythonAbstractSolarActivityData(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3, jint a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_cf6f4d8e548d5b58, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7)) {}

            void PythonAbstractSolarActivityData::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonAbstractSolarActivityData::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonAbstractSolarActivityData::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_PythonAbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractSolarActivityData_of_(t_PythonAbstractSolarActivityData *self, PyObject *args);
            static int t_PythonAbstractSolarActivityData_init_(t_PythonAbstractSolarActivityData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractSolarActivityData_finalize(t_PythonAbstractSolarActivityData *self);
            static PyObject *t_PythonAbstractSolarActivityData_pythonExtension(t_PythonAbstractSolarActivityData *self, PyObject *args);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonAbstractSolarActivityData_getAp1(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getAverageFlux2(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getDailyFlux3(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getInstantFlux4(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getMeanFlux5(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getThreeHourlyKP6(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonAbstractSolarActivityData_pythonDecRef7(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonAbstractSolarActivityData_get__self(t_PythonAbstractSolarActivityData *self, void *data);
            static PyObject *t_PythonAbstractSolarActivityData_get__parameters_(t_PythonAbstractSolarActivityData *self, void *data);
            static PyGetSetDef t_PythonAbstractSolarActivityData__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractSolarActivityData, self),
              DECLARE_GET_FIELD(t_PythonAbstractSolarActivityData, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractSolarActivityData__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractSolarActivityData)[] = {
              { Py_tp_methods, t_PythonAbstractSolarActivityData__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractSolarActivityData_init_ },
              { Py_tp_getset, t_PythonAbstractSolarActivityData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractSolarActivityData)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData),
              NULL
            };

            DEFINE_TYPE(PythonAbstractSolarActivityData, t_PythonAbstractSolarActivityData, PythonAbstractSolarActivityData);
            PyObject *t_PythonAbstractSolarActivityData::wrap_Object(const PythonAbstractSolarActivityData& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAbstractSolarActivityData::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractSolarActivityData *self = (t_PythonAbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_PythonAbstractSolarActivityData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAbstractSolarActivityData::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractSolarActivityData *self = (t_PythonAbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_PythonAbstractSolarActivityData::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractSolarActivityData), &PY_TYPE_DEF(PythonAbstractSolarActivityData), module, "PythonAbstractSolarActivityData", 1);
            }

            void t_PythonAbstractSolarActivityData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSolarActivityData), "class_", make_descriptor(PythonAbstractSolarActivityData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSolarActivityData), "wrapfn_", make_descriptor(t_PythonAbstractSolarActivityData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSolarActivityData), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractSolarActivityData::initializeClass);
              JNINativeMethod methods[] = {
                { "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_get24HoursKp0 },
                { "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonAbstractSolarActivityData_getAp1 },
                { "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getAverageFlux2 },
                { "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getDailyFlux3 },
                { "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getInstantFlux4 },
                { "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getMeanFlux5 },
                { "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getThreeHourlyKP6 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractSolarActivityData_pythonDecRef7 },
              };
              env->registerNatives(cls, methods, 8);
            }

            static PyObject *t_PythonAbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractSolarActivityData::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractSolarActivityData::wrap_Object(PythonAbstractSolarActivityData(((t_PythonAbstractSolarActivityData *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractSolarActivityData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractSolarActivityData_of_(t_PythonAbstractSolarActivityData *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonAbstractSolarActivityData_init_(t_PythonAbstractSolarActivityData *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
              ::org::orekit::time::TimeScale a3((jobject) NULL);
              jint a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              PythonAbstractSolarActivityData object((jobject) NULL);

              if (!parseArgs(args, "sKkkIDDD", ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader::parameters_, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = PythonAbstractSolarActivityData(a0, a1, a2, a3, a4, a5, a6, a7));
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

            static PyObject *t_PythonAbstractSolarActivityData_finalize(t_PythonAbstractSolarActivityData *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractSolarActivityData_pythonExtension(t_PythonAbstractSolarActivityData *self, PyObject *args)
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

            static jdouble JNICALL t_PythonAbstractSolarActivityData_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "get24HoursKp", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("get24HoursKp", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jobject JNICALL t_PythonAbstractSolarActivityData_getAp1(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getAp", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getAp", result);
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

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getAverageFlux2(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getAverageFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAverageFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getDailyFlux3(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getDailyFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getDailyFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getInstantFlux4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getInstantFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getInstantFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getMeanFlux5(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getMeanFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getMeanFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getThreeHourlyKP6(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getThreeHourlyKP", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getThreeHourlyKP", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonAbstractSolarActivityData_pythonDecRef7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonAbstractSolarActivityData_get__self(t_PythonAbstractSolarActivityData *self, void *data)
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
            static PyObject *t_PythonAbstractSolarActivityData_get__parameters_(t_PythonAbstractSolarActivityData *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *AbstractSolarActivityDataLoader$LineParameters::class$ = NULL;
            jmethodID *AbstractSolarActivityDataLoader$LineParameters::mids$ = NULL;
            bool AbstractSolarActivityDataLoader$LineParameters::live$ = false;

            jclass AbstractSolarActivityDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_compareTo_8b843ae7da66c9f6] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters;)I");
                mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint AbstractSolarActivityDataLoader$LineParameters::compareTo(const AbstractSolarActivityDataLoader$LineParameters & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_8b843ae7da66c9f6], a0.this$);
            }

            jboolean AbstractSolarActivityDataLoader$LineParameters::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityDataLoader$LineParameters::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
            }

            jint AbstractSolarActivityDataLoader$LineParameters::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_of_(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_compareTo(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_equals(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_getDate(t_AbstractSolarActivityDataLoader$LineParameters *self);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_hashCode(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__date(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__parameters_(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_AbstractSolarActivityDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader$LineParameters, date),
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader$LineParameters, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSolarActivityDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, compareTo, METH_O),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, equals, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, getDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSolarActivityDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_AbstractSolarActivityDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractSolarActivityDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSolarActivityDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSolarActivityDataLoader$LineParameters, t_AbstractSolarActivityDataLoader$LineParameters, AbstractSolarActivityDataLoader$LineParameters);
            PyObject *t_AbstractSolarActivityDataLoader$LineParameters::wrap_Object(const AbstractSolarActivityDataLoader$LineParameters& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader$LineParameters::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader$LineParameters *self = (t_AbstractSolarActivityDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AbstractSolarActivityDataLoader$LineParameters::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader$LineParameters::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader$LineParameters *self = (t_AbstractSolarActivityDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AbstractSolarActivityDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), &PY_TYPE_DEF(AbstractSolarActivityDataLoader$LineParameters), module, "AbstractSolarActivityDataLoader$LineParameters", 0);
            }

            void t_AbstractSolarActivityDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), "class_", make_descriptor(AbstractSolarActivityDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), "wrapfn_", make_descriptor(t_AbstractSolarActivityDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSolarActivityDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_AbstractSolarActivityDataLoader$LineParameters::wrap_Object(AbstractSolarActivityDataLoader$LineParameters(((t_AbstractSolarActivityDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSolarActivityDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_of_(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_compareTo(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *arg)
            {
              AbstractSolarActivityDataLoader$LineParameters a0((jobject) NULL);
              PyTypeObject **p0;
              jint result;

              if (!parseArg(arg, "K", AbstractSolarActivityDataLoader$LineParameters::initializeClass, &a0, &p0, t_AbstractSolarActivityDataLoader$LineParameters::parameters_))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
              return NULL;
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_equals(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_getDate(t_AbstractSolarActivityDataLoader$LineParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_hashCode(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), (PyObject *) self, "hashCode", args, 2);
            }
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__parameters_(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__date(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Predefined.h"
#include "java/lang/String.h"
#include "org/orekit/frames/Predefined.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Predefined::class$ = NULL;
      jmethodID *Predefined::mids$ = NULL;
      bool Predefined::live$ = false;
      Predefined *Predefined::CIRF_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::ECLIPTIC_CONVENTIONS_1996 = NULL;
      Predefined *Predefined::ECLIPTIC_CONVENTIONS_2003 = NULL;
      Predefined *Predefined::ECLIPTIC_CONVENTIONS_2010 = NULL;
      Predefined *Predefined::EME2000 = NULL;
      Predefined *Predefined::GCRF = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::GTOD_WITHOUT_EOP_CORRECTIONS = NULL;
      Predefined *Predefined::ICRF = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::MOD_CONVENTIONS_1996 = NULL;
      Predefined *Predefined::MOD_CONVENTIONS_2003 = NULL;
      Predefined *Predefined::MOD_CONVENTIONS_2010 = NULL;
      Predefined *Predefined::MOD_WITHOUT_EOP_CORRECTIONS = NULL;
      Predefined *Predefined::PZ90_11 = NULL;
      Predefined *Predefined::TEME = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_WITHOUT_EOP_CORRECTIONS = NULL;
      Predefined *Predefined::VEIS_1950 = NULL;

      jclass Predefined::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Predefined");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_valueOf_e7c3c74dec0eb757] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/Predefined;");
          mids$[mid_values_a207da75fed6aed4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/Predefined;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CIRF_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ECLIPTIC_CONVENTIONS_1996 = new Predefined(env->getStaticObjectField(cls, "ECLIPTIC_CONVENTIONS_1996", "Lorg/orekit/frames/Predefined;"));
          ECLIPTIC_CONVENTIONS_2003 = new Predefined(env->getStaticObjectField(cls, "ECLIPTIC_CONVENTIONS_2003", "Lorg/orekit/frames/Predefined;"));
          ECLIPTIC_CONVENTIONS_2010 = new Predefined(env->getStaticObjectField(cls, "ECLIPTIC_CONVENTIONS_2010", "Lorg/orekit/frames/Predefined;"));
          EME2000 = new Predefined(env->getStaticObjectField(cls, "EME2000", "Lorg/orekit/frames/Predefined;"));
          GCRF = new Predefined(env->getStaticObjectField(cls, "GCRF", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_WITHOUT_EOP_CORRECTIONS = new Predefined(env->getStaticObjectField(cls, "GTOD_WITHOUT_EOP_CORRECTIONS", "Lorg/orekit/frames/Predefined;"));
          ICRF = new Predefined(env->getStaticObjectField(cls, "ICRF", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          MOD_CONVENTIONS_1996 = new Predefined(env->getStaticObjectField(cls, "MOD_CONVENTIONS_1996", "Lorg/orekit/frames/Predefined;"));
          MOD_CONVENTIONS_2003 = new Predefined(env->getStaticObjectField(cls, "MOD_CONVENTIONS_2003", "Lorg/orekit/frames/Predefined;"));
          MOD_CONVENTIONS_2010 = new Predefined(env->getStaticObjectField(cls, "MOD_CONVENTIONS_2010", "Lorg/orekit/frames/Predefined;"));
          MOD_WITHOUT_EOP_CORRECTIONS = new Predefined(env->getStaticObjectField(cls, "MOD_WITHOUT_EOP_CORRECTIONS", "Lorg/orekit/frames/Predefined;"));
          PZ90_11 = new Predefined(env->getStaticObjectField(cls, "PZ90_11", "Lorg/orekit/frames/Predefined;"));
          TEME = new Predefined(env->getStaticObjectField(cls, "TEME", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_WITHOUT_EOP_CORRECTIONS = new Predefined(env->getStaticObjectField(cls, "TOD_WITHOUT_EOP_CORRECTIONS", "Lorg/orekit/frames/Predefined;"));
          VEIS_1950 = new Predefined(env->getStaticObjectField(cls, "VEIS_1950", "Lorg/orekit/frames/Predefined;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String Predefined::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      Predefined Predefined::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Predefined(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e7c3c74dec0eb757], a0.this$));
      }

      JArray< Predefined > Predefined::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< Predefined >(env->callStaticObjectMethod(cls, mids$[mid_values_a207da75fed6aed4]));
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
      static PyObject *t_Predefined_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Predefined_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Predefined_of_(t_Predefined *self, PyObject *args);
      static PyObject *t_Predefined_getName(t_Predefined *self);
      static PyObject *t_Predefined_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Predefined_values(PyTypeObject *type);
      static PyObject *t_Predefined_get__name(t_Predefined *self, void *data);
      static PyObject *t_Predefined_get__parameters_(t_Predefined *self, void *data);
      static PyGetSetDef t_Predefined__fields_[] = {
        DECLARE_GET_FIELD(t_Predefined, name),
        DECLARE_GET_FIELD(t_Predefined, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Predefined__methods_[] = {
        DECLARE_METHOD(t_Predefined, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Predefined, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Predefined, of_, METH_VARARGS),
        DECLARE_METHOD(t_Predefined, getName, METH_NOARGS),
        DECLARE_METHOD(t_Predefined, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Predefined, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Predefined)[] = {
        { Py_tp_methods, t_Predefined__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Predefined__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Predefined)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(Predefined, t_Predefined, Predefined);
      PyObject *t_Predefined::wrap_Object(const Predefined& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Predefined::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Predefined *self = (t_Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Predefined::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Predefined::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Predefined *self = (t_Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Predefined::install(PyObject *module)
      {
        installType(&PY_TYPE(Predefined), &PY_TYPE_DEF(Predefined), module, "Predefined", 0);
      }

      void t_Predefined::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "class_", make_descriptor(Predefined::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "wrapfn_", make_descriptor(t_Predefined::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "boxfn_", make_descriptor(boxObject));
        env->getClass(Predefined::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ECLIPTIC_CONVENTIONS_1996", make_descriptor(t_Predefined::wrap_Object(*Predefined::ECLIPTIC_CONVENTIONS_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ECLIPTIC_CONVENTIONS_2003", make_descriptor(t_Predefined::wrap_Object(*Predefined::ECLIPTIC_CONVENTIONS_2003)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ECLIPTIC_CONVENTIONS_2010", make_descriptor(t_Predefined::wrap_Object(*Predefined::ECLIPTIC_CONVENTIONS_2010)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "EME2000", make_descriptor(t_Predefined::wrap_Object(*Predefined::EME2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GCRF", make_descriptor(t_Predefined::wrap_Object(*Predefined::GCRF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_WITHOUT_EOP_CORRECTIONS", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_WITHOUT_EOP_CORRECTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ICRF", make_descriptor(t_Predefined::wrap_Object(*Predefined::ICRF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_CONVENTIONS_1996", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_CONVENTIONS_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_CONVENTIONS_2003", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_CONVENTIONS_2003)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_CONVENTIONS_2010", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_CONVENTIONS_2010)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_WITHOUT_EOP_CORRECTIONS", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_WITHOUT_EOP_CORRECTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "PZ90_11", make_descriptor(t_Predefined::wrap_Object(*Predefined::PZ90_11)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TEME", make_descriptor(t_Predefined::wrap_Object(*Predefined::TEME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_WITHOUT_EOP_CORRECTIONS", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_WITHOUT_EOP_CORRECTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "VEIS_1950", make_descriptor(t_Predefined::wrap_Object(*Predefined::VEIS_1950)));
      }

      static PyObject *t_Predefined_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Predefined::initializeClass, 1)))
          return NULL;
        return t_Predefined::wrap_Object(Predefined(((t_Predefined *) arg)->object.this$));
      }
      static PyObject *t_Predefined_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Predefined::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Predefined_of_(t_Predefined *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Predefined_getName(t_Predefined *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_Predefined_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        Predefined result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::Predefined::valueOf(a0));
          return t_Predefined::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_Predefined_values(PyTypeObject *type)
      {
        JArray< Predefined > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::Predefined::values());
        return JArray<jobject>(result.this$).wrap(t_Predefined::wrap_jobject);
      }
      static PyObject *t_Predefined_get__parameters_(t_Predefined *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Predefined_get__name(t_Predefined *self, void *data)
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
#include "org/hipparchus/util/ContinuedFraction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ContinuedFraction::class$ = NULL;
      jmethodID *ContinuedFraction::mids$ = NULL;
      bool ContinuedFraction::live$ = false;

      jclass ContinuedFraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ContinuedFraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluate_bf28ed64d6e8576b] = env->getMethodID(cls, "evaluate", "(D)D");
          mids$[mid_evaluate_82f92590f4247da1] = env->getMethodID(cls, "evaluate", "(DD)D");
          mids$[mid_evaluate_988810e80d644418] = env->getMethodID(cls, "evaluate", "(DI)D");
          mids$[mid_evaluate_231b24aba5c51c15] = env->getMethodID(cls, "evaluate", "(DDI)D");
          mids$[mid_getA_5540210c7d309f18] = env->getMethodID(cls, "getA", "(ID)D");
          mids$[mid_getB_5540210c7d309f18] = env->getMethodID(cls, "getB", "(ID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ContinuedFraction::evaluate(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_bf28ed64d6e8576b], a0);
      }

      jdouble ContinuedFraction::evaluate(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_82f92590f4247da1], a0, a1);
      }

      jdouble ContinuedFraction::evaluate(jdouble a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_988810e80d644418], a0, a1);
      }

      jdouble ContinuedFraction::evaluate(jdouble a0, jdouble a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_231b24aba5c51c15], a0, a1, a2);
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
      static PyObject *t_ContinuedFraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ContinuedFraction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ContinuedFraction_evaluate(t_ContinuedFraction *self, PyObject *args);

      static PyMethodDef t_ContinuedFraction__methods_[] = {
        DECLARE_METHOD(t_ContinuedFraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ContinuedFraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ContinuedFraction, evaluate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ContinuedFraction)[] = {
        { Py_tp_methods, t_ContinuedFraction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ContinuedFraction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ContinuedFraction, t_ContinuedFraction, ContinuedFraction);

      void t_ContinuedFraction::install(PyObject *module)
      {
        installType(&PY_TYPE(ContinuedFraction), &PY_TYPE_DEF(ContinuedFraction), module, "ContinuedFraction", 0);
      }

      void t_ContinuedFraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuedFraction), "class_", make_descriptor(ContinuedFraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuedFraction), "wrapfn_", make_descriptor(t_ContinuedFraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuedFraction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ContinuedFraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ContinuedFraction::initializeClass, 1)))
          return NULL;
        return t_ContinuedFraction::wrap_Object(ContinuedFraction(((t_ContinuedFraction *) arg)->object.this$));
      }
      static PyObject *t_ContinuedFraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ContinuedFraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ContinuedFraction_evaluate(t_ContinuedFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.evaluate(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/DSFactory.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DerivativeStructure::class$ = NULL;
        jmethodID *DerivativeStructure::mids$ = NULL;
        bool DerivativeStructure::live$ = false;

        jclass DerivativeStructure::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DerivativeStructure");

            mids$ = new jmethodID[max_mid];
            mids$[mid_abs_ce114c5dd035d753] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_acos_ce114c5dd035d753] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_acosh_ce114c5dd035d753] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_add_f842b4bbbc82e44f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_add_f7de6915022fec9a] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_asin_ce114c5dd035d753] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_asinh_ce114c5dd035d753] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atan_ce114c5dd035d753] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atan2_f842b4bbbc82e44f] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atan2_9cc215aa9cda8821] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atanh_ce114c5dd035d753] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_cbrt_ce114c5dd035d753] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_ceil_ce114c5dd035d753] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_compose_1e0d37b52d091497] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_copySign_f842b4bbbc82e44f] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_copySign_f7de6915022fec9a] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_cos_ce114c5dd035d753] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_cosh_ce114c5dd035d753] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_differentiate_0db5f42b010a612d] = env->getMethodID(cls, "differentiate", "(II)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_divide_f842b4bbbc82e44f] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_divide_f7de6915022fec9a] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_ce114c5dd035d753] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_expm1_ce114c5dd035d753] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_floor_ce114c5dd035d753] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getAllDerivatives_be783177b060994b] = env->getMethodID(cls, "getAllDerivatives", "()[D");
            mids$[mid_getExponent_d6ab429752e7c267] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getFactory_73c80928d7b3a59e] = env->getMethodID(cls, "getFactory", "()Lorg/hipparchus/analysis/differentiation/DSFactory;");
            mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getFreeParameters_d6ab429752e7c267] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_7f744e43a2f098aa] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_getPi_ce114c5dd035d753] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_9981f74b2d109da6] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_f842b4bbbc82e44f] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_hypot_9cc215aa9cda8821] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_integrate_0db5f42b010a612d] = env->getMethodID(cls, "integrate", "(II)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_94d0b414bb2993c4] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_7de22af51d01a7eb] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_7e9f4feed7ecaf7a] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_5f37cf8ec468a054] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_ed00b5b290807096] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_a243a9e89d5611f3] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_ae3d88c6d75db937] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_44dc6d143cd1cf30] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_log_ce114c5dd035d753] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_log10_ce114c5dd035d753] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_log1p_ce114c5dd035d753] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_multiply_f842b4bbbc82e44f] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_multiply_f7de6915022fec9a] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_multiply_d2b8014a1c7d22f6] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_negate_ce114c5dd035d753] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_newInstance_f7de6915022fec9a] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_f842b4bbbc82e44f] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_f7de6915022fec9a] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_d2b8014a1c7d22f6] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_ab49f8b6840e123c] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_rebase_bdcda54333f10bef] = env->getMethodID(cls, "rebase", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_reciprocal_ce114c5dd035d753] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_remainder_f842b4bbbc82e44f] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_remainder_f7de6915022fec9a] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_rint_ce114c5dd035d753] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_rootN_d2b8014a1c7d22f6] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_scalb_d2b8014a1c7d22f6] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sign_ce114c5dd035d753] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sin_ce114c5dd035d753] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_ce114c5dd035d753] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_ce114c5dd035d753] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_subtract_f842b4bbbc82e44f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_subtract_f7de6915022fec9a] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_tan_ce114c5dd035d753] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_tanh_ce114c5dd035d753] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_taylor_a40ce4fdf6559ac0] = env->getMethodID(cls, "taylor", "([D)D");
            mids$[mid_toDegrees_ce114c5dd035d753] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_ce114c5dd035d753] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_ulp_ce114c5dd035d753] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DerivativeStructure DerivativeStructure::abs() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_abs_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::acos() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_acos_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::acosh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_acosh_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::add(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_f842b4bbbc82e44f], a0.this$));
        }

        DerivativeStructure DerivativeStructure::add(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_f7de6915022fec9a], a0));
        }

        DerivativeStructure DerivativeStructure::asin() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_asin_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::asinh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_asinh_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::atan() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::atan2(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan2_f842b4bbbc82e44f], a0.this$));
        }

        DerivativeStructure DerivativeStructure::atan2(const DerivativeStructure & a0, const DerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_atan2_9cc215aa9cda8821], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::atanh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_atanh_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::cbrt() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_cbrt_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::ceil() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_ceil_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::compose(const JArray< jdouble > & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_compose_1e0d37b52d091497], a0.this$));
        }

        DerivativeStructure DerivativeStructure::copySign(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_f842b4bbbc82e44f], a0.this$));
        }

        DerivativeStructure DerivativeStructure::copySign(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_f7de6915022fec9a], a0));
        }

        DerivativeStructure DerivativeStructure::cos() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_cos_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::cosh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_cosh_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::differentiate(jint a0, jint a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_differentiate_0db5f42b010a612d], a0, a1));
        }

        DerivativeStructure DerivativeStructure::divide(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_f842b4bbbc82e44f], a0.this$));
        }

        DerivativeStructure DerivativeStructure::divide(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_f7de6915022fec9a], a0));
        }

        jboolean DerivativeStructure::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        DerivativeStructure DerivativeStructure::exp() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_exp_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::expm1() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_expm1_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::floor() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_floor_ce114c5dd035d753]));
        }

        JArray< jdouble > DerivativeStructure::getAllDerivatives() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAllDerivatives_be783177b060994b]));
        }

        jint DerivativeStructure::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_d6ab429752e7c267]);
        }

        ::org::hipparchus::analysis::differentiation::DSFactory DerivativeStructure::getFactory() const
        {
          return ::org::hipparchus::analysis::differentiation::DSFactory(env->callObjectMethod(this$, mids$[mid_getFactory_73c80928d7b3a59e]));
        }

        ::org::hipparchus::Field DerivativeStructure::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
        }

        jint DerivativeStructure::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_d6ab429752e7c267]);
        }

        jint DerivativeStructure::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
        }

        jdouble DerivativeStructure::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_7f744e43a2f098aa], a0.this$);
        }

        DerivativeStructure DerivativeStructure::getPi() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_ce114c5dd035d753]));
        }

        jdouble DerivativeStructure::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
        }

        jdouble DerivativeStructure::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_9981f74b2d109da6]);
        }

        jint DerivativeStructure::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        DerivativeStructure DerivativeStructure::hypot(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_hypot_f842b4bbbc82e44f], a0.this$));
        }

        DerivativeStructure DerivativeStructure::hypot(const DerivativeStructure & a0, const DerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_hypot_9cc215aa9cda8821], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::integrate(jint a0, jint a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_integrate_0db5f42b010a612d], a0, a1));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const JArray< jdouble > & a0, const JArray< DerivativeStructure > & a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_94d0b414bb2993c4], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const JArray< DerivativeStructure > & a0, const JArray< DerivativeStructure > & a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_7de22af51d01a7eb], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const DerivativeStructure & a0, const DerivativeStructure & a1, const DerivativeStructure & a2, const DerivativeStructure & a3) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_7e9f4feed7ecaf7a], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(jdouble a0, const DerivativeStructure & a1, jdouble a2, const DerivativeStructure & a3) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_5f37cf8ec468a054], a0, a1.this$, a2, a3.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const DerivativeStructure & a0, const DerivativeStructure & a1, const DerivativeStructure & a2, const DerivativeStructure & a3, const DerivativeStructure & a4, const DerivativeStructure & a5) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_ed00b5b290807096], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(jdouble a0, const DerivativeStructure & a1, jdouble a2, const DerivativeStructure & a3, jdouble a4, const DerivativeStructure & a5) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_a243a9e89d5611f3], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const DerivativeStructure & a0, const DerivativeStructure & a1, const DerivativeStructure & a2, const DerivativeStructure & a3, const DerivativeStructure & a4, const DerivativeStructure & a5, const DerivativeStructure & a6, const DerivativeStructure & a7) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_ae3d88c6d75db937], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(jdouble a0, const DerivativeStructure & a1, jdouble a2, const DerivativeStructure & a3, jdouble a4, const DerivativeStructure & a5, jdouble a6, const DerivativeStructure & a7) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_44dc6d143cd1cf30], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        DerivativeStructure DerivativeStructure::log() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_log_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::log10() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_log10_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::log1p() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_log1p_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::multiply(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_f842b4bbbc82e44f], a0.this$));
        }

        DerivativeStructure DerivativeStructure::multiply(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_f7de6915022fec9a], a0));
        }

        DerivativeStructure DerivativeStructure::multiply(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_d2b8014a1c7d22f6], a0));
        }

        DerivativeStructure DerivativeStructure::negate() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_negate_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::newInstance(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_newInstance_f7de6915022fec9a], a0));
        }

        DerivativeStructure DerivativeStructure::pow(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_f842b4bbbc82e44f], a0.this$));
        }

        DerivativeStructure DerivativeStructure::pow(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_f7de6915022fec9a], a0));
        }

        DerivativeStructure DerivativeStructure::pow(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_d2b8014a1c7d22f6], a0));
        }

        DerivativeStructure DerivativeStructure::pow(jdouble a0, const DerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_pow_ab49f8b6840e123c], a0, a1.this$));
        }

        DerivativeStructure DerivativeStructure::rebase(const JArray< DerivativeStructure > & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_rebase_bdcda54333f10bef], a0.this$));
        }

        DerivativeStructure DerivativeStructure::reciprocal() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_reciprocal_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::remainder(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_f842b4bbbc82e44f], a0.this$));
        }

        DerivativeStructure DerivativeStructure::remainder(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_f7de6915022fec9a], a0));
        }

        DerivativeStructure DerivativeStructure::rint() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_rint_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::rootN(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_rootN_d2b8014a1c7d22f6], a0));
        }

        DerivativeStructure DerivativeStructure::scalb(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_scalb_d2b8014a1c7d22f6], a0));
        }

        DerivativeStructure DerivativeStructure::sign() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sign_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::sin() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sin_ce114c5dd035d753]));
        }

        ::org::hipparchus::util::FieldSinCos DerivativeStructure::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
        }

        DerivativeStructure DerivativeStructure::sinh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sinh_ce114c5dd035d753]));
        }

        ::org::hipparchus::util::FieldSinhCosh DerivativeStructure::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
        }

        DerivativeStructure DerivativeStructure::sqrt() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sqrt_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::subtract(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_f842b4bbbc82e44f], a0.this$));
        }

        DerivativeStructure DerivativeStructure::subtract(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_f7de6915022fec9a], a0));
        }

        DerivativeStructure DerivativeStructure::tan() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_tan_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::tanh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_tanh_ce114c5dd035d753]));
        }

        jdouble DerivativeStructure::taylor(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_a40ce4fdf6559ac0], a0.this$);
        }

        DerivativeStructure DerivativeStructure::toDegrees() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDegrees_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::toRadians() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toRadians_ce114c5dd035d753]));
        }

        DerivativeStructure DerivativeStructure::ulp() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_ulp_ce114c5dd035d753]));
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
        static PyObject *t_DerivativeStructure_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeStructure_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeStructure_abs(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_acos(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_acosh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_add(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_asin(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_asinh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_atan(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_atan2(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_atan2_(PyTypeObject *type, PyObject *args);
        static PyObject *t_DerivativeStructure_atanh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_cbrt(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_ceil(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_compose(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_copySign(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_cos(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_cosh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_differentiate(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_divide(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_equals(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_exp(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_expm1(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_floor(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getAllDerivatives(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getExponent(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getFactory(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getField(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getFreeParameters(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getOrder(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getPartialDerivative(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_getPi(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getReal(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getValue(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_hashCode(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_hypot(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_hypot_(PyTypeObject *type, PyObject *args);
        static PyObject *t_DerivativeStructure_integrate(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_linearCombination(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_log(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_log10(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_log1p(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_multiply(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_negate(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_newInstance(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_pow(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_DerivativeStructure_rebase(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_reciprocal(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_remainder(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_rint(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_rootN(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_scalb(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_sign(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sin(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sinCos(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sinh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sinhCosh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sqrt(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_subtract(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_tan(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_tanh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_taylor(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_toDegrees(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_toRadians(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_ulp(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_get__allDerivatives(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__exponent(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__factory(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__field(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__freeParameters(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__order(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__pi(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__real(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__value(t_DerivativeStructure *self, void *data);
        static PyGetSetDef t_DerivativeStructure__fields_[] = {
          DECLARE_GET_FIELD(t_DerivativeStructure, allDerivatives),
          DECLARE_GET_FIELD(t_DerivativeStructure, exponent),
          DECLARE_GET_FIELD(t_DerivativeStructure, factory),
          DECLARE_GET_FIELD(t_DerivativeStructure, field),
          DECLARE_GET_FIELD(t_DerivativeStructure, freeParameters),
          DECLARE_GET_FIELD(t_DerivativeStructure, order),
          DECLARE_GET_FIELD(t_DerivativeStructure, pi),
          DECLARE_GET_FIELD(t_DerivativeStructure, real),
          DECLARE_GET_FIELD(t_DerivativeStructure, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DerivativeStructure__methods_[] = {
          DECLARE_METHOD(t_DerivativeStructure, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, abs, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, acos, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, acosh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, add, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, asin, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, asinh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, atan, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, atan2, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, atan2_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, atanh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, ceil, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, compose, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, copySign, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, cos, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, cosh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, differentiate, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, divide, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, equals, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, exp, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, expm1, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, floor, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getAllDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getFactory, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getField, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, getPi, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getReal, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getValue, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, hypot, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, hypot_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, integrate, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, log, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, log10, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, log1p, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, multiply, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, negate, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, newInstance, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, pow, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, rebase, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, remainder, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, rint, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, rootN, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, scalb, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, sign, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sin, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sinh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, subtract, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, tan, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, tanh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, taylor, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, ulp, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DerivativeStructure)[] = {
          { Py_tp_methods, t_DerivativeStructure__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DerivativeStructure__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DerivativeStructure)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DerivativeStructure, t_DerivativeStructure, DerivativeStructure);

        void t_DerivativeStructure::install(PyObject *module)
        {
          installType(&PY_TYPE(DerivativeStructure), &PY_TYPE_DEF(DerivativeStructure), module, "DerivativeStructure", 0);
        }

        void t_DerivativeStructure::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeStructure), "class_", make_descriptor(DerivativeStructure::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeStructure), "wrapfn_", make_descriptor(t_DerivativeStructure::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeStructure), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DerivativeStructure_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DerivativeStructure::initializeClass, 1)))
            return NULL;
          return t_DerivativeStructure::wrap_Object(DerivativeStructure(((t_DerivativeStructure *) arg)->object.this$));
        }
        static PyObject *t_DerivativeStructure_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DerivativeStructure::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DerivativeStructure_abs(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_acos(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_acosh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_add(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_asin(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_asinh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_atan(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_atan2(t_DerivativeStructure *self, PyObject *arg)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "k", DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_atan2_(PyTypeObject *type, PyObject *args)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure a1((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "kk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DerivativeStructure::atan2(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "atan2_", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_atanh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_cbrt(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_ceil(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_compose(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_copySign(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_cos(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_cosh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_differentiate(t_DerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.differentiate(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_divide(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_equals(t_DerivativeStructure *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(DerivativeStructure), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_DerivativeStructure_exp(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_expm1(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_floor(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_getAllDerivatives(t_DerivativeStructure *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllDerivatives());
          return result.wrap();
        }

        static PyObject *t_DerivativeStructure_getExponent(t_DerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DerivativeStructure_getFactory(t_DerivativeStructure *self)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory result((jobject) NULL);
          OBJ_CALL(result = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_getField(t_DerivativeStructure *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DerivativeStructure_getFreeParameters(t_DerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DerivativeStructure_getOrder(t_DerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DerivativeStructure_getPartialDerivative(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_getPi(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_getReal(t_DerivativeStructure *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DerivativeStructure_getValue(t_DerivativeStructure *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DerivativeStructure_hashCode(t_DerivativeStructure *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DerivativeStructure), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_DerivativeStructure_hypot(t_DerivativeStructure *self, PyObject *arg)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "k", DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_hypot_(PyTypeObject *type, PyObject *args)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure a1((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "kk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DerivativeStructure::hypot(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "hypot_", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_integrate(t_DerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_linearCombination(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< DerivativeStructure > a1((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D[k", DerivativeStructure::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              JArray< DerivativeStructure > a0((jobject) NULL);
              JArray< DerivativeStructure > a1((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[k[k", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure a1((jobject) NULL);
              DerivativeStructure a2((jobject) NULL);
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "kkkk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure a1((jobject) NULL);
              jdouble a2;
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DkDk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure a1((jobject) NULL);
              DerivativeStructure a2((jobject) NULL);
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure a4((jobject) NULL);
              DerivativeStructure a5((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "kkkkkk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure a1((jobject) NULL);
              jdouble a2;
              DerivativeStructure a3((jobject) NULL);
              jdouble a4;
              DerivativeStructure a5((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DkDkDk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure a1((jobject) NULL);
              DerivativeStructure a2((jobject) NULL);
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure a4((jobject) NULL);
              DerivativeStructure a5((jobject) NULL);
              DerivativeStructure a6((jobject) NULL);
              DerivativeStructure a7((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure a1((jobject) NULL);
              jdouble a2;
              DerivativeStructure a3((jobject) NULL);
              jdouble a4;
              DerivativeStructure a5((jobject) NULL);
              jdouble a6;
              DerivativeStructure a7((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DkDkDkDk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_log(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_log10(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_log1p(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_multiply(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jint a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_negate(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_newInstance(t_DerivativeStructure *self, PyObject *arg)
        {
          jdouble a0;
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_pow(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jint a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          DerivativeStructure a1((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "Dk", DerivativeStructure::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DerivativeStructure::pow(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_rebase(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< DerivativeStructure > a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[k", DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.rebase(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rebase", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_reciprocal(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_remainder(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_rint(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_rootN(t_DerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_scalb(t_DerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_sign(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_sin(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_sinCos(t_DerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DerivativeStructure_sinh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_sinhCosh(t_DerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DerivativeStructure_sqrt(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_subtract(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_tan(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_tanh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_taylor(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_toDegrees(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_toRadians(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_ulp(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_get__allDerivatives(t_DerivativeStructure *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllDerivatives());
          return value.wrap();
        }

        static PyObject *t_DerivativeStructure_get__exponent(t_DerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DerivativeStructure_get__factory(t_DerivativeStructure *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory value((jobject) NULL);
          OBJ_CALL(value = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory::wrap_Object(value);
        }

        static PyObject *t_DerivativeStructure_get__field(t_DerivativeStructure *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_DerivativeStructure_get__freeParameters(t_DerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DerivativeStructure_get__order(t_DerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DerivativeStructure_get__pi(t_DerivativeStructure *self, void *data)
        {
          DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_DerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_DerivativeStructure_get__real(t_DerivativeStructure *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DerivativeStructure_get__value(t_DerivativeStructure *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/MatrixUtils.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/AnyMatrix.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *MatrixUtils::class$ = NULL;
      jmethodID *MatrixUtils::mids$ = NULL;
      bool MatrixUtils::live$ = false;
      ::org::hipparchus::linear::RealMatrixFormat *MatrixUtils::DEFAULT_FORMAT = NULL;
      ::org::hipparchus::linear::RealMatrixFormat *MatrixUtils::OCTAVE_FORMAT = NULL;

      jclass MatrixUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/MatrixUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_bigFractionMatrixToRealMatrix_0198255710dd47cf] = env->getStaticMethodID(cls, "bigFractionMatrixToRealMatrix", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_blockInverse_5be1e91f90c02733] = env->getStaticMethodID(cls, "blockInverse", "(Lorg/hipparchus/linear/RealMatrix;I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_checkAdditionCompatible_c038c678ab81af20] = env->getStaticMethodID(cls, "checkAdditionCompatible", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkColumnIndex_9a060da375a54065] = env->getStaticMethodID(cls, "checkColumnIndex", "(Lorg/hipparchus/linear/AnyMatrix;I)V");
          mids$[mid_checkMatrixIndex_e220f16689da2d63] = env->getStaticMethodID(cls, "checkMatrixIndex", "(Lorg/hipparchus/linear/AnyMatrix;II)V");
          mids$[mid_checkMultiplicationCompatible_c038c678ab81af20] = env->getStaticMethodID(cls, "checkMultiplicationCompatible", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkRowIndex_9a060da375a54065] = env->getStaticMethodID(cls, "checkRowIndex", "(Lorg/hipparchus/linear/AnyMatrix;I)V");
          mids$[mid_checkSameColumnDimension_c038c678ab81af20] = env->getStaticMethodID(cls, "checkSameColumnDimension", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkSameRowDimension_c038c678ab81af20] = env->getStaticMethodID(cls, "checkSameRowDimension", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkSubMatrixIndex_8b80f4a8c6449c57] = env->getStaticMethodID(cls, "checkSubMatrixIndex", "(Lorg/hipparchus/linear/AnyMatrix;[I[I)V");
          mids$[mid_checkSubMatrixIndex_beed35c748136651] = env->getStaticMethodID(cls, "checkSubMatrixIndex", "(Lorg/hipparchus/linear/AnyMatrix;IIII)V");
          mids$[mid_checkSubtractionCompatible_c038c678ab81af20] = env->getStaticMethodID(cls, "checkSubtractionCompatible", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkSymmetric_dc02fdb8767f32bc] = env->getStaticMethodID(cls, "checkSymmetric", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_createColumnFieldMatrix_64fa671a7ba67ac5] = env->getStaticMethodID(cls, "createColumnFieldMatrix", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createColumnRealMatrix_56698d8a4cf94853] = env->getStaticMethodID(cls, "createColumnRealMatrix", "([D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createFieldDiagonalMatrix_64fa671a7ba67ac5] = env->getStaticMethodID(cls, "createFieldDiagonalMatrix", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldIdentityMatrix_c30746093e08f180] = env->getStaticMethodID(cls, "createFieldIdentityMatrix", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldMatrix_456dfd25125e1f35] = env->getStaticMethodID(cls, "createFieldMatrix", "([[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldMatrix_a35311a1197c0aa9] = env->getStaticMethodID(cls, "createFieldMatrix", "(Lorg/hipparchus/Field;II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldVector_698743fdd99034ca] = env->getStaticMethodID(cls, "createFieldVector", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_createFieldVector_abd9199395c78967] = env->getStaticMethodID(cls, "createFieldVector", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_createRealDiagonalMatrix_56698d8a4cf94853] = env->getStaticMethodID(cls, "createRealDiagonalMatrix", "([D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealIdentityMatrix_ef7bea65e8e6eaaa] = env->getStaticMethodID(cls, "createRealIdentityMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealMatrix_a50478fa84afaa43] = env->getStaticMethodID(cls, "createRealMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealMatrix_afc0d8087db42fe7] = env->getStaticMethodID(cls, "createRealMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealVector_16e45efbf7373c57] = env->getStaticMethodID(cls, "createRealVector", "([D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_createRealVector_2ea477ed14744e74] = env->getStaticMethodID(cls, "createRealVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_createRowFieldMatrix_64fa671a7ba67ac5] = env->getStaticMethodID(cls, "createRowFieldMatrix", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createRowRealMatrix_56698d8a4cf94853] = env->getStaticMethodID(cls, "createRowRealMatrix", "([D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_fractionMatrixToRealMatrix_0198255710dd47cf] = env->getStaticMethodID(cls, "fractionMatrixToRealMatrix", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_inverse_5a8a8185eb309db7] = env->getStaticMethodID(cls, "inverse", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_inverse_c42beb313d38e65e] = env->getStaticMethodID(cls, "inverse", "(Lorg/hipparchus/linear/RealMatrix;D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_isSymmetric_2756f4cab824fd0d] = env->getStaticMethodID(cls, "isSymmetric", "(Lorg/hipparchus/linear/RealMatrix;D)Z");
          mids$[mid_matrixExponential_5a8a8185eb309db7] = env->getStaticMethodID(cls, "matrixExponential", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_orthonormalize_df1c03670bd0a153] = env->getStaticMethodID(cls, "orthonormalize", "(Ljava/util/List;DLorg/hipparchus/linear/DependentVectorsHandler;)Ljava/util/List;");
          mids$[mid_orthonormalize_1f75b8f86fc5fa42] = env->getStaticMethodID(cls, "orthonormalize", "(Lorg/hipparchus/Field;Ljava/util/List;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/DependentVectorsHandler;)Ljava/util/List;");
          mids$[mid_solveLowerTriangularSystem_fcc025557f2f637a] = env->getStaticMethodID(cls, "solveLowerTriangularSystem", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_solveUpperTriangularSystem_fcc025557f2f637a] = env->getStaticMethodID(cls, "solveUpperTriangularSystem", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_FORMAT = new ::org::hipparchus::linear::RealMatrixFormat(env->getStaticObjectField(cls, "DEFAULT_FORMAT", "Lorg/hipparchus/linear/RealMatrixFormat;"));
          OCTAVE_FORMAT = new ::org::hipparchus::linear::RealMatrixFormat(env->getStaticObjectField(cls, "OCTAVE_FORMAT", "Lorg/hipparchus/linear/RealMatrixFormat;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::Array2DRowRealMatrix MatrixUtils::bigFractionMatrixToRealMatrix(const ::org::hipparchus::linear::FieldMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callStaticObjectMethod(cls, mids$[mid_bigFractionMatrixToRealMatrix_0198255710dd47cf], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::blockInverse(const ::org::hipparchus::linear::RealMatrix & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_blockInverse_5be1e91f90c02733], a0.this$, a1));
      }

      void MatrixUtils::checkAdditionCompatible(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkAdditionCompatible_c038c678ab81af20], a0.this$, a1.this$);
      }

      void MatrixUtils::checkColumnIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkColumnIndex_9a060da375a54065], a0.this$, a1);
      }

      void MatrixUtils::checkMatrixIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkMatrixIndex_e220f16689da2d63], a0.this$, a1, a2);
      }

      void MatrixUtils::checkMultiplicationCompatible(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkMultiplicationCompatible_c038c678ab81af20], a0.this$, a1.this$);
      }

      void MatrixUtils::checkRowIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRowIndex_9a060da375a54065], a0.this$, a1);
      }

      void MatrixUtils::checkSameColumnDimension(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSameColumnDimension_c038c678ab81af20], a0.this$, a1.this$);
      }

      void MatrixUtils::checkSameRowDimension(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSameRowDimension_c038c678ab81af20], a0.this$, a1.this$);
      }

      void MatrixUtils::checkSubMatrixIndex(const ::org::hipparchus::linear::AnyMatrix & a0, const JArray< jint > & a1, const JArray< jint > & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSubMatrixIndex_8b80f4a8c6449c57], a0.this$, a1.this$, a2.this$);
      }

      void MatrixUtils::checkSubMatrixIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1, jint a2, jint a3, jint a4)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSubMatrixIndex_beed35c748136651], a0.this$, a1, a2, a3, a4);
      }

      void MatrixUtils::checkSubtractionCompatible(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSubtractionCompatible_c038c678ab81af20], a0.this$, a1.this$);
      }

      void MatrixUtils::checkSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSymmetric_dc02fdb8767f32bc], a0.this$, a1);
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createColumnFieldMatrix(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createColumnFieldMatrix_64fa671a7ba67ac5], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createColumnRealMatrix(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createColumnRealMatrix_56698d8a4cf94853], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldDiagonalMatrix(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldDiagonalMatrix_64fa671a7ba67ac5], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldIdentityMatrix(const ::org::hipparchus::Field & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldIdentityMatrix_c30746093e08f180], a0.this$, a1));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldMatrix_456dfd25125e1f35], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldMatrix_a35311a1197c0aa9], a0.this$, a1, a2));
      }

      ::org::hipparchus::linear::FieldVector MatrixUtils::createFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldVector(env->callStaticObjectMethod(cls, mids$[mid_createFieldVector_698743fdd99034ca], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector MatrixUtils::createFieldVector(const ::org::hipparchus::Field & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldVector(env->callStaticObjectMethod(cls, mids$[mid_createFieldVector_abd9199395c78967], a0.this$, a1));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealDiagonalMatrix(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealDiagonalMatrix_56698d8a4cf94853], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealIdentityMatrix(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealIdentityMatrix_ef7bea65e8e6eaaa], a0));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealMatrix(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealMatrix_a50478fa84afaa43], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealMatrix(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealMatrix_afc0d8087db42fe7], a0, a1));
      }

      ::org::hipparchus::linear::RealVector MatrixUtils::createRealVector(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_createRealVector_16e45efbf7373c57], a0.this$));
      }

      ::org::hipparchus::linear::RealVector MatrixUtils::createRealVector(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_createRealVector_2ea477ed14744e74], a0));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createRowFieldMatrix(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRowFieldMatrix_64fa671a7ba67ac5], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRowRealMatrix(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRowRealMatrix_56698d8a4cf94853], a0.this$));
      }

      ::org::hipparchus::linear::Array2DRowRealMatrix MatrixUtils::fractionMatrixToRealMatrix(const ::org::hipparchus::linear::FieldMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callStaticObjectMethod(cls, mids$[mid_fractionMatrixToRealMatrix_0198255710dd47cf], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::inverse(const ::org::hipparchus::linear::RealMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_inverse_5a8a8185eb309db7], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::inverse(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_inverse_c42beb313d38e65e], a0.this$, a1));
      }

      jboolean MatrixUtils::isSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isSymmetric_2756f4cab824fd0d], a0.this$, a1);
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::matrixExponential(const ::org::hipparchus::linear::RealMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_matrixExponential_5a8a8185eb309db7], a0.this$));
      }

      ::java::util::List MatrixUtils::orthonormalize(const ::java::util::List & a0, jdouble a1, const ::org::hipparchus::linear::DependentVectorsHandler & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_orthonormalize_df1c03670bd0a153], a0.this$, a1, a2.this$));
      }

      ::java::util::List MatrixUtils::orthonormalize(const ::org::hipparchus::Field & a0, const ::java::util::List & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::linear::DependentVectorsHandler & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_orthonormalize_1f75b8f86fc5fa42], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      void MatrixUtils::solveLowerTriangularSystem(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealVector & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_solveLowerTriangularSystem_fcc025557f2f637a], a0.this$, a1.this$);
      }

      void MatrixUtils::solveUpperTriangularSystem(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealVector & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_solveUpperTriangularSystem_fcc025557f2f637a], a0.this$, a1.this$);
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
      static PyObject *t_MatrixUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_bigFractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_blockInverse(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkAdditionCompatible(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkColumnIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkMatrixIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkMultiplicationCompatible(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkRowIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSameColumnDimension(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSameRowDimension(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSubMatrixIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSubtractionCompatible(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSymmetric(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createColumnFieldMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createColumnRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createFieldDiagonalMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createFieldIdentityMatrix(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createFieldMatrix(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createFieldVector(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createRealDiagonalMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createRealIdentityMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createRealMatrix(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createRealVector(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createRowFieldMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createRowRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_fractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_inverse(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_isSymmetric(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_matrixExponential(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_orthonormalize(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_solveLowerTriangularSystem(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_solveUpperTriangularSystem(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_MatrixUtils__methods_[] = {
        DECLARE_METHOD(t_MatrixUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, bigFractionMatrixToRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, blockInverse, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkAdditionCompatible, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkColumnIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkMatrixIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkMultiplicationCompatible, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkRowIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSameColumnDimension, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSameRowDimension, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSubMatrixIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSubtractionCompatible, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSymmetric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createColumnFieldMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createColumnRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldDiagonalMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldIdentityMatrix, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldMatrix, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldVector, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealDiagonalMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealIdentityMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealMatrix, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealVector, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRowFieldMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRowRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, fractionMatrixToRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, inverse, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, isSymmetric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, matrixExponential, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, orthonormalize, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, solveLowerTriangularSystem, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, solveUpperTriangularSystem, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MatrixUtils)[] = {
        { Py_tp_methods, t_MatrixUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MatrixUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MatrixUtils, t_MatrixUtils, MatrixUtils);

      void t_MatrixUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(MatrixUtils), &PY_TYPE_DEF(MatrixUtils), module, "MatrixUtils", 0);
      }

      void t_MatrixUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "class_", make_descriptor(MatrixUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "wrapfn_", make_descriptor(t_MatrixUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(MatrixUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "DEFAULT_FORMAT", make_descriptor(::org::hipparchus::linear::t_RealMatrixFormat::wrap_Object(*MatrixUtils::DEFAULT_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "OCTAVE_FORMAT", make_descriptor(::org::hipparchus::linear::t_RealMatrixFormat::wrap_Object(*MatrixUtils::OCTAVE_FORMAT)));
      }

      static PyObject *t_MatrixUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MatrixUtils::initializeClass, 1)))
          return NULL;
        return t_MatrixUtils::wrap_Object(MatrixUtils(((t_MatrixUtils *) arg)->object.this$));
      }
      static PyObject *t_MatrixUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MatrixUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MatrixUtils_bigFractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::bigFractionMatrixToRealMatrix(a0));
          return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "bigFractionMatrixToRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_blockInverse(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::blockInverse(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "blockInverse", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkAdditionCompatible(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkAdditionCompatible(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkAdditionCompatible", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkColumnIndex(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        jint a1;

        if (!parseArgs(args, "kI", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkColumnIndex(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkColumnIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkMatrixIndex(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "kII", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkMatrixIndex(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkMatrixIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkMultiplicationCompatible(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkMultiplicationCompatible(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkMultiplicationCompatible", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkRowIndex(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        jint a1;

        if (!parseArgs(args, "kI", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkRowIndex(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkRowIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSameColumnDimension(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSameColumnDimension(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSameColumnDimension", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSameRowDimension(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSameRowDimension(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSameRowDimension", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSubMatrixIndex(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);

            if (!parseArgs(args, "k[I[I", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSubMatrixIndex(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSubMatrixIndex(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkSubMatrixIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSubtractionCompatible(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSubtractionCompatible(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSubtractionCompatible", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSymmetric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSymmetric(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSymmetric", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createColumnFieldMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createColumnFieldMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createColumnFieldMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createColumnRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createColumnRealMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createColumnRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldDiagonalMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldDiagonalMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFieldDiagonalMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldIdentityMatrix(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldIdentityMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFieldIdentityMatrix", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldMatrix(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldMatrix(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldMatrix(a0, a1, a2));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createFieldMatrix", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldVector(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldVector(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldVector(a0, a1));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createFieldVector", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealDiagonalMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealDiagonalMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRealDiagonalMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealIdentityMatrix(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealIdentityMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRealIdentityMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealMatrix(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "[[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealMatrix(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealMatrix(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createRealMatrix", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealVector(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealVector(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealVector(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createRealVector", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRowFieldMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRowFieldMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRowFieldMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRowRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRowRealMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRowRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_fractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::fractionMatrixToRealMatrix(a0));
          return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fractionMatrixToRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_inverse(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::inverse(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::inverse(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "inverse", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_isSymmetric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::isSymmetric(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "isSymmetric", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_matrixExponential(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::matrixExponential(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "matrixExponential", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_orthonormalize(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::linear::DependentVectorsHandler a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KDK", ::java::util::List::initializeClass, ::org::hipparchus::linear::DependentVectorsHandler::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::org::hipparchus::linear::t_DependentVectorsHandler::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::orthonormalize(a0, a1, a2));
              return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector));
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::linear::DependentVectorsHandler a3((jobject) NULL);
            PyTypeObject **p3;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::hipparchus::Field::initializeClass, ::java::util::List::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::linear::DependentVectorsHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::linear::t_DependentVectorsHandler::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::orthonormalize(a0, a1, a2, a3));
              return ::java::util::t_List::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "orthonormalize", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_solveLowerTriangularSystem(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::solveLowerTriangularSystem(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "solveLowerTriangularSystem", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_solveUpperTriangularSystem(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::solveUpperTriangularSystem(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "solveUpperTriangularSystem", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/DataType.h"
#include "org/orekit/gnss/metric/parser/DataType.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "java/lang/Long.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *DataType::class$ = NULL;
          jmethodID *DataType::mids$ = NULL;
          bool DataType::live$ = false;
          DataType *DataType::BIT_1 = NULL;
          DataType *DataType::BIT_10 = NULL;
          DataType *DataType::BIT_12 = NULL;
          DataType *DataType::BIT_2 = NULL;
          DataType *DataType::BIT_24 = NULL;
          DataType *DataType::BIT_3 = NULL;
          DataType *DataType::BIT_32 = NULL;
          DataType *DataType::BIT_4 = NULL;
          DataType *DataType::BIT_6 = NULL;
          DataType *DataType::BIT_7 = NULL;
          DataType *DataType::BIT_8 = NULL;
          DataType *DataType::INT_10 = NULL;
          DataType *DataType::INT_11 = NULL;
          DataType *DataType::INT_14 = NULL;
          DataType *DataType::INT_15 = NULL;
          DataType *DataType::INT_16 = NULL;
          DataType *DataType::INT_17 = NULL;
          DataType *DataType::INT_18 = NULL;
          DataType *DataType::INT_19 = NULL;
          DataType *DataType::INT_20 = NULL;
          DataType *DataType::INT_21 = NULL;
          DataType *DataType::INT_22 = NULL;
          DataType *DataType::INT_23 = NULL;
          DataType *DataType::INT_24 = NULL;
          DataType *DataType::INT_25 = NULL;
          DataType *DataType::INT_26 = NULL;
          DataType *DataType::INT_27 = NULL;
          DataType *DataType::INT_30 = NULL;
          DataType *DataType::INT_31 = NULL;
          DataType *DataType::INT_32 = NULL;
          DataType *DataType::INT_34 = NULL;
          DataType *DataType::INT_35 = NULL;
          DataType *DataType::INT_38 = NULL;
          DataType *DataType::INT_6 = NULL;
          DataType *DataType::INT_8 = NULL;
          DataType *DataType::INT_9 = NULL;
          DataType *DataType::INT_S_11 = NULL;
          DataType *DataType::INT_S_22 = NULL;
          DataType *DataType::INT_S_24 = NULL;
          DataType *DataType::INT_S_27 = NULL;
          DataType *DataType::INT_S_32 = NULL;
          DataType *DataType::INT_S_5 = NULL;
          DataType *DataType::U_INT_10 = NULL;
          DataType *DataType::U_INT_11 = NULL;
          DataType *DataType::U_INT_12 = NULL;
          DataType *DataType::U_INT_13 = NULL;
          DataType *DataType::U_INT_14 = NULL;
          DataType *DataType::U_INT_16 = NULL;
          DataType *DataType::U_INT_17 = NULL;
          DataType *DataType::U_INT_18 = NULL;
          DataType *DataType::U_INT_2 = NULL;
          DataType *DataType::U_INT_20 = NULL;
          DataType *DataType::U_INT_23 = NULL;
          DataType *DataType::U_INT_24 = NULL;
          DataType *DataType::U_INT_25 = NULL;
          DataType *DataType::U_INT_26 = NULL;
          DataType *DataType::U_INT_27 = NULL;
          DataType *DataType::U_INT_3 = NULL;
          DataType *DataType::U_INT_30 = NULL;
          DataType *DataType::U_INT_32 = NULL;
          DataType *DataType::U_INT_35 = NULL;
          DataType *DataType::U_INT_36 = NULL;
          DataType *DataType::U_INT_4 = NULL;
          DataType *DataType::U_INT_5 = NULL;
          DataType *DataType::U_INT_6 = NULL;
          DataType *DataType::U_INT_7 = NULL;
          DataType *DataType::U_INT_8 = NULL;
          DataType *DataType::U_INT_9 = NULL;

          jclass DataType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/DataType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_decode_1aa9dd1e4ef87d76] = env->getMethodID(cls, "decode", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/Long;");
              mids$[mid_valueOf_a7999be25191ed4a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/DataType;");
              mids$[mid_values_35f513c8612c1f1d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/DataType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BIT_1 = new DataType(env->getStaticObjectField(cls, "BIT_1", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_10 = new DataType(env->getStaticObjectField(cls, "BIT_10", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_12 = new DataType(env->getStaticObjectField(cls, "BIT_12", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_2 = new DataType(env->getStaticObjectField(cls, "BIT_2", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_24 = new DataType(env->getStaticObjectField(cls, "BIT_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_3 = new DataType(env->getStaticObjectField(cls, "BIT_3", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_32 = new DataType(env->getStaticObjectField(cls, "BIT_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_4 = new DataType(env->getStaticObjectField(cls, "BIT_4", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_6 = new DataType(env->getStaticObjectField(cls, "BIT_6", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_7 = new DataType(env->getStaticObjectField(cls, "BIT_7", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_8 = new DataType(env->getStaticObjectField(cls, "BIT_8", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_10 = new DataType(env->getStaticObjectField(cls, "INT_10", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_11 = new DataType(env->getStaticObjectField(cls, "INT_11", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_14 = new DataType(env->getStaticObjectField(cls, "INT_14", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_15 = new DataType(env->getStaticObjectField(cls, "INT_15", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_16 = new DataType(env->getStaticObjectField(cls, "INT_16", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_17 = new DataType(env->getStaticObjectField(cls, "INT_17", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_18 = new DataType(env->getStaticObjectField(cls, "INT_18", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_19 = new DataType(env->getStaticObjectField(cls, "INT_19", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_20 = new DataType(env->getStaticObjectField(cls, "INT_20", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_21 = new DataType(env->getStaticObjectField(cls, "INT_21", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_22 = new DataType(env->getStaticObjectField(cls, "INT_22", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_23 = new DataType(env->getStaticObjectField(cls, "INT_23", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_24 = new DataType(env->getStaticObjectField(cls, "INT_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_25 = new DataType(env->getStaticObjectField(cls, "INT_25", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_26 = new DataType(env->getStaticObjectField(cls, "INT_26", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_27 = new DataType(env->getStaticObjectField(cls, "INT_27", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_30 = new DataType(env->getStaticObjectField(cls, "INT_30", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_31 = new DataType(env->getStaticObjectField(cls, "INT_31", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_32 = new DataType(env->getStaticObjectField(cls, "INT_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_34 = new DataType(env->getStaticObjectField(cls, "INT_34", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_35 = new DataType(env->getStaticObjectField(cls, "INT_35", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_38 = new DataType(env->getStaticObjectField(cls, "INT_38", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_6 = new DataType(env->getStaticObjectField(cls, "INT_6", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_8 = new DataType(env->getStaticObjectField(cls, "INT_8", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_9 = new DataType(env->getStaticObjectField(cls, "INT_9", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_11 = new DataType(env->getStaticObjectField(cls, "INT_S_11", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_22 = new DataType(env->getStaticObjectField(cls, "INT_S_22", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_24 = new DataType(env->getStaticObjectField(cls, "INT_S_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_27 = new DataType(env->getStaticObjectField(cls, "INT_S_27", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_32 = new DataType(env->getStaticObjectField(cls, "INT_S_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_5 = new DataType(env->getStaticObjectField(cls, "INT_S_5", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_10 = new DataType(env->getStaticObjectField(cls, "U_INT_10", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_11 = new DataType(env->getStaticObjectField(cls, "U_INT_11", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_12 = new DataType(env->getStaticObjectField(cls, "U_INT_12", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_13 = new DataType(env->getStaticObjectField(cls, "U_INT_13", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_14 = new DataType(env->getStaticObjectField(cls, "U_INT_14", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_16 = new DataType(env->getStaticObjectField(cls, "U_INT_16", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_17 = new DataType(env->getStaticObjectField(cls, "U_INT_17", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_18 = new DataType(env->getStaticObjectField(cls, "U_INT_18", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_2 = new DataType(env->getStaticObjectField(cls, "U_INT_2", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_20 = new DataType(env->getStaticObjectField(cls, "U_INT_20", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_23 = new DataType(env->getStaticObjectField(cls, "U_INT_23", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_24 = new DataType(env->getStaticObjectField(cls, "U_INT_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_25 = new DataType(env->getStaticObjectField(cls, "U_INT_25", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_26 = new DataType(env->getStaticObjectField(cls, "U_INT_26", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_27 = new DataType(env->getStaticObjectField(cls, "U_INT_27", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_3 = new DataType(env->getStaticObjectField(cls, "U_INT_3", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_30 = new DataType(env->getStaticObjectField(cls, "U_INT_30", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_32 = new DataType(env->getStaticObjectField(cls, "U_INT_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_35 = new DataType(env->getStaticObjectField(cls, "U_INT_35", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_36 = new DataType(env->getStaticObjectField(cls, "U_INT_36", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_4 = new DataType(env->getStaticObjectField(cls, "U_INT_4", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_5 = new DataType(env->getStaticObjectField(cls, "U_INT_5", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_6 = new DataType(env->getStaticObjectField(cls, "U_INT_6", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_7 = new DataType(env->getStaticObjectField(cls, "U_INT_7", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_8 = new DataType(env->getStaticObjectField(cls, "U_INT_8", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_9 = new DataType(env->getStaticObjectField(cls, "U_INT_9", "Lorg/orekit/gnss/metric/parser/DataType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::Long DataType::decode(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return ::java::lang::Long(env->callObjectMethod(this$, mids$[mid_decode_1aa9dd1e4ef87d76], a0.this$));
          }

          DataType DataType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DataType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a7999be25191ed4a], a0.this$));
          }

          JArray< DataType > DataType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< DataType >(env->callStaticObjectMethod(cls, mids$[mid_values_35f513c8612c1f1d]));
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
          static PyObject *t_DataType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataType_of_(t_DataType *self, PyObject *args);
          static PyObject *t_DataType_decode(t_DataType *self, PyObject *arg);
          static PyObject *t_DataType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_DataType_values(PyTypeObject *type);
          static PyObject *t_DataType_get__parameters_(t_DataType *self, void *data);
          static PyGetSetDef t_DataType__fields_[] = {
            DECLARE_GET_FIELD(t_DataType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DataType__methods_[] = {
            DECLARE_METHOD(t_DataType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataType, of_, METH_VARARGS),
            DECLARE_METHOD(t_DataType, decode, METH_O),
            DECLARE_METHOD(t_DataType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DataType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataType)[] = {
            { Py_tp_methods, t_DataType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DataType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(DataType, t_DataType, DataType);
          PyObject *t_DataType::wrap_Object(const DataType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataType *self = (t_DataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DataType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataType *self = (t_DataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DataType::install(PyObject *module)
          {
            installType(&PY_TYPE(DataType), &PY_TYPE_DEF(DataType), module, "DataType", 0);
          }

          void t_DataType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "class_", make_descriptor(DataType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "wrapfn_", make_descriptor(t_DataType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "boxfn_", make_descriptor(boxObject));
            env->getClass(DataType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_1", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_10", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_10)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_12", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_12)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_2", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_24", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_3", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_32", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_4", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_6", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_7", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_7)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_8", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_10", make_descriptor(t_DataType::wrap_Object(*DataType::INT_10)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_11", make_descriptor(t_DataType::wrap_Object(*DataType::INT_11)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_14", make_descriptor(t_DataType::wrap_Object(*DataType::INT_14)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_15", make_descriptor(t_DataType::wrap_Object(*DataType::INT_15)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_16", make_descriptor(t_DataType::wrap_Object(*DataType::INT_16)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_17", make_descriptor(t_DataType::wrap_Object(*DataType::INT_17)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_18", make_descriptor(t_DataType::wrap_Object(*DataType::INT_18)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_19", make_descriptor(t_DataType::wrap_Object(*DataType::INT_19)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_20", make_descriptor(t_DataType::wrap_Object(*DataType::INT_20)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_21", make_descriptor(t_DataType::wrap_Object(*DataType::INT_21)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_22", make_descriptor(t_DataType::wrap_Object(*DataType::INT_22)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_23", make_descriptor(t_DataType::wrap_Object(*DataType::INT_23)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_24", make_descriptor(t_DataType::wrap_Object(*DataType::INT_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_25", make_descriptor(t_DataType::wrap_Object(*DataType::INT_25)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_26", make_descriptor(t_DataType::wrap_Object(*DataType::INT_26)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_27", make_descriptor(t_DataType::wrap_Object(*DataType::INT_27)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_30", make_descriptor(t_DataType::wrap_Object(*DataType::INT_30)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_31", make_descriptor(t_DataType::wrap_Object(*DataType::INT_31)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_32", make_descriptor(t_DataType::wrap_Object(*DataType::INT_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_34", make_descriptor(t_DataType::wrap_Object(*DataType::INT_34)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_35", make_descriptor(t_DataType::wrap_Object(*DataType::INT_35)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_38", make_descriptor(t_DataType::wrap_Object(*DataType::INT_38)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_6", make_descriptor(t_DataType::wrap_Object(*DataType::INT_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_8", make_descriptor(t_DataType::wrap_Object(*DataType::INT_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_9", make_descriptor(t_DataType::wrap_Object(*DataType::INT_9)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_11", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_11)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_22", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_22)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_24", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_27", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_27)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_32", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_5", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_5)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_10", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_10)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_11", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_11)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_12", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_12)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_13", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_13)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_14", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_14)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_16", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_16)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_17", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_17)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_18", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_18)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_2", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_20", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_20)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_23", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_23)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_24", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_25", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_25)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_26", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_26)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_27", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_27)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_3", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_30", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_30)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_32", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_35", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_35)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_36", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_36)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_4", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_5", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_5)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_6", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_7", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_7)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_8", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_9", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_9)));
          }

          static PyObject *t_DataType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataType::initializeClass, 1)))
              return NULL;
            return t_DataType::wrap_Object(DataType(((t_DataType *) arg)->object.this$));
          }
          static PyObject *t_DataType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DataType_of_(t_DataType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_DataType_decode(t_DataType *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            ::java::lang::Long result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.decode(a0));
              return ::java::lang::t_Long::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "decode", arg);
            return NULL;
          }

          static PyObject *t_DataType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            DataType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::DataType::valueOf(a0));
              return t_DataType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_DataType_values(PyTypeObject *type)
          {
            JArray< DataType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::DataType::values());
            return JArray<jobject>(result.this$).wrap(t_DataType::wrap_jobject);
          }
          static PyObject *t_DataType_get__parameters_(t_DataType *self, void *data)
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
#include "org/orekit/propagation/events/FieldApsideDetector.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldApsideDetector::class$ = NULL;
        jmethodID *FieldApsideDetector::mids$ = NULL;
        bool FieldApsideDetector::live$ = false;

        jclass FieldApsideDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldApsideDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3e61171636c74f2c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
            mids$[mid_init$_0e14beb451bcdf4c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_create_7aac3d144944871f] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldApsideDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldApsideDetector::FieldApsideDetector(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3e61171636c74f2c, a0.this$)) {}

        FieldApsideDetector::FieldApsideDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_0e14beb451bcdf4c, a0.this$, a1.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldApsideDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
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
        static PyObject *t_FieldApsideDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldApsideDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldApsideDetector_of_(t_FieldApsideDetector *self, PyObject *args);
        static int t_FieldApsideDetector_init_(t_FieldApsideDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldApsideDetector_g(t_FieldApsideDetector *self, PyObject *args);
        static PyObject *t_FieldApsideDetector_get__parameters_(t_FieldApsideDetector *self, void *data);
        static PyGetSetDef t_FieldApsideDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldApsideDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldApsideDetector__methods_[] = {
          DECLARE_METHOD(t_FieldApsideDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldApsideDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldApsideDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldApsideDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldApsideDetector)[] = {
          { Py_tp_methods, t_FieldApsideDetector__methods_ },
          { Py_tp_init, (void *) t_FieldApsideDetector_init_ },
          { Py_tp_getset, t_FieldApsideDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldApsideDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldApsideDetector, t_FieldApsideDetector, FieldApsideDetector);
        PyObject *t_FieldApsideDetector::wrap_Object(const FieldApsideDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldApsideDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldApsideDetector *self = (t_FieldApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldApsideDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldApsideDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldApsideDetector *self = (t_FieldApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldApsideDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldApsideDetector), &PY_TYPE_DEF(FieldApsideDetector), module, "FieldApsideDetector", 0);
        }

        void t_FieldApsideDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldApsideDetector), "class_", make_descriptor(FieldApsideDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldApsideDetector), "wrapfn_", make_descriptor(t_FieldApsideDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldApsideDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldApsideDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldApsideDetector::initializeClass, 1)))
            return NULL;
          return t_FieldApsideDetector::wrap_Object(FieldApsideDetector(((t_FieldApsideDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldApsideDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldApsideDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldApsideDetector_of_(t_FieldApsideDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldApsideDetector_init_(t_FieldApsideDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              FieldApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                INT_CALL(object = FieldApsideDetector(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
              PyTypeObject **p1;
              FieldApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                INT_CALL(object = FieldApsideDetector(a0, a1));
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

        static PyObject *t_FieldApsideDetector_g(t_FieldApsideDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldApsideDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_FieldApsideDetector_get__parameters_(t_FieldApsideDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TransformProvider::class$ = NULL;
      jmethodID *TransformProvider::mids$ = NULL;
      bool TransformProvider::live$ = false;

      jclass TransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getStaticTransform_6e492420312934f1] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_3b5ee2ab7cc035a5] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_02ca17ac51b6a4b2] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_286745ef54e0a7f6] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::StaticTransform TransformProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_6e492420312934f1], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform TransformProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_3b5ee2ab7cc035a5], a0.this$));
      }

      ::org::orekit::frames::Transform TransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_02ca17ac51b6a4b2], a0.this$));
      }

      ::org::orekit::frames::FieldTransform TransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_286745ef54e0a7f6], a0.this$));
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
      static PyObject *t_TransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProvider_getStaticTransform(t_TransformProvider *self, PyObject *args);
      static PyObject *t_TransformProvider_getTransform(t_TransformProvider *self, PyObject *args);

      static PyMethodDef t_TransformProvider__methods_[] = {
        DECLARE_METHOD(t_TransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_TransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TransformProvider)[] = {
        { Py_tp_methods, t_TransformProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TransformProvider)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(TransformProvider, t_TransformProvider, TransformProvider);

      void t_TransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(TransformProvider), &PY_TYPE_DEF(TransformProvider), module, "TransformProvider", 0);
      }

      void t_TransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProvider), "class_", make_descriptor(TransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProvider), "wrapfn_", make_descriptor(t_TransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TransformProvider::initializeClass, 1)))
          return NULL;
        return t_TransformProvider::wrap_Object(TransformProvider(((t_TransformProvider *) arg)->object.this$));
      }
      static PyObject *t_TransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TransformProvider_getStaticTransform(t_TransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_TransformProvider_getTransform(t_TransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TwoBodiesBaryFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TwoBodiesBaryFrame::class$ = NULL;
      jmethodID *TwoBodiesBaryFrame::mids$ = NULL;
      bool TwoBodiesBaryFrame::live$ = false;

      jclass TwoBodiesBaryFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TwoBodiesBaryFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6a627f83556e9294] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TwoBodiesBaryFrame::TwoBodiesBaryFrame(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_6a627f83556e9294, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_TwoBodiesBaryFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TwoBodiesBaryFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TwoBodiesBaryFrame_init_(t_TwoBodiesBaryFrame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_TwoBodiesBaryFrame__methods_[] = {
        DECLARE_METHOD(t_TwoBodiesBaryFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TwoBodiesBaryFrame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TwoBodiesBaryFrame)[] = {
        { Py_tp_methods, t_TwoBodiesBaryFrame__methods_ },
        { Py_tp_init, (void *) t_TwoBodiesBaryFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TwoBodiesBaryFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(TwoBodiesBaryFrame, t_TwoBodiesBaryFrame, TwoBodiesBaryFrame);

      void t_TwoBodiesBaryFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(TwoBodiesBaryFrame), &PY_TYPE_DEF(TwoBodiesBaryFrame), module, "TwoBodiesBaryFrame", 0);
      }

      void t_TwoBodiesBaryFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TwoBodiesBaryFrame), "class_", make_descriptor(TwoBodiesBaryFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TwoBodiesBaryFrame), "wrapfn_", make_descriptor(t_TwoBodiesBaryFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TwoBodiesBaryFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TwoBodiesBaryFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TwoBodiesBaryFrame::initializeClass, 1)))
          return NULL;
        return t_TwoBodiesBaryFrame::wrap_Object(TwoBodiesBaryFrame(((t_TwoBodiesBaryFrame *) arg)->object.this$));
      }
      static PyObject *t_TwoBodiesBaryFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TwoBodiesBaryFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TwoBodiesBaryFrame_init_(t_TwoBodiesBaryFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        TwoBodiesBaryFrame object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = TwoBodiesBaryFrame(a0, a1));
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
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getAccuracy", "()D");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAccuracyProvider::PythonAccuracyProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonAccuracyProvider::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonAccuracyProvider::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonAccuracyProvider::pythonExtension(jlong a0) const
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAccuracyProvider::mids$[PythonAccuracyProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAccuracyProvider::mids$[PythonAccuracyProvider::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAccuracyProvider::mids$[PythonAccuracyProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
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
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitIllegalStateException::class$ = NULL;
      jmethodID *OrekitIllegalStateException::mids$ = NULL;
      bool OrekitIllegalStateException::live$ = false;

      jclass OrekitIllegalStateException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitIllegalStateException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2436a4119ba97d87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_5969ecf7afac3dba] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_2ab86268ef7a6631] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_667bcd34994d9d31] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitIllegalStateException::OrekitIllegalStateException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::IllegalStateException(env->newObject(initializeClass, &mids$, mid_init$_2436a4119ba97d87, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitIllegalStateException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String OrekitIllegalStateException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String OrekitIllegalStateException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_5969ecf7afac3dba], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitIllegalStateException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_2ab86268ef7a6631]));
      }

      ::org::hipparchus::exception::Localizable OrekitIllegalStateException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_667bcd34994d9d31]));
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
      static PyObject *t_OrekitIllegalStateException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitIllegalStateException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitIllegalStateException_init_(t_OrekitIllegalStateException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitIllegalStateException_getLocalizedMessage(t_OrekitIllegalStateException *self, PyObject *args);
      static PyObject *t_OrekitIllegalStateException_getMessage(t_OrekitIllegalStateException *self, PyObject *args);
      static PyObject *t_OrekitIllegalStateException_getParts(t_OrekitIllegalStateException *self);
      static PyObject *t_OrekitIllegalStateException_getSpecifier(t_OrekitIllegalStateException *self);
      static PyObject *t_OrekitIllegalStateException_get__localizedMessage(t_OrekitIllegalStateException *self, void *data);
      static PyObject *t_OrekitIllegalStateException_get__message(t_OrekitIllegalStateException *self, void *data);
      static PyObject *t_OrekitIllegalStateException_get__parts(t_OrekitIllegalStateException *self, void *data);
      static PyObject *t_OrekitIllegalStateException_get__specifier(t_OrekitIllegalStateException *self, void *data);
      static PyGetSetDef t_OrekitIllegalStateException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, message),
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, parts),
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitIllegalStateException__methods_[] = {
        DECLARE_METHOD(t_OrekitIllegalStateException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalStateException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitIllegalStateException)[] = {
        { Py_tp_methods, t_OrekitIllegalStateException__methods_ },
        { Py_tp_init, (void *) t_OrekitIllegalStateException_init_ },
        { Py_tp_getset, t_OrekitIllegalStateException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitIllegalStateException)[] = {
        &PY_TYPE_DEF(::java::lang::IllegalStateException),
        NULL
      };

      DEFINE_TYPE(OrekitIllegalStateException, t_OrekitIllegalStateException, OrekitIllegalStateException);

      void t_OrekitIllegalStateException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitIllegalStateException), &PY_TYPE_DEF(OrekitIllegalStateException), module, "OrekitIllegalStateException", 0);
      }

      void t_OrekitIllegalStateException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalStateException), "class_", make_descriptor(OrekitIllegalStateException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalStateException), "wrapfn_", make_descriptor(t_OrekitIllegalStateException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalStateException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitIllegalStateException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitIllegalStateException::initializeClass, 1)))
          return NULL;
        return t_OrekitIllegalStateException::wrap_Object(OrekitIllegalStateException(((t_OrekitIllegalStateException *) arg)->object.this$));
      }
      static PyObject *t_OrekitIllegalStateException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitIllegalStateException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitIllegalStateException_init_(t_OrekitIllegalStateException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitIllegalStateException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitIllegalStateException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitIllegalStateException_getLocalizedMessage(t_OrekitIllegalStateException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitIllegalStateException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalStateException_getMessage(t_OrekitIllegalStateException *self, PyObject *args)
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

        return callSuper(PY_TYPE(OrekitIllegalStateException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalStateException_getParts(t_OrekitIllegalStateException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalStateException_getSpecifier(t_OrekitIllegalStateException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitIllegalStateException_get__localizedMessage(t_OrekitIllegalStateException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalStateException_get__message(t_OrekitIllegalStateException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalStateException_get__parts(t_OrekitIllegalStateException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalStateException_get__specifier(t_OrekitIllegalStateException *self, void *data)
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
#include "org/orekit/propagation/PythonPropagator.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonPropagator::class$ = NULL;
      jmethodID *PythonPropagator::mids$ = NULL;
      bool PythonPropagator::live$ = false;

      jclass PythonPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_b928bf8cc239d256] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_addEventDetector_d5d8be0538a03d97] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_d751c1a57012b438] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_9f3d902ece22e1af] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_3bfef5c77ceb081a] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_8fbfa58855031235] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_f81c0644d57ae495] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_ddcdca7ad3c7f5e9] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_1e982279849c3b65] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_propagate_aaae977c62060398] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setEphemerisModeHandler_a99d5b52ca8703a8] = env->getMethodID(cls, "setEphemerisModeHandler", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");
          mids$[mid_setupMatricesComputation_0a26c8b4f543ed52] = env->getMethodID(cls, "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonPropagator::PythonPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonPropagator::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonPropagator_init_(t_PythonPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonPropagator_finalize(t_PythonPropagator *self);
      static PyObject *t_PythonPropagator_pythonExtension(t_PythonPropagator *self, PyObject *args);
      static void JNICALL t_PythonPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_setEphemerisModeHandler18(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonPropagator_setupMatricesComputation19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonPropagator_get__self(t_PythonPropagator *self, void *data);
      static PyGetSetDef t_PythonPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonPropagator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonPropagator)[] = {
        { Py_tp_methods, t_PythonPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonPropagator_init_ },
        { Py_tp_getset, t_PythonPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonPropagator, t_PythonPropagator, PythonPropagator);

      void t_PythonPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonPropagator), &PY_TYPE_DEF(PythonPropagator), module, "PythonPropagator", 1);
      }

      void t_PythonPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagator), "class_", make_descriptor(PythonPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagator), "wrapfn_", make_descriptor(t_PythonPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V", (void *) t_PythonPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;", (void *) t_PythonPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonPropagator_getManagedAdditionalStates9 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;", (void *) t_PythonPropagator_getMultiplexer10 },
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonPropagator_getPVCoordinates11 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonPropagator_isAdditionalStateManaged12 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonPropagator_propagate13 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonPropagator_propagate14 },
          { "pythonDecRef", "()V", (void *) t_PythonPropagator_pythonDecRef15 },
          { "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonPropagator_resetInitialState16 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonPropagator_setAttitudeProvider17 },
          { "setEphemerisModeHandler", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V", (void *) t_PythonPropagator_setEphemerisModeHandler18 },
          { "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;", (void *) t_PythonPropagator_setupMatricesComputation19 },
        };
        env->registerNatives(cls, methods, 20);
      }

      static PyObject *t_PythonPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonPropagator::wrap_Object(PythonPropagator(((t_PythonPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonPropagator_init_(t_PythonPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonPropagator object((jobject) NULL);

        INT_CALL(object = PythonPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonPropagator_finalize(t_PythonPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonPropagator_pythonExtension(t_PythonPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_AdditionalStateProvider::wrap_Object(::org::orekit::propagation::AdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalStateProviders", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getAdditionalStateProviders", result);
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

      static jobject JNICALL t_PythonPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getAttitudeProvider", result);
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

      static jobject JNICALL t_PythonPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::EphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
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

      static jobject JNICALL t_PythonPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("getInitialState", result);
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

      static jobject JNICALL t_PythonPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::String > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getManagedAdditionalStates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[s", &value))
        {
          throwTypeError("getManagedAdditionalStates", result);
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

      static jobject JNICALL t_PythonPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::StepHandlerMultiplexer::initializeClass, &value))
        {
          throwTypeError("getMultiplexer", result);
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

      static jobject JNICALL t_PythonPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static jboolean JNICALL t_PythonPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isAdditionalStateManaged", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isAdditionalStateManaged", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static jobject JNICALL t_PythonPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "setAttitudeProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonPropagator_setEphemerisModeHandler18(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::sampling::t_OrekitStepHandler::wrap_Object(::org::orekit::propagation::sampling::OrekitStepHandler(a0));
        PyObject *result = PyObject_CallMethod(obj, "setEphemerisModeHandler", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonPropagator_setupMatricesComputation19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::MatricesHarvester value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *o1 = ::org::hipparchus::linear::t_RealMatrix::wrap_Object(::org::hipparchus::linear::RealMatrix(a1));
        PyObject *o2 = ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(::org::orekit::utils::DoubleArrayDictionary(a2));
        PyObject *result = PyObject_CallMethod(obj, "setupMatricesComputation", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::MatricesHarvester::initializeClass, &value))
        {
          throwTypeError("setupMatricesComputation", result);
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

      static PyObject *t_PythonPropagator_get__self(t_PythonPropagator *self, void *data)
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
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedMeasurementBase::class$ = NULL;
        jmethodID *EstimatedMeasurementBase::mids$ = NULL;
        bool EstimatedMeasurementBase::live$ = false;

        jclass EstimatedMeasurementBase::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedMeasurementBase");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_047f677485db459a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;II[Lorg/orekit/propagation/SpacecraftState;[Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
            mids$[mid_getCount_d6ab429752e7c267] = env->getMethodID(cls, "getCount", "()I");
            mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEstimatedValue_be783177b060994b] = env->getMethodID(cls, "getEstimatedValue", "()[D");
            mids$[mid_getIteration_d6ab429752e7c267] = env->getMethodID(cls, "getIteration", "()I");
            mids$[mid_getObservedMeasurement_2198162c3cb7b73f] = env->getMethodID(cls, "getObservedMeasurement", "()Lorg/orekit/estimation/measurements/ObservedMeasurement;");
            mids$[mid_getObservedValue_be783177b060994b] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_getParticipants_be2ee2a4bff8d504] = env->getMethodID(cls, "getParticipants", "()[Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getStates_598bcd058df23e79] = env->getMethodID(cls, "getStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStatus_abe76ff55126e323] = env->getMethodID(cls, "getStatus", "()Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;");
            mids$[mid_getTimeOffset_9981f74b2d109da6] = env->getMethodID(cls, "getTimeOffset", "()D");
            mids$[mid_setEstimatedValue_a71c45509eaf92d1] = env->getMethodID(cls, "setEstimatedValue", "([D)V");
            mids$[mid_setStatus_ef35478ae2de02b1] = env->getMethodID(cls, "setStatus", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedMeasurementBase::EstimatedMeasurementBase(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, jint a1, jint a2, const JArray< ::org::orekit::propagation::SpacecraftState > & a3, const JArray< ::org::orekit::utils::TimeStampedPVCoordinates > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_047f677485db459a, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        jint EstimatedMeasurementBase::getCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getCount_d6ab429752e7c267]);
        }

        ::org::orekit::time::AbsoluteDate EstimatedMeasurementBase::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
        }

        JArray< jdouble > EstimatedMeasurementBase::getEstimatedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getEstimatedValue_be783177b060994b]));
        }

        jint EstimatedMeasurementBase::getIteration() const
        {
          return env->callIntMethod(this$, mids$[mid_getIteration_d6ab429752e7c267]);
        }

        ::org::orekit::estimation::measurements::ObservedMeasurement EstimatedMeasurementBase::getObservedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::ObservedMeasurement(env->callObjectMethod(this$, mids$[mid_getObservedMeasurement_2198162c3cb7b73f]));
        }

        JArray< jdouble > EstimatedMeasurementBase::getObservedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getObservedValue_be783177b060994b]));
        }

        JArray< ::org::orekit::utils::TimeStampedPVCoordinates > EstimatedMeasurementBase::getParticipants() const
        {
          return JArray< ::org::orekit::utils::TimeStampedPVCoordinates >(env->callObjectMethod(this$, mids$[mid_getParticipants_be2ee2a4bff8d504]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > EstimatedMeasurementBase::getStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getStates_598bcd058df23e79]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status EstimatedMeasurementBase::getStatus() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status(env->callObjectMethod(this$, mids$[mid_getStatus_abe76ff55126e323]));
        }

        jdouble EstimatedMeasurementBase::getTimeOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTimeOffset_9981f74b2d109da6]);
        }

        void EstimatedMeasurementBase::setEstimatedValue(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEstimatedValue_a71c45509eaf92d1], a0.this$);
        }

        void EstimatedMeasurementBase::setStatus(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStatus_ef35478ae2de02b1], a0.this$);
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
        static PyObject *t_EstimatedMeasurementBase_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_of_(t_EstimatedMeasurementBase *self, PyObject *args);
        static int t_EstimatedMeasurementBase_init_(t_EstimatedMeasurementBase *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EstimatedMeasurementBase_getCount(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getDate(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getEstimatedValue(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getIteration(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getObservedMeasurement(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getObservedValue(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getParticipants(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getStates(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getStatus(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getTimeOffset(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_setEstimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_setStatus(t_EstimatedMeasurementBase *self, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_get__count(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__date(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__estimatedValue(t_EstimatedMeasurementBase *self, void *data);
        static int t_EstimatedMeasurementBase_set__estimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__iteration(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__observedMeasurement(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__observedValue(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__participants(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__states(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__status(t_EstimatedMeasurementBase *self, void *data);
        static int t_EstimatedMeasurementBase_set__status(t_EstimatedMeasurementBase *self, PyObject *arg, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__timeOffset(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__parameters_(t_EstimatedMeasurementBase *self, void *data);
        static PyGetSetDef t_EstimatedMeasurementBase__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, count),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, date),
          DECLARE_GETSET_FIELD(t_EstimatedMeasurementBase, estimatedValue),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, iteration),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, observedMeasurement),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, observedValue),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, participants),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, states),
          DECLARE_GETSET_FIELD(t_EstimatedMeasurementBase, status),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, timeOffset),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedMeasurementBase__methods_[] = {
          DECLARE_METHOD(t_EstimatedMeasurementBase, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getCount, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getDate, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getEstimatedValue, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getIteration, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getObservedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getObservedValue, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getParticipants, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getStates, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getStatus, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getTimeOffset, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, setEstimatedValue, METH_O),
          DECLARE_METHOD(t_EstimatedMeasurementBase, setStatus, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedMeasurementBase)[] = {
          { Py_tp_methods, t_EstimatedMeasurementBase__methods_ },
          { Py_tp_init, (void *) t_EstimatedMeasurementBase_init_ },
          { Py_tp_getset, t_EstimatedMeasurementBase__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedMeasurementBase)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EstimatedMeasurementBase, t_EstimatedMeasurementBase, EstimatedMeasurementBase);
        PyObject *t_EstimatedMeasurementBase::wrap_Object(const EstimatedMeasurementBase& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase *self = (t_EstimatedMeasurementBase *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimatedMeasurementBase::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase *self = (t_EstimatedMeasurementBase *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimatedMeasurementBase::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedMeasurementBase), &PY_TYPE_DEF(EstimatedMeasurementBase), module, "EstimatedMeasurementBase", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "Status", make_descriptor(&PY_TYPE_DEF(EstimatedMeasurementBase$Status)));
        }

        void t_EstimatedMeasurementBase::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "class_", make_descriptor(EstimatedMeasurementBase::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "wrapfn_", make_descriptor(t_EstimatedMeasurementBase::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimatedMeasurementBase_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedMeasurementBase::initializeClass, 1)))
            return NULL;
          return t_EstimatedMeasurementBase::wrap_Object(EstimatedMeasurementBase(((t_EstimatedMeasurementBase *) arg)->object.this$));
        }
        static PyObject *t_EstimatedMeasurementBase_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedMeasurementBase::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimatedMeasurementBase_of_(t_EstimatedMeasurementBase *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EstimatedMeasurementBase_init_(t_EstimatedMeasurementBase *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          JArray< ::org::orekit::propagation::SpacecraftState > a3((jobject) NULL);
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > a4((jobject) NULL);
          EstimatedMeasurementBase object((jobject) NULL);

          if (!parseArgs(args, "KII[k[k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = EstimatedMeasurementBase(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EstimatedMeasurementBase_getCount(t_EstimatedMeasurementBase *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimatedMeasurementBase_getDate(t_EstimatedMeasurementBase *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EstimatedMeasurementBase_getEstimatedValue(t_EstimatedMeasurementBase *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedValue());
          return result.wrap();
        }

        static PyObject *t_EstimatedMeasurementBase_getIteration(t_EstimatedMeasurementBase *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIteration());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimatedMeasurementBase_getObservedMeasurement(t_EstimatedMeasurementBase *self)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedMeasurement());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(result);
        }

        static PyObject *t_EstimatedMeasurementBase_getObservedValue(t_EstimatedMeasurementBase *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedValue());
          return result.wrap();
        }

        static PyObject *t_EstimatedMeasurementBase_getParticipants(t_EstimatedMeasurementBase *self)
        {
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParticipants());
          return JArray<jobject>(result.this$).wrap(::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_getStates(t_EstimatedMeasurementBase *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_getStatus(t_EstimatedMeasurementBase *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status result((jobject) NULL);
          OBJ_CALL(result = self->object.getStatus());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase$Status::wrap_Object(result);
        }

        static PyObject *t_EstimatedMeasurementBase_getTimeOffset(t_EstimatedMeasurementBase *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTimeOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EstimatedMeasurementBase_setEstimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.setEstimatedValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEstimatedValue", arg);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurementBase_setStatus(t_EstimatedMeasurementBase *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase$Status::parameters_))
          {
            OBJ_CALL(self->object.setStatus(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStatus", arg);
          return NULL;
        }
        static PyObject *t_EstimatedMeasurementBase_get__parameters_(t_EstimatedMeasurementBase *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EstimatedMeasurementBase_get__count(t_EstimatedMeasurementBase *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__date(t_EstimatedMeasurementBase *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__estimatedValue(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedValue());
          return value.wrap();
        }
        static int t_EstimatedMeasurementBase_set__estimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg, void *data)
        {
          {
            JArray< jdouble > value((jobject) NULL);
            if (!parseArg(arg, "[D", &value))
            {
              INT_CALL(self->object.setEstimatedValue(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "estimatedValue", arg);
          return -1;
        }

        static PyObject *t_EstimatedMeasurementBase_get__iteration(t_EstimatedMeasurementBase *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIteration());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__observedMeasurement(t_EstimatedMeasurementBase *self, void *data)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedMeasurement());
          return ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__observedValue(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedValue());
          return value.wrap();
        }

        static PyObject *t_EstimatedMeasurementBase_get__participants(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParticipants());
          return JArray<jobject>(value.this$).wrap(::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_get__states(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_get__status(t_EstimatedMeasurementBase *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status value((jobject) NULL);
          OBJ_CALL(value = self->object.getStatus());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase$Status::wrap_Object(value);
        }
        static int t_EstimatedMeasurementBase_set__status(t_EstimatedMeasurementBase *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::initializeClass, &value))
            {
              INT_CALL(self->object.setStatus(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "status", arg);
          return -1;
        }

        static PyObject *t_EstimatedMeasurementBase_get__timeOffset(t_EstimatedMeasurementBase *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTimeOffset());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$CenterListConsumer::class$ = NULL;
            jmethodID *ParseToken$CenterListConsumer::mids$ = NULL;
            bool ParseToken$CenterListConsumer::live$ = false;

            jclass ParseToken$CenterListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_aa335fea495d60e0] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$CenterListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_aa335fea495d60e0], a0.this$);
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
            static PyObject *t_ParseToken$CenterListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterListConsumer_accept(t_ParseToken$CenterListConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$CenterListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$CenterListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$CenterListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$CenterListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$CenterListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$CenterListConsumer, t_ParseToken$CenterListConsumer, ParseToken$CenterListConsumer);

            void t_ParseToken$CenterListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$CenterListConsumer), &PY_TYPE_DEF(ParseToken$CenterListConsumer), module, "ParseToken$CenterListConsumer", 0);
            }

            void t_ParseToken$CenterListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterListConsumer), "class_", make_descriptor(ParseToken$CenterListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterListConsumer), "wrapfn_", make_descriptor(t_ParseToken$CenterListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$CenterListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$CenterListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$CenterListConsumer::wrap_Object(ParseToken$CenterListConsumer(((t_ParseToken$CenterListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$CenterListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$CenterListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$CenterListConsumer_accept(t_ParseToken$CenterListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresOptimizer$Optimum::class$ = NULL;
            jmethodID *LeastSquaresOptimizer$Optimum::mids$ = NULL;
            bool LeastSquaresOptimizer$Optimum::live$ = false;

            jclass LeastSquaresOptimizer$Optimum::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
                mids$[mid_getIterations_d6ab429752e7c267] = env->getMethodID(cls, "getIterations", "()I");
                mids$[mid_of_f448db49c708ad34] = env->getStaticMethodID(cls, "of", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint LeastSquaresOptimizer$Optimum::getEvaluations() const
            {
              return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
            }

            jint LeastSquaresOptimizer$Optimum::getIterations() const
            {
              return env->callIntMethod(this$, mids$[mid_getIterations_d6ab429752e7c267]);
            }

            LeastSquaresOptimizer$Optimum LeastSquaresOptimizer$Optimum::of(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return LeastSquaresOptimizer$Optimum(env->callStaticObjectMethod(cls, mids$[mid_of_f448db49c708ad34], a0.this$, a1, a2));
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
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresOptimizer$Optimum_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer$Optimum_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer$Optimum_getEvaluations(t_LeastSquaresOptimizer$Optimum *self);
            static PyObject *t_LeastSquaresOptimizer$Optimum_getIterations(t_LeastSquaresOptimizer$Optimum *self);
            static PyObject *t_LeastSquaresOptimizer$Optimum_of(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresOptimizer$Optimum_get__evaluations(t_LeastSquaresOptimizer$Optimum *self, void *data);
            static PyObject *t_LeastSquaresOptimizer$Optimum_get__iterations(t_LeastSquaresOptimizer$Optimum *self, void *data);
            static PyGetSetDef t_LeastSquaresOptimizer$Optimum__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresOptimizer$Optimum, evaluations),
              DECLARE_GET_FIELD(t_LeastSquaresOptimizer$Optimum, iterations),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresOptimizer$Optimum__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, getEvaluations, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, getIterations, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, of, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresOptimizer$Optimum)[] = {
              { Py_tp_methods, t_LeastSquaresOptimizer$Optimum__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LeastSquaresOptimizer$Optimum__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresOptimizer$Optimum)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation),
              NULL
            };

            DEFINE_TYPE(LeastSquaresOptimizer$Optimum, t_LeastSquaresOptimizer$Optimum, LeastSquaresOptimizer$Optimum);

            void t_LeastSquaresOptimizer$Optimum::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresOptimizer$Optimum), &PY_TYPE_DEF(LeastSquaresOptimizer$Optimum), module, "LeastSquaresOptimizer$Optimum", 0);
            }

            void t_LeastSquaresOptimizer$Optimum::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer$Optimum), "class_", make_descriptor(LeastSquaresOptimizer$Optimum::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer$Optimum), "wrapfn_", make_descriptor(t_LeastSquaresOptimizer$Optimum::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer$Optimum), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresOptimizer$Optimum::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresOptimizer$Optimum::wrap_Object(LeastSquaresOptimizer$Optimum(((t_LeastSquaresOptimizer$Optimum *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresOptimizer$Optimum_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresOptimizer$Optimum::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_getEvaluations(t_LeastSquaresOptimizer$Optimum *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getEvaluations());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_getIterations(t_LeastSquaresOptimizer$Optimum *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIterations());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_of(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a0((jobject) NULL);
              jint a1;
              jint a2;
              LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArgs(args, "kII", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum::of(a0, a1, a2));
                return t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "of", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_get__evaluations(t_LeastSquaresOptimizer$Optimum *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getEvaluations());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_get__iterations(t_LeastSquaresOptimizer$Optimum *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIterations());
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
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *ODEStepEndHandler::class$ = NULL;
        jmethodID *ODEStepEndHandler::mids$ = NULL;
        bool ODEStepEndHandler::live$ = false;

        jclass ODEStepEndHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/ODEStepEndHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init_25005604bcb94d07] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_resetState_20f750144fb0c616] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/ODEState;");
            mids$[mid_stepEndOccurred_38905d88ca4e55d2] = env->getMethodID(cls, "stepEndOccurred", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Z)Lorg/hipparchus/ode/events/Action;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ODEStepEndHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_25005604bcb94d07], a0.this$, a1);
        }

        ::org::hipparchus::ode::ODEState ODEStepEndHandler::resetState(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_resetState_20f750144fb0c616], a0.this$));
        }

        ::org::hipparchus::ode::events::Action ODEStepEndHandler::stepEndOccurred(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jboolean a1) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_stepEndOccurred_38905d88ca4e55d2], a0.this$, a1));
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
        static PyObject *t_ODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepEndHandler_init(t_ODEStepEndHandler *self, PyObject *args);
        static PyObject *t_ODEStepEndHandler_resetState(t_ODEStepEndHandler *self, PyObject *arg);
        static PyObject *t_ODEStepEndHandler_stepEndOccurred(t_ODEStepEndHandler *self, PyObject *args);

        static PyMethodDef t_ODEStepEndHandler__methods_[] = {
          DECLARE_METHOD(t_ODEStepEndHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepEndHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepEndHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_ODEStepEndHandler, resetState, METH_O),
          DECLARE_METHOD(t_ODEStepEndHandler, stepEndOccurred, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEStepEndHandler)[] = {
          { Py_tp_methods, t_ODEStepEndHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEStepEndHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEStepEndHandler, t_ODEStepEndHandler, ODEStepEndHandler);

        void t_ODEStepEndHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEStepEndHandler), &PY_TYPE_DEF(ODEStepEndHandler), module, "ODEStepEndHandler", 0);
        }

        void t_ODEStepEndHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepEndHandler), "class_", make_descriptor(ODEStepEndHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepEndHandler), "wrapfn_", make_descriptor(t_ODEStepEndHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepEndHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEStepEndHandler::initializeClass, 1)))
            return NULL;
          return t_ODEStepEndHandler::wrap_Object(ODEStepEndHandler(((t_ODEStepEndHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEStepEndHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEStepEndHandler_init(t_ODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_ODEStepEndHandler_resetState(t_ODEStepEndHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.resetState(a0));
            return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", arg);
          return NULL;
        }

        static PyObject *t_ODEStepEndHandler_stepEndOccurred(t_ODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jboolean a1;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "kZ", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.stepEndOccurred(a0, a1));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "stepEndOccurred", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/TDOATroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TDOATroposphericDelayModifier::class$ = NULL;
          jmethodID *TDOATroposphericDelayModifier::mids$ = NULL;
          bool TDOATroposphericDelayModifier::live$ = false;

          jclass TDOATroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TDOATroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1f42633debde232b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TDOATroposphericDelayModifier::TDOATroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1f42633debde232b, a0.this$)) {}

          ::java::util::List TDOATroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void TDOATroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void TDOATroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
        namespace modifiers {
          static PyObject *t_TDOATroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOATroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TDOATroposphericDelayModifier_init_(t_TDOATroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TDOATroposphericDelayModifier_getParametersDrivers(t_TDOATroposphericDelayModifier *self);
          static PyObject *t_TDOATroposphericDelayModifier_modify(t_TDOATroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOATroposphericDelayModifier_modifyWithoutDerivatives(t_TDOATroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOATroposphericDelayModifier_get__parametersDrivers(t_TDOATroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_TDOATroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TDOATroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TDOATroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TDOATroposphericDelayModifier)[] = {
            { Py_tp_methods, t_TDOATroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TDOATroposphericDelayModifier_init_ },
            { Py_tp_getset, t_TDOATroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TDOATroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TDOATroposphericDelayModifier, t_TDOATroposphericDelayModifier, TDOATroposphericDelayModifier);

          void t_TDOATroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TDOATroposphericDelayModifier), &PY_TYPE_DEF(TDOATroposphericDelayModifier), module, "TDOATroposphericDelayModifier", 0);
          }

          void t_TDOATroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOATroposphericDelayModifier), "class_", make_descriptor(TDOATroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOATroposphericDelayModifier), "wrapfn_", make_descriptor(t_TDOATroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOATroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TDOATroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TDOATroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TDOATroposphericDelayModifier::wrap_Object(TDOATroposphericDelayModifier(((t_TDOATroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TDOATroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TDOATroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TDOATroposphericDelayModifier_init_(t_TDOATroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            TDOATroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = TDOATroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TDOATroposphericDelayModifier_getParametersDrivers(t_TDOATroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TDOATroposphericDelayModifier_modify(t_TDOATroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_TDOATroposphericDelayModifier_modifyWithoutDerivatives(t_TDOATroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_TDOATroposphericDelayModifier_get__parametersDrivers(t_TDOATroposphericDelayModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative::class$ = NULL;
        jmethodID *FieldUnivariateDerivative::mids$ = NULL;
        bool FieldUnivariateDerivative::live$ = false;

        jclass FieldUnivariateDerivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getDerivative_dfcf702144fd7bc1] = env->getMethodID(cls, "getDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getFreeParameters_d6ab429752e7c267] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getPartialDerivative_15bad9d0870b63aa] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDerivativeStructure_b363d6ebd90353bf] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldUnivariateDerivative::FieldUnivariateDerivative() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative::getDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_dfcf702144fd7bc1], a0));
        }

        jint FieldUnivariateDerivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_d6ab429752e7c267]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_15bad9d0870b63aa], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldUnivariateDerivative::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_b363d6ebd90353bf]));
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
        static PyObject *t_FieldUnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_of_(t_FieldUnivariateDerivative *self, PyObject *args);
        static int t_FieldUnivariateDerivative_init_(t_FieldUnivariateDerivative *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldUnivariateDerivative_getDerivative(t_FieldUnivariateDerivative *self, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_getFreeParameters(t_FieldUnivariateDerivative *self);
        static PyObject *t_FieldUnivariateDerivative_getPartialDerivative(t_FieldUnivariateDerivative *self, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_toDerivativeStructure(t_FieldUnivariateDerivative *self);
        static PyObject *t_FieldUnivariateDerivative_get__freeParameters(t_FieldUnivariateDerivative *self, void *data);
        static PyObject *t_FieldUnivariateDerivative_get__parameters_(t_FieldUnivariateDerivative *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative, freeParameters),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, getDerivative, METH_O),
          DECLARE_METHOD(t_FieldUnivariateDerivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_FieldUnivariateDerivative, toDerivativeStructure, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative__methods_ },
          { Py_tp_init, (void *) t_FieldUnivariateDerivative_init_ },
          { Py_tp_getset, t_FieldUnivariateDerivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative, t_FieldUnivariateDerivative, FieldUnivariateDerivative);
        PyObject *t_FieldUnivariateDerivative::wrap_Object(const FieldUnivariateDerivative& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldUnivariateDerivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative *self = (t_FieldUnivariateDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldUnivariateDerivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative *self = (t_FieldUnivariateDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative), &PY_TYPE_DEF(FieldUnivariateDerivative), module, "FieldUnivariateDerivative", 0);
        }

        void t_FieldUnivariateDerivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative), "class_", make_descriptor(FieldUnivariateDerivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative::wrap_Object(FieldUnivariateDerivative(((t_FieldUnivariateDerivative *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative_of_(t_FieldUnivariateDerivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldUnivariateDerivative_init_(t_FieldUnivariateDerivative *self, PyObject *args, PyObject *kwds)
        {
          FieldUnivariateDerivative object((jobject) NULL);

          INT_CALL(object = FieldUnivariateDerivative());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldUnivariateDerivative_getDerivative(t_FieldUnivariateDerivative *self, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative_getFreeParameters(t_FieldUnivariateDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateDerivative_getPartialDerivative(t_FieldUnivariateDerivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative_toDerivativeStructure(t_FieldUnivariateDerivative *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldUnivariateDerivative_get__parameters_(t_FieldUnivariateDerivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative_get__freeParameters(t_FieldUnivariateDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *OrdinaryDifferentialEquation::class$ = NULL;
      jmethodID *OrdinaryDifferentialEquation::mids$ = NULL;
      bool OrdinaryDifferentialEquation::live$ = false;

      jclass OrdinaryDifferentialEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/OrdinaryDifferentialEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_bfc955188bf36f2c] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_e5020eafae188c23] = env->getMethodID(cls, "init", "(D[DD)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > OrdinaryDifferentialEquation::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_bfc955188bf36f2c], a0, a1.this$));
      }

      jint OrdinaryDifferentialEquation::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      void OrdinaryDifferentialEquation::init(jdouble a0, const JArray< jdouble > & a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_init_e5020eafae188c23], a0, a1.this$, a2);
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
      static PyObject *t_OrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrdinaryDifferentialEquation_computeDerivatives(t_OrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_OrdinaryDifferentialEquation_getDimension(t_OrdinaryDifferentialEquation *self);
      static PyObject *t_OrdinaryDifferentialEquation_init(t_OrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_OrdinaryDifferentialEquation_get__dimension(t_OrdinaryDifferentialEquation *self, void *data);
      static PyGetSetDef t_OrdinaryDifferentialEquation__fields_[] = {
        DECLARE_GET_FIELD(t_OrdinaryDifferentialEquation, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrdinaryDifferentialEquation__methods_[] = {
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrdinaryDifferentialEquation)[] = {
        { Py_tp_methods, t_OrdinaryDifferentialEquation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrdinaryDifferentialEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrdinaryDifferentialEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OrdinaryDifferentialEquation, t_OrdinaryDifferentialEquation, OrdinaryDifferentialEquation);

      void t_OrdinaryDifferentialEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(OrdinaryDifferentialEquation), &PY_TYPE_DEF(OrdinaryDifferentialEquation), module, "OrdinaryDifferentialEquation", 0);
      }

      void t_OrdinaryDifferentialEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrdinaryDifferentialEquation), "class_", make_descriptor(OrdinaryDifferentialEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrdinaryDifferentialEquation), "wrapfn_", make_descriptor(t_OrdinaryDifferentialEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrdinaryDifferentialEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrdinaryDifferentialEquation::initializeClass, 1)))
          return NULL;
        return t_OrdinaryDifferentialEquation::wrap_Object(OrdinaryDifferentialEquation(((t_OrdinaryDifferentialEquation *) arg)->object.this$));
      }
      static PyObject *t_OrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrdinaryDifferentialEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrdinaryDifferentialEquation_computeDerivatives(t_OrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_OrdinaryDifferentialEquation_getDimension(t_OrdinaryDifferentialEquation *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OrdinaryDifferentialEquation_init(t_OrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "D[DD", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.init(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_OrdinaryDifferentialEquation_get__dimension(t_OrdinaryDifferentialEquation *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/LegendreRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *LegendreRuleFactory::class$ = NULL;
          jmethodID *LegendreRuleFactory::mids$ = NULL;
          bool LegendreRuleFactory::live$ = false;

          jclass LegendreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/LegendreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeRule_c07c8b9364272960] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LegendreRuleFactory::LegendreRuleFactory() : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
      namespace integration {
        namespace gauss {
          static PyObject *t_LegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LegendreRuleFactory_init_(t_LegendreRuleFactory *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_LegendreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_LegendreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LegendreRuleFactory, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LegendreRuleFactory)[] = {
            { Py_tp_methods, t_LegendreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_LegendreRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LegendreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(LegendreRuleFactory, t_LegendreRuleFactory, LegendreRuleFactory);

          void t_LegendreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(LegendreRuleFactory), &PY_TYPE_DEF(LegendreRuleFactory), module, "LegendreRuleFactory", 0);
          }

          void t_LegendreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreRuleFactory), "class_", make_descriptor(LegendreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreRuleFactory), "wrapfn_", make_descriptor(t_LegendreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LegendreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_LegendreRuleFactory::wrap_Object(LegendreRuleFactory(((t_LegendreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_LegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LegendreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LegendreRuleFactory_init_(t_LegendreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            LegendreRuleFactory object((jobject) NULL);

            INT_CALL(object = LegendreRuleFactory());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1DFormat.h"
#include "java/util/Locale.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/geometry/Vector.h"
#include "java/text/FieldPosition.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1DFormat.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Vector1DFormat::class$ = NULL;
          jmethodID *Vector1DFormat::mids$ = NULL;
          bool Vector1DFormat::live$ = false;

          jclass Vector1DFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Vector1DFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_327b6d3ae10b544b] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
              mids$[mid_init$_771aee6c143cc92a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_9209f86fccd9e2d2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
              mids$[mid_format_dbd94d7f7c5c0aa8] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
              mids$[mid_getVector1DFormat_a7e430ad62ab6a7f] = env->getStaticMethodID(cls, "getVector1DFormat", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1DFormat;");
              mids$[mid_getVector1DFormat_434751306101c2ab] = env->getStaticMethodID(cls, "getVector1DFormat", "(Ljava/util/Locale;)Lorg/hipparchus/geometry/euclidean/oned/Vector1DFormat;");
              mids$[mid_parse_202ce5e89eb0084f] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_parse_eb47092cdb5a8cf5] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector1DFormat::Vector1DFormat() : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          Vector1DFormat::Vector1DFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_327b6d3ae10b544b, a0.this$)) {}

          Vector1DFormat::Vector1DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_771aee6c143cc92a, a0.this$, a1.this$)) {}

          Vector1DFormat::Vector1DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::text::NumberFormat & a2) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_9209f86fccd9e2d2, a0.this$, a1.this$, a2.this$)) {}

          ::java::lang::StringBuffer Vector1DFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
          {
            return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_dbd94d7f7c5c0aa8], a0.this$, a1.this$, a2.this$));
          }

          Vector1DFormat Vector1DFormat::getVector1DFormat()
          {
            jclass cls = env->getClass(initializeClass);
            return Vector1DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector1DFormat_a7e430ad62ab6a7f]));
          }

          Vector1DFormat Vector1DFormat::getVector1DFormat(const ::java::util::Locale & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector1DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector1DFormat_434751306101c2ab], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Vector1DFormat::parse(const ::java::lang::String & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_parse_202ce5e89eb0084f], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Vector1DFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_parse_eb47092cdb5a8cf5], a0.this$, a1.this$));
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
        namespace oned {
          static PyObject *t_Vector1DFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector1DFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector1DFormat_of_(t_Vector1DFormat *self, PyObject *args);
          static int t_Vector1DFormat_init_(t_Vector1DFormat *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector1DFormat_format(t_Vector1DFormat *self, PyObject *args);
          static PyObject *t_Vector1DFormat_getVector1DFormat(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1DFormat_parse(t_Vector1DFormat *self, PyObject *args);
          static PyObject *t_Vector1DFormat_get__vector1DFormat(t_Vector1DFormat *self, void *data);
          static PyObject *t_Vector1DFormat_get__parameters_(t_Vector1DFormat *self, void *data);
          static PyGetSetDef t_Vector1DFormat__fields_[] = {
            DECLARE_GET_FIELD(t_Vector1DFormat, vector1DFormat),
            DECLARE_GET_FIELD(t_Vector1DFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector1DFormat__methods_[] = {
            DECLARE_METHOD(t_Vector1DFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1DFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1DFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_Vector1DFormat, format, METH_VARARGS),
            DECLARE_METHOD(t_Vector1DFormat, getVector1DFormat, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1DFormat, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector1DFormat)[] = {
            { Py_tp_methods, t_Vector1DFormat__methods_ },
            { Py_tp_init, (void *) t_Vector1DFormat_init_ },
            { Py_tp_getset, t_Vector1DFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector1DFormat)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::VectorFormat),
            NULL
          };

          DEFINE_TYPE(Vector1DFormat, t_Vector1DFormat, Vector1DFormat);
          PyObject *t_Vector1DFormat::wrap_Object(const Vector1DFormat& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector1DFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector1DFormat *self = (t_Vector1DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Vector1DFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector1DFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector1DFormat *self = (t_Vector1DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Vector1DFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector1DFormat), &PY_TYPE_DEF(Vector1DFormat), module, "Vector1DFormat", 0);
          }

          void t_Vector1DFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1DFormat), "class_", make_descriptor(Vector1DFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1DFormat), "wrapfn_", make_descriptor(t_Vector1DFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1DFormat), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vector1DFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector1DFormat::initializeClass, 1)))
              return NULL;
            return t_Vector1DFormat::wrap_Object(Vector1DFormat(((t_Vector1DFormat *) arg)->object.this$));
          }
          static PyObject *t_Vector1DFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector1DFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vector1DFormat_of_(t_Vector1DFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Vector1DFormat_init_(t_Vector1DFormat *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector1DFormat object((jobject) NULL);

                INT_CALL(object = Vector1DFormat());
                self->object = object;
                self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
                break;
              }
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                Vector1DFormat object((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  INT_CALL(object = Vector1DFormat(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                Vector1DFormat object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = Vector1DFormat(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::text::NumberFormat a2((jobject) NULL);
                Vector1DFormat object((jobject) NULL);

                if (!parseArgs(args, "ssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector1DFormat(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
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

          static PyObject *t_Vector1DFormat_format(t_Vector1DFormat *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Vector1DFormat), (PyObject *) self, "format", args, 2);
          }

          static PyObject *t_Vector1DFormat_getVector1DFormat(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector1DFormat result((jobject) NULL);
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1DFormat::getVector1DFormat());
                return t_Vector1DFormat::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::util::Locale a0((jobject) NULL);
                Vector1DFormat result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1DFormat::getVector1DFormat(a0));
                  return t_Vector1DFormat::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getVector1DFormat", args);
            return NULL;
          }

          static PyObject *t_Vector1DFormat_parse(t_Vector1DFormat *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::text::ParsePosition a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector1DFormat), (PyObject *) self, "parse", args, 2);
          }
          static PyObject *t_Vector1DFormat_get__parameters_(t_Vector1DFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Vector1DFormat_get__vector1DFormat(t_Vector1DFormat *self, void *data)
          {
            Vector1DFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector1DFormat());
            return t_Vector1DFormat::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration.h"
#include "java/util/List.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$SystemConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$SystemConfiguration::mids$ = NULL;
        bool CRDConfiguration$SystemConfiguration::live$ = false;

        jclass CRDConfiguration$SystemConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getComponents_d751c1a57012b438] = env->getMethodID(cls, "getComponents", "()Ljava/util/List;");
            mids$[mid_getSystemId_d2c8eb4129821f0e] = env->getMethodID(cls, "getSystemId", "()Ljava/lang/String;");
            mids$[mid_getWavelength_9981f74b2d109da6] = env->getMethodID(cls, "getWavelength", "()D");
            mids$[mid_setComponents_0b0682dc773e1ff1] = env->getMethodID(cls, "setComponents", "([Ljava/lang/String;)V");
            mids$[mid_setSystemId_105e1eadb709d9ac] = env->getMethodID(cls, "setSystemId", "(Ljava/lang/String;)V");
            mids$[mid_setWavelength_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setWavelength", "(D)V");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$SystemConfiguration::CRDConfiguration$SystemConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::java::util::List CRDConfiguration$SystemConfiguration::getComponents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComponents_d751c1a57012b438]));
        }

        ::java::lang::String CRDConfiguration$SystemConfiguration::getSystemId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemId_d2c8eb4129821f0e]));
        }

        jdouble CRDConfiguration$SystemConfiguration::getWavelength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getWavelength_9981f74b2d109da6]);
        }

        void CRDConfiguration$SystemConfiguration::setComponents(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setComponents_0b0682dc773e1ff1], a0.this$);
        }

        void CRDConfiguration$SystemConfiguration::setSystemId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemId_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$SystemConfiguration::setWavelength(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setWavelength_1ad26e8c8c0cd65b], a0);
        }

        ::java::lang::String CRDConfiguration$SystemConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$SystemConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
        static PyObject *t_CRDConfiguration$SystemConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$SystemConfiguration_init_(t_CRDConfiguration$SystemConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$SystemConfiguration_getComponents(t_CRDConfiguration$SystemConfiguration *self);
        static PyObject *t_CRDConfiguration$SystemConfiguration_getSystemId(t_CRDConfiguration$SystemConfiguration *self);
        static PyObject *t_CRDConfiguration$SystemConfiguration_getWavelength(t_CRDConfiguration$SystemConfiguration *self);
        static PyObject *t_CRDConfiguration$SystemConfiguration_setComponents(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_setSystemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_setWavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_toCrdString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SystemConfiguration_toString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SystemConfiguration_get__components(t_CRDConfiguration$SystemConfiguration *self, void *data);
        static int t_CRDConfiguration$SystemConfiguration_set__components(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SystemConfiguration_get__systemId(t_CRDConfiguration$SystemConfiguration *self, void *data);
        static int t_CRDConfiguration$SystemConfiguration_set__systemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SystemConfiguration_get__wavelength(t_CRDConfiguration$SystemConfiguration *self, void *data);
        static int t_CRDConfiguration$SystemConfiguration_set__wavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$SystemConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SystemConfiguration, components),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SystemConfiguration, systemId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SystemConfiguration, wavelength),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$SystemConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, getComponents, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, getSystemId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, getWavelength, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, setComponents, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, setSystemId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, setWavelength, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$SystemConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$SystemConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$SystemConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$SystemConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$SystemConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$SystemConfiguration, t_CRDConfiguration$SystemConfiguration, CRDConfiguration$SystemConfiguration);

        void t_CRDConfiguration$SystemConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$SystemConfiguration), &PY_TYPE_DEF(CRDConfiguration$SystemConfiguration), module, "CRDConfiguration$SystemConfiguration", 0);
        }

        void t_CRDConfiguration$SystemConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SystemConfiguration), "class_", make_descriptor(CRDConfiguration$SystemConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SystemConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$SystemConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SystemConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$SystemConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$SystemConfiguration::wrap_Object(CRDConfiguration$SystemConfiguration(((t_CRDConfiguration$SystemConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$SystemConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$SystemConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$SystemConfiguration_init_(t_CRDConfiguration$SystemConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$SystemConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$SystemConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_getComponents(t_CRDConfiguration$SystemConfiguration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_getSystemId(t_CRDConfiguration$SystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_getWavelength(t_CRDConfiguration$SystemConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getWavelength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_setComponents(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setComponents(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setComponents", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_setSystemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSystemId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSystemId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_setWavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setWavelength(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_toCrdString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SystemConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_toString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SystemConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_get__components(t_CRDConfiguration$SystemConfiguration *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(value);
        }
        static int t_CRDConfiguration$SystemConfiguration_set__components(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setComponents(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "components", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_get__systemId(t_CRDConfiguration$SystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemId());
          return j2p(value);
        }
        static int t_CRDConfiguration$SystemConfiguration_set__systemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSystemId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "systemId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_get__wavelength(t_CRDConfiguration$SystemConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getWavelength());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$SystemConfiguration_set__wavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setWavelength(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "wavelength", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/spherical/twod/SubCircle.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/oned/Arc.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Circle::class$ = NULL;
          jmethodID *Circle::mids$ = NULL;
          bool Circle::live$ = false;

          jclass Circle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Circle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ce07cf20f467033d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_f1df74f83501ac06] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;Lorg/hipparchus/geometry/spherical/twod/S2Point;D)V");
              mids$[mid_copySelf_ba6c8cc83fdda773] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/spherical/twod/Circle;");
              mids$[mid_emptyHyperplane_c9664595267ed4c7] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/spherical/twod/SubCircle;");
              mids$[mid_getArc_26a96d0e4bc10fdd] = env->getMethodID(cls, "getArc", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;Lorg/hipparchus/geometry/spherical/twod/S2Point;)Lorg/hipparchus/geometry/spherical/oned/Arc;");
              mids$[mid_getInsideArc_e129ff7e1bada508] = env->getMethodID(cls, "getInsideArc", "(Lorg/hipparchus/geometry/spherical/twod/Circle;)Lorg/hipparchus/geometry/spherical/oned/Arc;");
              mids$[mid_getOffset_78c2296af19efe37] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getOffset_277cb62c4ec87155] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getPhase_78c2296af19efe37] = env->getMethodID(cls, "getPhase", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getPointAt_98a3eeef43dce47a] = env->getMethodID(cls, "getPointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getPole_032312bdeb3f2f93] = env->getMethodID(cls, "getPole", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getReverse_ba6c8cc83fdda773] = env->getMethodID(cls, "getReverse", "()Lorg/hipparchus/geometry/spherical/twod/Circle;");
              mids$[mid_getTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_getTransform_fe614a04f5ee8090] = env->getStaticMethodID(cls, "getTransform", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/partitioning/Transform;");
              mids$[mid_getXAxis_032312bdeb3f2f93] = env->getMethodID(cls, "getXAxis", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getYAxis_032312bdeb3f2f93] = env->getMethodID(cls, "getYAxis", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_project_ff0c84956c63705d] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_reset_30f8886dfb88a63c] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_revertSelf_ff7cb6c242604316] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_sameOrientationAs_51737f919fe0cf72] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_toSpace_1272eb4708ac17a7] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_toSubSpace_ef89f54d87eba347] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/spherical/oned/S1Point;");
              mids$[mid_wholeHyperplane_c9664595267ed4c7] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/spherical/twod/SubCircle;");
              mids$[mid_wholeSpace_17b2f5c9c3ed683f] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Circle::Circle(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ce07cf20f467033d, a0.this$, a1)) {}

          Circle::Circle(const ::org::hipparchus::geometry::spherical::twod::S2Point & a0, const ::org::hipparchus::geometry::spherical::twod::S2Point & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1df74f83501ac06, a0.this$, a1.this$, a2)) {}

          Circle Circle::copySelf() const
          {
            return Circle(env->callObjectMethod(this$, mids$[mid_copySelf_ba6c8cc83fdda773]));
          }

          ::org::hipparchus::geometry::spherical::twod::SubCircle Circle::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::twod::SubCircle(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_c9664595267ed4c7]));
          }

          ::org::hipparchus::geometry::spherical::oned::Arc Circle::getArc(const ::org::hipparchus::geometry::spherical::twod::S2Point & a0, const ::org::hipparchus::geometry::spherical::twod::S2Point & a1) const
          {
            return ::org::hipparchus::geometry::spherical::oned::Arc(env->callObjectMethod(this$, mids$[mid_getArc_26a96d0e4bc10fdd], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::spherical::oned::Arc Circle::getInsideArc(const Circle & a0) const
          {
            return ::org::hipparchus::geometry::spherical::oned::Arc(env->callObjectMethod(this$, mids$[mid_getInsideArc_e129ff7e1bada508], a0.this$));
          }

          jdouble Circle::getOffset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_78c2296af19efe37], a0.this$);
          }

          jdouble Circle::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_277cb62c4ec87155], a0.this$);
          }

          jdouble Circle::getPhase(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhase_78c2296af19efe37], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getPointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPointAt_98a3eeef43dce47a], a0));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getPole() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPole_032312bdeb3f2f93]));
          }

          Circle Circle::getReverse() const
          {
            return Circle(env->callObjectMethod(this$, mids$[mid_getReverse_ba6c8cc83fdda773]));
          }

          jdouble Circle::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::partitioning::Transform Circle::getTransform(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::partitioning::Transform(env->callStaticObjectMethod(cls, mids$[mid_getTransform_fe614a04f5ee8090], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getXAxis() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getXAxis_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getYAxis() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getYAxis_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::Point Circle::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_ff0c84956c63705d], a0.this$));
          }

          void Circle::reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_30f8886dfb88a63c], a0.this$);
          }

          void Circle::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_ff7cb6c242604316]);
          }

          jboolean Circle::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_51737f919fe0cf72], a0.this$);
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Circle::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_toSpace_1272eb4708ac17a7], a0.this$));
          }

          ::org::hipparchus::geometry::spherical::oned::S1Point Circle::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::spherical::oned::S1Point(env->callObjectMethod(this$, mids$[mid_toSubSpace_ef89f54d87eba347], a0.this$));
          }

          ::org::hipparchus::geometry::spherical::twod::SubCircle Circle::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::twod::SubCircle(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_c9664595267ed4c7]));
          }

          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet Circle::wholeSpace() const
          {
            return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_17b2f5c9c3ed683f]));
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
      namespace spherical {
        namespace twod {
          static PyObject *t_Circle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Circle_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Circle_init_(t_Circle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Circle_copySelf(t_Circle *self);
          static PyObject *t_Circle_emptyHyperplane(t_Circle *self);
          static PyObject *t_Circle_getArc(t_Circle *self, PyObject *args);
          static PyObject *t_Circle_getInsideArc(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_getOffset(t_Circle *self, PyObject *args);
          static PyObject *t_Circle_getPhase(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_getPointAt(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_getPole(t_Circle *self);
          static PyObject *t_Circle_getReverse(t_Circle *self);
          static PyObject *t_Circle_getTolerance(t_Circle *self);
          static PyObject *t_Circle_getTransform(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Circle_getXAxis(t_Circle *self);
          static PyObject *t_Circle_getYAxis(t_Circle *self);
          static PyObject *t_Circle_project(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_reset(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_revertSelf(t_Circle *self);
          static PyObject *t_Circle_sameOrientationAs(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_toSpace(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_toSubSpace(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_wholeHyperplane(t_Circle *self);
          static PyObject *t_Circle_wholeSpace(t_Circle *self);
          static PyObject *t_Circle_get__pole(t_Circle *self, void *data);
          static PyObject *t_Circle_get__reverse(t_Circle *self, void *data);
          static PyObject *t_Circle_get__tolerance(t_Circle *self, void *data);
          static PyObject *t_Circle_get__xAxis(t_Circle *self, void *data);
          static PyObject *t_Circle_get__yAxis(t_Circle *self, void *data);
          static PyGetSetDef t_Circle__fields_[] = {
            DECLARE_GET_FIELD(t_Circle, pole),
            DECLARE_GET_FIELD(t_Circle, reverse),
            DECLARE_GET_FIELD(t_Circle, tolerance),
            DECLARE_GET_FIELD(t_Circle, xAxis),
            DECLARE_GET_FIELD(t_Circle, yAxis),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Circle__methods_[] = {
            DECLARE_METHOD(t_Circle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Circle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Circle, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_Circle, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getArc, METH_VARARGS),
            DECLARE_METHOD(t_Circle, getInsideArc, METH_O),
            DECLARE_METHOD(t_Circle, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Circle, getPhase, METH_O),
            DECLARE_METHOD(t_Circle, getPointAt, METH_O),
            DECLARE_METHOD(t_Circle, getPole, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getReverse, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getTransform, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Circle, getXAxis, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getYAxis, METH_NOARGS),
            DECLARE_METHOD(t_Circle, project, METH_O),
            DECLARE_METHOD(t_Circle, reset, METH_O),
            DECLARE_METHOD(t_Circle, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_Circle, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_Circle, toSpace, METH_O),
            DECLARE_METHOD(t_Circle, toSubSpace, METH_O),
            DECLARE_METHOD(t_Circle, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Circle, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Circle)[] = {
            { Py_tp_methods, t_Circle__methods_ },
            { Py_tp_init, (void *) t_Circle_init_ },
            { Py_tp_getset, t_Circle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Circle)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Circle, t_Circle, Circle);

          void t_Circle::install(PyObject *module)
          {
            installType(&PY_TYPE(Circle), &PY_TYPE_DEF(Circle), module, "Circle", 0);
          }

          void t_Circle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Circle), "class_", make_descriptor(Circle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Circle), "wrapfn_", make_descriptor(t_Circle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Circle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Circle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Circle::initializeClass, 1)))
              return NULL;
            return t_Circle::wrap_Object(Circle(((t_Circle *) arg)->object.this$));
          }
          static PyObject *t_Circle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Circle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Circle_init_(t_Circle *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                Circle object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Circle(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::spherical::twod::S2Point a0((jobject) NULL);
                ::org::hipparchus::geometry::spherical::twod::S2Point a1((jobject) NULL);
                jdouble a2;
                Circle object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Circle(a0, a1, a2));
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

          static PyObject *t_Circle_copySelf(t_Circle *self)
          {
            Circle result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_Circle::wrap_Object(result);
          }

          static PyObject *t_Circle_emptyHyperplane(t_Circle *self)
          {
            ::org::hipparchus::geometry::spherical::twod::SubCircle result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::spherical::twod::t_SubCircle::wrap_Object(result);
          }

          static PyObject *t_Circle_getArc(t_Circle *self, PyObject *args)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::twod::S2Point a1((jobject) NULL);
            ::org::hipparchus::geometry::spherical::oned::Arc result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getArc(a0, a1));
              return ::org::hipparchus::geometry::spherical::oned::t_Arc::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getArc", args);
            return NULL;
          }

          static PyObject *t_Circle_getInsideArc(t_Circle *self, PyObject *arg)
          {
            Circle a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::oned::Arc result((jobject) NULL);

            if (!parseArg(arg, "k", Circle::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getInsideArc(a0));
              return ::org::hipparchus::geometry::spherical::oned::t_Arc::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInsideArc", arg);
            return NULL;
          }

          static PyObject *t_Circle_getOffset(t_Circle *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Circle_getPhase(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPhase(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPhase", arg);
            return NULL;
          }

          static PyObject *t_Circle_getPointAt(t_Circle *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getPointAt(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", arg);
            return NULL;
          }

          static PyObject *t_Circle_getPole(t_Circle *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPole());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Circle_getReverse(t_Circle *self)
          {
            Circle result((jobject) NULL);
            OBJ_CALL(result = self->object.getReverse());
            return t_Circle::wrap_Object(result);
          }

          static PyObject *t_Circle_getTolerance(t_Circle *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Circle_getTransform(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::partitioning::Transform result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::spherical::twod::Circle::getTransform(a0));
              return ::org::hipparchus::geometry::partitioning::t_Transform::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D), ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            PyErr_SetArgsError(type, "getTransform", arg);
            return NULL;
          }

          static PyObject *t_Circle_getXAxis(t_Circle *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getXAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Circle_getYAxis(t_Circle *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getYAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Circle_project(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_Circle_reset(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.reset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "reset", arg);
            return NULL;
          }

          static PyObject *t_Circle_revertSelf(t_Circle *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_Circle_sameOrientationAs(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_Circle_toSpace(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.toSpace(a0));
              return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
            return NULL;
          }

          static PyObject *t_Circle_toSubSpace(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::spherical::oned::S1Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.toSubSpace(a0));
              return ::org::hipparchus::geometry::spherical::oned::t_S1Point::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", arg);
            return NULL;
          }

          static PyObject *t_Circle_wholeHyperplane(t_Circle *self)
          {
            ::org::hipparchus::geometry::spherical::twod::SubCircle result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::spherical::twod::t_SubCircle::wrap_Object(result);
          }

          static PyObject *t_Circle_wholeSpace(t_Circle *self)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
          }

          static PyObject *t_Circle_get__pole(t_Circle *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getPole());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Circle_get__reverse(t_Circle *self, void *data)
          {
            Circle value((jobject) NULL);
            OBJ_CALL(value = self->object.getReverse());
            return t_Circle::wrap_Object(value);
          }

          static PyObject *t_Circle_get__tolerance(t_Circle *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Circle_get__xAxis(t_Circle *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getXAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Circle_get__yAxis(t_Circle *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getYAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TransformProviderUtils.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TransformProviderUtils::class$ = NULL;
      jmethodID *TransformProviderUtils::mids$ = NULL;
      bool TransformProviderUtils::live$ = false;
      ::org::orekit::frames::TransformProvider *TransformProviderUtils::IDENTITY_PROVIDER = NULL;

      jclass TransformProviderUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TransformProviderUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCombinedProvider_0ce3aad392d7280e] = env->getStaticMethodID(cls, "getCombinedProvider", "(Lorg/orekit/frames/TransformProvider;Lorg/orekit/frames/TransformProvider;)Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getReversedProvider_5138e9b3fc48cf02] = env->getStaticMethodID(cls, "getReversedProvider", "(Lorg/orekit/frames/TransformProvider;)Lorg/orekit/frames/TransformProvider;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IDENTITY_PROVIDER = new ::org::orekit::frames::TransformProvider(env->getStaticObjectField(cls, "IDENTITY_PROVIDER", "Lorg/orekit/frames/TransformProvider;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::TransformProvider TransformProviderUtils::getCombinedProvider(const ::org::orekit::frames::TransformProvider & a0, const ::org::orekit::frames::TransformProvider & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::TransformProvider(env->callStaticObjectMethod(cls, mids$[mid_getCombinedProvider_0ce3aad392d7280e], a0.this$, a1.this$));
      }

      ::org::orekit::frames::TransformProvider TransformProviderUtils::getReversedProvider(const ::org::orekit::frames::TransformProvider & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::TransformProvider(env->callStaticObjectMethod(cls, mids$[mid_getReversedProvider_5138e9b3fc48cf02], a0.this$));
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
      static PyObject *t_TransformProviderUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProviderUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProviderUtils_getCombinedProvider(PyTypeObject *type, PyObject *args);
      static PyObject *t_TransformProviderUtils_getReversedProvider(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_TransformProviderUtils__methods_[] = {
        DECLARE_METHOD(t_TransformProviderUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProviderUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProviderUtils, getCombinedProvider, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TransformProviderUtils, getReversedProvider, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TransformProviderUtils)[] = {
        { Py_tp_methods, t_TransformProviderUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TransformProviderUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TransformProviderUtils, t_TransformProviderUtils, TransformProviderUtils);

      void t_TransformProviderUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(TransformProviderUtils), &PY_TYPE_DEF(TransformProviderUtils), module, "TransformProviderUtils", 0);
      }

      void t_TransformProviderUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "class_", make_descriptor(TransformProviderUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "wrapfn_", make_descriptor(t_TransformProviderUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(TransformProviderUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "IDENTITY_PROVIDER", make_descriptor(::org::orekit::frames::t_TransformProvider::wrap_Object(*TransformProviderUtils::IDENTITY_PROVIDER)));
      }

      static PyObject *t_TransformProviderUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TransformProviderUtils::initializeClass, 1)))
          return NULL;
        return t_TransformProviderUtils::wrap_Object(TransformProviderUtils(((t_TransformProviderUtils *) arg)->object.this$));
      }
      static PyObject *t_TransformProviderUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TransformProviderUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TransformProviderUtils_getCombinedProvider(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::frames::TransformProvider a1((jobject) NULL);
        ::org::orekit::frames::TransformProvider result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::TransformProviderUtils::getCombinedProvider(a0, a1));
          return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCombinedProvider", args);
        return NULL;
      }

      static PyObject *t_TransformProviderUtils_getReversedProvider(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::frames::TransformProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::TransformProvider::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::TransformProviderUtils::getReversedProvider(a0));
          return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getReversedProvider", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *StreamingOemWriter$SegmentWriter::class$ = NULL;
              jmethodID *StreamingOemWriter$SegmentWriter::mids$ = NULL;
              bool StreamingOemWriter$SegmentWriter::live$ = false;

              jclass StreamingOemWriter$SegmentWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_bd16966dd0e9a873] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter;)V");
                  mids$[mid_finish_72b846eb87f3af9a] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_handleStep_72b846eb87f3af9a] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_init_c410ce24bfc8448e] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOemWriter$SegmentWriter::StreamingOemWriter$SegmentWriter(const ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd16966dd0e9a873, a0.this$)) {}

              void StreamingOemWriter$SegmentWriter::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_finish_72b846eb87f3af9a], a0.this$);
              }

              void StreamingOemWriter$SegmentWriter::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_handleStep_72b846eb87f3af9a], a0.this$);
              }

              void StreamingOemWriter$SegmentWriter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_init_c410ce24bfc8448e], a0.this$, a1.this$, a2);
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
          namespace odm {
            namespace oem {
              static PyObject *t_StreamingOemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOemWriter$SegmentWriter_init_(t_StreamingOemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOemWriter$SegmentWriter_finish(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingOemWriter$SegmentWriter_handleStep(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingOemWriter$SegmentWriter_init(t_StreamingOemWriter$SegmentWriter *self, PyObject *args);

              static PyMethodDef t_StreamingOemWriter$SegmentWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, finish, METH_O),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, handleStep, METH_O),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, init, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOemWriter$SegmentWriter)[] = {
                { Py_tp_methods, t_StreamingOemWriter$SegmentWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOemWriter$SegmentWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOemWriter$SegmentWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOemWriter$SegmentWriter, t_StreamingOemWriter$SegmentWriter, StreamingOemWriter$SegmentWriter);

              void t_StreamingOemWriter$SegmentWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOemWriter$SegmentWriter), &PY_TYPE_DEF(StreamingOemWriter$SegmentWriter), module, "StreamingOemWriter$SegmentWriter", 0);
              }

              void t_StreamingOemWriter$SegmentWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter$SegmentWriter), "class_", make_descriptor(StreamingOemWriter$SegmentWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter$SegmentWriter), "wrapfn_", make_descriptor(t_StreamingOemWriter$SegmentWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter$SegmentWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOemWriter$SegmentWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOemWriter$SegmentWriter::wrap_Object(StreamingOemWriter$SegmentWriter(((t_StreamingOemWriter$SegmentWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOemWriter$SegmentWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOemWriter$SegmentWriter_init_(t_StreamingOemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter a0((jobject) NULL);
                StreamingOemWriter$SegmentWriter object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter::initializeClass, &a0))
                {
                  INT_CALL(object = StreamingOemWriter$SegmentWriter(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_finish(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.finish(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "finish", arg);
                return NULL;
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_handleStep(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.handleStep(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
                return NULL;
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_init(t_StreamingOemWriter$SegmentWriter *self, PyObject *args)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.init(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "init", args);
                return NULL;
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
#include "org/hipparchus/stat/interval/ConfidenceInterval.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {

        ::java::lang::Class *ConfidenceInterval::class$ = NULL;
        jmethodID *ConfidenceInterval::mids$ = NULL;
        bool ConfidenceInterval::live$ = false;

        jclass ConfidenceInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/interval/ConfidenceInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getConfidenceLevel_9981f74b2d109da6] = env->getMethodID(cls, "getConfidenceLevel", "()D");
            mids$[mid_getLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getLowerBound", "()D");
            mids$[mid_getUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getUpperBound", "()D");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConfidenceInterval::ConfidenceInterval(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        jdouble ConfidenceInterval::getConfidenceLevel() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getConfidenceLevel_9981f74b2d109da6]);
        }

        jdouble ConfidenceInterval::getLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLowerBound_9981f74b2d109da6]);
        }

        jdouble ConfidenceInterval::getUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUpperBound_9981f74b2d109da6]);
        }

        ::java::lang::String ConfidenceInterval::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      namespace interval {
        static PyObject *t_ConfidenceInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConfidenceInterval_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConfidenceInterval_init_(t_ConfidenceInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConfidenceInterval_getConfidenceLevel(t_ConfidenceInterval *self);
        static PyObject *t_ConfidenceInterval_getLowerBound(t_ConfidenceInterval *self);
        static PyObject *t_ConfidenceInterval_getUpperBound(t_ConfidenceInterval *self);
        static PyObject *t_ConfidenceInterval_toString(t_ConfidenceInterval *self, PyObject *args);
        static PyObject *t_ConfidenceInterval_get__confidenceLevel(t_ConfidenceInterval *self, void *data);
        static PyObject *t_ConfidenceInterval_get__lowerBound(t_ConfidenceInterval *self, void *data);
        static PyObject *t_ConfidenceInterval_get__upperBound(t_ConfidenceInterval *self, void *data);
        static PyGetSetDef t_ConfidenceInterval__fields_[] = {
          DECLARE_GET_FIELD(t_ConfidenceInterval, confidenceLevel),
          DECLARE_GET_FIELD(t_ConfidenceInterval, lowerBound),
          DECLARE_GET_FIELD(t_ConfidenceInterval, upperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConfidenceInterval__methods_[] = {
          DECLARE_METHOD(t_ConfidenceInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfidenceInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfidenceInterval, getConfidenceLevel, METH_NOARGS),
          DECLARE_METHOD(t_ConfidenceInterval, getLowerBound, METH_NOARGS),
          DECLARE_METHOD(t_ConfidenceInterval, getUpperBound, METH_NOARGS),
          DECLARE_METHOD(t_ConfidenceInterval, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConfidenceInterval)[] = {
          { Py_tp_methods, t_ConfidenceInterval__methods_ },
          { Py_tp_init, (void *) t_ConfidenceInterval_init_ },
          { Py_tp_getset, t_ConfidenceInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConfidenceInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConfidenceInterval, t_ConfidenceInterval, ConfidenceInterval);

        void t_ConfidenceInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(ConfidenceInterval), &PY_TYPE_DEF(ConfidenceInterval), module, "ConfidenceInterval", 0);
        }

        void t_ConfidenceInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfidenceInterval), "class_", make_descriptor(ConfidenceInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfidenceInterval), "wrapfn_", make_descriptor(t_ConfidenceInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfidenceInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConfidenceInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConfidenceInterval::initializeClass, 1)))
            return NULL;
          return t_ConfidenceInterval::wrap_Object(ConfidenceInterval(((t_ConfidenceInterval *) arg)->object.this$));
        }
        static PyObject *t_ConfidenceInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConfidenceInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConfidenceInterval_init_(t_ConfidenceInterval *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          ConfidenceInterval object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = ConfidenceInterval(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConfidenceInterval_getConfidenceLevel(t_ConfidenceInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getConfidenceLevel());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConfidenceInterval_getLowerBound(t_ConfidenceInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLowerBound());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConfidenceInterval_getUpperBound(t_ConfidenceInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getUpperBound());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConfidenceInterval_toString(t_ConfidenceInterval *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(ConfidenceInterval), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_ConfidenceInterval_get__confidenceLevel(t_ConfidenceInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getConfidenceLevel());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConfidenceInterval_get__lowerBound(t_ConfidenceInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConfidenceInterval_get__upperBound(t_ConfidenceInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm01Header::class$ = NULL;
              jmethodID *SsrIgm01Header::mids$ = NULL;
              bool SsrIgm01Header::live$ = false;

              jclass SsrIgm01Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCrsIndicator_d6ab429752e7c267] = env->getMethodID(cls, "getCrsIndicator", "()I");
                  mids$[mid_setCrsIndicator_8fd427ab23829bf5] = env->getMethodID(cls, "setCrsIndicator", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm01Header::SsrIgm01Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jint SsrIgm01Header::getCrsIndicator() const
              {
                return env->callIntMethod(this$, mids$[mid_getCrsIndicator_d6ab429752e7c267]);
              }

              void SsrIgm01Header::setCrsIndicator(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCrsIndicator_8fd427ab23829bf5], a0);
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
              static PyObject *t_SsrIgm01Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm01Header_init_(t_SsrIgm01Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm01Header_getCrsIndicator(t_SsrIgm01Header *self);
              static PyObject *t_SsrIgm01Header_setCrsIndicator(t_SsrIgm01Header *self, PyObject *arg);
              static PyObject *t_SsrIgm01Header_get__crsIndicator(t_SsrIgm01Header *self, void *data);
              static int t_SsrIgm01Header_set__crsIndicator(t_SsrIgm01Header *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm01Header__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm01Header, crsIndicator),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm01Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm01Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Header, getCrsIndicator, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm01Header, setCrsIndicator, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm01Header)[] = {
                { Py_tp_methods, t_SsrIgm01Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm01Header_init_ },
                { Py_tp_getset, t_SsrIgm01Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm01Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm01Header, t_SsrIgm01Header, SsrIgm01Header);

              void t_SsrIgm01Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm01Header), &PY_TYPE_DEF(SsrIgm01Header), module, "SsrIgm01Header", 0);
              }

              void t_SsrIgm01Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Header), "class_", make_descriptor(SsrIgm01Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Header), "wrapfn_", make_descriptor(t_SsrIgm01Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm01Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm01Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm01Header::wrap_Object(SsrIgm01Header(((t_SsrIgm01Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm01Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm01Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm01Header_init_(t_SsrIgm01Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm01Header object((jobject) NULL);

                INT_CALL(object = SsrIgm01Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm01Header_getCrsIndicator(t_SsrIgm01Header *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getCrsIndicator());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm01Header_setCrsIndicator(t_SsrIgm01Header *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setCrsIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCrsIndicator", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm01Header_get__crsIndicator(t_SsrIgm01Header *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getCrsIndicator());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm01Header_set__crsIndicator(t_SsrIgm01Header *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setCrsIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "crsIndicator", arg);
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
#include "org/orekit/gnss/metric/messages/ssr/SsrHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            ::java::lang::Class *SsrHeader::class$ = NULL;
            jmethodID *SsrHeader::mids$ = NULL;
            bool SsrHeader::live$ = false;

            jclass SsrHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/SsrHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getIodSsr_d6ab429752e7c267] = env->getMethodID(cls, "getIodSsr", "()I");
                mids$[mid_getSsrEpoch1s_9981f74b2d109da6] = env->getMethodID(cls, "getSsrEpoch1s", "()D");
                mids$[mid_getSsrMultipleMessageIndicator_d6ab429752e7c267] = env->getMethodID(cls, "getSsrMultipleMessageIndicator", "()I");
                mids$[mid_getSsrProviderId_d6ab429752e7c267] = env->getMethodID(cls, "getSsrProviderId", "()I");
                mids$[mid_getSsrSolutionId_d6ab429752e7c267] = env->getMethodID(cls, "getSsrSolutionId", "()I");
                mids$[mid_getSsrUpdateInterval_d6ab429752e7c267] = env->getMethodID(cls, "getSsrUpdateInterval", "()I");
                mids$[mid_setIodSsr_8fd427ab23829bf5] = env->getMethodID(cls, "setIodSsr", "(I)V");
                mids$[mid_setSsrEpoch1s_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSsrEpoch1s", "(D)V");
                mids$[mid_setSsrMultipleMessageIndicator_8fd427ab23829bf5] = env->getMethodID(cls, "setSsrMultipleMessageIndicator", "(I)V");
                mids$[mid_setSsrProviderId_8fd427ab23829bf5] = env->getMethodID(cls, "setSsrProviderId", "(I)V");
                mids$[mid_setSsrSolutionId_8fd427ab23829bf5] = env->getMethodID(cls, "setSsrSolutionId", "(I)V");
                mids$[mid_setSsrUpdateInterval_8fd427ab23829bf5] = env->getMethodID(cls, "setSsrUpdateInterval", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrHeader::SsrHeader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jint SsrHeader::getIodSsr() const
            {
              return env->callIntMethod(this$, mids$[mid_getIodSsr_d6ab429752e7c267]);
            }

            jdouble SsrHeader::getSsrEpoch1s() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSsrEpoch1s_9981f74b2d109da6]);
            }

            jint SsrHeader::getSsrMultipleMessageIndicator() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrMultipleMessageIndicator_d6ab429752e7c267]);
            }

            jint SsrHeader::getSsrProviderId() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrProviderId_d6ab429752e7c267]);
            }

            jint SsrHeader::getSsrSolutionId() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrSolutionId_d6ab429752e7c267]);
            }

            jint SsrHeader::getSsrUpdateInterval() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrUpdateInterval_d6ab429752e7c267]);
            }

            void SsrHeader::setIodSsr(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIodSsr_8fd427ab23829bf5], a0);
            }

            void SsrHeader::setSsrEpoch1s(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrEpoch1s_1ad26e8c8c0cd65b], a0);
            }

            void SsrHeader::setSsrMultipleMessageIndicator(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrMultipleMessageIndicator_8fd427ab23829bf5], a0);
            }

            void SsrHeader::setSsrProviderId(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrProviderId_8fd427ab23829bf5], a0);
            }

            void SsrHeader::setSsrSolutionId(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrSolutionId_8fd427ab23829bf5], a0);
            }

            void SsrHeader::setSsrUpdateInterval(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrUpdateInterval_8fd427ab23829bf5], a0);
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
            static PyObject *t_SsrHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SsrHeader_init_(t_SsrHeader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SsrHeader_getIodSsr(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrEpoch1s(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrMultipleMessageIndicator(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrProviderId(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrSolutionId(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrUpdateInterval(t_SsrHeader *self);
            static PyObject *t_SsrHeader_setIodSsr(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrEpoch1s(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrProviderId(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrSolutionId(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrUpdateInterval(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_get__iodSsr(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__iodSsr(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrEpoch1s(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrEpoch1s(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrMultipleMessageIndicator(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrProviderId(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrProviderId(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrSolutionId(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrSolutionId(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrUpdateInterval(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrUpdateInterval(t_SsrHeader *self, PyObject *arg, void *data);
            static PyGetSetDef t_SsrHeader__fields_[] = {
              DECLARE_GETSET_FIELD(t_SsrHeader, iodSsr),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrEpoch1s),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrMultipleMessageIndicator),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrProviderId),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrSolutionId),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrUpdateInterval),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SsrHeader__methods_[] = {
              DECLARE_METHOD(t_SsrHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrHeader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrHeader, getIodSsr, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrEpoch1s, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrMultipleMessageIndicator, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrProviderId, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrSolutionId, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrUpdateInterval, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, setIodSsr, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrEpoch1s, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrMultipleMessageIndicator, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrProviderId, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrSolutionId, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrUpdateInterval, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrHeader)[] = {
              { Py_tp_methods, t_SsrHeader__methods_ },
              { Py_tp_init, (void *) t_SsrHeader_init_ },
              { Py_tp_getset, t_SsrHeader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrHeader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SsrHeader, t_SsrHeader, SsrHeader);

            void t_SsrHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrHeader), &PY_TYPE_DEF(SsrHeader), module, "SsrHeader", 0);
            }

            void t_SsrHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrHeader), "class_", make_descriptor(SsrHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrHeader), "wrapfn_", make_descriptor(t_SsrHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrHeader::initializeClass, 1)))
                return NULL;
              return t_SsrHeader::wrap_Object(SsrHeader(((t_SsrHeader *) arg)->object.this$));
            }
            static PyObject *t_SsrHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SsrHeader_init_(t_SsrHeader *self, PyObject *args, PyObject *kwds)
            {
              SsrHeader object((jobject) NULL);

              INT_CALL(object = SsrHeader());
              self->object = object;

              return 0;
            }

            static PyObject *t_SsrHeader_getIodSsr(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIodSsr());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrEpoch1s(t_SsrHeader *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSsrEpoch1s());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SsrHeader_getSsrMultipleMessageIndicator(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrMultipleMessageIndicator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrProviderId(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrProviderId());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrSolutionId(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrSolutionId());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrUpdateInterval(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrUpdateInterval());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_setIodSsr(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIodSsr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIodSsr", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrEpoch1s(t_SsrHeader *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSsrEpoch1s(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrEpoch1s", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSsrMultipleMessageIndicator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrMultipleMessageIndicator", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrProviderId(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSsrProviderId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrProviderId", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrSolutionId(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSsrSolutionId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrSolutionId", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrUpdateInterval(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSsrUpdateInterval(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrUpdateInterval", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_get__iodSsr(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIodSsr());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__iodSsr(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIodSsr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iodSsr", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrEpoch1s(t_SsrHeader *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSsrEpoch1s());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SsrHeader_set__ssrEpoch1s(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSsrEpoch1s(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrEpoch1s", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrMultipleMessageIndicator(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrMultipleMessageIndicator());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSsrMultipleMessageIndicator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrMultipleMessageIndicator", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrProviderId(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrProviderId());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrProviderId(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSsrProviderId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrProviderId", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrSolutionId(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrSolutionId());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrSolutionId(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSsrSolutionId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrSolutionId", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrUpdateInterval(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrUpdateInterval());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrUpdateInterval(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSsrUpdateInterval(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrUpdateInterval", arg);
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
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeInterpolator::class$ = NULL;
      jmethodID *FieldTimeInterpolator::mids$ = NULL;
      bool FieldTimeInterpolator::live$ = false;

      jclass FieldTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getExtrapolationThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_d6ab429752e7c267] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_d751c1a57012b438] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_3e3236a5fd16fc74] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_5e47610c970258e7] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_f4186cd94813d116] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_ecda3df535f73158] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeStamped;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble FieldTimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_9981f74b2d109da6]);
      }

      jint FieldTimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_d6ab429752e7c267]);
      }

      ::java::util::List FieldTimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_d751c1a57012b438]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_3e3236a5fd16fc74], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_5e47610c970258e7], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_f4186cd94813d116], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_ecda3df535f73158], a0.this$, a1.this$));
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
      static PyObject *t_FieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeInterpolator_of_(t_FieldTimeInterpolator *self, PyObject *args);
      static PyObject *t_FieldTimeInterpolator_getExtrapolationThreshold(t_FieldTimeInterpolator *self);
      static PyObject *t_FieldTimeInterpolator_getNbInterpolationPoints(t_FieldTimeInterpolator *self);
      static PyObject *t_FieldTimeInterpolator_getSubInterpolators(t_FieldTimeInterpolator *self);
      static PyObject *t_FieldTimeInterpolator_interpolate(t_FieldTimeInterpolator *self, PyObject *args);
      static PyObject *t_FieldTimeInterpolator_get__extrapolationThreshold(t_FieldTimeInterpolator *self, void *data);
      static PyObject *t_FieldTimeInterpolator_get__nbInterpolationPoints(t_FieldTimeInterpolator *self, void *data);
      static PyObject *t_FieldTimeInterpolator_get__subInterpolators(t_FieldTimeInterpolator *self, void *data);
      static PyObject *t_FieldTimeInterpolator_get__parameters_(t_FieldTimeInterpolator *self, void *data);
      static PyGetSetDef t_FieldTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeInterpolator)[] = {
        { Py_tp_methods, t_FieldTimeInterpolator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeInterpolator, t_FieldTimeInterpolator, FieldTimeInterpolator);
      PyObject *t_FieldTimeInterpolator::wrap_Object(const FieldTimeInterpolator& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeInterpolator *self = (t_FieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeInterpolator *self = (t_FieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeInterpolator), &PY_TYPE_DEF(FieldTimeInterpolator), module, "FieldTimeInterpolator", 0);
      }

      void t_FieldTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeInterpolator), "class_", make_descriptor(FieldTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeInterpolator), "wrapfn_", make_descriptor(t_FieldTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldTimeInterpolator::wrap_Object(FieldTimeInterpolator(((t_FieldTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeInterpolator_of_(t_FieldTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeInterpolator_getExtrapolationThreshold(t_FieldTimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FieldTimeInterpolator_getNbInterpolationPoints(t_FieldTimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldTimeInterpolator_getSubInterpolators(t_FieldTimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldTimeInterpolator_interpolate(t_FieldTimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_FieldTimeInterpolator_get__parameters_(t_FieldTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeInterpolator_get__extrapolationThreshold(t_FieldTimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_FieldTimeInterpolator_get__nbInterpolationPoints(t_FieldTimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldTimeInterpolator_get__subInterpolators(t_FieldTimeInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/L1TransformProvider.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *L1TransformProvider::class$ = NULL;
      jmethodID *L1TransformProvider::mids$ = NULL;
      bool L1TransformProvider::live$ = false;

      jclass L1TransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/L1TransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6a627f83556e9294] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");
          mids$[mid_getStaticTransform_6e492420312934f1] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_3b5ee2ab7cc035a5] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_02ca17ac51b6a4b2] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_286745ef54e0a7f6] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      L1TransformProvider::L1TransformProvider(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a627f83556e9294, a0.this$, a1.this$)) {}

      ::org::orekit::frames::StaticTransform L1TransformProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_6e492420312934f1], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform L1TransformProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_3b5ee2ab7cc035a5], a0.this$));
      }

      ::org::orekit::frames::Transform L1TransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_02ca17ac51b6a4b2], a0.this$));
      }

      ::org::orekit::frames::FieldTransform L1TransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_286745ef54e0a7f6], a0.this$));
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
      static PyObject *t_L1TransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_L1TransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_L1TransformProvider_init_(t_L1TransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_L1TransformProvider_getStaticTransform(t_L1TransformProvider *self, PyObject *args);
      static PyObject *t_L1TransformProvider_getTransform(t_L1TransformProvider *self, PyObject *args);

      static PyMethodDef t_L1TransformProvider__methods_[] = {
        DECLARE_METHOD(t_L1TransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L1TransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L1TransformProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_L1TransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(L1TransformProvider)[] = {
        { Py_tp_methods, t_L1TransformProvider__methods_ },
        { Py_tp_init, (void *) t_L1TransformProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(L1TransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(L1TransformProvider, t_L1TransformProvider, L1TransformProvider);

      void t_L1TransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(L1TransformProvider), &PY_TYPE_DEF(L1TransformProvider), module, "L1TransformProvider", 0);
      }

      void t_L1TransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1TransformProvider), "class_", make_descriptor(L1TransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1TransformProvider), "wrapfn_", make_descriptor(t_L1TransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1TransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_L1TransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, L1TransformProvider::initializeClass, 1)))
          return NULL;
        return t_L1TransformProvider::wrap_Object(L1TransformProvider(((t_L1TransformProvider *) arg)->object.this$));
      }
      static PyObject *t_L1TransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, L1TransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_L1TransformProvider_init_(t_L1TransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        L1TransformProvider object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = L1TransformProvider(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_L1TransformProvider_getStaticTransform(t_L1TransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_L1TransformProvider_getTransform(t_L1TransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }
    }
  }
}
