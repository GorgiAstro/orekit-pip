#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *TDOA::class$ = NULL;
        jmethodID *TDOA::mids$ = NULL;
        bool TDOA::live$ = false;
        ::java::lang::String *TDOA::MEASUREMENT_TYPE = NULL;

        jclass TDOA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/TDOA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3001df949fd9e0a4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getPrimeStation_58e3efb0e9576916] = env->getMethodID(cls, "getPrimeStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getSecondStation_58e3efb0e9576916] = env->getMethodID(cls, "getSecondStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TDOA::TDOA(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_3001df949fd9e0a4, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation TDOA::getPrimeStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getPrimeStation_58e3efb0e9576916]));
        }

        ::org::orekit::estimation::measurements::GroundStation TDOA::getSecondStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getSecondStation_58e3efb0e9576916]));
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
        static PyObject *t_TDOA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TDOA_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TDOA_of_(t_TDOA *self, PyObject *args);
        static int t_TDOA_init_(t_TDOA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TDOA_getPrimeStation(t_TDOA *self);
        static PyObject *t_TDOA_getSecondStation(t_TDOA *self);
        static PyObject *t_TDOA_get__primeStation(t_TDOA *self, void *data);
        static PyObject *t_TDOA_get__secondStation(t_TDOA *self, void *data);
        static PyObject *t_TDOA_get__parameters_(t_TDOA *self, void *data);
        static PyGetSetDef t_TDOA__fields_[] = {
          DECLARE_GET_FIELD(t_TDOA, primeStation),
          DECLARE_GET_FIELD(t_TDOA, secondStation),
          DECLARE_GET_FIELD(t_TDOA, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TDOA__methods_[] = {
          DECLARE_METHOD(t_TDOA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDOA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDOA, of_, METH_VARARGS),
          DECLARE_METHOD(t_TDOA, getPrimeStation, METH_NOARGS),
          DECLARE_METHOD(t_TDOA, getSecondStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TDOA)[] = {
          { Py_tp_methods, t_TDOA__methods_ },
          { Py_tp_init, (void *) t_TDOA_init_ },
          { Py_tp_getset, t_TDOA__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TDOA)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(TDOA, t_TDOA, TDOA);
        PyObject *t_TDOA::wrap_Object(const TDOA& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TDOA::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TDOA *self = (t_TDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TDOA::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TDOA::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TDOA *self = (t_TDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TDOA::install(PyObject *module)
        {
          installType(&PY_TYPE(TDOA), &PY_TYPE_DEF(TDOA), module, "TDOA", 0);
        }

        void t_TDOA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "class_", make_descriptor(TDOA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "wrapfn_", make_descriptor(t_TDOA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "boxfn_", make_descriptor(boxObject));
          env->getClass(TDOA::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "MEASUREMENT_TYPE", make_descriptor(j2p(*TDOA::MEASUREMENT_TYPE)));
        }

        static PyObject *t_TDOA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TDOA::initializeClass, 1)))
            return NULL;
          return t_TDOA::wrap_Object(TDOA(((t_TDOA *) arg)->object.this$));
        }
        static PyObject *t_TDOA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TDOA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TDOA_of_(t_TDOA *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_TDOA_init_(t_TDOA *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          TDOA object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = TDOA(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(TDOA);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TDOA_getPrimeStation(t_TDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_TDOA_getSecondStation(t_TDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_TDOA_get__parameters_(t_TDOA *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_TDOA_get__primeStation(t_TDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_TDOA_get__secondStation(t_TDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Sin.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sin::class$ = NULL;
        jmethodID *Sin::mids$ = NULL;
        bool Sin::live$ = false;

        jclass Sin::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sin");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sin::Sin() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Sin::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sin::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Sin_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sin_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sin_init_(t_Sin *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sin_value(t_Sin *self, PyObject *args);

        static PyMethodDef t_Sin__methods_[] = {
          DECLARE_METHOD(t_Sin, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sin, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sin, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sin)[] = {
          { Py_tp_methods, t_Sin__methods_ },
          { Py_tp_init, (void *) t_Sin_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sin)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sin, t_Sin, Sin);

        void t_Sin::install(PyObject *module)
        {
          installType(&PY_TYPE(Sin), &PY_TYPE_DEF(Sin), module, "Sin", 0);
        }

        void t_Sin::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sin), "class_", make_descriptor(Sin::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sin), "wrapfn_", make_descriptor(t_Sin::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sin), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sin_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sin::initializeClass, 1)))
            return NULL;
          return t_Sin::wrap_Object(Sin(((t_Sin *) arg)->object.this$));
        }
        static PyObject *t_Sin_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sin::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sin_init_(t_Sin *self, PyObject *args, PyObject *kwds)
        {
          Sin object((jobject) NULL);

          INT_CALL(object = Sin());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sin_value(t_Sin *self, PyObject *args)
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
#include "org/orekit/files/ccsds/utils/parsing/PythonAbstractMessageParser.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
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
                mids$[mid_build_4d26fd885228c716] = env->getMethodID(cls, "build", "()Ljava/lang/Object;");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonAbstractMessageParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonAbstractMessageParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonAbstractMessageParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_492808a339bfa35f]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractMessageParser_reset2(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_492808a339bfa35f]);
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
#include "org/orekit/propagation/events/FieldAltitudeDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/BodyShape.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAltitudeDetector::class$ = NULL;
        jmethodID *FieldAltitudeDetector::mids$ = NULL;
        bool FieldAltitudeDetector::live$ = false;

        jclass FieldAltitudeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAltitudeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5eb423019e583d00] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_daaca5e108517253] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_87e4531e9decf5a6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/BodyShape;)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getAltitude_eba8e72a22c984ac] = env->getMethodID(cls, "getAltitude", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getBodyShape_6f78da94fd048d9d] = env->getMethodID(cls, "getBodyShape", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_11da04d559f0cfb7] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAltitudeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldAltitudeDetector::FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::BodyShape & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5eb423019e583d00, a0.this$, a1.this$)) {}

        FieldAltitudeDetector::FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::bodies::BodyShape & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_daaca5e108517253, a0.this$, a1.this$, a2.this$)) {}

        FieldAltitudeDetector::FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::bodies::BodyShape & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_87e4531e9decf5a6, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldAltitudeDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldAltitudeDetector::getAltitude() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAltitude_eba8e72a22c984ac]));
        }

        ::org::orekit::bodies::BodyShape FieldAltitudeDetector::getBodyShape() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBodyShape_6f78da94fd048d9d]));
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
        static PyObject *t_FieldAltitudeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAltitudeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAltitudeDetector_of_(t_FieldAltitudeDetector *self, PyObject *args);
        static int t_FieldAltitudeDetector_init_(t_FieldAltitudeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldAltitudeDetector_g(t_FieldAltitudeDetector *self, PyObject *args);
        static PyObject *t_FieldAltitudeDetector_getAltitude(t_FieldAltitudeDetector *self);
        static PyObject *t_FieldAltitudeDetector_getBodyShape(t_FieldAltitudeDetector *self);
        static PyObject *t_FieldAltitudeDetector_get__altitude(t_FieldAltitudeDetector *self, void *data);
        static PyObject *t_FieldAltitudeDetector_get__bodyShape(t_FieldAltitudeDetector *self, void *data);
        static PyObject *t_FieldAltitudeDetector_get__parameters_(t_FieldAltitudeDetector *self, void *data);
        static PyGetSetDef t_FieldAltitudeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAltitudeDetector, altitude),
          DECLARE_GET_FIELD(t_FieldAltitudeDetector, bodyShape),
          DECLARE_GET_FIELD(t_FieldAltitudeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAltitudeDetector__methods_[] = {
          DECLARE_METHOD(t_FieldAltitudeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAltitudeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAltitudeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAltitudeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldAltitudeDetector, getAltitude, METH_NOARGS),
          DECLARE_METHOD(t_FieldAltitudeDetector, getBodyShape, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAltitudeDetector)[] = {
          { Py_tp_methods, t_FieldAltitudeDetector__methods_ },
          { Py_tp_init, (void *) t_FieldAltitudeDetector_init_ },
          { Py_tp_getset, t_FieldAltitudeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAltitudeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldAltitudeDetector, t_FieldAltitudeDetector, FieldAltitudeDetector);
        PyObject *t_FieldAltitudeDetector::wrap_Object(const FieldAltitudeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAltitudeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAltitudeDetector *self = (t_FieldAltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAltitudeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAltitudeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAltitudeDetector *self = (t_FieldAltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAltitudeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAltitudeDetector), &PY_TYPE_DEF(FieldAltitudeDetector), module, "FieldAltitudeDetector", 0);
        }

        void t_FieldAltitudeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAltitudeDetector), "class_", make_descriptor(FieldAltitudeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAltitudeDetector), "wrapfn_", make_descriptor(t_FieldAltitudeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAltitudeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAltitudeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAltitudeDetector::initializeClass, 1)))
            return NULL;
          return t_FieldAltitudeDetector::wrap_Object(FieldAltitudeDetector(((t_FieldAltitudeDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldAltitudeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAltitudeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAltitudeDetector_of_(t_FieldAltitudeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldAltitudeDetector_init_(t_FieldAltitudeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::BodyShape a1((jobject) NULL);
              FieldAltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
              {
                INT_CALL(object = FieldAltitudeDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::BodyShape a2((jobject) NULL);
              FieldAltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldAltitudeDetector(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::bodies::BodyShape a3((jobject) NULL);
              FieldAltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "KKKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                INT_CALL(object = FieldAltitudeDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldAltitudeDetector_g(t_FieldAltitudeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldAltitudeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldAltitudeDetector_getAltitude(t_FieldAltitudeDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getAltitude());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAltitudeDetector_getBodyShape(t_FieldAltitudeDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_FieldAltitudeDetector_get__parameters_(t_FieldAltitudeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAltitudeDetector_get__altitude(t_FieldAltitudeDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getAltitude());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldAltitudeDetector_get__bodyShape(t_FieldAltitudeDetector *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/NodesSet.h"
#include "java/util/Iterator.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *NodesSet::class$ = NULL;
        jmethodID *NodesSet::mids$ = NULL;
        bool NodesSet::live$ = false;

        jclass NodesSet::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/NodesSet");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_add_083ba3410c8af631] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)V");
            mids$[mid_addAll_616dc59fbc71e214] = env->getMethodID(cls, "addAll", "(Ljava/lang/Iterable;)V");
            mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NodesSet::NodesSet() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void NodesSet::add(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_add_083ba3410c8af631], a0.this$);
        }

        void NodesSet::addAll(const ::java::lang::Iterable & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAll_616dc59fbc71e214], a0.this$);
        }

        ::java::util::Iterator NodesSet::iterator() const
        {
          return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
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
        static PyObject *t_NodesSet_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodesSet_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodesSet_of_(t_NodesSet *self, PyObject *args);
        static int t_NodesSet_init_(t_NodesSet *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NodesSet_add(t_NodesSet *self, PyObject *arg);
        static PyObject *t_NodesSet_addAll(t_NodesSet *self, PyObject *arg);
        static PyObject *t_NodesSet_iterator(t_NodesSet *self);
        static PyObject *t_NodesSet_get__parameters_(t_NodesSet *self, void *data);
        static PyGetSetDef t_NodesSet__fields_[] = {
          DECLARE_GET_FIELD(t_NodesSet, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NodesSet__methods_[] = {
          DECLARE_METHOD(t_NodesSet, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodesSet, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodesSet, of_, METH_VARARGS),
          DECLARE_METHOD(t_NodesSet, add, METH_O),
          DECLARE_METHOD(t_NodesSet, addAll, METH_O),
          DECLARE_METHOD(t_NodesSet, iterator, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NodesSet)[] = {
          { Py_tp_methods, t_NodesSet__methods_ },
          { Py_tp_init, (void *) t_NodesSet_init_ },
          { Py_tp_getset, t_NodesSet__fields_ },
          { Py_tp_iter, (void *) ((PyObject *(*)(t_NodesSet *)) get_generic_iterator< t_NodesSet >) },
          { Py_tp_iternext, (void *) 0 },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NodesSet)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NodesSet, t_NodesSet, NodesSet);
        PyObject *t_NodesSet::wrap_Object(const NodesSet& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodesSet::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodesSet *self = (t_NodesSet *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NodesSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodesSet::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodesSet *self = (t_NodesSet *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NodesSet::install(PyObject *module)
        {
          installType(&PY_TYPE(NodesSet), &PY_TYPE_DEF(NodesSet), module, "NodesSet", 0);
        }

        void t_NodesSet::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodesSet), "class_", make_descriptor(NodesSet::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodesSet), "wrapfn_", make_descriptor(t_NodesSet::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodesSet), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NodesSet_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NodesSet::initializeClass, 1)))
            return NULL;
          return t_NodesSet::wrap_Object(NodesSet(((t_NodesSet *) arg)->object.this$));
        }
        static PyObject *t_NodesSet_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NodesSet::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NodesSet_of_(t_NodesSet *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NodesSet_init_(t_NodesSet *self, PyObject *args, PyObject *kwds)
        {
          NodesSet object((jobject) NULL);

          INT_CALL(object = NodesSet());
          self->object = object;

          return 0;
        }

        static PyObject *t_NodesSet_add(t_NodesSet *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(self->object.add(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "add", arg);
          return NULL;
        }

        static PyObject *t_NodesSet_addAll(t_NodesSet *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(self->object.addAll(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAll", arg);
          return NULL;
        }

        static PyObject *t_NodesSet_iterator(t_NodesSet *self)
        {
          ::java::util::Iterator result((jobject) NULL);
          OBJ_CALL(result = self->object.iterator());
          return ::java::util::t_Iterator::wrap_Object(result);
        }
        static PyObject *t_NodesSet_get__parameters_(t_NodesSet *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
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
            mids$[mid_apply_c48805c2dda937c6] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
            mids$[mid_apply_f9fa256dcaa658f0] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_apply_f7334896549e9ce0] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::Point Transform::apply(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_apply_c48805c2dda937c6], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Hyperplane Transform::apply(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Hyperplane(env->callObjectMethod(this$, mids$[mid_apply_f9fa256dcaa658f0], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Transform::apply(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0, const ::org::hipparchus::geometry::partitioning::Hyperplane & a1, const ::org::hipparchus::geometry::partitioning::Hyperplane & a2) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_apply_f7334896549e9ce0], a0.this$, a1.this$, a2.this$));
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$TimeSystemConsumer::class$ = NULL;
            jmethodID *ParseToken$TimeSystemConsumer::mids$ = NULL;
            bool ParseToken$TimeSystemConsumer::live$ = false;

            jclass ParseToken$TimeSystemConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_08d7048316d8d7b2] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/definitions/TimeSystem;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$TimeSystemConsumer::accept(const ::org::orekit::files::ccsds::definitions::TimeSystem & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_08d7048316d8d7b2], a0.this$);
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
            static PyObject *t_ParseToken$TimeSystemConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$TimeSystemConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$TimeSystemConsumer_accept(t_ParseToken$TimeSystemConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$TimeSystemConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$TimeSystemConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$TimeSystemConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$TimeSystemConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$TimeSystemConsumer)[] = {
              { Py_tp_methods, t_ParseToken$TimeSystemConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$TimeSystemConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$TimeSystemConsumer, t_ParseToken$TimeSystemConsumer, ParseToken$TimeSystemConsumer);

            void t_ParseToken$TimeSystemConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$TimeSystemConsumer), &PY_TYPE_DEF(ParseToken$TimeSystemConsumer), module, "ParseToken$TimeSystemConsumer", 0);
            }

            void t_ParseToken$TimeSystemConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$TimeSystemConsumer), "class_", make_descriptor(ParseToken$TimeSystemConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$TimeSystemConsumer), "wrapfn_", make_descriptor(t_ParseToken$TimeSystemConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$TimeSystemConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$TimeSystemConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$TimeSystemConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$TimeSystemConsumer::wrap_Object(ParseToken$TimeSystemConsumer(((t_ParseToken$TimeSystemConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$TimeSystemConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$TimeSystemConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$TimeSystemConsumer_accept(t_ParseToken$TimeSystemConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_TimeSystem::parameters_))
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
#include "org/orekit/files/rinex/navigation/TimeSystemCorrection.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *TimeSystemCorrection::class$ = NULL;
          jmethodID *TimeSystemCorrection::mids$ = NULL;
          bool TimeSystemCorrection::live$ = false;

          jclass TimeSystemCorrection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/TimeSystemCorrection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9f5c2240387841bc] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DD)V");
              mids$[mid_getReferenceDate_85703d13e302437e] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTimeSystemCorrectionA0_dff5885c2c873297] = env->getMethodID(cls, "getTimeSystemCorrectionA0", "()D");
              mids$[mid_getTimeSystemCorrectionA1_dff5885c2c873297] = env->getMethodID(cls, "getTimeSystemCorrectionA1", "()D");
              mids$[mid_getTimeSystemCorrectionType_11b109bd155ca898] = env->getMethodID(cls, "getTimeSystemCorrectionType", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TimeSystemCorrection::TimeSystemCorrection(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9f5c2240387841bc, a0.this$, a1.this$, a2, a3)) {}

          ::org::orekit::time::AbsoluteDate TimeSystemCorrection::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_85703d13e302437e]));
          }

          jdouble TimeSystemCorrection::getTimeSystemCorrectionA0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTimeSystemCorrectionA0_dff5885c2c873297]);
          }

          jdouble TimeSystemCorrection::getTimeSystemCorrectionA1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTimeSystemCorrectionA1_dff5885c2c873297]);
          }

          ::java::lang::String TimeSystemCorrection::getTimeSystemCorrectionType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimeSystemCorrectionType_11b109bd155ca898]));
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
          static PyObject *t_TimeSystemCorrection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystemCorrection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TimeSystemCorrection_init_(t_TimeSystemCorrection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TimeSystemCorrection_getReferenceDate(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA0(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA1(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionType(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_get__referenceDate(t_TimeSystemCorrection *self, void *data);
          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA0(t_TimeSystemCorrection *self, void *data);
          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA1(t_TimeSystemCorrection *self, void *data);
          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionType(t_TimeSystemCorrection *self, void *data);
          static PyGetSetDef t_TimeSystemCorrection__fields_[] = {
            DECLARE_GET_FIELD(t_TimeSystemCorrection, referenceDate),
            DECLARE_GET_FIELD(t_TimeSystemCorrection, timeSystemCorrectionA0),
            DECLARE_GET_FIELD(t_TimeSystemCorrection, timeSystemCorrectionA1),
            DECLARE_GET_FIELD(t_TimeSystemCorrection, timeSystemCorrectionType),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeSystemCorrection__methods_[] = {
            DECLARE_METHOD(t_TimeSystemCorrection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystemCorrection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystemCorrection, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_TimeSystemCorrection, getTimeSystemCorrectionA0, METH_NOARGS),
            DECLARE_METHOD(t_TimeSystemCorrection, getTimeSystemCorrectionA1, METH_NOARGS),
            DECLARE_METHOD(t_TimeSystemCorrection, getTimeSystemCorrectionType, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeSystemCorrection)[] = {
            { Py_tp_methods, t_TimeSystemCorrection__methods_ },
            { Py_tp_init, (void *) t_TimeSystemCorrection_init_ },
            { Py_tp_getset, t_TimeSystemCorrection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeSystemCorrection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TimeSystemCorrection, t_TimeSystemCorrection, TimeSystemCorrection);

          void t_TimeSystemCorrection::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeSystemCorrection), &PY_TYPE_DEF(TimeSystemCorrection), module, "TimeSystemCorrection", 0);
          }

          void t_TimeSystemCorrection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystemCorrection), "class_", make_descriptor(TimeSystemCorrection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystemCorrection), "wrapfn_", make_descriptor(t_TimeSystemCorrection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystemCorrection), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TimeSystemCorrection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeSystemCorrection::initializeClass, 1)))
              return NULL;
            return t_TimeSystemCorrection::wrap_Object(TimeSystemCorrection(((t_TimeSystemCorrection *) arg)->object.this$));
          }
          static PyObject *t_TimeSystemCorrection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeSystemCorrection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TimeSystemCorrection_init_(t_TimeSystemCorrection *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            TimeSystemCorrection object((jobject) NULL);

            if (!parseArgs(args, "skDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeSystemCorrection(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TimeSystemCorrection_getReferenceDate(t_TimeSystemCorrection *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA0(t_TimeSystemCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTimeSystemCorrectionA0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA1(t_TimeSystemCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTimeSystemCorrectionA1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionType(t_TimeSystemCorrection *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystemCorrectionType());
            return j2p(result);
          }

          static PyObject *t_TimeSystemCorrection_get__referenceDate(t_TimeSystemCorrection *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA0(t_TimeSystemCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTimeSystemCorrectionA0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA1(t_TimeSystemCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTimeSystemCorrectionA1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionType(t_TimeSystemCorrection *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystemCorrectionType());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/MatrixUtils.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "org/hipparchus/linear/AnyMatrix.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
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
          mids$[mid_bigFractionMatrixToRealMatrix_d5bd149cee6814f0] = env->getStaticMethodID(cls, "bigFractionMatrixToRealMatrix", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_blockInverse_cc827997ddc9899a] = env->getStaticMethodID(cls, "blockInverse", "(Lorg/hipparchus/linear/RealMatrix;I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_checkAdditionCompatible_7424e164afa9395a] = env->getStaticMethodID(cls, "checkAdditionCompatible", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkColumnIndex_cff55cfde0e4b27b] = env->getStaticMethodID(cls, "checkColumnIndex", "(Lorg/hipparchus/linear/AnyMatrix;I)V");
          mids$[mid_checkMatrixIndex_bf0129d8c81da627] = env->getStaticMethodID(cls, "checkMatrixIndex", "(Lorg/hipparchus/linear/AnyMatrix;II)V");
          mids$[mid_checkMultiplicationCompatible_7424e164afa9395a] = env->getStaticMethodID(cls, "checkMultiplicationCompatible", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkRowIndex_cff55cfde0e4b27b] = env->getStaticMethodID(cls, "checkRowIndex", "(Lorg/hipparchus/linear/AnyMatrix;I)V");
          mids$[mid_checkSameColumnDimension_7424e164afa9395a] = env->getStaticMethodID(cls, "checkSameColumnDimension", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkSameRowDimension_7424e164afa9395a] = env->getStaticMethodID(cls, "checkSameRowDimension", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkSubMatrixIndex_d5740dc7043aa00f] = env->getStaticMethodID(cls, "checkSubMatrixIndex", "(Lorg/hipparchus/linear/AnyMatrix;[I[I)V");
          mids$[mid_checkSubMatrixIndex_d365082b0116d2a6] = env->getStaticMethodID(cls, "checkSubMatrixIndex", "(Lorg/hipparchus/linear/AnyMatrix;IIII)V");
          mids$[mid_checkSubtractionCompatible_7424e164afa9395a] = env->getStaticMethodID(cls, "checkSubtractionCompatible", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkSymmetric_21a79182f4dd9085] = env->getStaticMethodID(cls, "checkSymmetric", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_createColumnFieldMatrix_aa1a2b34c91cf2d0] = env->getStaticMethodID(cls, "createColumnFieldMatrix", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createColumnRealMatrix_1c14cec8544f26fc] = env->getStaticMethodID(cls, "createColumnRealMatrix", "([D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createFieldDiagonalMatrix_aa1a2b34c91cf2d0] = env->getStaticMethodID(cls, "createFieldDiagonalMatrix", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldIdentityMatrix_f8cc4c60c0edcead] = env->getStaticMethodID(cls, "createFieldIdentityMatrix", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldMatrix_fd0e2f11fcb2162d] = env->getStaticMethodID(cls, "createFieldMatrix", "([[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldMatrix_e8e9ca8cc1d2c247] = env->getStaticMethodID(cls, "createFieldMatrix", "(Lorg/hipparchus/Field;II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldVector_ec7b1509e2f2d6fd] = env->getStaticMethodID(cls, "createFieldVector", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_createFieldVector_02962f1fea91a3cb] = env->getStaticMethodID(cls, "createFieldVector", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_createRealDiagonalMatrix_1c14cec8544f26fc] = env->getStaticMethodID(cls, "createRealDiagonalMatrix", "([D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealIdentityMatrix_7b5d3ee1211255a1] = env->getStaticMethodID(cls, "createRealIdentityMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealMatrix_62c0bfb50b5dacc0] = env->getStaticMethodID(cls, "createRealMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealMatrix_4410ec92987b66e9] = env->getStaticMethodID(cls, "createRealMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealVector_a740f7f012972b3a] = env->getStaticMethodID(cls, "createRealVector", "([D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_createRealVector_b686e6fcbf82678b] = env->getStaticMethodID(cls, "createRealVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_createRowFieldMatrix_aa1a2b34c91cf2d0] = env->getStaticMethodID(cls, "createRowFieldMatrix", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createRowRealMatrix_1c14cec8544f26fc] = env->getStaticMethodID(cls, "createRowRealMatrix", "([D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_fractionMatrixToRealMatrix_d5bd149cee6814f0] = env->getStaticMethodID(cls, "fractionMatrixToRealMatrix", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_inverse_e9b72403ad502221] = env->getStaticMethodID(cls, "inverse", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_inverse_b999dd1683240cd1] = env->getStaticMethodID(cls, "inverse", "(Lorg/hipparchus/linear/RealMatrix;D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_isSymmetric_fa6807f9c03f4acc] = env->getStaticMethodID(cls, "isSymmetric", "(Lorg/hipparchus/linear/RealMatrix;D)Z");
          mids$[mid_matrixExponential_e9b72403ad502221] = env->getStaticMethodID(cls, "matrixExponential", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_orthonormalize_8fe84fea3780e6c0] = env->getStaticMethodID(cls, "orthonormalize", "(Ljava/util/List;DLorg/hipparchus/linear/DependentVectorsHandler;)Ljava/util/List;");
          mids$[mid_orthonormalize_a29a6bfc68b3c522] = env->getStaticMethodID(cls, "orthonormalize", "(Lorg/hipparchus/Field;Ljava/util/List;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/DependentVectorsHandler;)Ljava/util/List;");
          mids$[mid_solveLowerTriangularSystem_8d24243836b4d199] = env->getStaticMethodID(cls, "solveLowerTriangularSystem", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_solveUpperTriangularSystem_8d24243836b4d199] = env->getStaticMethodID(cls, "solveUpperTriangularSystem", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;)V");

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
        return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callStaticObjectMethod(cls, mids$[mid_bigFractionMatrixToRealMatrix_d5bd149cee6814f0], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::blockInverse(const ::org::hipparchus::linear::RealMatrix & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_blockInverse_cc827997ddc9899a], a0.this$, a1));
      }

      void MatrixUtils::checkAdditionCompatible(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkAdditionCompatible_7424e164afa9395a], a0.this$, a1.this$);
      }

      void MatrixUtils::checkColumnIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkColumnIndex_cff55cfde0e4b27b], a0.this$, a1);
      }

      void MatrixUtils::checkMatrixIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkMatrixIndex_bf0129d8c81da627], a0.this$, a1, a2);
      }

      void MatrixUtils::checkMultiplicationCompatible(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkMultiplicationCompatible_7424e164afa9395a], a0.this$, a1.this$);
      }

      void MatrixUtils::checkRowIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRowIndex_cff55cfde0e4b27b], a0.this$, a1);
      }

      void MatrixUtils::checkSameColumnDimension(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSameColumnDimension_7424e164afa9395a], a0.this$, a1.this$);
      }

      void MatrixUtils::checkSameRowDimension(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSameRowDimension_7424e164afa9395a], a0.this$, a1.this$);
      }

      void MatrixUtils::checkSubMatrixIndex(const ::org::hipparchus::linear::AnyMatrix & a0, const JArray< jint > & a1, const JArray< jint > & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSubMatrixIndex_d5740dc7043aa00f], a0.this$, a1.this$, a2.this$);
      }

      void MatrixUtils::checkSubMatrixIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1, jint a2, jint a3, jint a4)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSubMatrixIndex_d365082b0116d2a6], a0.this$, a1, a2, a3, a4);
      }

      void MatrixUtils::checkSubtractionCompatible(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSubtractionCompatible_7424e164afa9395a], a0.this$, a1.this$);
      }

      void MatrixUtils::checkSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSymmetric_21a79182f4dd9085], a0.this$, a1);
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createColumnFieldMatrix(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createColumnFieldMatrix_aa1a2b34c91cf2d0], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createColumnRealMatrix(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createColumnRealMatrix_1c14cec8544f26fc], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldDiagonalMatrix(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldDiagonalMatrix_aa1a2b34c91cf2d0], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldIdentityMatrix(const ::org::hipparchus::Field & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldIdentityMatrix_f8cc4c60c0edcead], a0.this$, a1));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldMatrix_fd0e2f11fcb2162d], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldMatrix_e8e9ca8cc1d2c247], a0.this$, a1, a2));
      }

      ::org::hipparchus::linear::FieldVector MatrixUtils::createFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldVector(env->callStaticObjectMethod(cls, mids$[mid_createFieldVector_ec7b1509e2f2d6fd], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector MatrixUtils::createFieldVector(const ::org::hipparchus::Field & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldVector(env->callStaticObjectMethod(cls, mids$[mid_createFieldVector_02962f1fea91a3cb], a0.this$, a1));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealDiagonalMatrix(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealDiagonalMatrix_1c14cec8544f26fc], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealIdentityMatrix(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealIdentityMatrix_7b5d3ee1211255a1], a0));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealMatrix(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealMatrix_62c0bfb50b5dacc0], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealMatrix(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealMatrix_4410ec92987b66e9], a0, a1));
      }

      ::org::hipparchus::linear::RealVector MatrixUtils::createRealVector(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_createRealVector_a740f7f012972b3a], a0.this$));
      }

      ::org::hipparchus::linear::RealVector MatrixUtils::createRealVector(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_createRealVector_b686e6fcbf82678b], a0));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createRowFieldMatrix(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRowFieldMatrix_aa1a2b34c91cf2d0], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRowRealMatrix(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRowRealMatrix_1c14cec8544f26fc], a0.this$));
      }

      ::org::hipparchus::linear::Array2DRowRealMatrix MatrixUtils::fractionMatrixToRealMatrix(const ::org::hipparchus::linear::FieldMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callStaticObjectMethod(cls, mids$[mid_fractionMatrixToRealMatrix_d5bd149cee6814f0], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::inverse(const ::org::hipparchus::linear::RealMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_inverse_e9b72403ad502221], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::inverse(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_inverse_b999dd1683240cd1], a0.this$, a1));
      }

      jboolean MatrixUtils::isSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isSymmetric_fa6807f9c03f4acc], a0.this$, a1);
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::matrixExponential(const ::org::hipparchus::linear::RealMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_matrixExponential_e9b72403ad502221], a0.this$));
      }

      ::java::util::List MatrixUtils::orthonormalize(const ::java::util::List & a0, jdouble a1, const ::org::hipparchus::linear::DependentVectorsHandler & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_orthonormalize_8fe84fea3780e6c0], a0.this$, a1, a2.this$));
      }

      ::java::util::List MatrixUtils::orthonormalize(const ::org::hipparchus::Field & a0, const ::java::util::List & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::linear::DependentVectorsHandler & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_orthonormalize_a29a6bfc68b3c522], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      void MatrixUtils::solveLowerTriangularSystem(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealVector & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_solveLowerTriangularSystem_8d24243836b4d199], a0.this$, a1.this$);
      }

      void MatrixUtils::solveUpperTriangularSystem(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealVector & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_solveUpperTriangularSystem_8d24243836b4d199], a0.this$, a1.this$);
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
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmParser::class$ = NULL;
            jmethodID *TdmParser::mids$ = NULL;
            bool TdmParser::live$ = false;

            jclass TdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_ac614db935c86a82] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/tdm/Tdm;");
                mids$[mid_finalizeData_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_522b6bbda7fc6bea] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/tdm/TdmHeader;");
                mids$[mid_inData_b108b35ef48e27bd] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_b108b35ef48e27bd] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_b108b35ef48e27bd] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_b108b35ef48e27bd] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::files::ccsds::ndm::tdm::Tdm TdmParser::build() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::Tdm(env->callObjectMethod(this$, mids$[mid_build_ac614db935c86a82]));
            }

            jboolean TdmParser::finalizeData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeData_b108b35ef48e27bd]);
            }

            jboolean TdmParser::finalizeHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_b108b35ef48e27bd]);
            }

            jboolean TdmParser::finalizeMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_b108b35ef48e27bd]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::TdmHeader TdmParser::getHeader() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::TdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_522b6bbda7fc6bea]));
            }

            jboolean TdmParser::inData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inData_b108b35ef48e27bd]);
            }

            jboolean TdmParser::inHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inHeader_b108b35ef48e27bd]);
            }

            jboolean TdmParser::inMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inMetadata_b108b35ef48e27bd]);
            }

            jboolean TdmParser::prepareData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareData_b108b35ef48e27bd]);
            }

            jboolean TdmParser::prepareHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareHeader_b108b35ef48e27bd]);
            }

            jboolean TdmParser::prepareMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_b108b35ef48e27bd]);
            }

            void TdmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_reset_e250621f009e45db], a0.this$);
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
            static PyObject *t_TdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmParser_of_(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_build(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_finalizeData(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_finalizeHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_finalizeMetadata(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_getHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_inData(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_inHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_inMetadata(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_prepareData(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_prepareHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_prepareMetadata(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_reset(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_get__header(t_TdmParser *self, void *data);
            static PyObject *t_TdmParser_get__parameters_(t_TdmParser *self, void *data);
            static PyGetSetDef t_TdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_TdmParser, header),
              DECLARE_GET_FIELD(t_TdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmParser__methods_[] = {
              DECLARE_METHOD(t_TdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, build, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, finalizeData, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, finalizeHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, finalizeMetadata, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, getHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, inData, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, inHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, inMetadata, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, prepareData, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, prepareHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, prepareMetadata, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, reset, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmParser)[] = {
              { Py_tp_methods, t_TdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(TdmParser, t_TdmParser, TdmParser);
            PyObject *t_TdmParser::wrap_Object(const TdmParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmParser *self = (t_TdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_TdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmParser *self = (t_TdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_TdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmParser), &PY_TYPE_DEF(TdmParser), module, "TdmParser", 0);
            }

            void t_TdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmParser), "class_", make_descriptor(TdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmParser), "wrapfn_", make_descriptor(t_TdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmParser::initializeClass, 1)))
                return NULL;
              return t_TdmParser::wrap_Object(TdmParser(((t_TdmParser *) arg)->object.this$));
            }
            static PyObject *t_TdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmParser_of_(t_TdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TdmParser_build(t_TdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::Tdm result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.build());
                return ::org::orekit::files::ccsds::ndm::tdm::t_Tdm::wrap_Object(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "build", args, 2);
            }

            static PyObject *t_TdmParser_finalizeData(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "finalizeData", args, 2);
            }

            static PyObject *t_TdmParser_finalizeHeader(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "finalizeHeader", args, 2);
            }

            static PyObject *t_TdmParser_finalizeMetadata(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "finalizeMetadata", args, 2);
            }

            static PyObject *t_TdmParser_getHeader(t_TdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::tdm::t_TdmHeader::wrap_Object(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "getHeader", args, 2);
            }

            static PyObject *t_TdmParser_inData(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "inData", args, 2);
            }

            static PyObject *t_TdmParser_inHeader(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "inHeader", args, 2);
            }

            static PyObject *t_TdmParser_inMetadata(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "inMetadata", args, 2);
            }

            static PyObject *t_TdmParser_prepareData(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "prepareData", args, 2);
            }

            static PyObject *t_TdmParser_prepareHeader(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "prepareHeader", args, 2);
            }

            static PyObject *t_TdmParser_prepareMetadata(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "prepareMetadata", args, 2);
            }

            static PyObject *t_TdmParser_reset(t_TdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
              {
                OBJ_CALL(self->object.reset(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "reset", args, 2);
            }
            static PyObject *t_TdmParser_get__parameters_(t_TdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_TdmParser_get__header(t_TdmParser *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TdmHeader::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "java/util/List.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "java/lang/String.h"
#include "org/orekit/files/ilrs/CPF.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPF$CPFEphemeris::class$ = NULL;
        jmethodID *CPF$CPFEphemeris::mids$ = NULL;
        bool CPF$CPFEphemeris::live$ = false;

        jclass CPF$CPFEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPF$CPFEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ca8570ac889d08c9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ilrs/CPF;Ljava/lang/String;)V");
            mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_2afa36052df4765d] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getEphemeridesDataLines_2afa36052df4765d] = env->getMethodID(cls, "getEphemeridesDataLines", "()Ljava/util/List;");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getId_11b109bd155ca898] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_08b52de56e2dfa9a] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_ac89b644d37ed0fc] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPF$CPFEphemeris::CPF$CPFEphemeris(const ::org::orekit::files::ilrs::CPF & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ca8570ac889d08c9, a0.this$, a1.this$)) {}

        ::org::orekit::utils::CartesianDerivativesFilter CPF$CPFEphemeris::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d]));
        }

        ::java::util::List CPF$CPFEphemeris::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_2afa36052df4765d]));
        }

        ::java::util::List CPF$CPFEphemeris::getEphemeridesDataLines() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEphemeridesDataLines_2afa36052df4765d]));
        }

        ::org::orekit::frames::Frame CPF$CPFEphemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
        }

        ::java::lang::String CPF$CPFEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_11b109bd155ca898]));
        }

        jint CPF$CPFEphemeris::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_570ce0828f81a2c1]);
        }

        jdouble CPF$CPFEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        ::org::orekit::propagation::BoundedPropagator CPF$CPFEphemeris::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_08b52de56e2dfa9a]));
        }

        ::org::orekit::propagation::BoundedPropagator CPF$CPFEphemeris::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_ac89b644d37ed0fc], a0.this$));
        }

        ::java::util::List CPF$CPFEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_2afa36052df4765d]));
        }

        ::org::orekit::time::AbsoluteDate CPF$CPFEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate CPF$CPFEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
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
        static PyObject *t_CPF$CPFEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPF$CPFEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPF$CPFEphemeris_init_(t_CPF$CPFEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPF$CPFEphemeris_getAvailableDerivatives(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getCoordinates(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getEphemeridesDataLines(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getFrame(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getId(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getInterpolationSamples(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getMu(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getPropagator(t_CPF$CPFEphemeris *self, PyObject *args);
        static PyObject *t_CPF$CPFEphemeris_getSegments(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getStart(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getStop(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_get__availableDerivatives(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__coordinates(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__ephemeridesDataLines(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__frame(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__id(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__interpolationSamples(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__mu(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__propagator(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__segments(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__start(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__stop(t_CPF$CPFEphemeris *self, void *data);
        static PyGetSetDef t_CPF$CPFEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, availableDerivatives),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, coordinates),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, ephemeridesDataLines),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, frame),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, id),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, interpolationSamples),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, mu),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, propagator),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, segments),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, start),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPF$CPFEphemeris__methods_[] = {
          DECLARE_METHOD(t_CPF$CPFEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getEphemeridesDataLines, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPF$CPFEphemeris)[] = {
          { Py_tp_methods, t_CPF$CPFEphemeris__methods_ },
          { Py_tp_init, (void *) t_CPF$CPFEphemeris_init_ },
          { Py_tp_getset, t_CPF$CPFEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPF$CPFEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPF$CPFEphemeris, t_CPF$CPFEphemeris, CPF$CPFEphemeris);

        void t_CPF$CPFEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(CPF$CPFEphemeris), &PY_TYPE_DEF(CPF$CPFEphemeris), module, "CPF$CPFEphemeris", 0);
        }

        void t_CPF$CPFEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFEphemeris), "class_", make_descriptor(CPF$CPFEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFEphemeris), "wrapfn_", make_descriptor(t_CPF$CPFEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPF$CPFEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPF$CPFEphemeris::initializeClass, 1)))
            return NULL;
          return t_CPF$CPFEphemeris::wrap_Object(CPF$CPFEphemeris(((t_CPF$CPFEphemeris *) arg)->object.this$));
        }
        static PyObject *t_CPF$CPFEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPF$CPFEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPF$CPFEphemeris_init_(t_CPF$CPFEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::files::ilrs::CPF a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          CPF$CPFEphemeris object((jobject) NULL);

          if (!parseArgs(args, "ks", ::org::orekit::files::ilrs::CPF::initializeClass, &a0, &a1))
          {
            INT_CALL(object = CPF$CPFEphemeris(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CPF$CPFEphemeris_getAvailableDerivatives(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getCoordinates(t_CPF$CPFEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFCoordinate));
        }

        static PyObject *t_CPF$CPFEphemeris_getEphemeridesDataLines(t_CPF$CPFEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEphemeridesDataLines());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFCoordinate));
        }

        static PyObject *t_CPF$CPFEphemeris_getFrame(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getId(t_CPF$CPFEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getInterpolationSamples(t_CPF$CPFEphemeris *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPF$CPFEphemeris_getMu(t_CPF$CPFEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPF$CPFEphemeris_getPropagator(t_CPF$CPFEphemeris *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
              OBJ_CALL(result = self->object.getPropagator());
              return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getPropagator(a0));
                return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_CPF$CPFEphemeris_getSegments(t_CPF$CPFEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFEphemeris));
        }

        static PyObject *t_CPF$CPFEphemeris_getStart(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getStop(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_get__availableDerivatives(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__coordinates(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__ephemeridesDataLines(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemeridesDataLines());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__frame(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__id(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__interpolationSamples(t_CPF$CPFEphemeris *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__mu(t_CPF$CPFEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__propagator(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__segments(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__start(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__stop(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *GroundReceiverMeasurement::class$ = NULL;
        jmethodID *GroundReceiverMeasurement::mids$ = NULL;
        bool GroundReceiverMeasurement::live$ = false;

        jclass GroundReceiverMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/GroundReceiverMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_362e8d4cf9667e4f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;[D[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_d61b0753fbc5ddd9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getGroundStationCoordinates_63a9f16c3c0f8f49] = env->getMethodID(cls, "getGroundStationCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_getGroundStationPosition_e91e859b879f3586] = env->getMethodID(cls, "getGroundStationPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getStation_58e3efb0e9576916] = env->getMethodID(cls, "getStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_isTwoWay_b108b35ef48e27bd] = env->getMethodID(cls, "isTwoWay", "()Z");
            mids$[mid_computeCommonParametersWithDerivatives_638dce81e4a08053] = env->getMethodID(cls, "computeCommonParametersWithDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives;");
            mids$[mid_computeCommonParametersWithout_71fc2e11d90352fd] = env->getMethodID(cls, "computeCommonParametersWithout", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/GroundReceiverCommonParametersWithoutDerivatives;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundReceiverMeasurement::GroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_362e8d4cf9667e4f, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        GroundReceiverMeasurement::GroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_d61b0753fbc5ddd9, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::utils::PVCoordinates GroundReceiverMeasurement::getGroundStationCoordinates(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getGroundStationCoordinates_63a9f16c3c0f8f49], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D GroundReceiverMeasurement::getGroundStationPosition(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getGroundStationPosition_e91e859b879f3586], a0.this$));
        }

        ::org::orekit::estimation::measurements::GroundStation GroundReceiverMeasurement::getStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getStation_58e3efb0e9576916]));
        }

        jboolean GroundReceiverMeasurement::isTwoWay() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTwoWay_b108b35ef48e27bd]);
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
        static PyObject *t_GroundReceiverMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundReceiverMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundReceiverMeasurement_of_(t_GroundReceiverMeasurement *self, PyObject *args);
        static int t_GroundReceiverMeasurement_init_(t_GroundReceiverMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundReceiverMeasurement_getGroundStationCoordinates(t_GroundReceiverMeasurement *self, PyObject *arg);
        static PyObject *t_GroundReceiverMeasurement_getGroundStationPosition(t_GroundReceiverMeasurement *self, PyObject *arg);
        static PyObject *t_GroundReceiverMeasurement_getStation(t_GroundReceiverMeasurement *self);
        static PyObject *t_GroundReceiverMeasurement_isTwoWay(t_GroundReceiverMeasurement *self);
        static PyObject *t_GroundReceiverMeasurement_get__station(t_GroundReceiverMeasurement *self, void *data);
        static PyObject *t_GroundReceiverMeasurement_get__twoWay(t_GroundReceiverMeasurement *self, void *data);
        static PyObject *t_GroundReceiverMeasurement_get__parameters_(t_GroundReceiverMeasurement *self, void *data);
        static PyGetSetDef t_GroundReceiverMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_GroundReceiverMeasurement, station),
          DECLARE_GET_FIELD(t_GroundReceiverMeasurement, twoWay),
          DECLARE_GET_FIELD(t_GroundReceiverMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundReceiverMeasurement__methods_[] = {
          DECLARE_METHOD(t_GroundReceiverMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_GroundReceiverMeasurement, getGroundStationCoordinates, METH_O),
          DECLARE_METHOD(t_GroundReceiverMeasurement, getGroundStationPosition, METH_O),
          DECLARE_METHOD(t_GroundReceiverMeasurement, getStation, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverMeasurement, isTwoWay, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundReceiverMeasurement)[] = {
          { Py_tp_methods, t_GroundReceiverMeasurement__methods_ },
          { Py_tp_init, (void *) t_GroundReceiverMeasurement_init_ },
          { Py_tp_getset, t_GroundReceiverMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundReceiverMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(GroundReceiverMeasurement, t_GroundReceiverMeasurement, GroundReceiverMeasurement);
        PyObject *t_GroundReceiverMeasurement::wrap_Object(const GroundReceiverMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundReceiverMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundReceiverMeasurement *self = (t_GroundReceiverMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GroundReceiverMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundReceiverMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundReceiverMeasurement *self = (t_GroundReceiverMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GroundReceiverMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundReceiverMeasurement), &PY_TYPE_DEF(GroundReceiverMeasurement), module, "GroundReceiverMeasurement", 0);
        }

        void t_GroundReceiverMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverMeasurement), "class_", make_descriptor(GroundReceiverMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverMeasurement), "wrapfn_", make_descriptor(t_GroundReceiverMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundReceiverMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundReceiverMeasurement::initializeClass, 1)))
            return NULL;
          return t_GroundReceiverMeasurement::wrap_Object(GroundReceiverMeasurement(((t_GroundReceiverMeasurement *) arg)->object.this$));
        }
        static PyObject *t_GroundReceiverMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundReceiverMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GroundReceiverMeasurement_of_(t_GroundReceiverMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GroundReceiverMeasurement_init_(t_GroundReceiverMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
              jboolean a1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              GroundReceiverMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kZk[D[D[Dk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = GroundReceiverMeasurement(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
              jboolean a1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              GroundReceiverMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kZkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = GroundReceiverMeasurement(a0, a1, a2, a3, a4, a5, a6));
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

        static PyObject *t_GroundReceiverMeasurement_getGroundStationCoordinates(t_GroundReceiverMeasurement *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getGroundStationCoordinates(a0));
            return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getGroundStationCoordinates", arg);
          return NULL;
        }

        static PyObject *t_GroundReceiverMeasurement_getGroundStationPosition(t_GroundReceiverMeasurement *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getGroundStationPosition(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getGroundStationPosition", arg);
          return NULL;
        }

        static PyObject *t_GroundReceiverMeasurement_getStation(t_GroundReceiverMeasurement *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverMeasurement_isTwoWay(t_GroundReceiverMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isTwoWay());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_GroundReceiverMeasurement_get__parameters_(t_GroundReceiverMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GroundReceiverMeasurement_get__station(t_GroundReceiverMeasurement *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverMeasurement_get__twoWay(t_GroundReceiverMeasurement *self, void *data)
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
#include "org/orekit/propagation/events/FieldNodeDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldNodeDetector::class$ = NULL;
        jmethodID *FieldNodeDetector::mids$ = NULL;
        bool FieldNodeDetector::live$ = false;

        jclass FieldNodeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldNodeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_529a3e69df0c2d68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_init$_8abb69e3772f5edb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_create_e89f17bb9bdbaf7d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldNodeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldNodeDetector::FieldNodeDetector(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_529a3e69df0c2d68, a0.this$, a1.this$)) {}

        FieldNodeDetector::FieldNodeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_8abb69e3772f5edb, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldNodeDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::orekit::frames::Frame FieldNodeDetector::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
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
        static PyObject *t_FieldNodeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNodeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNodeDetector_of_(t_FieldNodeDetector *self, PyObject *args);
        static int t_FieldNodeDetector_init_(t_FieldNodeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldNodeDetector_g(t_FieldNodeDetector *self, PyObject *args);
        static PyObject *t_FieldNodeDetector_getFrame(t_FieldNodeDetector *self);
        static PyObject *t_FieldNodeDetector_get__frame(t_FieldNodeDetector *self, void *data);
        static PyObject *t_FieldNodeDetector_get__parameters_(t_FieldNodeDetector *self, void *data);
        static PyGetSetDef t_FieldNodeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldNodeDetector, frame),
          DECLARE_GET_FIELD(t_FieldNodeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldNodeDetector__methods_[] = {
          DECLARE_METHOD(t_FieldNodeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNodeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNodeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldNodeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldNodeDetector, getFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldNodeDetector)[] = {
          { Py_tp_methods, t_FieldNodeDetector__methods_ },
          { Py_tp_init, (void *) t_FieldNodeDetector_init_ },
          { Py_tp_getset, t_FieldNodeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldNodeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldNodeDetector, t_FieldNodeDetector, FieldNodeDetector);
        PyObject *t_FieldNodeDetector::wrap_Object(const FieldNodeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNodeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNodeDetector *self = (t_FieldNodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldNodeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNodeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNodeDetector *self = (t_FieldNodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldNodeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldNodeDetector), &PY_TYPE_DEF(FieldNodeDetector), module, "FieldNodeDetector", 0);
        }

        void t_FieldNodeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNodeDetector), "class_", make_descriptor(FieldNodeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNodeDetector), "wrapfn_", make_descriptor(t_FieldNodeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNodeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldNodeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldNodeDetector::initializeClass, 1)))
            return NULL;
          return t_FieldNodeDetector::wrap_Object(FieldNodeDetector(((t_FieldNodeDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldNodeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldNodeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldNodeDetector_of_(t_FieldNodeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldNodeDetector_init_(t_FieldNodeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::Frame a1((jobject) NULL);
              FieldNodeDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldNodeDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::Frame a2((jobject) NULL);
              FieldNodeDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a2))
              {
                INT_CALL(object = FieldNodeDetector(a0, a1, a2));
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

        static PyObject *t_FieldNodeDetector_g(t_FieldNodeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldNodeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldNodeDetector_getFrame(t_FieldNodeDetector *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_FieldNodeDetector_get__parameters_(t_FieldNodeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldNodeDetector_get__frame(t_FieldNodeDetector *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/MonotoneChain.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
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
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_bd04c9335fb9e4cf] = env->getMethodID(cls, "<init>", "(Z)V");
                mids$[mid_init$_e7660d2871eaed1f] = env->getMethodID(cls, "<init>", "(ZD)V");
                mids$[mid_findHullVertices_e6702ab1f73fd997] = env->getMethodID(cls, "findHullVertices", "(Ljava/util/Collection;)Ljava/util/Collection;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MonotoneChain::MonotoneChain() : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            MonotoneChain::MonotoneChain(jboolean a0) : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(env->newObject(initializeClass, &mids$, mid_init$_bd04c9335fb9e4cf, a0)) {}

            MonotoneChain::MonotoneChain(jboolean a0, jdouble a1) : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(env->newObject(initializeClass, &mids$, mid_init$_e7660d2871eaed1f, a0, a1)) {}

            ::java::util::Collection MonotoneChain::findHullVertices(const ::java::util::Collection & a0) const
            {
              return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_findHullVertices_e6702ab1f73fd997], a0.this$));
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
#include "org/orekit/utils/Differentiation.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/StateJacobian.h"
#include "org/orekit/utils/ParameterFunction.h"
#include "org/orekit/utils/StateFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *Differentiation::class$ = NULL;
      jmethodID *Differentiation::mids$ = NULL;
      bool Differentiation::live$ = false;

      jclass Differentiation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/Differentiation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_differentiate_4f696813f34775d1] = env->getStaticMethodID(cls, "differentiate", "(Lorg/orekit/utils/ParameterFunction;ID)Lorg/orekit/utils/ParameterFunction;");
          mids$[mid_differentiate_c7e1f0bc15802205] = env->getStaticMethodID(cls, "differentiate", "(Lorg/orekit/utils/StateFunction;ILorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;DI)Lorg/orekit/utils/StateJacobian;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::ParameterFunction Differentiation::differentiate(const ::org::orekit::utils::ParameterFunction & a0, jint a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::utils::ParameterFunction(env->callStaticObjectMethod(cls, mids$[mid_differentiate_4f696813f34775d1], a0.this$, a1, a2));
      }

      ::org::orekit::utils::StateJacobian Differentiation::differentiate(const ::org::orekit::utils::StateFunction & a0, jint a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4, jdouble a5, jint a6)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::utils::StateJacobian(env->callStaticObjectMethod(cls, mids$[mid_differentiate_c7e1f0bc15802205], a0.this$, a1, a2.this$, a3.this$, a4.this$, a5, a6));
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
      static PyObject *t_Differentiation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Differentiation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Differentiation_differentiate(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Differentiation__methods_[] = {
        DECLARE_METHOD(t_Differentiation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Differentiation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Differentiation, differentiate, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Differentiation)[] = {
        { Py_tp_methods, t_Differentiation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Differentiation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Differentiation, t_Differentiation, Differentiation);

      void t_Differentiation::install(PyObject *module)
      {
        installType(&PY_TYPE(Differentiation), &PY_TYPE_DEF(Differentiation), module, "Differentiation", 0);
      }

      void t_Differentiation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Differentiation), "class_", make_descriptor(Differentiation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Differentiation), "wrapfn_", make_descriptor(t_Differentiation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Differentiation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Differentiation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Differentiation::initializeClass, 1)))
          return NULL;
        return t_Differentiation::wrap_Object(Differentiation(((t_Differentiation *) arg)->object.this$));
      }
      static PyObject *t_Differentiation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Differentiation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Differentiation_differentiate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::ParameterFunction a0((jobject) NULL);
            jint a1;
            jdouble a2;
            ::org::orekit::utils::ParameterFunction result((jobject) NULL);

            if (!parseArgs(args, "kID", ::org::orekit::utils::ParameterFunction::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::utils::Differentiation::differentiate(a0, a1, a2));
              return ::org::orekit::utils::t_ParameterFunction::wrap_Object(result);
            }
          }
          break;
         case 7:
          {
            ::org::orekit::utils::StateFunction a0((jobject) NULL);
            jint a1;
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            jint a6;
            ::org::orekit::utils::StateJacobian result((jobject) NULL);

            if (!parseArgs(args, "kIkKKDI", ::org::orekit::utils::StateFunction::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a5, &a6))
            {
              OBJ_CALL(result = ::org::orekit::utils::Differentiation::differentiate(a0, a1, a2, a3, a4, a5, a6));
              return ::org::orekit::utils::t_StateJacobian::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "differentiate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldAdapterDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAdapterDetector::class$ = NULL;
        jmethodID *FieldAdapterDetector::mids$ = NULL;
        bool FieldAdapterDetector::live$ = false;

        jclass FieldAdapterDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAdapterDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f929ebd2a84dbfe7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_4fe06ecc019ea51d] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_getHandler_48965f0f9fa2ddf9] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_69f9ee3154bea730] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_eba8e72a22c984ac] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldAdapterDetector::FieldAdapterDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f929ebd2a84dbfe7, a0.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldAdapterDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldAdapterDetector::getDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_4fe06ecc019ea51d]));
        }

        ::org::orekit::propagation::events::handlers::FieldEventHandler FieldAdapterDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::FieldEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_48965f0f9fa2ddf9]));
        }

        ::org::orekit::propagation::events::FieldAdaptableInterval FieldAdapterDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_69f9ee3154bea730]));
        }

        jint FieldAdapterDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_570ce0828f81a2c1]);
        }

        ::org::hipparchus::CalculusFieldElement FieldAdapterDetector::getThreshold() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getThreshold_eba8e72a22c984ac]));
        }

        void FieldAdapterDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
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
        static PyObject *t_FieldAdapterDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdapterDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdapterDetector_of_(t_FieldAdapterDetector *self, PyObject *args);
        static int t_FieldAdapterDetector_init_(t_FieldAdapterDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldAdapterDetector_g(t_FieldAdapterDetector *self, PyObject *arg);
        static PyObject *t_FieldAdapterDetector_getDetector(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getHandler(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getMaxCheckInterval(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getMaxIterationCount(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_getThreshold(t_FieldAdapterDetector *self);
        static PyObject *t_FieldAdapterDetector_init(t_FieldAdapterDetector *self, PyObject *args);
        static PyObject *t_FieldAdapterDetector_get__detector(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__handler(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__maxCheckInterval(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__maxIterationCount(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__threshold(t_FieldAdapterDetector *self, void *data);
        static PyObject *t_FieldAdapterDetector_get__parameters_(t_FieldAdapterDetector *self, void *data);
        static PyGetSetDef t_FieldAdapterDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdapterDetector, detector),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, handler),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, threshold),
          DECLARE_GET_FIELD(t_FieldAdapterDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdapterDetector__methods_[] = {
          DECLARE_METHOD(t_FieldAdapterDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdapterDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdapterDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, g, METH_O),
          DECLARE_METHOD(t_FieldAdapterDetector, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdapterDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdapterDetector)[] = {
          { Py_tp_methods, t_FieldAdapterDetector__methods_ },
          { Py_tp_init, (void *) t_FieldAdapterDetector_init_ },
          { Py_tp_getset, t_FieldAdapterDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdapterDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdapterDetector, t_FieldAdapterDetector, FieldAdapterDetector);
        PyObject *t_FieldAdapterDetector::wrap_Object(const FieldAdapterDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdapterDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdapterDetector *self = (t_FieldAdapterDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdapterDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdapterDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdapterDetector *self = (t_FieldAdapterDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdapterDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdapterDetector), &PY_TYPE_DEF(FieldAdapterDetector), module, "FieldAdapterDetector", 0);
        }

        void t_FieldAdapterDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdapterDetector), "class_", make_descriptor(FieldAdapterDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdapterDetector), "wrapfn_", make_descriptor(t_FieldAdapterDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdapterDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdapterDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdapterDetector::initializeClass, 1)))
            return NULL;
          return t_FieldAdapterDetector::wrap_Object(FieldAdapterDetector(((t_FieldAdapterDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldAdapterDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdapterDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdapterDetector_of_(t_FieldAdapterDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldAdapterDetector_init_(t_FieldAdapterDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldAdapterDetector object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            INT_CALL(object = FieldAdapterDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldAdapterDetector_g(t_FieldAdapterDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldAdapterDetector_getDetector(t_FieldAdapterDetector *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAdapterDetector_getHandler(t_FieldAdapterDetector *self)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAdapterDetector_getMaxCheckInterval(t_FieldAdapterDetector *self)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAdapterDetector_getMaxIterationCount(t_FieldAdapterDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAdapterDetector_getThreshold(t_FieldAdapterDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getThreshold());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAdapterDetector_init(t_FieldAdapterDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldAdapterDetector_get__parameters_(t_FieldAdapterDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAdapterDetector_get__detector(t_FieldAdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldAdapterDetector_get__handler(t_FieldAdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldAdapterDetector_get__maxCheckInterval(t_FieldAdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldAdapterDetector_get__maxIterationCount(t_FieldAdapterDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAdapterDetector_get__threshold(t_FieldAdapterDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getThreshold());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/ILRSHeader.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *ILRSHeader::class$ = NULL;
        jmethodID *ILRSHeader::mids$ = NULL;
        bool ILRSHeader::live$ = false;

        jclass ILRSHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/ILRSHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getEndEpoch_85703d13e302437e] = env->getMethodID(cls, "getEndEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getFormat_11b109bd155ca898] = env->getMethodID(cls, "getFormat", "()Ljava/lang/String;");
            mids$[mid_getIlrsSatelliteId_11b109bd155ca898] = env->getMethodID(cls, "getIlrsSatelliteId", "()Ljava/lang/String;");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getNoradId_11b109bd155ca898] = env->getMethodID(cls, "getNoradId", "()Ljava/lang/String;");
            mids$[mid_getProductionEpoch_06e6477664d37caa] = env->getMethodID(cls, "getProductionEpoch", "()Lorg/orekit/time/DateComponents;");
            mids$[mid_getProductionHour_570ce0828f81a2c1] = env->getMethodID(cls, "getProductionHour", "()I");
            mids$[mid_getSequenceNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getSequenceNumber", "()I");
            mids$[mid_getSic_11b109bd155ca898] = env->getMethodID(cls, "getSic", "()Ljava/lang/String;");
            mids$[mid_getStartEpoch_85703d13e302437e] = env->getMethodID(cls, "getStartEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getTargetClass_570ce0828f81a2c1] = env->getMethodID(cls, "getTargetClass", "()I");
            mids$[mid_getTargetLocation_570ce0828f81a2c1] = env->getMethodID(cls, "getTargetLocation", "()I");
            mids$[mid_getVersion_570ce0828f81a2c1] = env->getMethodID(cls, "getVersion", "()I");
            mids$[mid_setEndEpoch_600a2a61652bc473] = env->getMethodID(cls, "setEndEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setFormat_d0bc48d5b00dc40c] = env->getMethodID(cls, "setFormat", "(Ljava/lang/String;)V");
            mids$[mid_setIlrsSatelliteId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setIlrsSatelliteId", "(Ljava/lang/String;)V");
            mids$[mid_setName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
            mids$[mid_setNoradId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setNoradId", "(Ljava/lang/String;)V");
            mids$[mid_setProductionEpoch_56dc33c3871b1cb7] = env->getMethodID(cls, "setProductionEpoch", "(Lorg/orekit/time/DateComponents;)V");
            mids$[mid_setProductionHour_99803b0791f320ff] = env->getMethodID(cls, "setProductionHour", "(I)V");
            mids$[mid_setSequenceNumber_99803b0791f320ff] = env->getMethodID(cls, "setSequenceNumber", "(I)V");
            mids$[mid_setSic_d0bc48d5b00dc40c] = env->getMethodID(cls, "setSic", "(Ljava/lang/String;)V");
            mids$[mid_setStartEpoch_600a2a61652bc473] = env->getMethodID(cls, "setStartEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setTargetClass_99803b0791f320ff] = env->getMethodID(cls, "setTargetClass", "(I)V");
            mids$[mid_setTargetLocation_99803b0791f320ff] = env->getMethodID(cls, "setTargetLocation", "(I)V");
            mids$[mid_setVersion_99803b0791f320ff] = env->getMethodID(cls, "setVersion", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ILRSHeader::ILRSHeader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::orekit::time::AbsoluteDate ILRSHeader::getEndEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndEpoch_85703d13e302437e]));
        }

        ::java::lang::String ILRSHeader::getFormat() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormat_11b109bd155ca898]));
        }

        ::java::lang::String ILRSHeader::getIlrsSatelliteId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIlrsSatelliteId_11b109bd155ca898]));
        }

        ::java::lang::String ILRSHeader::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
        }

        ::java::lang::String ILRSHeader::getNoradId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNoradId_11b109bd155ca898]));
        }

        ::org::orekit::time::DateComponents ILRSHeader::getProductionEpoch() const
        {
          return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getProductionEpoch_06e6477664d37caa]));
        }

        jint ILRSHeader::getProductionHour() const
        {
          return env->callIntMethod(this$, mids$[mid_getProductionHour_570ce0828f81a2c1]);
        }

        jint ILRSHeader::getSequenceNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getSequenceNumber_570ce0828f81a2c1]);
        }

        ::java::lang::String ILRSHeader::getSic() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSic_11b109bd155ca898]));
        }

        ::org::orekit::time::AbsoluteDate ILRSHeader::getStartEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartEpoch_85703d13e302437e]));
        }

        jint ILRSHeader::getTargetClass() const
        {
          return env->callIntMethod(this$, mids$[mid_getTargetClass_570ce0828f81a2c1]);
        }

        jint ILRSHeader::getTargetLocation() const
        {
          return env->callIntMethod(this$, mids$[mid_getTargetLocation_570ce0828f81a2c1]);
        }

        jint ILRSHeader::getVersion() const
        {
          return env->callIntMethod(this$, mids$[mid_getVersion_570ce0828f81a2c1]);
        }

        void ILRSHeader::setEndEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEndEpoch_600a2a61652bc473], a0.this$);
        }

        void ILRSHeader::setFormat(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFormat_d0bc48d5b00dc40c], a0.this$);
        }

        void ILRSHeader::setIlrsSatelliteId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIlrsSatelliteId_d0bc48d5b00dc40c], a0.this$);
        }

        void ILRSHeader::setName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setName_d0bc48d5b00dc40c], a0.this$);
        }

        void ILRSHeader::setNoradId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNoradId_d0bc48d5b00dc40c], a0.this$);
        }

        void ILRSHeader::setProductionEpoch(const ::org::orekit::time::DateComponents & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProductionEpoch_56dc33c3871b1cb7], a0.this$);
        }

        void ILRSHeader::setProductionHour(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProductionHour_99803b0791f320ff], a0);
        }

        void ILRSHeader::setSequenceNumber(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSequenceNumber_99803b0791f320ff], a0);
        }

        void ILRSHeader::setSic(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSic_d0bc48d5b00dc40c], a0.this$);
        }

        void ILRSHeader::setStartEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStartEpoch_600a2a61652bc473], a0.this$);
        }

        void ILRSHeader::setTargetClass(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTargetClass_99803b0791f320ff], a0);
        }

        void ILRSHeader::setTargetLocation(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTargetLocation_99803b0791f320ff], a0);
        }

        void ILRSHeader::setVersion(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setVersion_99803b0791f320ff], a0);
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
        static PyObject *t_ILRSHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ILRSHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ILRSHeader_init_(t_ILRSHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ILRSHeader_getEndEpoch(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getFormat(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getIlrsSatelliteId(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getName(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getNoradId(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getProductionEpoch(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getProductionHour(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getSequenceNumber(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getSic(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getStartEpoch(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getTargetClass(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getTargetLocation(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getVersion(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_setEndEpoch(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setFormat(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setIlrsSatelliteId(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setName(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setNoradId(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setProductionEpoch(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setProductionHour(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setSequenceNumber(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setSic(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setStartEpoch(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setTargetClass(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setTargetLocation(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setVersion(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_get__endEpoch(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__endEpoch(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__format(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__format(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__ilrsSatelliteId(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__ilrsSatelliteId(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__name(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__name(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__noradId(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__noradId(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__productionEpoch(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__productionEpoch(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__productionHour(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__productionHour(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__sequenceNumber(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__sequenceNumber(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__sic(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__sic(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__startEpoch(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__startEpoch(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__targetClass(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__targetClass(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__targetLocation(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__targetLocation(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__version(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__version(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyGetSetDef t_ILRSHeader__fields_[] = {
          DECLARE_GETSET_FIELD(t_ILRSHeader, endEpoch),
          DECLARE_GETSET_FIELD(t_ILRSHeader, format),
          DECLARE_GETSET_FIELD(t_ILRSHeader, ilrsSatelliteId),
          DECLARE_GETSET_FIELD(t_ILRSHeader, name),
          DECLARE_GETSET_FIELD(t_ILRSHeader, noradId),
          DECLARE_GETSET_FIELD(t_ILRSHeader, productionEpoch),
          DECLARE_GETSET_FIELD(t_ILRSHeader, productionHour),
          DECLARE_GETSET_FIELD(t_ILRSHeader, sequenceNumber),
          DECLARE_GETSET_FIELD(t_ILRSHeader, sic),
          DECLARE_GETSET_FIELD(t_ILRSHeader, startEpoch),
          DECLARE_GETSET_FIELD(t_ILRSHeader, targetClass),
          DECLARE_GETSET_FIELD(t_ILRSHeader, targetLocation),
          DECLARE_GETSET_FIELD(t_ILRSHeader, version),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ILRSHeader__methods_[] = {
          DECLARE_METHOD(t_ILRSHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ILRSHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ILRSHeader, getEndEpoch, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getFormat, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getIlrsSatelliteId, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getName, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getNoradId, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getProductionEpoch, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getProductionHour, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getSequenceNumber, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getSic, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getStartEpoch, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getTargetClass, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getTargetLocation, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getVersion, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, setEndEpoch, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setFormat, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setIlrsSatelliteId, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setName, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setNoradId, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setProductionEpoch, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setProductionHour, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setSequenceNumber, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setSic, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setStartEpoch, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setTargetClass, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setTargetLocation, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setVersion, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ILRSHeader)[] = {
          { Py_tp_methods, t_ILRSHeader__methods_ },
          { Py_tp_init, (void *) t_ILRSHeader_init_ },
          { Py_tp_getset, t_ILRSHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ILRSHeader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ILRSHeader, t_ILRSHeader, ILRSHeader);

        void t_ILRSHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(ILRSHeader), &PY_TYPE_DEF(ILRSHeader), module, "ILRSHeader", 0);
        }

        void t_ILRSHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ILRSHeader), "class_", make_descriptor(ILRSHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ILRSHeader), "wrapfn_", make_descriptor(t_ILRSHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ILRSHeader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ILRSHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ILRSHeader::initializeClass, 1)))
            return NULL;
          return t_ILRSHeader::wrap_Object(ILRSHeader(((t_ILRSHeader *) arg)->object.this$));
        }
        static PyObject *t_ILRSHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ILRSHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ILRSHeader_init_(t_ILRSHeader *self, PyObject *args, PyObject *kwds)
        {
          ILRSHeader object((jobject) NULL);

          INT_CALL(object = ILRSHeader());
          self->object = object;

          return 0;
        }

        static PyObject *t_ILRSHeader_getEndEpoch(t_ILRSHeader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEndEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ILRSHeader_getFormat(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getFormat());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getIlrsSatelliteId(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIlrsSatelliteId());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getName(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getNoradId(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getNoradId());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getProductionEpoch(t_ILRSHeader *self)
        {
          ::org::orekit::time::DateComponents result((jobject) NULL);
          OBJ_CALL(result = self->object.getProductionEpoch());
          return ::org::orekit::time::t_DateComponents::wrap_Object(result);
        }

        static PyObject *t_ILRSHeader_getProductionHour(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getProductionHour());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getSequenceNumber(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSequenceNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getSic(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSic());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getStartEpoch(t_ILRSHeader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ILRSHeader_getTargetClass(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTargetClass());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getTargetLocation(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTargetLocation());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getVersion(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getVersion());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_setEndEpoch(t_ILRSHeader *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEndEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEndEpoch", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setFormat(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setFormat(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFormat", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setIlrsSatelliteId(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setIlrsSatelliteId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIlrsSatelliteId", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setName(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setName", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setNoradId(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setNoradId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNoradId", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setProductionEpoch(t_ILRSHeader *self, PyObject *arg)
        {
          ::org::orekit::time::DateComponents a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setProductionEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProductionEpoch", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setProductionHour(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setProductionHour(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProductionHour", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setSequenceNumber(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSequenceNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSequenceNumber", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setSic(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSic(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSic", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setStartEpoch(t_ILRSHeader *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setStartEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStartEpoch", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setTargetClass(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setTargetClass(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTargetClass", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setTargetLocation(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setTargetLocation(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTargetLocation", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setVersion(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setVersion", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_get__endEpoch(t_ILRSHeader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEndEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_ILRSHeader_set__endEpoch(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setEndEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "endEpoch", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__format(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getFormat());
          return j2p(value);
        }
        static int t_ILRSHeader_set__format(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setFormat(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "format", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__ilrsSatelliteId(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIlrsSatelliteId());
          return j2p(value);
        }
        static int t_ILRSHeader_set__ilrsSatelliteId(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setIlrsSatelliteId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ilrsSatelliteId", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__name(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
        static int t_ILRSHeader_set__name(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "name", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__noradId(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getNoradId());
          return j2p(value);
        }
        static int t_ILRSHeader_set__noradId(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setNoradId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "noradId", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__productionEpoch(t_ILRSHeader *self, void *data)
        {
          ::org::orekit::time::DateComponents value((jobject) NULL);
          OBJ_CALL(value = self->object.getProductionEpoch());
          return ::org::orekit::time::t_DateComponents::wrap_Object(value);
        }
        static int t_ILRSHeader_set__productionEpoch(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::DateComponents value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &value))
            {
              INT_CALL(self->object.setProductionEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "productionEpoch", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__productionHour(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getProductionHour());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__productionHour(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setProductionHour(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "productionHour", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__sequenceNumber(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSequenceNumber());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__sequenceNumber(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSequenceNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "sequenceNumber", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__sic(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSic());
          return j2p(value);
        }
        static int t_ILRSHeader_set__sic(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSic(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "sic", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__startEpoch(t_ILRSHeader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_ILRSHeader_set__startEpoch(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setStartEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "startEpoch", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__targetClass(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTargetClass());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__targetClass(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setTargetClass(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "targetClass", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__targetLocation(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTargetLocation());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__targetLocation(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setTargetLocation(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "targetLocation", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__version(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getVersion());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__version(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "version", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/Skewness.h"
#include "org/hipparchus/stat/descriptive/moment/Skewness.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Skewness::class$ = NULL;
          jmethodID *Skewness::mids$ = NULL;
          bool Skewness::live$ = false;

          jclass Skewness::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Skewness");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_f7032c04c28b06fe] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Skewness;");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Skewness::Skewness() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void Skewness::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          Skewness Skewness::copy() const
          {
            return Skewness(env->callObjectMethod(this$, mids$[mid_copy_f7032c04c28b06fe]));
          }

          jdouble Skewness::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          jlong Skewness::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          jdouble Skewness::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          void Skewness::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
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
          static PyObject *t_Skewness_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Skewness_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Skewness_init_(t_Skewness *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Skewness_clear(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_copy(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_evaluate(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_getN(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_getResult(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_increment(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_get__n(t_Skewness *self, void *data);
          static PyObject *t_Skewness_get__result(t_Skewness *self, void *data);
          static PyGetSetDef t_Skewness__fields_[] = {
            DECLARE_GET_FIELD(t_Skewness, n),
            DECLARE_GET_FIELD(t_Skewness, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Skewness__methods_[] = {
            DECLARE_METHOD(t_Skewness, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Skewness, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Skewness, clear, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, copy, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, getN, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Skewness)[] = {
            { Py_tp_methods, t_Skewness__methods_ },
            { Py_tp_init, (void *) t_Skewness_init_ },
            { Py_tp_getset, t_Skewness__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Skewness)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Skewness, t_Skewness, Skewness);

          void t_Skewness::install(PyObject *module)
          {
            installType(&PY_TYPE(Skewness), &PY_TYPE_DEF(Skewness), module, "Skewness", 0);
          }

          void t_Skewness::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Skewness), "class_", make_descriptor(Skewness::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Skewness), "wrapfn_", make_descriptor(t_Skewness::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Skewness), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Skewness_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Skewness::initializeClass, 1)))
              return NULL;
            return t_Skewness::wrap_Object(Skewness(((t_Skewness *) arg)->object.this$));
          }
          static PyObject *t_Skewness_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Skewness::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Skewness_init_(t_Skewness *self, PyObject *args, PyObject *kwds)
          {
            Skewness object((jobject) NULL);

            INT_CALL(object = Skewness());
            self->object = object;

            return 0;
          }

          static PyObject *t_Skewness_clear(t_Skewness *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Skewness_copy(t_Skewness *self, PyObject *args)
          {
            Skewness result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Skewness::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Skewness_evaluate(t_Skewness *self, PyObject *args)
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

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Skewness_getN(t_Skewness *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Skewness_getResult(t_Skewness *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Skewness_increment(t_Skewness *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Skewness_get__n(t_Skewness *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Skewness_get__result(t_Skewness *self, void *data)
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
#include "org/hipparchus/analysis/function/Abs.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Abs::class$ = NULL;
        jmethodID *Abs::mids$ = NULL;
        bool Abs::live$ = false;

        jclass Abs::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Abs");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Abs::Abs() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Abs::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Abs::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Abs_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Abs_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Abs_init_(t_Abs *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Abs_value(t_Abs *self, PyObject *args);

        static PyMethodDef t_Abs__methods_[] = {
          DECLARE_METHOD(t_Abs, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Abs, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Abs, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Abs)[] = {
          { Py_tp_methods, t_Abs__methods_ },
          { Py_tp_init, (void *) t_Abs_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Abs)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Abs, t_Abs, Abs);

        void t_Abs::install(PyObject *module)
        {
          installType(&PY_TYPE(Abs), &PY_TYPE_DEF(Abs), module, "Abs", 0);
        }

        void t_Abs::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Abs), "class_", make_descriptor(Abs::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Abs), "wrapfn_", make_descriptor(t_Abs::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Abs), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Abs_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Abs::initializeClass, 1)))
            return NULL;
          return t_Abs::wrap_Object(Abs(((t_Abs *) arg)->object.this$));
        }
        static PyObject *t_Abs_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Abs::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Abs_init_(t_Abs *self, PyObject *args, PyObject *kwds)
        {
          Abs object((jobject) NULL);

          INT_CALL(object = Abs());
          self->object = object;

          return 0;
        }

        static PyObject *t_Abs_value(t_Abs *self, PyObject *args)
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
#include "org/orekit/frames/FieldTransformGenerator.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldTransformGenerator::class$ = NULL;
      jmethodID *FieldTransformGenerator::mids$ = NULL;
      bool FieldTransformGenerator::live$ = false;

      jclass FieldTransformGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldTransformGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_eb095e3b5ebe5444] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/orekit/frames/TransformProvider;D)V");
          mids$[mid_generate_8060cef9318d72e3] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTransformGenerator::FieldTransformGenerator(const ::org::hipparchus::Field & a0, jint a1, const ::org::orekit::frames::TransformProvider & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eb095e3b5ebe5444, a0.this$, a1, a2.this$, a3)) {}

      ::java::util::List FieldTransformGenerator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_generate_8060cef9318d72e3], a0.this$, a1.this$));
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
      static PyObject *t_FieldTransformGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransformGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransformGenerator_of_(t_FieldTransformGenerator *self, PyObject *args);
      static int t_FieldTransformGenerator_init_(t_FieldTransformGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTransformGenerator_generate(t_FieldTransformGenerator *self, PyObject *args);
      static PyObject *t_FieldTransformGenerator_get__parameters_(t_FieldTransformGenerator *self, void *data);
      static PyGetSetDef t_FieldTransformGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTransformGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTransformGenerator__methods_[] = {
        DECLARE_METHOD(t_FieldTransformGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransformGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransformGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransformGenerator, generate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTransformGenerator)[] = {
        { Py_tp_methods, t_FieldTransformGenerator__methods_ },
        { Py_tp_init, (void *) t_FieldTransformGenerator_init_ },
        { Py_tp_getset, t_FieldTransformGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTransformGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTransformGenerator, t_FieldTransformGenerator, FieldTransformGenerator);
      PyObject *t_FieldTransformGenerator::wrap_Object(const FieldTransformGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransformGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransformGenerator *self = (t_FieldTransformGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTransformGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransformGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransformGenerator *self = (t_FieldTransformGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTransformGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTransformGenerator), &PY_TYPE_DEF(FieldTransformGenerator), module, "FieldTransformGenerator", 0);
      }

      void t_FieldTransformGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransformGenerator), "class_", make_descriptor(FieldTransformGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransformGenerator), "wrapfn_", make_descriptor(t_FieldTransformGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransformGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTransformGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTransformGenerator::initializeClass, 1)))
          return NULL;
        return t_FieldTransformGenerator::wrap_Object(FieldTransformGenerator(((t_FieldTransformGenerator *) arg)->object.this$));
      }
      static PyObject *t_FieldTransformGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTransformGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTransformGenerator_of_(t_FieldTransformGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTransformGenerator_init_(t_FieldTransformGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        ::org::orekit::frames::TransformProvider a2((jobject) NULL);
        jdouble a3;
        FieldTransformGenerator object((jobject) NULL);

        if (!parseArgs(args, "KIkD", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
        {
          INT_CALL(object = FieldTransformGenerator(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTransformGenerator_generate(t_FieldTransformGenerator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.generate(a0, a1));
          return ::java::util::t_List::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "generate", args);
        return NULL;
      }
      static PyObject *t_FieldTransformGenerator_get__parameters_(t_FieldTransformGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/AngularRaDecBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AngularRaDecBuilder::class$ = NULL;
          jmethodID *AngularRaDecBuilder::mids$ = NULL;
          bool AngularRaDecBuilder::live$ = false;

          jclass AngularRaDecBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AngularRaDecBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_07d4c6ba86546447] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/frames/Frame;[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_a7274153218a5de6] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/AngularRaDec;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularRaDecBuilder::AngularRaDecBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::frames::Frame & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_07d4c6ba86546447, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          ::org::orekit::estimation::measurements::AngularRaDec AngularRaDecBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::AngularRaDec(env->callObjectMethod(this$, mids$[mid_build_a7274153218a5de6], a0.this$, a1.this$));
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
        namespace generation {
          static PyObject *t_AngularRaDecBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularRaDecBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularRaDecBuilder_of_(t_AngularRaDecBuilder *self, PyObject *args);
          static int t_AngularRaDecBuilder_init_(t_AngularRaDecBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularRaDecBuilder_build(t_AngularRaDecBuilder *self, PyObject *args);
          static PyObject *t_AngularRaDecBuilder_get__parameters_(t_AngularRaDecBuilder *self, void *data);
          static PyGetSetDef t_AngularRaDecBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AngularRaDecBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularRaDecBuilder__methods_[] = {
            DECLARE_METHOD(t_AngularRaDecBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRaDecBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRaDecBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AngularRaDecBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularRaDecBuilder)[] = {
            { Py_tp_methods, t_AngularRaDecBuilder__methods_ },
            { Py_tp_init, (void *) t_AngularRaDecBuilder_init_ },
            { Py_tp_getset, t_AngularRaDecBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularRaDecBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(AngularRaDecBuilder, t_AngularRaDecBuilder, AngularRaDecBuilder);
          PyObject *t_AngularRaDecBuilder::wrap_Object(const AngularRaDecBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularRaDecBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularRaDecBuilder *self = (t_AngularRaDecBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AngularRaDecBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularRaDecBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularRaDecBuilder *self = (t_AngularRaDecBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AngularRaDecBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularRaDecBuilder), &PY_TYPE_DEF(AngularRaDecBuilder), module, "AngularRaDecBuilder", 0);
          }

          void t_AngularRaDecBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDecBuilder), "class_", make_descriptor(AngularRaDecBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDecBuilder), "wrapfn_", make_descriptor(t_AngularRaDecBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDecBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularRaDecBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularRaDecBuilder::initializeClass, 1)))
              return NULL;
            return t_AngularRaDecBuilder::wrap_Object(AngularRaDecBuilder(((t_AngularRaDecBuilder *) arg)->object.this$));
          }
          static PyObject *t_AngularRaDecBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularRaDecBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AngularRaDecBuilder_of_(t_AngularRaDecBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_AngularRaDecBuilder_init_(t_AngularRaDecBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            JArray< jdouble > a4((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            AngularRaDecBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkk[D[Dk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = AngularRaDecBuilder(a0, a1, a2, a3, a4, a5));
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

          static PyObject *t_AngularRaDecBuilder_build(t_AngularRaDecBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::AngularRaDec result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_AngularRaDec::wrap_Object(result);
            }

            return callSuper(PY_TYPE(AngularRaDecBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_AngularRaDecBuilder_get__parameters_(t_AngularRaDecBuilder *self, void *data)
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
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *OneAxisEllipsoid::class$ = NULL;
      jmethodID *OneAxisEllipsoid::mids$ = NULL;
      bool OneAxisEllipsoid::live$ = false;

      jclass OneAxisEllipsoid::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/OneAxisEllipsoid");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b0fb2e2980abbca2] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;)V");
          mids$[mid_azimuthBetweenPoints_a8e4a0dd2661b2d0] = env->getMethodID(cls, "azimuthBetweenPoints", "(Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_azimuthBetweenPoints_b1542168e1baec35] = env->getMethodID(cls, "azimuthBetweenPoints", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;)D");
          mids$[mid_geodeticToIsometricLatitude_dcbc7ce2902fa136] = env->getMethodID(cls, "geodeticToIsometricLatitude", "(D)D");
          mids$[mid_geodeticToIsometricLatitude_a4b1871f4d29e58b] = env->getMethodID(cls, "geodeticToIsometricLatitude", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getBodyFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getCartesianIntersectionPoint_aca444df6b127f07] = env->getMethodID(cls, "getCartesianIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getCartesianIntersectionPoint_efede67c706139e8] = env->getMethodID(cls, "getCartesianIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getEccentricity_dff5885c2c873297] = env->getMethodID(cls, "getEccentricity", "()D");
          mids$[mid_getEccentricitySquared_dff5885c2c873297] = env->getMethodID(cls, "getEccentricitySquared", "()D");
          mids$[mid_getEquatorialRadius_dff5885c2c873297] = env->getMethodID(cls, "getEquatorialRadius", "()D");
          mids$[mid_getFlattening_dff5885c2c873297] = env->getMethodID(cls, "getFlattening", "()D");
          mids$[mid_getIntersectionPoint_ec4b828b0bd3964b] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getIntersectionPoint_e81d59d1bc381e5e] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_lowestAltitudeIntermediate_51836b0574583a60] = env->getMethodID(cls, "lowestAltitudeIntermediate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_lowestAltitudeIntermediate_ee2d5dca684c02a1] = env->getMethodID(cls, "lowestAltitudeIntermediate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_projectToGround_7ddc39790e3dd04b] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToGround_73ba258c5f91e9db] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_setAngularThreshold_17db3a65980d3441] = env->getMethodID(cls, "setAngularThreshold", "(D)V");
          mids$[mid_transform_5f1451dffd8cde56] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transform_6cf64433187e46c3] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_dd18b1b42137f809] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_transform_e019f2426bfb11d5] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_transform_9957e685900e59e0] = env->getMethodID(cls, "transform", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OneAxisEllipsoid::OneAxisEllipsoid(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::bodies::Ellipsoid(env->newObject(initializeClass, &mids$, mid_init$_b0fb2e2980abbca2, a0, a1, a2.this$)) {}

      ::org::hipparchus::CalculusFieldElement OneAxisEllipsoid::azimuthBetweenPoints(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_azimuthBetweenPoints_a8e4a0dd2661b2d0], a0.this$, a1.this$));
      }

      jdouble OneAxisEllipsoid::azimuthBetweenPoints(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_azimuthBetweenPoints_b1542168e1baec35], a0.this$, a1.this$);
      }

      jdouble OneAxisEllipsoid::geodeticToIsometricLatitude(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_geodeticToIsometricLatitude_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement OneAxisEllipsoid::geodeticToIsometricLatitude(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_geodeticToIsometricLatitude_a4b1871f4d29e58b], a0.this$));
      }

      ::org::orekit::frames::Frame OneAxisEllipsoid::getBodyFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_b86f9f61d97a7244]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D OneAxisEllipsoid::getCartesianIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCartesianIntersectionPoint_aca444df6b127f07], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D OneAxisEllipsoid::getCartesianIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getCartesianIntersectionPoint_efede67c706139e8], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      jdouble OneAxisEllipsoid::getEccentricity() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricity_dff5885c2c873297]);
      }

      jdouble OneAxisEllipsoid::getEccentricitySquared() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricitySquared_dff5885c2c873297]);
      }

      jdouble OneAxisEllipsoid::getEquatorialRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_dff5885c2c873297]);
      }

      jdouble OneAxisEllipsoid::getFlattening() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFlattening_dff5885c2c873297]);
      }

      ::org::orekit::bodies::GeodeticPoint OneAxisEllipsoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_ec4b828b0bd3964b], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_e81d59d1bc381e5e], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::lowestAltitudeIntermediate(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_lowestAltitudeIntermediate_51836b0574583a60], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::GeodeticPoint OneAxisEllipsoid::lowestAltitudeIntermediate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_lowestAltitudeIntermediate_ee2d5dca684c02a1], a0.this$, a1.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates OneAxisEllipsoid::projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToGround_7ddc39790e3dd04b], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D OneAxisEllipsoid::projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToGround_73ba258c5f91e9db], a0.this$, a1.this$, a2.this$));
      }

      void OneAxisEllipsoid::setAngularThreshold(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAngularThreshold_17db3a65980d3441], a0);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D OneAxisEllipsoid::transform(const ::org::orekit::bodies::FieldGeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transform_5f1451dffd8cde56], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D OneAxisEllipsoid::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_6cf64433187e46c3], a0.this$));
      }

      ::org::orekit::bodies::GeodeticPoint OneAxisEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_dd18b1b42137f809], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_e019f2426bfb11d5], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::transform(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_9957e685900e59e0], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_OneAxisEllipsoid_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OneAxisEllipsoid_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OneAxisEllipsoid_init_(t_OneAxisEllipsoid *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OneAxisEllipsoid_azimuthBetweenPoints(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_geodeticToIsometricLatitude(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_getBodyFrame(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getCartesianIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_getEccentricity(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getEccentricitySquared(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getEquatorialRadius(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getFlattening(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_lowestAltitudeIntermediate(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_projectToGround(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_setAngularThreshold(t_OneAxisEllipsoid *self, PyObject *arg);
      static PyObject *t_OneAxisEllipsoid_transform(t_OneAxisEllipsoid *self, PyObject *args);
      static int t_OneAxisEllipsoid_set__angularThreshold(t_OneAxisEllipsoid *self, PyObject *arg, void *data);
      static PyObject *t_OneAxisEllipsoid_get__bodyFrame(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__eccentricity(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__eccentricitySquared(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__equatorialRadius(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__flattening(t_OneAxisEllipsoid *self, void *data);
      static PyGetSetDef t_OneAxisEllipsoid__fields_[] = {
        DECLARE_SET_FIELD(t_OneAxisEllipsoid, angularThreshold),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, bodyFrame),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, eccentricity),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, eccentricitySquared),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, equatorialRadius),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, flattening),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OneAxisEllipsoid__methods_[] = {
        DECLARE_METHOD(t_OneAxisEllipsoid, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OneAxisEllipsoid, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OneAxisEllipsoid, azimuthBetweenPoints, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, geodeticToIsometricLatitude, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getBodyFrame, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getCartesianIntersectionPoint, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getEccentricity, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getEccentricitySquared, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getEquatorialRadius, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getFlattening, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getIntersectionPoint, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, lowestAltitudeIntermediate, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, projectToGround, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, setAngularThreshold, METH_O),
        DECLARE_METHOD(t_OneAxisEllipsoid, transform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OneAxisEllipsoid)[] = {
        { Py_tp_methods, t_OneAxisEllipsoid__methods_ },
        { Py_tp_init, (void *) t_OneAxisEllipsoid_init_ },
        { Py_tp_getset, t_OneAxisEllipsoid__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OneAxisEllipsoid)[] = {
        &PY_TYPE_DEF(::org::orekit::bodies::Ellipsoid),
        NULL
      };

      DEFINE_TYPE(OneAxisEllipsoid, t_OneAxisEllipsoid, OneAxisEllipsoid);

      void t_OneAxisEllipsoid::install(PyObject *module)
      {
        installType(&PY_TYPE(OneAxisEllipsoid), &PY_TYPE_DEF(OneAxisEllipsoid), module, "OneAxisEllipsoid", 0);
      }

      void t_OneAxisEllipsoid::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OneAxisEllipsoid), "class_", make_descriptor(OneAxisEllipsoid::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OneAxisEllipsoid), "wrapfn_", make_descriptor(t_OneAxisEllipsoid::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OneAxisEllipsoid), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OneAxisEllipsoid_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OneAxisEllipsoid::initializeClass, 1)))
          return NULL;
        return t_OneAxisEllipsoid::wrap_Object(OneAxisEllipsoid(((t_OneAxisEllipsoid *) arg)->object.this$));
      }
      static PyObject *t_OneAxisEllipsoid_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OneAxisEllipsoid::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OneAxisEllipsoid_init_(t_OneAxisEllipsoid *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        OneAxisEllipsoid object((jobject) NULL);

        if (!parseArgs(args, "DDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = OneAxisEllipsoid(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OneAxisEllipsoid_azimuthBetweenPoints(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
            {
              OBJ_CALL(result = self->object.azimuthBetweenPoints(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.azimuthBetweenPoints(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "azimuthBetweenPoints", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_geodeticToIsometricLatitude(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.geodeticToIsometricLatitude(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.geodeticToIsometricLatitude(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "geodeticToIsometricLatitude", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_getBodyFrame(t_OneAxisEllipsoid *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_OneAxisEllipsoid_getCartesianIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getCartesianIntersectionPoint(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getCartesianIntersectionPoint(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getCartesianIntersectionPoint", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_getEccentricity(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricity());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getEccentricitySquared(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricitySquared());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getEquatorialRadius(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquatorialRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getFlattening(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFlattening());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getIntersectionPoint", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_lowestAltitudeIntermediate(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.lowestAltitudeIntermediate(a0, a1));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.lowestAltitudeIntermediate(a0, a1));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "lowestAltitudeIntermediate", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_projectToGround(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToGround", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_setAngularThreshold(t_OneAxisEllipsoid *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setAngularThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAngularThreshold", arg);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_transform(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transform", args);
        return NULL;
      }

      static int t_OneAxisEllipsoid_set__angularThreshold(t_OneAxisEllipsoid *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setAngularThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "angularThreshold", arg);
        return -1;
      }

      static PyObject *t_OneAxisEllipsoid_get__bodyFrame(t_OneAxisEllipsoid *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_OneAxisEllipsoid_get__eccentricity(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricity());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OneAxisEllipsoid_get__eccentricitySquared(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricitySquared());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OneAxisEllipsoid_get__equatorialRadius(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquatorialRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OneAxisEllipsoid_get__flattening(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFlattening());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonJ2SquaredModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonJ2SquaredModel::class$ = NULL;
            jmethodID *PythonJ2SquaredModel::mids$ = NULL;
            bool PythonJ2SquaredModel::live$ = false;

            jclass PythonJ2SquaredModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonJ2SquaredModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_03e8bdfa525c3779] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_1a8550c5c09a5c40] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonJ2SquaredModel::PythonJ2SquaredModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonJ2SquaredModel::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonJ2SquaredModel::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonJ2SquaredModel::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
            static PyObject *t_PythonJ2SquaredModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonJ2SquaredModel_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonJ2SquaredModel_init_(t_PythonJ2SquaredModel *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonJ2SquaredModel_finalize(t_PythonJ2SquaredModel *self);
            static PyObject *t_PythonJ2SquaredModel_pythonExtension(t_PythonJ2SquaredModel *self, PyObject *args);
            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms0(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms1(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonJ2SquaredModel_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonJ2SquaredModel_get__self(t_PythonJ2SquaredModel *self, void *data);
            static PyGetSetDef t_PythonJ2SquaredModel__fields_[] = {
              DECLARE_GET_FIELD(t_PythonJ2SquaredModel, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonJ2SquaredModel__methods_[] = {
              DECLARE_METHOD(t_PythonJ2SquaredModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonJ2SquaredModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonJ2SquaredModel, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonJ2SquaredModel, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonJ2SquaredModel)[] = {
              { Py_tp_methods, t_PythonJ2SquaredModel__methods_ },
              { Py_tp_init, (void *) t_PythonJ2SquaredModel_init_ },
              { Py_tp_getset, t_PythonJ2SquaredModel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonJ2SquaredModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonJ2SquaredModel, t_PythonJ2SquaredModel, PythonJ2SquaredModel);

            void t_PythonJ2SquaredModel::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonJ2SquaredModel), &PY_TYPE_DEF(PythonJ2SquaredModel), module, "PythonJ2SquaredModel", 1);
            }

            void t_PythonJ2SquaredModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJ2SquaredModel), "class_", make_descriptor(PythonJ2SquaredModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJ2SquaredModel), "wrapfn_", make_descriptor(t_PythonJ2SquaredModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJ2SquaredModel), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonJ2SquaredModel::initializeClass);
              JNINativeMethod methods[] = {
                { "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D", (void *) t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms0 },
                { "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms1 },
                { "pythonDecRef", "()V", (void *) t_PythonJ2SquaredModel_pythonDecRef2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonJ2SquaredModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonJ2SquaredModel::initializeClass, 1)))
                return NULL;
              return t_PythonJ2SquaredModel::wrap_Object(PythonJ2SquaredModel(((t_PythonJ2SquaredModel *) arg)->object.this$));
            }
            static PyObject *t_PythonJ2SquaredModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonJ2SquaredModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonJ2SquaredModel_init_(t_PythonJ2SquaredModel *self, PyObject *args, PyObject *kwds)
            {
              PythonJ2SquaredModel object((jobject) NULL);

              INT_CALL(object = PythonJ2SquaredModel());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonJ2SquaredModel_finalize(t_PythonJ2SquaredModel *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonJ2SquaredModel_pythonExtension(t_PythonJ2SquaredModel *self, PyObject *args)
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

            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::forces::t_DSSTJ2SquaredClosedFormContext::wrap_Object(::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext(a0));
              PyObject *result = PyObject_CallMethod(obj, "computeMeanEquinoctialSecondOrderTerms", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("computeMeanEquinoctialSecondOrderTerms", result);
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

            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms1(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext(a0));
              PyObject *result = PyObject_CallMethod(obj, "computeMeanEquinoctialSecondOrderTerms", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("computeMeanEquinoctialSecondOrderTerms", result);
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

            static void JNICALL t_PythonJ2SquaredModel_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonJ2SquaredModel_get__self(t_PythonJ2SquaredModel *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitPhysicalPropertiesKey::class$ = NULL;
              jmethodID *OrbitPhysicalPropertiesKey::mids$ = NULL;
              bool OrbitPhysicalPropertiesKey::live$ = false;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_INT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_MAX_FOR_PC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_MIN_FOR_PC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_TYP_FOR_PC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_ACTUATOR_TYPE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_CONTROL = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_CONTROL_MODE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_KNOWLEDGE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_POINTING = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AVG_MANEUVER_FREQ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::BUS_MODEL = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::COMMENT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DOCKED_WITH = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRAG_COEFF_NOM = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRAG_CONST_AREA = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRAG_UNCERTAINTY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRY_MASS = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DV_BOL = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DV_REMAINING = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::INITIAL_WET_MASS = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IXX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IXY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IXZ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IYY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IYZ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IZZ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::MANUFACTURER = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::MAX_THRUST = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_INT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME_EPOCH = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_Q1 = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_Q2 = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_Q3 = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_QC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::RCS = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::RCS_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::RCS_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::REFLECTANCE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::SOLAR_RAD_COEFF = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::SOLAR_RAD_UNCERTAINTY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::SRP_CONST_AREA = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_ABSOLUTE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_APPARENT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_APPARENT_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_APPARENT_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::WET_MASS = NULL;

              jclass OrbitPhysicalPropertiesKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_1b7f5832a814cd36] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties;)Z");
                  mids$[mid_valueOf_a7750d3d2cff0fae] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;");
                  mids$[mid_values_2112aa726947e88b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AREA_ALONG_OEB_INT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_INT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_ALONG_OEB_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_ALONG_OEB_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_MAX_FOR_PC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_MAX_FOR_PC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_MIN_FOR_PC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_MIN_FOR_PC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_TYP_FOR_PC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_TYP_FOR_PC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_ACTUATOR_TYPE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_ACTUATOR_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_CONTROL = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_CONTROL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_CONTROL_MODE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_CONTROL_MODE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_KNOWLEDGE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_KNOWLEDGE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_POINTING = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_POINTING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AVG_MANEUVER_FREQ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AVG_MANEUVER_FREQ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  BUS_MODEL = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "BUS_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  COMMENT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DOCKED_WITH = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DOCKED_WITH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRAG_COEFF_NOM = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_COEFF_NOM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRAG_CONST_AREA = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_CONST_AREA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRAG_UNCERTAINTY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_UNCERTAINTY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRY_MASS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRY_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DV_BOL = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DV_BOL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DV_REMAINING = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DV_REMAINING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  INITIAL_WET_MASS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "INITIAL_WET_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IXX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IXX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IXY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IXY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IXZ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IXZ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IYY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IYY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IYZ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IYZ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IZZ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IZZ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  MANUFACTURER = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "MANUFACTURER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  MAX_THRUST = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "MAX_THRUST", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_INT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_INT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_PARENT_FRAME = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_PARENT_FRAME_EPOCH = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_Q1 = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_Q1", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_Q2 = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_Q2", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_Q3 = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_Q3", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_QC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_QC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  RCS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "RCS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  RCS_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "RCS_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  RCS_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "RCS_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  REFLECTANCE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "REFLECTANCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  SOLAR_RAD_COEFF = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "SOLAR_RAD_COEFF", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  SOLAR_RAD_UNCERTAINTY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "SOLAR_RAD_UNCERTAINTY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  SRP_CONST_AREA = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "SRP_CONST_AREA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_ABSOLUTE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_ABSOLUTE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_APPARENT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_APPARENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_APPARENT_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_APPARENT_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_APPARENT_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_APPARENT_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  WET_MASS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "WET_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitPhysicalPropertiesKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_1b7f5832a814cd36], a0.this$, a1.this$, a2.this$);
              }

              OrbitPhysicalPropertiesKey OrbitPhysicalPropertiesKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitPhysicalPropertiesKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a7750d3d2cff0fae], a0.this$));
              }

              JArray< OrbitPhysicalPropertiesKey > OrbitPhysicalPropertiesKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitPhysicalPropertiesKey >(env->callStaticObjectMethod(cls, mids$[mid_values_2112aa726947e88b]));
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
            namespace ocm {
              static PyObject *t_OrbitPhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitPhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitPhysicalPropertiesKey_of_(t_OrbitPhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_OrbitPhysicalPropertiesKey_process(t_OrbitPhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_OrbitPhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitPhysicalPropertiesKey_values(PyTypeObject *type);
              static PyObject *t_OrbitPhysicalPropertiesKey_get__parameters_(t_OrbitPhysicalPropertiesKey *self, void *data);
              static PyGetSetDef t_OrbitPhysicalPropertiesKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitPhysicalPropertiesKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitPhysicalPropertiesKey__methods_[] = {
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitPhysicalPropertiesKey)[] = {
                { Py_tp_methods, t_OrbitPhysicalPropertiesKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitPhysicalPropertiesKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitPhysicalPropertiesKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitPhysicalPropertiesKey, t_OrbitPhysicalPropertiesKey, OrbitPhysicalPropertiesKey);
              PyObject *t_OrbitPhysicalPropertiesKey::wrap_Object(const OrbitPhysicalPropertiesKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitPhysicalPropertiesKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitPhysicalPropertiesKey *self = (t_OrbitPhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitPhysicalPropertiesKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitPhysicalPropertiesKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitPhysicalPropertiesKey *self = (t_OrbitPhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitPhysicalPropertiesKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitPhysicalPropertiesKey), &PY_TYPE_DEF(OrbitPhysicalPropertiesKey), module, "OrbitPhysicalPropertiesKey", 0);
              }

              void t_OrbitPhysicalPropertiesKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "class_", make_descriptor(OrbitPhysicalPropertiesKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "wrapfn_", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitPhysicalPropertiesKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_ALONG_OEB_INT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_INT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_ALONG_OEB_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_ALONG_OEB_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_MAX_FOR_PC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_MAX_FOR_PC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_MIN_FOR_PC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_MIN_FOR_PC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_TYP_FOR_PC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_TYP_FOR_PC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_ACTUATOR_TYPE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_ACTUATOR_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_CONTROL", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_CONTROL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_CONTROL_MODE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_CONTROL_MODE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_KNOWLEDGE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_KNOWLEDGE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_POINTING", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_POINTING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AVG_MANEUVER_FREQ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AVG_MANEUVER_FREQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "BUS_MODEL", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::BUS_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "COMMENT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DOCKED_WITH", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DOCKED_WITH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRAG_COEFF_NOM", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRAG_COEFF_NOM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRAG_CONST_AREA", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRAG_CONST_AREA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRAG_UNCERTAINTY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRAG_UNCERTAINTY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRY_MASS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRY_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DV_BOL", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DV_BOL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DV_REMAINING", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DV_REMAINING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "INITIAL_WET_MASS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::INITIAL_WET_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IXX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IXX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IXY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IXY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IXZ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IXZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IYY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IYY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IYZ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IYZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IZZ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IZZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "MANUFACTURER", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::MANUFACTURER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "MAX_THRUST", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::MAX_THRUST)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_INT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_INT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_PARENT_FRAME", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_PARENT_FRAME_EPOCH", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_Q1", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_Q1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_Q2", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_Q2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_Q3", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_Q3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_QC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_QC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "RCS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::RCS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "RCS_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::RCS_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "RCS_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::RCS_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "REFLECTANCE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::REFLECTANCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "SOLAR_RAD_COEFF", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::SOLAR_RAD_COEFF)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "SOLAR_RAD_UNCERTAINTY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::SOLAR_RAD_UNCERTAINTY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "SRP_CONST_AREA", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::SRP_CONST_AREA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_ABSOLUTE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_ABSOLUTE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_APPARENT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_APPARENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_APPARENT_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_APPARENT_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_APPARENT_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_APPARENT_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "WET_MASS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::WET_MASS)));
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitPhysicalPropertiesKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitPhysicalPropertiesKey::wrap_Object(OrbitPhysicalPropertiesKey(((t_OrbitPhysicalPropertiesKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitPhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitPhysicalPropertiesKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_of_(t_OrbitPhysicalPropertiesKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_process(t_OrbitPhysicalPropertiesKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitPhysicalPropertiesKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalPropertiesKey::valueOf(a0));
                  return t_OrbitPhysicalPropertiesKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_values(PyTypeObject *type)
              {
                JArray< OrbitPhysicalPropertiesKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalPropertiesKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitPhysicalPropertiesKey::wrap_jobject);
              }
              static PyObject *t_OrbitPhysicalPropertiesKey_get__parameters_(t_OrbitPhysicalPropertiesKey *self, void *data)
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
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/frames/Predefined.h"
#include "java/lang/String.h"
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
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_valueOf_0d245706b383dd9a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/Predefined;");
          mids$[mid_values_adef7bbeb2e2371d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/Predefined;");

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
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      Predefined Predefined::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Predefined(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0d245706b383dd9a], a0.this$));
      }

      JArray< Predefined > Predefined::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< Predefined >(env->callStaticObjectMethod(cls, mids$[mid_values_adef7bbeb2e2371d]));
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
#include "org/orekit/estimation/measurements/generation/PythonAbstractMeasurementBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonAbstractMeasurementBuilder::class$ = NULL;
          jmethodID *PythonAbstractMeasurementBuilder::mids$ = NULL;
          bool PythonAbstractMeasurementBuilder::live$ = false;

          jclass PythonAbstractMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonAbstractMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_577088844344eac1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;[D[D[Lorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_init$_96f673984426d019] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;DD[Lorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_ae909064be36023e] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getBaseWeight_60c7040667a7dc5c] = env->getMethodID(cls, "getBaseWeight", "()[D");
              mids$[mid_getEnd_85703d13e302437e] = env->getMethodID(cls, "getEnd", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getNoise_60c7040667a7dc5c] = env->getMethodID(cls, "getNoise", "()[D");
              mids$[mid_getSatellites_f81b672126a6576d] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTheoreticalStandardDeviation_60c7040667a7dc5c] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractMeasurementBuilder::PythonAbstractMeasurementBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< ::org::orekit::estimation::measurements::ObservableSatellite > & a3) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_577088844344eac1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          PythonAbstractMeasurementBuilder::PythonAbstractMeasurementBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, jdouble a1, jdouble a2, const JArray< ::org::orekit::estimation::measurements::ObservableSatellite > & a3) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_96f673984426d019, a0.this$, a1, a2, a3.this$)) {}

          void PythonAbstractMeasurementBuilder::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          JArray< jdouble > PythonAbstractMeasurementBuilder::getBaseWeight() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBaseWeight_60c7040667a7dc5c]));
          }

          ::org::orekit::time::AbsoluteDate PythonAbstractMeasurementBuilder::getEnd() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEnd_85703d13e302437e]));
          }

          JArray< jdouble > PythonAbstractMeasurementBuilder::getNoise() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNoise_60c7040667a7dc5c]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > PythonAbstractMeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_f81b672126a6576d]));
          }

          ::org::orekit::time::AbsoluteDate PythonAbstractMeasurementBuilder::getStart() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
          }

          JArray< jdouble > PythonAbstractMeasurementBuilder::getTheoreticalStandardDeviation() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getTheoreticalStandardDeviation_60c7040667a7dc5c]));
          }

          jlong PythonAbstractMeasurementBuilder::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonAbstractMeasurementBuilder::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        namespace generation {
          static PyObject *t_PythonAbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractMeasurementBuilder_of_(t_PythonAbstractMeasurementBuilder *self, PyObject *args);
          static int t_PythonAbstractMeasurementBuilder_init_(t_PythonAbstractMeasurementBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractMeasurementBuilder_finalize(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getBaseWeight(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getEnd(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getNoise(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getSatellites(t_PythonAbstractMeasurementBuilder *self, PyObject *args);
          static PyObject *t_PythonAbstractMeasurementBuilder_getStart(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getTheoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_pythonExtension(t_PythonAbstractMeasurementBuilder *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractMeasurementBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonAbstractMeasurementBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__self(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__baseWeight(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__end(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__noise(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__satellites(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__start(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__theoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__parameters_(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyGetSetDef t_PythonAbstractMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, baseWeight),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, end),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, noise),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, satellites),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, start),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, theoreticalStandardDeviation),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, self),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getBaseWeight, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getNoise, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getSatellites, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getStart, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getTheoreticalStandardDeviation, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMeasurementBuilder)[] = {
            { Py_tp_methods, t_PythonAbstractMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractMeasurementBuilder_init_ },
            { Py_tp_getset, t_PythonAbstractMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PythonAbstractMeasurementBuilder, t_PythonAbstractMeasurementBuilder, PythonAbstractMeasurementBuilder);
          PyObject *t_PythonAbstractMeasurementBuilder::wrap_Object(const PythonAbstractMeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractMeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractMeasurementBuilder *self = (t_PythonAbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractMeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractMeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractMeasurementBuilder *self = (t_PythonAbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractMeasurementBuilder), &PY_TYPE_DEF(PythonAbstractMeasurementBuilder), module, "PythonAbstractMeasurementBuilder", 1);
          }

          void t_PythonAbstractMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurementBuilder), "class_", make_descriptor(PythonAbstractMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurementBuilder), "wrapfn_", make_descriptor(t_PythonAbstractMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractMeasurementBuilder::initializeClass);
            JNINativeMethod methods[] = {
              { "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;", (void *) t_PythonAbstractMeasurementBuilder_build0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractMeasurementBuilder_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractMeasurementBuilder::wrap_Object(PythonAbstractMeasurementBuilder(((t_PythonAbstractMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_of_(t_PythonAbstractMeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractMeasurementBuilder_init_(t_PythonAbstractMeasurementBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                JArray< ::org::orekit::estimation::measurements::ObservableSatellite > a3((jobject) NULL);
                PythonAbstractMeasurementBuilder object((jobject) NULL);

                if (!parseArgs(args, "k[D[D[k", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = PythonAbstractMeasurementBuilder(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                JArray< ::org::orekit::estimation::measurements::ObservableSatellite > a3((jobject) NULL);
                PythonAbstractMeasurementBuilder object((jobject) NULL);

                if (!parseArgs(args, "kDD[k", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = PythonAbstractMeasurementBuilder(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_finalize(t_PythonAbstractMeasurementBuilder *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getBaseWeight(t_PythonAbstractMeasurementBuilder *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getBaseWeight());
            return result.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getEnd(t_PythonAbstractMeasurementBuilder *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getNoise(t_PythonAbstractMeasurementBuilder *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getNoise());
            return result.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getSatellites(t_PythonAbstractMeasurementBuilder *self, PyObject *args)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSatellites());
              return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
            }

            return callSuper(PY_TYPE(PythonAbstractMeasurementBuilder), (PyObject *) self, "getSatellites", args, 2);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getStart(t_PythonAbstractMeasurementBuilder *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getTheoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getTheoreticalStandardDeviation());
            return result.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_pythonExtension(t_PythonAbstractMeasurementBuilder *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractMeasurementBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurementBuilder::mids$[PythonAbstractMeasurementBuilder::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::java::util::t_Map::wrap_Object(::java::util::Map(a1));
            PyObject *result = PyObject_CallMethod(obj, "build", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &value))
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

          static void JNICALL t_PythonAbstractMeasurementBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurementBuilder::mids$[PythonAbstractMeasurementBuilder::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractMeasurementBuilder::mids$[PythonAbstractMeasurementBuilder::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__self(t_PythonAbstractMeasurementBuilder *self, void *data)
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
          static PyObject *t_PythonAbstractMeasurementBuilder_get__parameters_(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__baseWeight(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getBaseWeight());
            return value.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__end(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__noise(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getNoise());
            return value.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__satellites(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__start(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__theoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getTheoreticalStandardDeviation());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/linear/LinearEvolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {

          ::java::lang::Class *LinearEvolution::class$ = NULL;
          jmethodID *LinearEvolution::mids$ = NULL;
          bool LinearEvolution::live$ = false;

          jclass LinearEvolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/linear/LinearEvolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_81f8aac4a3a3185c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_getCommand_aab4fbf77867daa8] = env->getMethodID(cls, "getCommand", "()Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getControlMatrix_688b496048ff947b] = env->getMethodID(cls, "getControlMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getMeasurementJacobian_688b496048ff947b] = env->getMethodID(cls, "getMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getProcessNoiseMatrix_688b496048ff947b] = env->getMethodID(cls, "getProcessNoiseMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getStateTransitionMatrix_688b496048ff947b] = env->getMethodID(cls, "getStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LinearEvolution::LinearEvolution(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::linear::RealMatrix & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_81f8aac4a3a3185c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::hipparchus::linear::RealVector LinearEvolution::getCommand() const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCommand_aab4fbf77867daa8]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getControlMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getControlMatrix_688b496048ff947b]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getMeasurementJacobian() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMeasurementJacobian_688b496048ff947b]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getProcessNoiseMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_688b496048ff947b]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getStateTransitionMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_688b496048ff947b]));
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
    namespace filtering {
      namespace kalman {
        namespace linear {
          static PyObject *t_LinearEvolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearEvolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LinearEvolution_init_(t_LinearEvolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LinearEvolution_getCommand(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getControlMatrix(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getMeasurementJacobian(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getProcessNoiseMatrix(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getStateTransitionMatrix(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_get__command(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__controlMatrix(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__measurementJacobian(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__processNoiseMatrix(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__stateTransitionMatrix(t_LinearEvolution *self, void *data);
          static PyGetSetDef t_LinearEvolution__fields_[] = {
            DECLARE_GET_FIELD(t_LinearEvolution, command),
            DECLARE_GET_FIELD(t_LinearEvolution, controlMatrix),
            DECLARE_GET_FIELD(t_LinearEvolution, measurementJacobian),
            DECLARE_GET_FIELD(t_LinearEvolution, processNoiseMatrix),
            DECLARE_GET_FIELD(t_LinearEvolution, stateTransitionMatrix),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LinearEvolution__methods_[] = {
            DECLARE_METHOD(t_LinearEvolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearEvolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearEvolution, getCommand, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getControlMatrix, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getMeasurementJacobian, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getProcessNoiseMatrix, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getStateTransitionMatrix, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LinearEvolution)[] = {
            { Py_tp_methods, t_LinearEvolution__methods_ },
            { Py_tp_init, (void *) t_LinearEvolution_init_ },
            { Py_tp_getset, t_LinearEvolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LinearEvolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LinearEvolution, t_LinearEvolution, LinearEvolution);

          void t_LinearEvolution::install(PyObject *module)
          {
            installType(&PY_TYPE(LinearEvolution), &PY_TYPE_DEF(LinearEvolution), module, "LinearEvolution", 0);
          }

          void t_LinearEvolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearEvolution), "class_", make_descriptor(LinearEvolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearEvolution), "wrapfn_", make_descriptor(t_LinearEvolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearEvolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LinearEvolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LinearEvolution::initializeClass, 1)))
              return NULL;
            return t_LinearEvolution::wrap_Object(LinearEvolution(((t_LinearEvolution *) arg)->object.this$));
          }
          static PyObject *t_LinearEvolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LinearEvolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LinearEvolution_init_(t_LinearEvolution *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
            LinearEvolution object((jobject) NULL);

            if (!parseArgs(args, "kkkkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = LinearEvolution(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LinearEvolution_getCommand(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealVector result((jobject) NULL);
            OBJ_CALL(result = self->object.getCommand());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getControlMatrix(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getControlMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getMeasurementJacobian(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getProcessNoiseMatrix(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getStateTransitionMatrix(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_get__command(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealVector value((jobject) NULL);
            OBJ_CALL(value = self->object.getCommand());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__controlMatrix(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getControlMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__measurementJacobian(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__processNoiseMatrix(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__stateTransitionMatrix(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CommonMetadataWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CommonMetadataWriter::class$ = NULL;
            jmethodID *CommonMetadataWriter::mids$ = NULL;
            bool CommonMetadataWriter::live$ = false;

            jclass CommonMetadataWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CommonMetadataWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7aefdb802b7d7e19] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmCommonMetadata;Lorg/orekit/files/ccsds/definitions/TimeConverter;)V");
                mids$[mid_writeContent_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CommonMetadataWriter::CommonMetadataWriter(const ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata & a0, const ::org::orekit::files::ccsds::definitions::TimeConverter & a1) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_7aefdb802b7d7e19, a0.this$, a1.this$)) {}
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
            static PyObject *t_CommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CommonMetadataWriter_init_(t_CommonMetadataWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_CommonMetadataWriter__methods_[] = {
              DECLARE_METHOD(t_CommonMetadataWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CommonMetadataWriter)[] = {
              { Py_tp_methods, t_CommonMetadataWriter__methods_ },
              { Py_tp_init, (void *) t_CommonMetadataWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CommonMetadataWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(CommonMetadataWriter, t_CommonMetadataWriter, CommonMetadataWriter);

            void t_CommonMetadataWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CommonMetadataWriter), &PY_TYPE_DEF(CommonMetadataWriter), module, "CommonMetadataWriter", 0);
            }

            void t_CommonMetadataWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataWriter), "class_", make_descriptor(CommonMetadataWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataWriter), "wrapfn_", make_descriptor(t_CommonMetadataWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CommonMetadataWriter::initializeClass, 1)))
                return NULL;
              return t_CommonMetadataWriter::wrap_Object(CommonMetadataWriter(((t_CommonMetadataWriter *) arg)->object.this$));
            }
            static PyObject *t_CommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CommonMetadataWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CommonMetadataWriter_init_(t_CommonMetadataWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata a0((jobject) NULL);
              ::org::orekit::files::ccsds::definitions::TimeConverter a1((jobject) NULL);
              CommonMetadataWriter object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata::initializeClass, ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, &a0, &a1))
              {
                INT_CALL(object = CommonMetadataWriter(a0, a1));
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
#include "org/orekit/files/rinex/clock/RinexClockParser.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/io/BufferedReader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClockParser::class$ = NULL;
          jmethodID *RinexClockParser::mids$ = NULL;
          bool RinexClockParser::live$ = false;

          jclass RinexClockParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClockParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_parse_4c37f05826036982] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;)Lorg/orekit/files/rinex/clock/RinexClock;");
              mids$[mid_parse_57f3ad0a089e35e5] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock;");
              mids$[mid_parse_397982b7308487ff] = env->getMethodID(cls, "parse", "(Ljava/io/BufferedReader;Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClockParser::RinexClockParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::orekit::files::rinex::clock::RinexClock RinexClockParser::parse(const ::java::io::InputStream & a0) const
          {
            return ::org::orekit::files::rinex::clock::RinexClock(env->callObjectMethod(this$, mids$[mid_parse_4c37f05826036982], a0.this$));
          }

          ::org::orekit::files::rinex::clock::RinexClock RinexClockParser::parse(const ::java::lang::String & a0) const
          {
            return ::org::orekit::files::rinex::clock::RinexClock(env->callObjectMethod(this$, mids$[mid_parse_57f3ad0a089e35e5], a0.this$));
          }

          ::org::orekit::files::rinex::clock::RinexClock RinexClockParser::parse(const ::java::io::BufferedReader & a0, const ::java::lang::String & a1) const
          {
            return ::org::orekit::files::rinex::clock::RinexClock(env->callObjectMethod(this$, mids$[mid_parse_397982b7308487ff], a0.this$, a1.this$));
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
        namespace clock {
          static PyObject *t_RinexClockParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClockParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClockParser_init_(t_RinexClockParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClockParser_parse(t_RinexClockParser *self, PyObject *args);

          static PyMethodDef t_RinexClockParser__methods_[] = {
            DECLARE_METHOD(t_RinexClockParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClockParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClockParser, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClockParser)[] = {
            { Py_tp_methods, t_RinexClockParser__methods_ },
            { Py_tp_init, (void *) t_RinexClockParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClockParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClockParser, t_RinexClockParser, RinexClockParser);

          void t_RinexClockParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClockParser), &PY_TYPE_DEF(RinexClockParser), module, "RinexClockParser", 0);
          }

          void t_RinexClockParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClockParser), "class_", make_descriptor(RinexClockParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClockParser), "wrapfn_", make_descriptor(t_RinexClockParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClockParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClockParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClockParser::initializeClass, 1)))
              return NULL;
            return t_RinexClockParser::wrap_Object(RinexClockParser(((t_RinexClockParser *) arg)->object.this$));
          }
          static PyObject *t_RinexClockParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClockParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClockParser_init_(t_RinexClockParser *self, PyObject *args, PyObject *kwds)
          {
            RinexClockParser object((jobject) NULL);

            INT_CALL(object = RinexClockParser());
            self->object = object;

            return 0;
          }

          static PyObject *t_RinexClockParser_parse(t_RinexClockParser *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::io::InputStream a0((jobject) NULL);
                ::org::orekit::files::rinex::clock::RinexClock result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::rinex::clock::t_RinexClock::wrap_Object(result);
                }
              }
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::files::rinex::clock::RinexClock result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::rinex::clock::t_RinexClock::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::io::BufferedReader a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::org::orekit::files::rinex::clock::RinexClock result((jobject) NULL);

                if (!parseArgs(args, "ks", ::java::io::BufferedReader::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::orekit::files::rinex::clock::t_RinexClock::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "parse", args);
            return NULL;
          }
        }
      }
    }
  }
}
