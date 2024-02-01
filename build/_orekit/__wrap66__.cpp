#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsFieldIntegrator.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsFieldIntegrator::class$ = NULL;
        jmethodID *AdamsFieldIntegrator::mids$ = NULL;
        bool AdamsFieldIntegrator::live$ = false;

        jclass AdamsFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_486a60974fa369d1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;IIDD[D[D)V");
            mids$[mid_init$_d10c4dfa0f90cd91] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;IIDDDD)V");
            mids$[mid_integrate_7e5884a5ebca9afb] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_updateHighOrderDerivativesPhase1_51bcd4a8a90d8d6b] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_5846b27571ec7191] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;)V");
            mids$[mid_initializeHighOrderDerivatives_59a89abbfffc5f1c] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_errorEstimation_6aa3626a66e9d9b5] = env->getMethodID(cls, "errorEstimation", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/FieldMatrix;)D");
            mids$[mid_finalizeStep_0548923e7e2ccdf5] = env->getMethodID(cls, "finalizeStep", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsFieldIntegrator::AdamsFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jint a2, jint a3, jdouble a4, jdouble a5, const JArray< jdouble > & a6, const JArray< jdouble > & a7) : ::org::hipparchus::ode::MultistepFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_486a60974fa369d1, a0.this$, a1.this$, a2, a3, a4, a5, a6.this$, a7.this$)) {}

        AdamsFieldIntegrator::AdamsFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jint a2, jint a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::hipparchus::ode::MultistepFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_d10c4dfa0f90cd91, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7)) {}

        ::org::hipparchus::ode::FieldODEStateAndDerivative AdamsFieldIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_7e5884a5ebca9afb], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::Array2DRowFieldMatrix AdamsFieldIntegrator::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowFieldMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_51bcd4a8a90d8d6b], a0.this$));
        }

        void AdamsFieldIntegrator::updateHighOrderDerivativesPhase2(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::hipparchus::linear::Array2DRowFieldMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_5846b27571ec7191], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsFieldIntegrator_of_(t_AdamsFieldIntegrator *self, PyObject *args);
        static int t_AdamsFieldIntegrator_init_(t_AdamsFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsFieldIntegrator_integrate(t_AdamsFieldIntegrator *self, PyObject *args);
        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase1(t_AdamsFieldIntegrator *self, PyObject *arg);
        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase2(t_AdamsFieldIntegrator *self, PyObject *args);
        static PyObject *t_AdamsFieldIntegrator_get__parameters_(t_AdamsFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdamsFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsFieldIntegrator, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsFieldIntegrator)[] = {
          { Py_tp_methods, t_AdamsFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsFieldIntegrator_init_ },
          { Py_tp_getset, t_AdamsFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::MultistepFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsFieldIntegrator, t_AdamsFieldIntegrator, AdamsFieldIntegrator);
        PyObject *t_AdamsFieldIntegrator::wrap_Object(const AdamsFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsFieldIntegrator *self = (t_AdamsFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsFieldIntegrator *self = (t_AdamsFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsFieldIntegrator), &PY_TYPE_DEF(AdamsFieldIntegrator), module, "AdamsFieldIntegrator", 0);
        }

        void t_AdamsFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsFieldIntegrator), "class_", make_descriptor(AdamsFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsFieldIntegrator), "wrapfn_", make_descriptor(t_AdamsFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsFieldIntegrator::wrap_Object(AdamsFieldIntegrator(((t_AdamsFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsFieldIntegrator_of_(t_AdamsFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsFieldIntegrator_init_(t_AdamsFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jint a2;
              jint a3;
              jdouble a4;
              jdouble a5;
              JArray< jdouble > a6((jobject) NULL);
              JArray< jdouble > a7((jobject) NULL);
              AdamsFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsIIDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = AdamsFieldIntegrator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jint a2;
              jint a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              AdamsFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsIIDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = AdamsFieldIntegrator(a0, a1, a2, a3, a4, a5, a6, a7));
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

        static PyObject *t_AdamsFieldIntegrator_integrate(t_AdamsFieldIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldExpandableODE a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldExpandableODE::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldExpandableODE::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(AdamsFieldIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase1(t_AdamsFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowFieldMatrix a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::Array2DRowFieldMatrix result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase2(t_AdamsFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::linear::Array2DRowFieldMatrix a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
        static PyObject *t_AdamsFieldIntegrator_get__parameters_(t_AdamsFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/PythonDTM2000InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonDTM2000InputParameters::class$ = NULL;
          jmethodID *PythonDTM2000InputParameters::mids$ = NULL;
          bool PythonDTM2000InputParameters::live$ = false;

          jclass PythonDTM2000InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonDTM2000InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_get24HoursKp_209f08246d708042] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getInstantFlux_209f08246d708042] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMeanFlux_209f08246d708042] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getThreeHourlyKP_209f08246d708042] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonDTM2000InputParameters::PythonDTM2000InputParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonDTM2000InputParameters::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonDTM2000InputParameters::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonDTM2000InputParameters::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_PythonDTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonDTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonDTM2000InputParameters_init_(t_PythonDTM2000InputParameters *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonDTM2000InputParameters_finalize(t_PythonDTM2000InputParameters *self);
          static PyObject *t_PythonDTM2000InputParameters_pythonExtension(t_PythonDTM2000InputParameters *self, PyObject *args);
          static jdouble JNICALL t_PythonDTM2000InputParameters_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonDTM2000InputParameters_getInstantFlux1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonDTM2000InputParameters_getMaxDate2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonDTM2000InputParameters_getMeanFlux3(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonDTM2000InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonDTM2000InputParameters_getThreeHourlyKP5(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonDTM2000InputParameters_pythonDecRef6(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonDTM2000InputParameters_get__self(t_PythonDTM2000InputParameters *self, void *data);
          static PyGetSetDef t_PythonDTM2000InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_PythonDTM2000InputParameters, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonDTM2000InputParameters__methods_[] = {
            DECLARE_METHOD(t_PythonDTM2000InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDTM2000InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDTM2000InputParameters, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonDTM2000InputParameters, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonDTM2000InputParameters)[] = {
            { Py_tp_methods, t_PythonDTM2000InputParameters__methods_ },
            { Py_tp_init, (void *) t_PythonDTM2000InputParameters_init_ },
            { Py_tp_getset, t_PythonDTM2000InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonDTM2000InputParameters)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonDTM2000InputParameters, t_PythonDTM2000InputParameters, PythonDTM2000InputParameters);

          void t_PythonDTM2000InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonDTM2000InputParameters), &PY_TYPE_DEF(PythonDTM2000InputParameters), module, "PythonDTM2000InputParameters", 1);
          }

          void t_PythonDTM2000InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDTM2000InputParameters), "class_", make_descriptor(PythonDTM2000InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDTM2000InputParameters), "wrapfn_", make_descriptor(t_PythonDTM2000InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDTM2000InputParameters), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonDTM2000InputParameters::initializeClass);
            JNINativeMethod methods[] = {
              { "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_get24HoursKp0 },
              { "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_getInstantFlux1 },
              { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonDTM2000InputParameters_getMaxDate2 },
              { "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_getMeanFlux3 },
              { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonDTM2000InputParameters_getMinDate4 },
              { "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_getThreeHourlyKP5 },
              { "pythonDecRef", "()V", (void *) t_PythonDTM2000InputParameters_pythonDecRef6 },
            };
            env->registerNatives(cls, methods, 7);
          }

          static PyObject *t_PythonDTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonDTM2000InputParameters::initializeClass, 1)))
              return NULL;
            return t_PythonDTM2000InputParameters::wrap_Object(PythonDTM2000InputParameters(((t_PythonDTM2000InputParameters *) arg)->object.this$));
          }
          static PyObject *t_PythonDTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonDTM2000InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonDTM2000InputParameters_init_(t_PythonDTM2000InputParameters *self, PyObject *args, PyObject *kwds)
          {
            PythonDTM2000InputParameters object((jobject) NULL);

            INT_CALL(object = PythonDTM2000InputParameters());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonDTM2000InputParameters_finalize(t_PythonDTM2000InputParameters *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonDTM2000InputParameters_pythonExtension(t_PythonDTM2000InputParameters *self, PyObject *args)
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_getInstantFlux1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static jobject JNICALL t_PythonDTM2000InputParameters_getMaxDate2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMaxDate", result);
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_getMeanFlux3(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static jobject JNICALL t_PythonDTM2000InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMinDate", result);
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_getThreeHourlyKP5(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static void JNICALL t_PythonDTM2000InputParameters_pythonDecRef6(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonDTM2000InputParameters_get__self(t_PythonDTM2000InputParameters *self, void *data)
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
#include "org/hipparchus/stat/descriptive/MultivariateSummaryStatistics.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/StatisticalMultivariateSummary.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *MultivariateSummaryStatistics::class$ = NULL;
        jmethodID *MultivariateSummaryStatistics::mids$ = NULL;
        bool MultivariateSummaryStatistics::live$ = false;

        jclass MultivariateSummaryStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/MultivariateSummaryStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_06c90d8be18d8afa] = env->getMethodID(cls, "<init>", "(IZ)V");
            mids$[mid_addValue_a71c45509eaf92d1] = env->getMethodID(cls, "addValue", "([D)V");
            mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCovariance_b2eebabce70526d8] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getGeometricMean_be783177b060994b] = env->getMethodID(cls, "getGeometricMean", "()[D");
            mids$[mid_getMax_be783177b060994b] = env->getMethodID(cls, "getMax", "()[D");
            mids$[mid_getMean_be783177b060994b] = env->getMethodID(cls, "getMean", "()[D");
            mids$[mid_getMin_be783177b060994b] = env->getMethodID(cls, "getMin", "()[D");
            mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_be783177b060994b] = env->getMethodID(cls, "getStandardDeviation", "()[D");
            mids$[mid_getSum_be783177b060994b] = env->getMethodID(cls, "getSum", "()[D");
            mids$[mid_getSumLog_be783177b060994b] = env->getMethodID(cls, "getSumLog", "()[D");
            mids$[mid_getSumSq_be783177b060994b] = env->getMethodID(cls, "getSumSq", "()[D");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultivariateSummaryStatistics::MultivariateSummaryStatistics(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

        MultivariateSummaryStatistics::MultivariateSummaryStatistics(jint a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_06c90d8be18d8afa, a0, a1)) {}

        void MultivariateSummaryStatistics::addValue(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addValue_a71c45509eaf92d1], a0.this$);
        }

        void MultivariateSummaryStatistics::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
        }

        jboolean MultivariateSummaryStatistics::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        ::org::hipparchus::linear::RealMatrix MultivariateSummaryStatistics::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_b2eebabce70526d8]));
        }

        jint MultivariateSummaryStatistics::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
        }

        JArray< jdouble > MultivariateSummaryStatistics::getGeometricMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGeometricMean_be783177b060994b]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getMax() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMax_be783177b060994b]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMean_be783177b060994b]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getMin() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMin_be783177b060994b]));
        }

        jlong MultivariateSummaryStatistics::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
        }

        JArray< jdouble > MultivariateSummaryStatistics::getStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStandardDeviation_be783177b060994b]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getSum() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSum_be783177b060994b]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getSumLog() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumLog_be783177b060994b]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getSumSq() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumSq_be783177b060994b]));
        }

        jint MultivariateSummaryStatistics::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        ::java::lang::String MultivariateSummaryStatistics::toString() const
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
      namespace descriptive {
        static PyObject *t_MultivariateSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultivariateSummaryStatistics_init_(t_MultivariateSummaryStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultivariateSummaryStatistics_addValue(t_MultivariateSummaryStatistics *self, PyObject *arg);
        static PyObject *t_MultivariateSummaryStatistics_clear(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_equals(t_MultivariateSummaryStatistics *self, PyObject *args);
        static PyObject *t_MultivariateSummaryStatistics_getCovariance(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getDimension(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getGeometricMean(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getMax(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getMean(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getMin(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getN(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getStandardDeviation(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getSum(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getSumLog(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getSumSq(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_hashCode(t_MultivariateSummaryStatistics *self, PyObject *args);
        static PyObject *t_MultivariateSummaryStatistics_toString(t_MultivariateSummaryStatistics *self, PyObject *args);
        static PyObject *t_MultivariateSummaryStatistics_get__covariance(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__dimension(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__geometricMean(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__max(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__mean(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__min(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__n(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__standardDeviation(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__sum(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__sumLog(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__sumSq(t_MultivariateSummaryStatistics *self, void *data);
        static PyGetSetDef t_MultivariateSummaryStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, covariance),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, dimension),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, geometricMean),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, max),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, mean),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, min),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, n),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, standardDeviation),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, sum),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, sumLog),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, sumSq),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultivariateSummaryStatistics__methods_[] = {
          DECLARE_METHOD(t_MultivariateSummaryStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, addValue, METH_O),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, clear, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, equals, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getMax, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getMean, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getMin, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getN, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getSum, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getSumLog, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getSumSq, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateSummaryStatistics)[] = {
          { Py_tp_methods, t_MultivariateSummaryStatistics__methods_ },
          { Py_tp_init, (void *) t_MultivariateSummaryStatistics_init_ },
          { Py_tp_getset, t_MultivariateSummaryStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateSummaryStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultivariateSummaryStatistics, t_MultivariateSummaryStatistics, MultivariateSummaryStatistics);

        void t_MultivariateSummaryStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateSummaryStatistics), &PY_TYPE_DEF(MultivariateSummaryStatistics), module, "MultivariateSummaryStatistics", 0);
        }

        void t_MultivariateSummaryStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateSummaryStatistics), "class_", make_descriptor(MultivariateSummaryStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateSummaryStatistics), "wrapfn_", make_descriptor(t_MultivariateSummaryStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateSummaryStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateSummaryStatistics::initializeClass, 1)))
            return NULL;
          return t_MultivariateSummaryStatistics::wrap_Object(MultivariateSummaryStatistics(((t_MultivariateSummaryStatistics *) arg)->object.this$));
        }
        static PyObject *t_MultivariateSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateSummaryStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultivariateSummaryStatistics_init_(t_MultivariateSummaryStatistics *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jint a0;
              MultivariateSummaryStatistics object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = MultivariateSummaryStatistics(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jint a0;
              jboolean a1;
              MultivariateSummaryStatistics object((jobject) NULL);

              if (!parseArgs(args, "IZ", &a0, &a1))
              {
                INT_CALL(object = MultivariateSummaryStatistics(a0, a1));
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

        static PyObject *t_MultivariateSummaryStatistics_addValue(t_MultivariateSummaryStatistics *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.addValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addValue", arg);
          return NULL;
        }

        static PyObject *t_MultivariateSummaryStatistics_clear(t_MultivariateSummaryStatistics *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_MultivariateSummaryStatistics_equals(t_MultivariateSummaryStatistics *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(MultivariateSummaryStatistics), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_MultivariateSummaryStatistics_getCovariance(t_MultivariateSummaryStatistics *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_MultivariateSummaryStatistics_getDimension(t_MultivariateSummaryStatistics *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_MultivariateSummaryStatistics_getGeometricMean(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGeometricMean());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getMax(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMax());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getMean(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMean());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getMin(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMin());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getN(t_MultivariateSummaryStatistics *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_MultivariateSummaryStatistics_getStandardDeviation(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getSum(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSum());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getSumLog(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumLog());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getSumSq(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumSq());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_hashCode(t_MultivariateSummaryStatistics *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(MultivariateSummaryStatistics), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_MultivariateSummaryStatistics_toString(t_MultivariateSummaryStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(MultivariateSummaryStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__covariance(t_MultivariateSummaryStatistics *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__dimension(t_MultivariateSummaryStatistics *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__geometricMean(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeometricMean());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__max(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMax());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__mean(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMean());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__min(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMin());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__n(t_MultivariateSummaryStatistics *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__standardDeviation(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStandardDeviation());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__sum(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSum());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__sumLog(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumLog());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__sumSq(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumSq());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DormandPrince853FieldIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DormandPrince853FieldIntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince853FieldIntegratorBuilder::mids$ = NULL;
        bool DormandPrince853FieldIntegratorBuilder::live$ = false;

        jclass DormandPrince853FieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince853FieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_78d8a25057f42815] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853FieldIntegratorBuilder::DormandPrince853FieldIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator DormandPrince853FieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_78d8a25057f42815], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_of_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args);
        static int t_DormandPrince853FieldIntegratorBuilder_init_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_buildIntegrator(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_get__parameters_(t_DormandPrince853FieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_DormandPrince853FieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince853FieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853FieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince853FieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853FieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_DormandPrince853FieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853FieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(DormandPrince853FieldIntegratorBuilder, t_DormandPrince853FieldIntegratorBuilder, DormandPrince853FieldIntegratorBuilder);
        PyObject *t_DormandPrince853FieldIntegratorBuilder::wrap_Object(const DormandPrince853FieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegratorBuilder *self = (t_DormandPrince853FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince853FieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegratorBuilder *self = (t_DormandPrince853FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince853FieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853FieldIntegratorBuilder), &PY_TYPE_DEF(DormandPrince853FieldIntegratorBuilder), module, "DormandPrince853FieldIntegratorBuilder", 0);
        }

        void t_DormandPrince853FieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegratorBuilder), "class_", make_descriptor(DormandPrince853FieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince853FieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853FieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853FieldIntegratorBuilder::wrap_Object(DormandPrince853FieldIntegratorBuilder(((t_DormandPrince853FieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853FieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince853FieldIntegratorBuilder_of_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince853FieldIntegratorBuilder_init_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince853FieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince853FieldIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince853FieldIntegratorBuilder_buildIntegrator(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_get__parameters_(t_DormandPrince853FieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *EventHandler::class$ = NULL;
          jmethodID *EventHandler::mids$ = NULL;
          bool EventHandler::live$ = false;

          jclass EventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/EventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_eventOccurred_66898681536e4202] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_init_381d97cc333bc994] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V");
              mids$[mid_resetState_556ad75a8c47fba2] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::ode::events::Action EventHandler::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_66898681536e4202], a0.this$, a1.this$, a2));
          }

          void EventHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::propagation::events::EventDetector & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_init_381d97cc333bc994], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::propagation::SpacecraftState EventHandler::resetState(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_556ad75a8c47fba2], a0.this$, a1.this$));
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
          static PyObject *t_EventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventHandler_eventOccurred(t_EventHandler *self, PyObject *args);
          static PyObject *t_EventHandler_init(t_EventHandler *self, PyObject *args);
          static PyObject *t_EventHandler_resetState(t_EventHandler *self, PyObject *args);

          static PyMethodDef t_EventHandler__methods_[] = {
            DECLARE_METHOD(t_EventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventHandler, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_EventHandler, init, METH_VARARGS),
            DECLARE_METHOD(t_EventHandler, resetState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EventHandler)[] = {
            { Py_tp_methods, t_EventHandler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EventHandler, t_EventHandler, EventHandler);

          void t_EventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(EventHandler), &PY_TYPE_DEF(EventHandler), module, "EventHandler", 0);
          }

          void t_EventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventHandler), "class_", make_descriptor(EventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventHandler), "wrapfn_", make_descriptor(t_EventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventHandler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EventHandler::initializeClass, 1)))
              return NULL;
            return t_EventHandler::wrap_Object(EventHandler(((t_EventHandler *) arg)->object.this$));
          }
          static PyObject *t_EventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_EventHandler_eventOccurred(t_EventHandler *self, PyObject *args)
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

          static PyObject *t_EventHandler_init(t_EventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a2((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.init(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_EventHandler_resetState(t_EventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.resetState(a0, a1));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageVersionXmlTokenBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *MessageVersionXmlTokenBuilder::class$ = NULL;
            jmethodID *MessageVersionXmlTokenBuilder::mids$ = NULL;
            bool MessageVersionXmlTokenBuilder::live$ = false;

            jclass MessageVersionXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/MessageVersionXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_bb6f0a25fbefd346] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MessageVersionXmlTokenBuilder::MessageVersionXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            ::java::util::List MessageVersionXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_bb6f0a25fbefd346], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_MessageVersionXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageVersionXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MessageVersionXmlTokenBuilder_init_(t_MessageVersionXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MessageVersionXmlTokenBuilder_buildTokens(t_MessageVersionXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_MessageVersionXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_MessageVersionXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageVersionXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageVersionXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MessageVersionXmlTokenBuilder)[] = {
              { Py_tp_methods, t_MessageVersionXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_MessageVersionXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MessageVersionXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MessageVersionXmlTokenBuilder, t_MessageVersionXmlTokenBuilder, MessageVersionXmlTokenBuilder);

            void t_MessageVersionXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(MessageVersionXmlTokenBuilder), &PY_TYPE_DEF(MessageVersionXmlTokenBuilder), module, "MessageVersionXmlTokenBuilder", 0);
            }

            void t_MessageVersionXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageVersionXmlTokenBuilder), "class_", make_descriptor(MessageVersionXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageVersionXmlTokenBuilder), "wrapfn_", make_descriptor(t_MessageVersionXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageVersionXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MessageVersionXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MessageVersionXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_MessageVersionXmlTokenBuilder::wrap_Object(MessageVersionXmlTokenBuilder(((t_MessageVersionXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_MessageVersionXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MessageVersionXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MessageVersionXmlTokenBuilder_init_(t_MessageVersionXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              MessageVersionXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = MessageVersionXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_MessageVersionXmlTokenBuilder_buildTokens(t_MessageVersionXmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
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
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
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
          mids$[mid_getData_704a5bee58538972] = env->getMethodID(cls, "getData", "()Ljava/lang/Object;");
          mids$[mid_getEnd_80e11148db499dda] = env->getMethodID(cls, "getEnd", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getEndTransition_1026700a6787ef22] = env->getMethodID(cls, "getEndTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getStartTransition_1026700a6787ef22] = env->getMethodID(cls, "getStartTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_next_ea49fa2ad441b95d] = env->getMethodID(cls, "next", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_previous_ea49fa2ad441b95d] = env->getMethodID(cls, "previous", "()Lorg/orekit/utils/TimeSpanMap$Span;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object TimeSpanMap$Span::getData() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getData_704a5bee58538972]));
      }

      ::org::orekit::time::AbsoluteDate TimeSpanMap$Span::getEnd() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEnd_80e11148db499dda]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap$Span::getEndTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getEndTransition_1026700a6787ef22]));
      }

      ::org::orekit::time::AbsoluteDate TimeSpanMap$Span::getStart() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap$Span::getStartTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getStartTransition_1026700a6787ef22]));
      }

      TimeSpanMap$Span TimeSpanMap$Span::next() const
      {
        return TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_next_ea49fa2ad441b95d]));
      }

      TimeSpanMap$Span TimeSpanMap$Span::previous() const
      {
        return TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_previous_ea49fa2ad441b95d]));
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ManeuverFieldType::class$ = NULL;
              jmethodID *ManeuverFieldType::mids$ = NULL;
              bool ManeuverFieldType::live$ = false;
              ManeuverFieldType *ManeuverFieldType::ACC_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_INTERP = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_MAG_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_X = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::DELTA_MASS = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_CDA = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_RATIO = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_X = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_ID = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_MASS = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_MAG_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_X = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::MAN_DURA = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_EFFIC = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_INTERP = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_ISP = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_MAG_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_X = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::TIME_ABSOLUTE = NULL;
              ManeuverFieldType *ManeuverFieldType::TIME_RELATIVE = NULL;

              jclass ManeuverFieldType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_checkUnit_a7320f681e0b63b1] = env->getMethodID(cls, "checkUnit", "(Lorg/orekit/utils/units/Unit;)V");
                  mids$[mid_getUnit_b1bb36679ea369c9] = env->getMethodID(cls, "getUnit", "()Lorg/orekit/utils/units/Unit;");
                  mids$[mid_isTime_eee3de00fe971136] = env->getMethodID(cls, "isTime", "()Z");
                  mids$[mid_outputField_d27e637f2e2af68f] = env->getMethodID(cls, "outputField", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver;)Ljava/lang/String;");
                  mids$[mid_process_1065b53e148346a5] = env->getMethodID(cls, "process", "(Ljava/lang/String;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver;ILjava/lang/String;)V");
                  mids$[mid_valueOf_3eb8bba892d89229] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;");
                  mids$[mid_values_010c404fa2b52dbb] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACC_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_INTERP = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_INTERP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_MAG_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_MAG_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_X = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DELTA_MASS = new ManeuverFieldType(env->getStaticObjectField(cls, "DELTA_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_CDA = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_CDA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_RATIO = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_RATIO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_X = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_ID = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_MASS = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_MAG_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_MAG_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_X = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  MAN_DURA = new ManeuverFieldType(env->getStaticObjectField(cls, "MAN_DURA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_EFFIC = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_EFFIC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_INTERP = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_INTERP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_ISP = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_ISP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_MAG_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_MAG_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_X = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  TIME_ABSOLUTE = new ManeuverFieldType(env->getStaticObjectField(cls, "TIME_ABSOLUTE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  TIME_RELATIVE = new ManeuverFieldType(env->getStaticObjectField(cls, "TIME_RELATIVE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              void ManeuverFieldType::checkUnit(const ::org::orekit::utils::units::Unit & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_checkUnit_a7320f681e0b63b1], a0.this$);
              }

              ::org::orekit::utils::units::Unit ManeuverFieldType::getUnit() const
              {
                return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getUnit_b1bb36679ea369c9]));
              }

              jboolean ManeuverFieldType::isTime() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isTime_eee3de00fe971136]);
              }

              ::java::lang::String ManeuverFieldType::outputField(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver & a1) const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_outputField_d27e637f2e2af68f], a0.this$, a1.this$));
              }

              void ManeuverFieldType::process(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver & a2, jint a3, const ::java::lang::String & a4) const
              {
                env->callVoidMethod(this$, mids$[mid_process_1065b53e148346a5], a0.this$, a1.this$, a2.this$, a3, a4.this$);
              }

              ManeuverFieldType ManeuverFieldType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManeuverFieldType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3eb8bba892d89229], a0.this$));
              }

              JArray< ManeuverFieldType > ManeuverFieldType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManeuverFieldType >(env->callStaticObjectMethod(cls, mids$[mid_values_010c404fa2b52dbb]));
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
              static PyObject *t_ManeuverFieldType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverFieldType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverFieldType_of_(t_ManeuverFieldType *self, PyObject *args);
              static PyObject *t_ManeuverFieldType_checkUnit(t_ManeuverFieldType *self, PyObject *arg);
              static PyObject *t_ManeuverFieldType_getUnit(t_ManeuverFieldType *self);
              static PyObject *t_ManeuverFieldType_isTime(t_ManeuverFieldType *self);
              static PyObject *t_ManeuverFieldType_outputField(t_ManeuverFieldType *self, PyObject *args);
              static PyObject *t_ManeuverFieldType_process(t_ManeuverFieldType *self, PyObject *args);
              static PyObject *t_ManeuverFieldType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManeuverFieldType_values(PyTypeObject *type);
              static PyObject *t_ManeuverFieldType_get__time(t_ManeuverFieldType *self, void *data);
              static PyObject *t_ManeuverFieldType_get__unit(t_ManeuverFieldType *self, void *data);
              static PyObject *t_ManeuverFieldType_get__parameters_(t_ManeuverFieldType *self, void *data);
              static PyGetSetDef t_ManeuverFieldType__fields_[] = {
                DECLARE_GET_FIELD(t_ManeuverFieldType, time),
                DECLARE_GET_FIELD(t_ManeuverFieldType, unit),
                DECLARE_GET_FIELD(t_ManeuverFieldType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManeuverFieldType__methods_[] = {
                DECLARE_METHOD(t_ManeuverFieldType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverFieldType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverFieldType, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverFieldType, checkUnit, METH_O),
                DECLARE_METHOD(t_ManeuverFieldType, getUnit, METH_NOARGS),
                DECLARE_METHOD(t_ManeuverFieldType, isTime, METH_NOARGS),
                DECLARE_METHOD(t_ManeuverFieldType, outputField, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverFieldType, process, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverFieldType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManeuverFieldType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManeuverFieldType)[] = {
                { Py_tp_methods, t_ManeuverFieldType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManeuverFieldType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManeuverFieldType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManeuverFieldType, t_ManeuverFieldType, ManeuverFieldType);
              PyObject *t_ManeuverFieldType::wrap_Object(const ManeuverFieldType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverFieldType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverFieldType *self = (t_ManeuverFieldType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManeuverFieldType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverFieldType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverFieldType *self = (t_ManeuverFieldType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManeuverFieldType::install(PyObject *module)
              {
                installType(&PY_TYPE(ManeuverFieldType), &PY_TYPE_DEF(ManeuverFieldType), module, "ManeuverFieldType", 0);
              }

              void t_ManeuverFieldType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "class_", make_descriptor(ManeuverFieldType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "wrapfn_", make_descriptor(t_ManeuverFieldType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManeuverFieldType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_INTERP", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_INTERP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_MAG_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_MAG_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DELTA_MASS", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DELTA_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_CDA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_CDA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_RATIO", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_RATIO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_ID", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_MASS", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_MAG_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_MAG_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "MAN_DURA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::MAN_DURA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_EFFIC", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_EFFIC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_INTERP", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_INTERP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_ISP", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_ISP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_MAG_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_MAG_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "TIME_ABSOLUTE", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::TIME_ABSOLUTE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "TIME_RELATIVE", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::TIME_RELATIVE)));
              }

              static PyObject *t_ManeuverFieldType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManeuverFieldType::initializeClass, 1)))
                  return NULL;
                return t_ManeuverFieldType::wrap_Object(ManeuverFieldType(((t_ManeuverFieldType *) arg)->object.this$));
              }
              static PyObject *t_ManeuverFieldType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManeuverFieldType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManeuverFieldType_of_(t_ManeuverFieldType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManeuverFieldType_checkUnit(t_ManeuverFieldType *self, PyObject *arg)
              {
                ::org::orekit::utils::units::Unit a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::utils::units::Unit::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.checkUnit(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "checkUnit", arg);
                return NULL;
              }

              static PyObject *t_ManeuverFieldType_getUnit(t_ManeuverFieldType *self)
              {
                ::org::orekit::utils::units::Unit result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnit());
                return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
              }

              static PyObject *t_ManeuverFieldType_isTime(t_ManeuverFieldType *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isTime());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ManeuverFieldType_outputField(t_ManeuverFieldType *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver a1((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.outputField(a0, a1));
                  return j2p(result);
                }

                PyErr_SetArgsError((PyObject *) self, "outputField", args);
                return NULL;
              }

              static PyObject *t_ManeuverFieldType_process(t_ManeuverFieldType *self, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver a2((jobject) NULL);
                jint a3;
                ::java::lang::String a4((jobject) NULL);

                if (!parseArgs(args, "skkIs", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(self->object.process(a0, a1, a2, a3, a4));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ManeuverFieldType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManeuverFieldType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManeuverFieldType::valueOf(a0));
                  return t_ManeuverFieldType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManeuverFieldType_values(PyTypeObject *type)
              {
                JArray< ManeuverFieldType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManeuverFieldType::values());
                return JArray<jobject>(result.this$).wrap(t_ManeuverFieldType::wrap_jobject);
              }
              static PyObject *t_ManeuverFieldType_get__parameters_(t_ManeuverFieldType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_ManeuverFieldType_get__time(t_ManeuverFieldType *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isTime());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_ManeuverFieldType_get__unit(t_ManeuverFieldType *self, void *data)
              {
                ::org::orekit::utils::units::Unit value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnit());
                return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
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
#include "org/orekit/propagation/conversion/EulerIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EulerIntegratorBuilder::class$ = NULL;
        jmethodID *EulerIntegratorBuilder::mids$ = NULL;
        bool EulerIntegratorBuilder::live$ = false;

        jclass EulerIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EulerIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_31c1ebb8b9cbaedc] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerIntegratorBuilder::EulerIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator EulerIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_31c1ebb8b9cbaedc], a0.this$, a1.this$));
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
        static PyObject *t_EulerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EulerIntegratorBuilder_init_(t_EulerIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerIntegratorBuilder_buildIntegrator(t_EulerIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_EulerIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_EulerIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerIntegratorBuilder)[] = {
          { Py_tp_methods, t_EulerIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_EulerIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EulerIntegratorBuilder, t_EulerIntegratorBuilder, EulerIntegratorBuilder);

        void t_EulerIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerIntegratorBuilder), &PY_TYPE_DEF(EulerIntegratorBuilder), module, "EulerIntegratorBuilder", 0);
        }

        void t_EulerIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegratorBuilder), "class_", make_descriptor(EulerIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegratorBuilder), "wrapfn_", make_descriptor(t_EulerIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_EulerIntegratorBuilder::wrap_Object(EulerIntegratorBuilder(((t_EulerIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EulerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EulerIntegratorBuilder_init_(t_EulerIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          EulerIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = EulerIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EulerIntegratorBuilder_buildIntegrator(t_EulerIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/MidpointFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *MidpointFieldIntegrator::class$ = NULL;
        jmethodID *MidpointFieldIntegrator::mids$ = NULL;
        bool MidpointFieldIntegrator::live$ = false;

        jclass MidpointFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/MidpointFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_88bffd71fb0313dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_4d010bb8d4780d51] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_94ed2e0620f8833d] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_94ed2e0620f8833d] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_4ecd6cecdddddc4e] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/MidpointFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointFieldIntegrator::MidpointFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_88bffd71fb0313dc, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > MidpointFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_4d010bb8d4780d51]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > MidpointFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_94ed2e0620f8833d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > MidpointFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_94ed2e0620f8833d]));
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
        static PyObject *t_MidpointFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegrator_of_(t_MidpointFieldIntegrator *self, PyObject *args);
        static int t_MidpointFieldIntegrator_init_(t_MidpointFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointFieldIntegrator_getA(t_MidpointFieldIntegrator *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegrator_getB(t_MidpointFieldIntegrator *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegrator_getC(t_MidpointFieldIntegrator *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegrator_get__a(t_MidpointFieldIntegrator *self, void *data);
        static PyObject *t_MidpointFieldIntegrator_get__b(t_MidpointFieldIntegrator *self, void *data);
        static PyObject *t_MidpointFieldIntegrator_get__c(t_MidpointFieldIntegrator *self, void *data);
        static PyObject *t_MidpointFieldIntegrator_get__parameters_(t_MidpointFieldIntegrator *self, void *data);
        static PyGetSetDef t_MidpointFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, a),
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, b),
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, c),
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MidpointFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_MidpointFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointFieldIntegrator)[] = {
          { Py_tp_methods, t_MidpointFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_MidpointFieldIntegrator_init_ },
          { Py_tp_getset, t_MidpointFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(MidpointFieldIntegrator, t_MidpointFieldIntegrator, MidpointFieldIntegrator);
        PyObject *t_MidpointFieldIntegrator::wrap_Object(const MidpointFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegrator *self = (t_MidpointFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MidpointFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegrator *self = (t_MidpointFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MidpointFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointFieldIntegrator), &PY_TYPE_DEF(MidpointFieldIntegrator), module, "MidpointFieldIntegrator", 0);
        }

        void t_MidpointFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegrator), "class_", make_descriptor(MidpointFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegrator), "wrapfn_", make_descriptor(t_MidpointFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_MidpointFieldIntegrator::wrap_Object(MidpointFieldIntegrator(((t_MidpointFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_MidpointFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MidpointFieldIntegrator_of_(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MidpointFieldIntegrator_init_(t_MidpointFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          MidpointFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = MidpointFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MidpointFieldIntegrator_getA(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_MidpointFieldIntegrator_getB(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_MidpointFieldIntegrator_getC(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_MidpointFieldIntegrator_get__parameters_(t_MidpointFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MidpointFieldIntegrator_get__a(t_MidpointFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_MidpointFieldIntegrator_get__b(t_MidpointFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_MidpointFieldIntegrator_get__c(t_MidpointFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/OneWayAnova.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *OneWayAnova::class$ = NULL;
        jmethodID *OneWayAnova::mids$ = NULL;
        bool OneWayAnova::live$ = false;

        jclass OneWayAnova::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/OneWayAnova");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_anovaFValue_ce4bc28a12afbddc] = env->getMethodID(cls, "anovaFValue", "(Ljava/util/Collection;)D");
            mids$[mid_anovaPValue_ce4bc28a12afbddc] = env->getMethodID(cls, "anovaPValue", "(Ljava/util/Collection;)D");
            mids$[mid_anovaPValue_5347d7d7c42ce1ec] = env->getMethodID(cls, "anovaPValue", "(Ljava/util/Collection;Z)D");
            mids$[mid_anovaTest_9bf4a3edb5ef37bf] = env->getMethodID(cls, "anovaTest", "(Ljava/util/Collection;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OneWayAnova::OneWayAnova() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble OneWayAnova::anovaFValue(const ::java::util::Collection & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_anovaFValue_ce4bc28a12afbddc], a0.this$);
        }

        jdouble OneWayAnova::anovaPValue(const ::java::util::Collection & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_anovaPValue_ce4bc28a12afbddc], a0.this$);
        }

        jdouble OneWayAnova::anovaPValue(const ::java::util::Collection & a0, jboolean a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_anovaPValue_5347d7d7c42ce1ec], a0.this$, a1);
        }

        jboolean OneWayAnova::anovaTest(const ::java::util::Collection & a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_anovaTest_9bf4a3edb5ef37bf], a0.this$, a1);
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
      namespace inference {
        static PyObject *t_OneWayAnova_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OneWayAnova_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OneWayAnova_init_(t_OneWayAnova *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OneWayAnova_anovaFValue(t_OneWayAnova *self, PyObject *arg);
        static PyObject *t_OneWayAnova_anovaPValue(t_OneWayAnova *self, PyObject *args);
        static PyObject *t_OneWayAnova_anovaTest(t_OneWayAnova *self, PyObject *args);

        static PyMethodDef t_OneWayAnova__methods_[] = {
          DECLARE_METHOD(t_OneWayAnova, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneWayAnova, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneWayAnova, anovaFValue, METH_O),
          DECLARE_METHOD(t_OneWayAnova, anovaPValue, METH_VARARGS),
          DECLARE_METHOD(t_OneWayAnova, anovaTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OneWayAnova)[] = {
          { Py_tp_methods, t_OneWayAnova__methods_ },
          { Py_tp_init, (void *) t_OneWayAnova_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OneWayAnova)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OneWayAnova, t_OneWayAnova, OneWayAnova);

        void t_OneWayAnova::install(PyObject *module)
        {
          installType(&PY_TYPE(OneWayAnova), &PY_TYPE_DEF(OneWayAnova), module, "OneWayAnova", 0);
        }

        void t_OneWayAnova::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayAnova), "class_", make_descriptor(OneWayAnova::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayAnova), "wrapfn_", make_descriptor(t_OneWayAnova::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayAnova), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OneWayAnova_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OneWayAnova::initializeClass, 1)))
            return NULL;
          return t_OneWayAnova::wrap_Object(OneWayAnova(((t_OneWayAnova *) arg)->object.this$));
        }
        static PyObject *t_OneWayAnova_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OneWayAnova::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OneWayAnova_init_(t_OneWayAnova *self, PyObject *args, PyObject *kwds)
        {
          OneWayAnova object((jobject) NULL);

          INT_CALL(object = OneWayAnova());
          self->object = object;

          return 0;
        }

        static PyObject *t_OneWayAnova_anovaFValue(t_OneWayAnova *self, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.anovaFValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "anovaFValue", arg);
          return NULL;
        }

        static PyObject *t_OneWayAnova_anovaPValue(t_OneWayAnova *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble result;

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.anovaPValue(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              jdouble result;

              if (!parseArgs(args, "KZ", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.anovaPValue(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "anovaPValue", args);
          return NULL;
        }

        static PyObject *t_OneWayAnova_anovaTest(t_OneWayAnova *self, PyObject *args)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.anovaTest(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "anovaTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/EulerFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EulerFieldIntegrator::class$ = NULL;
        jmethodID *EulerFieldIntegrator::mids$ = NULL;
        bool EulerFieldIntegrator::live$ = false;

        jclass EulerFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EulerFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_88bffd71fb0313dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_4d010bb8d4780d51] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_94ed2e0620f8833d] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_94ed2e0620f8833d] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_be619961c1dccf2d] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/EulerFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerFieldIntegrator::EulerFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_88bffd71fb0313dc, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > EulerFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_4d010bb8d4780d51]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > EulerFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_94ed2e0620f8833d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > EulerFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_94ed2e0620f8833d]));
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
        static PyObject *t_EulerFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegrator_of_(t_EulerFieldIntegrator *self, PyObject *args);
        static int t_EulerFieldIntegrator_init_(t_EulerFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerFieldIntegrator_getA(t_EulerFieldIntegrator *self, PyObject *args);
        static PyObject *t_EulerFieldIntegrator_getB(t_EulerFieldIntegrator *self, PyObject *args);
        static PyObject *t_EulerFieldIntegrator_getC(t_EulerFieldIntegrator *self, PyObject *args);
        static PyObject *t_EulerFieldIntegrator_get__a(t_EulerFieldIntegrator *self, void *data);
        static PyObject *t_EulerFieldIntegrator_get__b(t_EulerFieldIntegrator *self, void *data);
        static PyObject *t_EulerFieldIntegrator_get__c(t_EulerFieldIntegrator *self, void *data);
        static PyObject *t_EulerFieldIntegrator_get__parameters_(t_EulerFieldIntegrator *self, void *data);
        static PyGetSetDef t_EulerFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, a),
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, b),
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, c),
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EulerFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_EulerFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerFieldIntegrator)[] = {
          { Py_tp_methods, t_EulerFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_EulerFieldIntegrator_init_ },
          { Py_tp_getset, t_EulerFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(EulerFieldIntegrator, t_EulerFieldIntegrator, EulerFieldIntegrator);
        PyObject *t_EulerFieldIntegrator::wrap_Object(const EulerFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegrator *self = (t_EulerFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EulerFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegrator *self = (t_EulerFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EulerFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerFieldIntegrator), &PY_TYPE_DEF(EulerFieldIntegrator), module, "EulerFieldIntegrator", 0);
        }

        void t_EulerFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegrator), "class_", make_descriptor(EulerFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegrator), "wrapfn_", make_descriptor(t_EulerFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_EulerFieldIntegrator::wrap_Object(EulerFieldIntegrator(((t_EulerFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EulerFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EulerFieldIntegrator_of_(t_EulerFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EulerFieldIntegrator_init_(t_EulerFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          EulerFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = EulerFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EulerFieldIntegrator_getA(t_EulerFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(EulerFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_EulerFieldIntegrator_getB(t_EulerFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(EulerFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_EulerFieldIntegrator_getC(t_EulerFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(EulerFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_EulerFieldIntegrator_get__parameters_(t_EulerFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EulerFieldIntegrator_get__a(t_EulerFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_EulerFieldIntegrator_get__b(t_EulerFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_EulerFieldIntegrator_get__c(t_EulerFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFile$AttitudeEphemerisSegment::class$ = NULL;
        jmethodID *AttitudeEphemerisFile$AttitudeEphemerisSegment::mids$ = NULL;
        bool AttitudeEphemerisFile$AttitudeEphemerisSegment::live$ = false;

        jclass AttitudeEphemerisFile$AttitudeEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAngularCoordinates_d751c1a57012b438] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
            mids$[mid_getAttitudeProvider_228bb29d53a1472e] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getAvailableDerivatives_410860c8cd87dc25] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getInterpolationMethod_d2c8eb4129821f0e] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getReferenceFrame_cb151471db4570f0] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List AttitudeEphemerisFile$AttitudeEphemerisSegment::getAngularCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_d751c1a57012b438]));
        }

        ::org::orekit::attitudes::BoundedAttitudeProvider AttitudeEphemerisFile$AttitudeEphemerisSegment::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_228bb29d53a1472e]));
        }

        ::org::orekit::utils::AngularDerivativesFilter AttitudeEphemerisFile$AttitudeEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_410860c8cd87dc25]));
        }

        ::java::lang::String AttitudeEphemerisFile$AttitudeEphemerisSegment::getInterpolationMethod() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_d2c8eb4129821f0e]));
        }

        jint AttitudeEphemerisFile$AttitudeEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_d6ab429752e7c267]);
        }

        ::org::orekit::frames::Frame AttitudeEphemerisFile$AttitudeEphemerisSegment::getReferenceFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_cb151471db4570f0]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$AttitudeEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$AttitudeEphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_of_(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAngularCoordinates(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAttitudeProvider(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAvailableDerivatives(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getInterpolationMethod(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getInterpolationSamples(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getReferenceFrame(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getStart(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getStop(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__angularCoordinates(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__attitudeProvider(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__availableDerivatives(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__interpolationMethod(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__interpolationSamples(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__referenceFrame(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__start(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__stop(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__parameters_(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFile$AttitudeEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, angularCoordinates),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, attitudeProvider),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, interpolationMethod),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, referenceFrame),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, start),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, stop),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFile$AttitudeEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getAngularCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getInterpolationMethod, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getReferenceFrame, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFile$AttitudeEphemerisSegment)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFile$AttitudeEphemerisSegment__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFile$AttitudeEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFile$AttitudeEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment, t_AttitudeEphemerisFile$AttitudeEphemerisSegment, AttitudeEphemerisFile$AttitudeEphemerisSegment);
        PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_Object(const AttitudeEphemerisFile$AttitudeEphemerisSegment& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self = (t_AttitudeEphemerisFile$AttitudeEphemerisSegment *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self = (t_AttitudeEphemerisFile$AttitudeEphemerisSegment *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AttitudeEphemerisFile$AttitudeEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment), &PY_TYPE_DEF(AttitudeEphemerisFile$AttitudeEphemerisSegment), module, "AttitudeEphemerisFile$AttitudeEphemerisSegment", 0);
        }

        void t_AttitudeEphemerisFile$AttitudeEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment), "class_", make_descriptor(AttitudeEphemerisFile$AttitudeEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment), "wrapfn_", make_descriptor(t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFile$AttitudeEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_Object(AttitudeEphemerisFile$AttitudeEphemerisSegment(((t_AttitudeEphemerisFile$AttitudeEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFile$AttitudeEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_of_(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAngularCoordinates(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAngularCoordinates());
          return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAttitudeProvider(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAvailableDerivatives(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getInterpolationMethod(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolationMethod());
          return j2p(result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getInterpolationSamples(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getReferenceFrame(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getStart(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getStop(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__parameters_(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__angularCoordinates(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAngularCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__attitudeProvider(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__availableDerivatives(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__interpolationMethod(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolationMethod());
          return j2p(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__interpolationSamples(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__referenceFrame(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__start(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__stop(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
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
#include "org/orekit/propagation/analytical/PythonFieldAbstractAnalyticalPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonFieldAbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *PythonFieldAbstractAnalyticalPropagator::mids$ = NULL;
        bool PythonFieldAbstractAnalyticalPropagator::live$ = false;

        jclass PythonFieldAbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonFieldAbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_001311851f02a8f1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMass_cf010978f3c5a913] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_78985b34baac5c8e] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_resetIntermediateState_e90aea08a7a0ab5e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAbstractAnalyticalPropagator::PythonFieldAbstractAnalyticalPropagator(const ::org::hipparchus::Field & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_001311851f02a8f1, a0.this$, a1.this$)) {}

        void PythonFieldAbstractAnalyticalPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonFieldAbstractAnalyticalPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonFieldAbstractAnalyticalPropagator::pythonExtension(jlong a0) const
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
      namespace analytical {
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_of_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args);
        static int t_PythonFieldAbstractAnalyticalPropagator_init_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_finalize(t_PythonFieldAbstractAnalyticalPropagator *self);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_pythonExtension(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getParametersDrivers1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_propagateOrbit2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_resetIntermediateState4(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__self(t_PythonFieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__parameters_(t_PythonFieldAbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_PythonFieldAbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAbstractAnalyticalPropagator, self),
          DECLARE_GET_FIELD(t_PythonFieldAbstractAnalyticalPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_PythonFieldAbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAbstractAnalyticalPropagator_init_ },
          { Py_tp_getset, t_PythonFieldAbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(PythonFieldAbstractAnalyticalPropagator, t_PythonFieldAbstractAnalyticalPropagator, PythonFieldAbstractAnalyticalPropagator);
        PyObject *t_PythonFieldAbstractAnalyticalPropagator::wrap_Object(const PythonFieldAbstractAnalyticalPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractAnalyticalPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractAnalyticalPropagator *self = (t_PythonFieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAbstractAnalyticalPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractAnalyticalPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractAnalyticalPropagator *self = (t_PythonFieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAbstractAnalyticalPropagator), &PY_TYPE_DEF(PythonFieldAbstractAnalyticalPropagator), module, "PythonFieldAbstractAnalyticalPropagator", 1);
        }

        void t_PythonFieldAbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractAnalyticalPropagator), "class_", make_descriptor(PythonFieldAbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_PythonFieldAbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAbstractAnalyticalPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldAbstractAnalyticalPropagator_getMass0 },
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonFieldAbstractAnalyticalPropagator_getParametersDrivers1 },
            { "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;", (void *) t_PythonFieldAbstractAnalyticalPropagator_propagateOrbit2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractAnalyticalPropagator_pythonDecRef3 },
            { "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V", (void *) t_PythonFieldAbstractAnalyticalPropagator_resetIntermediateState4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAbstractAnalyticalPropagator::wrap_Object(PythonFieldAbstractAnalyticalPropagator(((t_PythonFieldAbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_of_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAbstractAnalyticalPropagator_init_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
          PythonFieldAbstractAnalyticalPropagator object((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            INT_CALL(object = PythonFieldAbstractAnalyticalPropagator(a0, a1));
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

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_finalize(t_PythonFieldAbstractAnalyticalPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_pythonExtension(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMass", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("getMass", result);
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

        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getParametersDrivers1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getParametersDrivers", result);
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

        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_propagateOrbit2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "propagateOrbit", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::FieldOrbit::initializeClass, &value))
          {
            throwTypeError("propagateOrbit", result);
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

        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_resetIntermediateState4(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *result = PyObject_CallMethod(obj, "resetIntermediateState", "OO", o0, o1);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__self(t_PythonFieldAbstractAnalyticalPropagator *self, void *data)
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
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__parameters_(t_PythonFieldAbstractAnalyticalPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventsLogger.h"
#include "org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventsLogger::class$ = NULL;
        jmethodID *FieldEventsLogger::mids$ = NULL;
        bool FieldEventsLogger::live$ = false;

        jclass FieldEventsLogger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventsLogger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_clearLoggedEvents_ff7cb6c242604316] = env->getMethodID(cls, "clearLoggedEvents", "()V");
            mids$[mid_getLoggedEvents_d751c1a57012b438] = env->getMethodID(cls, "getLoggedEvents", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventsLogger::FieldEventsLogger() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void FieldEventsLogger::clearLoggedEvents() const
        {
          env->callVoidMethod(this$, mids$[mid_clearLoggedEvents_ff7cb6c242604316]);
        }

        ::java::util::List FieldEventsLogger::getLoggedEvents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLoggedEvents_d751c1a57012b438]));
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
        static PyObject *t_FieldEventsLogger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger_of_(t_FieldEventsLogger *self, PyObject *args);
        static int t_FieldEventsLogger_init_(t_FieldEventsLogger *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventsLogger_clearLoggedEvents(t_FieldEventsLogger *self);
        static PyObject *t_FieldEventsLogger_getLoggedEvents(t_FieldEventsLogger *self);
        static PyObject *t_FieldEventsLogger_get__loggedEvents(t_FieldEventsLogger *self, void *data);
        static PyObject *t_FieldEventsLogger_get__parameters_(t_FieldEventsLogger *self, void *data);
        static PyGetSetDef t_FieldEventsLogger__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventsLogger, loggedEvents),
          DECLARE_GET_FIELD(t_FieldEventsLogger, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventsLogger__methods_[] = {
          DECLARE_METHOD(t_FieldEventsLogger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventsLogger, clearLoggedEvents, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventsLogger, getLoggedEvents, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventsLogger)[] = {
          { Py_tp_methods, t_FieldEventsLogger__methods_ },
          { Py_tp_init, (void *) t_FieldEventsLogger_init_ },
          { Py_tp_getset, t_FieldEventsLogger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventsLogger)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventsLogger, t_FieldEventsLogger, FieldEventsLogger);
        PyObject *t_FieldEventsLogger::wrap_Object(const FieldEventsLogger& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger *self = (t_FieldEventsLogger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventsLogger::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger *self = (t_FieldEventsLogger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventsLogger::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventsLogger), &PY_TYPE_DEF(FieldEventsLogger), module, "FieldEventsLogger", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "FieldLoggedEvent", make_descriptor(&PY_TYPE_DEF(FieldEventsLogger$FieldLoggedEvent)));
        }

        void t_FieldEventsLogger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "class_", make_descriptor(FieldEventsLogger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "wrapfn_", make_descriptor(t_FieldEventsLogger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventsLogger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventsLogger::initializeClass, 1)))
            return NULL;
          return t_FieldEventsLogger::wrap_Object(FieldEventsLogger(((t_FieldEventsLogger *) arg)->object.this$));
        }
        static PyObject *t_FieldEventsLogger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventsLogger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventsLogger_of_(t_FieldEventsLogger *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventsLogger_init_(t_FieldEventsLogger *self, PyObject *args, PyObject *kwds)
        {
          FieldEventsLogger object((jobject) NULL);

          INT_CALL(object = FieldEventsLogger());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldEventsLogger_clearLoggedEvents(t_FieldEventsLogger *self)
        {
          OBJ_CALL(self->object.clearLoggedEvents());
          Py_RETURN_NONE;
        }

        static PyObject *t_FieldEventsLogger_getLoggedEvents(t_FieldEventsLogger *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(result);
        }
        static PyObject *t_FieldEventsLogger_get__parameters_(t_FieldEventsLogger *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventsLogger_get__loggedEvents(t_FieldEventsLogger *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/MultipleShooter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/numerical/EpochDerivativesEquations.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *MultipleShooter::class$ = NULL;
      jmethodID *MultipleShooter::mids$ = NULL;
      bool MultipleShooter::live$ = false;

      jclass MultipleShooter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/MultipleShooter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fa2b46dfabd6cf44] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;DI)V");
          mids$[mid_computeAdditionalConstraints_f7899d4480f6af2b] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
          mids$[mid_computeAdditionalJacobianMatrix_f1fb8031f2a01da7] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_getAugmentedInitialState_bc8abbf0245ce660] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MultipleShooter::MultipleShooter(const ::java::util::List & a0, const ::java::util::List & a1, const ::java::util::List & a2, jdouble a3, jint a4) : ::org::orekit::utils::AbstractMultipleShooting(env->newObject(initializeClass, &mids$, mid_init$_fa2b46dfabd6cf44, a0.this$, a1.this$, a2.this$, a3, a4)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_MultipleShooter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultipleShooter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MultipleShooter_init_(t_MultipleShooter *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_MultipleShooter__methods_[] = {
        DECLARE_METHOD(t_MultipleShooter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultipleShooter, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultipleShooter)[] = {
        { Py_tp_methods, t_MultipleShooter__methods_ },
        { Py_tp_init, (void *) t_MultipleShooter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultipleShooter)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::AbstractMultipleShooting),
        NULL
      };

      DEFINE_TYPE(MultipleShooter, t_MultipleShooter, MultipleShooter);

      void t_MultipleShooter::install(PyObject *module)
      {
        installType(&PY_TYPE(MultipleShooter), &PY_TYPE_DEF(MultipleShooter), module, "MultipleShooter", 0);
      }

      void t_MultipleShooter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooter), "class_", make_descriptor(MultipleShooter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooter), "wrapfn_", make_descriptor(t_MultipleShooter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultipleShooter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultipleShooter::initializeClass, 1)))
          return NULL;
        return t_MultipleShooter::wrap_Object(MultipleShooter(((t_MultipleShooter *) arg)->object.this$));
      }
      static PyObject *t_MultipleShooter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultipleShooter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MultipleShooter_init_(t_MultipleShooter *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        ::java::util::List a2((jobject) NULL);
        PyTypeObject **p2;
        jdouble a3;
        jint a4;
        MultipleShooter object((jobject) NULL);

        if (!parseArgs(args, "KKKDI", ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4))
        {
          INT_CALL(object = MultipleShooter(a0, a1, a2, a3, a4));
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmElements::class$ = NULL;
              jmethodID *OcmElements::mids$ = NULL;
              bool OcmElements::live$ = false;
              OcmElements *OcmElements::COV = NULL;
              OcmElements *OcmElements::MAN = NULL;
              OcmElements *OcmElements::OD = NULL;
              OcmElements *OcmElements::ORB = NULL;
              OcmElements *OcmElements::PERT = NULL;
              OcmElements *OcmElements::PHYS = NULL;
              OcmElements *OcmElements::USER = NULL;

              jclass OcmElements::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmElements");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_5e379781a432ecad] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;");
                  mids$[mid_values_bdb92adeec6978b1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COV = new OcmElements(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  MAN = new OcmElements(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  OD = new OcmElements(env->getStaticObjectField(cls, "OD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  ORB = new OcmElements(env->getStaticObjectField(cls, "ORB", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  PERT = new OcmElements(env->getStaticObjectField(cls, "PERT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  PHYS = new OcmElements(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  USER = new OcmElements(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmElements OcmElements::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OcmElements(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5e379781a432ecad], a0.this$));
              }

              JArray< OcmElements > OcmElements::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OcmElements >(env->callStaticObjectMethod(cls, mids$[mid_values_bdb92adeec6978b1]));
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
              static PyObject *t_OcmElements_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmElements_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmElements_of_(t_OcmElements *self, PyObject *args);
              static PyObject *t_OcmElements_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OcmElements_values(PyTypeObject *type);
              static PyObject *t_OcmElements_get__parameters_(t_OcmElements *self, void *data);
              static PyGetSetDef t_OcmElements__fields_[] = {
                DECLARE_GET_FIELD(t_OcmElements, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmElements__methods_[] = {
                DECLARE_METHOD(t_OcmElements, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmElements, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmElements, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmElements, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OcmElements, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmElements)[] = {
                { Py_tp_methods, t_OcmElements__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmElements__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmElements)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OcmElements, t_OcmElements, OcmElements);
              PyObject *t_OcmElements::wrap_Object(const OcmElements& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmElements::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmElements *self = (t_OcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OcmElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmElements::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmElements *self = (t_OcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OcmElements::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmElements), &PY_TYPE_DEF(OcmElements), module, "OcmElements", 0);
              }

              void t_OcmElements::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "class_", make_descriptor(OcmElements::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "wrapfn_", make_descriptor(t_OcmElements::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmElements::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "COV", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "MAN", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "OD", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::OD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "ORB", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::ORB)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "PERT", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::PERT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "PHYS", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "USER", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::USER)));
              }

              static PyObject *t_OcmElements_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmElements::initializeClass, 1)))
                  return NULL;
                return t_OcmElements::wrap_Object(OcmElements(((t_OcmElements *) arg)->object.this$));
              }
              static PyObject *t_OcmElements_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmElements::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmElements_of_(t_OcmElements *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmElements_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OcmElements result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmElements::valueOf(a0));
                  return t_OcmElements::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OcmElements_values(PyTypeObject *type)
              {
                JArray< OcmElements > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmElements::values());
                return JArray<jobject>(result.this$).wrap(t_OcmElements::wrap_jobject);
              }
              static PyObject *t_OcmElements_get__parameters_(t_OcmElements *self, void *data)
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
#include "org/hipparchus/analysis/function/Multiply.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Multiply::class$ = NULL;
        jmethodID *Multiply::mids$ = NULL;
        bool Multiply::live$ = false;

        jclass Multiply::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Multiply");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Multiply::Multiply() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Multiply::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_82f92590f4247da1], a0, a1);
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
        static PyObject *t_Multiply_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Multiply_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Multiply_init_(t_Multiply *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Multiply_value(t_Multiply *self, PyObject *args);

        static PyMethodDef t_Multiply__methods_[] = {
          DECLARE_METHOD(t_Multiply, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Multiply, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Multiply, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Multiply)[] = {
          { Py_tp_methods, t_Multiply__methods_ },
          { Py_tp_init, (void *) t_Multiply_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Multiply)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Multiply, t_Multiply, Multiply);

        void t_Multiply::install(PyObject *module)
        {
          installType(&PY_TYPE(Multiply), &PY_TYPE_DEF(Multiply), module, "Multiply", 0);
        }

        void t_Multiply::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Multiply), "class_", make_descriptor(Multiply::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Multiply), "wrapfn_", make_descriptor(t_Multiply::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Multiply), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Multiply_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Multiply::initializeClass, 1)))
            return NULL;
          return t_Multiply::wrap_Object(Multiply(((t_Multiply *) arg)->object.this$));
        }
        static PyObject *t_Multiply_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Multiply::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Multiply_init_(t_Multiply *self, PyObject *args, PyObject *kwds)
        {
          Multiply object((jobject) NULL);

          INT_CALL(object = Multiply());
          self->object = object;

          return 0;
        }

        static PyObject *t_Multiply_value(t_Multiply *self, PyObject *args)
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
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *Array2DRowRealMatrix::class$ = NULL;
      jmethodID *Array2DRowRealMatrix::mids$ = NULL;
      bool Array2DRowRealMatrix::live$ = false;

      jclass Array2DRowRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/Array2DRowRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_11ecdbb5af7ed67d] = env->getMethodID(cls, "<init>", "([[D)V");
          mids$[mid_init$_1abb553ff9db34ff] = env->getMethodID(cls, "<init>", "([[DZ)V");
          mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_add_afbfc3ddbfe58d51] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_addToEntry_e98d7b3e971b6087] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_b2eebabce70526d8] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createMatrix_afc0d8087db42fe7] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnDimension_d6ab429752e7c267] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getData_eda3f19b8225f78f] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getDataRef_eda3f19b8225f78f] = env->getMethodID(cls, "getDataRef", "()[[D");
          mids$[mid_getEntry_6d920aab27f0a3d2] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getRow_81add9fc9d78d5b9] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowDimension_d6ab429752e7c267] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getSubMatrix_a064070b1670e8d8] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_kroneckerProduct_5a8a8185eb309db7] = env->getMethodID(cls, "kroneckerProduct", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiply_afbfc3ddbfe58d51] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_multiplyEntry_e98d7b3e971b6087] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_5b6d1d9d23ef6c5e] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyTransposed_5a8a8185eb309db7] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_operate_51f624c89851da7e] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_preMultiply_51f624c89851da7e] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_setEntry_e98d7b3e971b6087] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_9d367e34fba0a5ea] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setSubMatrix_5cc0a3799fec1dc7] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_stack_b2eebabce70526d8] = env->getMethodID(cls, "stack", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_subtract_afbfc3ddbfe58d51] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_transposeMultiply_5b6d1d9d23ef6c5e] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_transposeMultiply_5a8a8185eb309db7] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_unstackSquare_b2eebabce70526d8] = env->getMethodID(cls, "unstackSquare", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_walkInColumnOrder_a7758d3537e559f7] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInColumnOrder_5a884deb680e092c] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInColumnOrder_0c89eacb5543486a] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInColumnOrder_be1420f911d13599] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_a7758d3537e559f7] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_5a884deb680e092c] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_0c89eacb5543486a] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_be1420f911d13599] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Array2DRowRealMatrix::Array2DRowRealMatrix() : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(const JArray< jdouble > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_11ecdbb5af7ed67d, a0.this$)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(const JArray< JArray< jdouble > > & a0, jboolean a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_1abb553ff9db34ff, a0.this$, a1)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(jint a0, jint a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

      Array2DRowRealMatrix Array2DRowRealMatrix::add(const Array2DRowRealMatrix & a0) const
      {
        return Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_add_afbfc3ddbfe58d51], a0.this$));
      }

      void Array2DRowRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::copy() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_afc0d8087db42fe7], a0, a1));
      }

      jint Array2DRowRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_d6ab429752e7c267]);
      }

      JArray< JArray< jdouble > > Array2DRowRealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_eda3f19b8225f78f]));
      }

      JArray< JArray< jdouble > > Array2DRowRealMatrix::getDataRef() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getDataRef_eda3f19b8225f78f]));
      }

      jdouble Array2DRowRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_6d920aab27f0a3d2], a0, a1);
      }

      JArray< jdouble > Array2DRowRealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_81add9fc9d78d5b9], a0));
      }

      jint Array2DRowRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_a064070b1670e8d8], a0, a1, a2, a3));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::kroneckerProduct(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_kroneckerProduct_5a8a8185eb309db7], a0.this$));
      }

      Array2DRowRealMatrix Array2DRowRealMatrix::multiply(const Array2DRowRealMatrix & a0) const
      {
        return Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_afbfc3ddbfe58d51], a0.this$));
      }

      void Array2DRowRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::multiplyTransposed(const Array2DRowRealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_5b6d1d9d23ef6c5e], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_5a8a8185eb309db7], a0.this$));
      }

      JArray< jdouble > Array2DRowRealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_51f624c89851da7e], a0.this$));
      }

      JArray< jdouble > Array2DRowRealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_51f624c89851da7e], a0.this$));
      }

      void Array2DRowRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      void Array2DRowRealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_9d367e34fba0a5ea], a0, a1.this$);
      }

      void Array2DRowRealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_5cc0a3799fec1dc7], a0.this$, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::stack() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_stack_b2eebabce70526d8]));
      }

      Array2DRowRealMatrix Array2DRowRealMatrix::subtract(const Array2DRowRealMatrix & a0) const
      {
        return Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_afbfc3ddbfe58d51], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::transposeMultiply(const Array2DRowRealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_5b6d1d9d23ef6c5e], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_5a8a8185eb309db7], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::unstackSquare() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_unstackSquare_b2eebabce70526d8]));
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_a7758d3537e559f7], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_5a884deb680e092c], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_0c89eacb5543486a], a0.this$, a1, a2, a3, a4);
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_be1420f911d13599], a0.this$, a1, a2, a3, a4);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_a7758d3537e559f7], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_5a884deb680e092c], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_0c89eacb5543486a], a0.this$, a1, a2, a3, a4);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_be1420f911d13599], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_Array2DRowRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Array2DRowRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Array2DRowRealMatrix_init_(t_Array2DRowRealMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Array2DRowRealMatrix_add(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_addToEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_copy(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_createMatrix(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getColumnDimension(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getData(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getDataRef(t_Array2DRowRealMatrix *self);
      static PyObject *t_Array2DRowRealMatrix_getEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getRow(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getRowDimension(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_kroneckerProduct(t_Array2DRowRealMatrix *self, PyObject *arg);
      static PyObject *t_Array2DRowRealMatrix_multiply(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_multiplyEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_multiplyTransposed(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_operate(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_preMultiply(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_setEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_setRow(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_setSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_stack(t_Array2DRowRealMatrix *self);
      static PyObject *t_Array2DRowRealMatrix_subtract(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_transposeMultiply(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_unstackSquare(t_Array2DRowRealMatrix *self);
      static PyObject *t_Array2DRowRealMatrix_walkInColumnOrder(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_walkInRowOrder(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_get__columnDimension(t_Array2DRowRealMatrix *self, void *data);
      static PyObject *t_Array2DRowRealMatrix_get__data(t_Array2DRowRealMatrix *self, void *data);
      static PyObject *t_Array2DRowRealMatrix_get__dataRef(t_Array2DRowRealMatrix *self, void *data);
      static PyObject *t_Array2DRowRealMatrix_get__rowDimension(t_Array2DRowRealMatrix *self, void *data);
      static PyGetSetDef t_Array2DRowRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, data),
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, dataRef),
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Array2DRowRealMatrix__methods_[] = {
        DECLARE_METHOD(t_Array2DRowRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, kroneckerProduct, METH_O),
        DECLARE_METHOD(t_Array2DRowRealMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, stack, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, unstackSquare, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Array2DRowRealMatrix)[] = {
        { Py_tp_methods, t_Array2DRowRealMatrix__methods_ },
        { Py_tp_init, (void *) t_Array2DRowRealMatrix_init_ },
        { Py_tp_getset, t_Array2DRowRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Array2DRowRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(Array2DRowRealMatrix, t_Array2DRowRealMatrix, Array2DRowRealMatrix);

      void t_Array2DRowRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(Array2DRowRealMatrix), &PY_TYPE_DEF(Array2DRowRealMatrix), module, "Array2DRowRealMatrix", 0);
      }

      void t_Array2DRowRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowRealMatrix), "class_", make_descriptor(Array2DRowRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowRealMatrix), "wrapfn_", make_descriptor(t_Array2DRowRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Array2DRowRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Array2DRowRealMatrix::initializeClass, 1)))
          return NULL;
        return t_Array2DRowRealMatrix::wrap_Object(Array2DRowRealMatrix(((t_Array2DRowRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_Array2DRowRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Array2DRowRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Array2DRowRealMatrix_init_(t_Array2DRowRealMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Array2DRowRealMatrix object((jobject) NULL);

            INT_CALL(object = Array2DRowRealMatrix());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[D", &a0))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            jboolean a1;
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[DZ", &a0, &a1))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0, a1));
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

      static PyObject *t_Array2DRowRealMatrix_add(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        Array2DRowRealMatrix a0((jobject) NULL);
        Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_Array2DRowRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_addToEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_copy(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_createMatrix(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getColumnDimension(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getData(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getDataRef(t_Array2DRowRealMatrix *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowRealMatrix_getEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getRow(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getRowDimension(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_kroneckerProduct(t_Array2DRowRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.kroneckerProduct(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "kroneckerProduct", arg);
        return NULL;
      }

      static PyObject *t_Array2DRowRealMatrix_multiply(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        Array2DRowRealMatrix a0((jobject) NULL);
        Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_Array2DRowRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_multiplyEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_multiplyTransposed(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowRealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
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

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_operate(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_preMultiply(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_setEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_setRow(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_setSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_stack(t_Array2DRowRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.stack());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_Array2DRowRealMatrix_subtract(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        Array2DRowRealMatrix a0((jobject) NULL);
        Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_Array2DRowRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_transposeMultiply(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowRealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
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

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_unstackSquare(t_Array2DRowRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.unstackSquare());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_Array2DRowRealMatrix_walkInColumnOrder(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "walkInColumnOrder", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_walkInRowOrder(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_get__columnDimension(t_Array2DRowRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Array2DRowRealMatrix_get__data(t_Array2DRowRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowRealMatrix_get__dataRef(t_Array2DRowRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowRealMatrix_get__rowDimension(t_Array2DRowRealMatrix *self, void *data)
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
#include "org/orekit/forces/maneuvers/SmallManeuverAnalyticalModel.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *SmallManeuverAnalyticalModel::class$ = NULL;
        jmethodID *SmallManeuverAnalyticalModel::mids$ = NULL;
        bool SmallManeuverAnalyticalModel::live$ = false;

        jclass SmallManeuverAnalyticalModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/SmallManeuverAnalyticalModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fe3090c0b7345882] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_init$_22f6985b50c2c195] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_apply_940029672edd5e92] = env->getMethodID(cls, "apply", "(Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_apply_ed3fe207e6fde26f] = env->getMethodID(cls, "apply", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getInertialDV_032312bdeb3f2f93] = env->getMethodID(cls, "getInertialDV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getInertialFrame_cb151471db4570f0] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getJacobian_a1b05c4f70bfe6cc] = env->getMethodID(cls, "getJacobian", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;[[D)V");
            mids$[mid_updateMass_bf28ed64d6e8576b] = env->getMethodID(cls, "updateMass", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SmallManeuverAnalyticalModel::SmallManeuverAnalyticalModel(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fe3090c0b7345882, a0.this$, a1.this$, a2)) {}

        SmallManeuverAnalyticalModel::SmallManeuverAnalyticalModel(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_22f6985b50c2c195, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::orekit::orbits::Orbit SmallManeuverAnalyticalModel::apply(const ::org::orekit::orbits::Orbit & a0) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_apply_940029672edd5e92], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState SmallManeuverAnalyticalModel::apply(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_apply_ed3fe207e6fde26f], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SmallManeuverAnalyticalModel::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmallManeuverAnalyticalModel::getInertialDV() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getInertialDV_032312bdeb3f2f93]));
        }

        ::org::orekit::frames::Frame SmallManeuverAnalyticalModel::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_cb151471db4570f0]));
        }

        void SmallManeuverAnalyticalModel::getJacobian(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, const JArray< JArray< jdouble > > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_getJacobian_a1b05c4f70bfe6cc], a0.this$, a1.this$, a2.this$);
        }

        jdouble SmallManeuverAnalyticalModel::updateMass(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_updateMass_bf28ed64d6e8576b], a0);
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
        static PyObject *t_SmallManeuverAnalyticalModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmallManeuverAnalyticalModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SmallManeuverAnalyticalModel_init_(t_SmallManeuverAnalyticalModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SmallManeuverAnalyticalModel_apply(t_SmallManeuverAnalyticalModel *self, PyObject *args);
        static PyObject *t_SmallManeuverAnalyticalModel_getDate(t_SmallManeuverAnalyticalModel *self);
        static PyObject *t_SmallManeuverAnalyticalModel_getInertialDV(t_SmallManeuverAnalyticalModel *self);
        static PyObject *t_SmallManeuverAnalyticalModel_getInertialFrame(t_SmallManeuverAnalyticalModel *self);
        static PyObject *t_SmallManeuverAnalyticalModel_getJacobian(t_SmallManeuverAnalyticalModel *self, PyObject *args);
        static PyObject *t_SmallManeuverAnalyticalModel_updateMass(t_SmallManeuverAnalyticalModel *self, PyObject *arg);
        static PyObject *t_SmallManeuverAnalyticalModel_get__date(t_SmallManeuverAnalyticalModel *self, void *data);
        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialDV(t_SmallManeuverAnalyticalModel *self, void *data);
        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialFrame(t_SmallManeuverAnalyticalModel *self, void *data);
        static PyGetSetDef t_SmallManeuverAnalyticalModel__fields_[] = {
          DECLARE_GET_FIELD(t_SmallManeuverAnalyticalModel, date),
          DECLARE_GET_FIELD(t_SmallManeuverAnalyticalModel, inertialDV),
          DECLARE_GET_FIELD(t_SmallManeuverAnalyticalModel, inertialFrame),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmallManeuverAnalyticalModel__methods_[] = {
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, apply, METH_VARARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getDate, METH_NOARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getInertialDV, METH_NOARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getJacobian, METH_VARARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, updateMass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmallManeuverAnalyticalModel)[] = {
          { Py_tp_methods, t_SmallManeuverAnalyticalModel__methods_ },
          { Py_tp_init, (void *) t_SmallManeuverAnalyticalModel_init_ },
          { Py_tp_getset, t_SmallManeuverAnalyticalModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmallManeuverAnalyticalModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SmallManeuverAnalyticalModel, t_SmallManeuverAnalyticalModel, SmallManeuverAnalyticalModel);

        void t_SmallManeuverAnalyticalModel::install(PyObject *module)
        {
          installType(&PY_TYPE(SmallManeuverAnalyticalModel), &PY_TYPE_DEF(SmallManeuverAnalyticalModel), module, "SmallManeuverAnalyticalModel", 0);
        }

        void t_SmallManeuverAnalyticalModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmallManeuverAnalyticalModel), "class_", make_descriptor(SmallManeuverAnalyticalModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmallManeuverAnalyticalModel), "wrapfn_", make_descriptor(t_SmallManeuverAnalyticalModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmallManeuverAnalyticalModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmallManeuverAnalyticalModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmallManeuverAnalyticalModel::initializeClass, 1)))
            return NULL;
          return t_SmallManeuverAnalyticalModel::wrap_Object(SmallManeuverAnalyticalModel(((t_SmallManeuverAnalyticalModel *) arg)->object.this$));
        }
        static PyObject *t_SmallManeuverAnalyticalModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmallManeuverAnalyticalModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SmallManeuverAnalyticalModel_init_(t_SmallManeuverAnalyticalModel *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              SmallManeuverAnalyticalModel object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SmallManeuverAnalyticalModel(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              SmallManeuverAnalyticalModel object((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = SmallManeuverAnalyticalModel(a0, a1, a2, a3));
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

        static PyObject *t_SmallManeuverAnalyticalModel_apply(t_SmallManeuverAnalyticalModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "apply", args);
          return NULL;
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getDate(t_SmallManeuverAnalyticalModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getInertialDV(t_SmallManeuverAnalyticalModel *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialDV());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getInertialFrame(t_SmallManeuverAnalyticalModel *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getJacobian(t_SmallManeuverAnalyticalModel *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< JArray< jdouble > > a2((jobject) NULL);

          if (!parseArgs(args, "kK[[D", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2))
          {
            OBJ_CALL(self->object.getJacobian(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "getJacobian", args);
          return NULL;
        }

        static PyObject *t_SmallManeuverAnalyticalModel_updateMass(t_SmallManeuverAnalyticalModel *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.updateMass(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "updateMass", arg);
          return NULL;
        }

        static PyObject *t_SmallManeuverAnalyticalModel_get__date(t_SmallManeuverAnalyticalModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialDV(t_SmallManeuverAnalyticalModel *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialDV());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialFrame(t_SmallManeuverAnalyticalModel *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Median.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/rank/Median.h"
#include "org/hipparchus/util/KthSelector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Median::class$ = NULL;
          jmethodID *Median::mids$ = NULL;
          bool Median::live$ = false;

          jclass Median::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Median");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_copy_f6f8c41cf287a65b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Median;");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getEstimationType_07008c3d622bf167] = env->getMethodID(cls, "getEstimationType", "()Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_getKthSelector_cc406bafcbb38cb4] = env->getMethodID(cls, "getKthSelector", "()Lorg/hipparchus/util/KthSelector;");
              mids$[mid_getNaNStrategy_7ad66d754bcf87e2] = env->getMethodID(cls, "getNaNStrategy", "()Lorg/hipparchus/stat/ranking/NaNStrategy;");
              mids$[mid_withEstimationType_c6d808d827753260] = env->getMethodID(cls, "withEstimationType", "(Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;)Lorg/hipparchus/stat/descriptive/rank/Median;");
              mids$[mid_withKthSelector_61386699d5cf0f7b] = env->getMethodID(cls, "withKthSelector", "(Lorg/hipparchus/util/KthSelector;)Lorg/hipparchus/stat/descriptive/rank/Median;");
              mids$[mid_withNaNStrategy_053f2e7ae023cdf3] = env->getMethodID(cls, "withNaNStrategy", "(Lorg/hipparchus/stat/ranking/NaNStrategy;)Lorg/hipparchus/stat/descriptive/rank/Median;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Median::Median() : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          Median Median::copy() const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_copy_f6f8c41cf287a65b]));
          }

          jdouble Median::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType Median::getEstimationType() const
          {
            return ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType(env->callObjectMethod(this$, mids$[mid_getEstimationType_07008c3d622bf167]));
          }

          ::org::hipparchus::util::KthSelector Median::getKthSelector() const
          {
            return ::org::hipparchus::util::KthSelector(env->callObjectMethod(this$, mids$[mid_getKthSelector_cc406bafcbb38cb4]));
          }

          ::org::hipparchus::stat::ranking::NaNStrategy Median::getNaNStrategy() const
          {
            return ::org::hipparchus::stat::ranking::NaNStrategy(env->callObjectMethod(this$, mids$[mid_getNaNStrategy_7ad66d754bcf87e2]));
          }

          Median Median::withEstimationType(const ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType & a0) const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_withEstimationType_c6d808d827753260], a0.this$));
          }

          Median Median::withKthSelector(const ::org::hipparchus::util::KthSelector & a0) const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_withKthSelector_61386699d5cf0f7b], a0.this$));
          }

          Median Median::withNaNStrategy(const ::org::hipparchus::stat::ranking::NaNStrategy & a0) const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_withNaNStrategy_053f2e7ae023cdf3], a0.this$));
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
          static PyObject *t_Median_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Median_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Median_init_(t_Median *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Median_copy(t_Median *self, PyObject *args);
          static PyObject *t_Median_evaluate(t_Median *self, PyObject *args);
          static PyObject *t_Median_getEstimationType(t_Median *self);
          static PyObject *t_Median_getKthSelector(t_Median *self);
          static PyObject *t_Median_getNaNStrategy(t_Median *self);
          static PyObject *t_Median_withEstimationType(t_Median *self, PyObject *arg);
          static PyObject *t_Median_withKthSelector(t_Median *self, PyObject *arg);
          static PyObject *t_Median_withNaNStrategy(t_Median *self, PyObject *arg);
          static PyObject *t_Median_get__estimationType(t_Median *self, void *data);
          static PyObject *t_Median_get__kthSelector(t_Median *self, void *data);
          static PyObject *t_Median_get__naNStrategy(t_Median *self, void *data);
          static PyGetSetDef t_Median__fields_[] = {
            DECLARE_GET_FIELD(t_Median, estimationType),
            DECLARE_GET_FIELD(t_Median, kthSelector),
            DECLARE_GET_FIELD(t_Median, naNStrategy),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Median__methods_[] = {
            DECLARE_METHOD(t_Median, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Median, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Median, copy, METH_VARARGS),
            DECLARE_METHOD(t_Median, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Median, getEstimationType, METH_NOARGS),
            DECLARE_METHOD(t_Median, getKthSelector, METH_NOARGS),
            DECLARE_METHOD(t_Median, getNaNStrategy, METH_NOARGS),
            DECLARE_METHOD(t_Median, withEstimationType, METH_O),
            DECLARE_METHOD(t_Median, withKthSelector, METH_O),
            DECLARE_METHOD(t_Median, withNaNStrategy, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Median)[] = {
            { Py_tp_methods, t_Median__methods_ },
            { Py_tp_init, (void *) t_Median_init_ },
            { Py_tp_getset, t_Median__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Median)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Median, t_Median, Median);

          void t_Median::install(PyObject *module)
          {
            installType(&PY_TYPE(Median), &PY_TYPE_DEF(Median), module, "Median", 0);
          }

          void t_Median::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Median), "class_", make_descriptor(Median::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Median), "wrapfn_", make_descriptor(t_Median::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Median), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Median_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Median::initializeClass, 1)))
              return NULL;
            return t_Median::wrap_Object(Median(((t_Median *) arg)->object.this$));
          }
          static PyObject *t_Median_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Median::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Median_init_(t_Median *self, PyObject *args, PyObject *kwds)
          {
            Median object((jobject) NULL);

            INT_CALL(object = Median());
            self->object = object;

            return 0;
          }

          static PyObject *t_Median_copy(t_Median *self, PyObject *args)
          {
            Median result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Median::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Median), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Median_evaluate(t_Median *self, PyObject *args)
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

            return callSuper(PY_TYPE(Median), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Median_getEstimationType(t_Median *self)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(result);
          }

          static PyObject *t_Median_getKthSelector(t_Median *self)
          {
            ::org::hipparchus::util::KthSelector result((jobject) NULL);
            OBJ_CALL(result = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(result);
          }

          static PyObject *t_Median_getNaNStrategy(t_Median *self)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy result((jobject) NULL);
            OBJ_CALL(result = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(result);
          }

          static PyObject *t_Median_withEstimationType(t_Median *self, PyObject *arg)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType a0((jobject) NULL);
            PyTypeObject **p0;
            Median result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::parameters_))
            {
              OBJ_CALL(result = self->object.withEstimationType(a0));
              return t_Median::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withEstimationType", arg);
            return NULL;
          }

          static PyObject *t_Median_withKthSelector(t_Median *self, PyObject *arg)
          {
            ::org::hipparchus::util::KthSelector a0((jobject) NULL);
            Median result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::util::KthSelector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withKthSelector(a0));
              return t_Median::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withKthSelector", arg);
            return NULL;
          }

          static PyObject *t_Median_withNaNStrategy(t_Median *self, PyObject *arg)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
            PyTypeObject **p0;
            Median result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_))
            {
              OBJ_CALL(result = self->object.withNaNStrategy(a0));
              return t_Median::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withNaNStrategy", arg);
            return NULL;
          }

          static PyObject *t_Median_get__estimationType(t_Median *self, void *data)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(value);
          }

          static PyObject *t_Median_get__kthSelector(t_Median *self, void *data)
          {
            ::org::hipparchus::util::KthSelector value((jobject) NULL);
            OBJ_CALL(value = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(value);
          }

          static PyObject *t_Median_get__naNStrategy(t_Median *self, void *data)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy value((jobject) NULL);
            OBJ_CALL(value = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$UnitListConsumer::class$ = NULL;
            jmethodID *ParseToken$UnitListConsumer::mids$ = NULL;
            bool ParseToken$UnitListConsumer::live$ = false;

            jclass ParseToken$UnitListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_aa335fea495d60e0] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$UnitListConsumer::accept(const ::java::util::List & a0) const
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
            static PyObject *t_ParseToken$UnitListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$UnitListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$UnitListConsumer_accept(t_ParseToken$UnitListConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$UnitListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$UnitListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$UnitListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$UnitListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$UnitListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$UnitListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$UnitListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$UnitListConsumer, t_ParseToken$UnitListConsumer, ParseToken$UnitListConsumer);

            void t_ParseToken$UnitListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$UnitListConsumer), &PY_TYPE_DEF(ParseToken$UnitListConsumer), module, "ParseToken$UnitListConsumer", 0);
            }

            void t_ParseToken$UnitListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$UnitListConsumer), "class_", make_descriptor(ParseToken$UnitListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$UnitListConsumer), "wrapfn_", make_descriptor(t_ParseToken$UnitListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$UnitListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$UnitListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$UnitListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$UnitListConsumer::wrap_Object(ParseToken$UnitListConsumer(((t_ParseToken$UnitListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$UnitListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$UnitListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$UnitListConsumer_accept(t_ParseToken$UnitListConsumer *self, PyObject *arg)
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
#include "org/orekit/forces/radiation/IsotropicRadiationSingleCoefficient.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *IsotropicRadiationSingleCoefficient::class$ = NULL;
        jmethodID *IsotropicRadiationSingleCoefficient::mids$ = NULL;
        bool IsotropicRadiationSingleCoefficient::live$ = false;

        jclass IsotropicRadiationSingleCoefficient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/IsotropicRadiationSingleCoefficient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_cd5724127cc72e96] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getRadiationParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_b5d2cc91db5ad4cb] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_radiationPressureAcceleration_8ba97ba2fcb659fc] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicRadiationSingleCoefficient::IsotropicRadiationSingleCoefficient(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        IsotropicRadiationSingleCoefficient::IsotropicRadiationSingleCoefficient(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd5724127cc72e96, a0, a1, a2, a3)) {}

        ::java::util::List IsotropicRadiationSingleCoefficient::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_d751c1a57012b438]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicRadiationSingleCoefficient::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_b5d2cc91db5ad4cb], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicRadiationSingleCoefficient::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_8ba97ba2fcb659fc], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_IsotropicRadiationSingleCoefficient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicRadiationSingleCoefficient_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicRadiationSingleCoefficient_init_(t_IsotropicRadiationSingleCoefficient *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicRadiationSingleCoefficient_getRadiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self);
        static PyObject *t_IsotropicRadiationSingleCoefficient_radiationPressureAcceleration(t_IsotropicRadiationSingleCoefficient *self, PyObject *args);
        static PyObject *t_IsotropicRadiationSingleCoefficient_get__radiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self, void *data);
        static PyGetSetDef t_IsotropicRadiationSingleCoefficient__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicRadiationSingleCoefficient, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicRadiationSingleCoefficient__methods_[] = {
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicRadiationSingleCoefficient)[] = {
          { Py_tp_methods, t_IsotropicRadiationSingleCoefficient__methods_ },
          { Py_tp_init, (void *) t_IsotropicRadiationSingleCoefficient_init_ },
          { Py_tp_getset, t_IsotropicRadiationSingleCoefficient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicRadiationSingleCoefficient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicRadiationSingleCoefficient, t_IsotropicRadiationSingleCoefficient, IsotropicRadiationSingleCoefficient);

        void t_IsotropicRadiationSingleCoefficient::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicRadiationSingleCoefficient), &PY_TYPE_DEF(IsotropicRadiationSingleCoefficient), module, "IsotropicRadiationSingleCoefficient", 0);
        }

        void t_IsotropicRadiationSingleCoefficient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationSingleCoefficient), "class_", make_descriptor(IsotropicRadiationSingleCoefficient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationSingleCoefficient), "wrapfn_", make_descriptor(t_IsotropicRadiationSingleCoefficient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationSingleCoefficient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicRadiationSingleCoefficient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicRadiationSingleCoefficient::initializeClass, 1)))
            return NULL;
          return t_IsotropicRadiationSingleCoefficient::wrap_Object(IsotropicRadiationSingleCoefficient(((t_IsotropicRadiationSingleCoefficient *) arg)->object.this$));
        }
        static PyObject *t_IsotropicRadiationSingleCoefficient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicRadiationSingleCoefficient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicRadiationSingleCoefficient_init_(t_IsotropicRadiationSingleCoefficient *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              IsotropicRadiationSingleCoefficient object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = IsotropicRadiationSingleCoefficient(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              IsotropicRadiationSingleCoefficient object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = IsotropicRadiationSingleCoefficient(a0, a1, a2, a3));
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

        static PyObject *t_IsotropicRadiationSingleCoefficient_getRadiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicRadiationSingleCoefficient_radiationPressureAcceleration(t_IsotropicRadiationSingleCoefficient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicRadiationSingleCoefficient_get__radiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedUnivariateSolver::class$ = NULL;
        jmethodID *BracketedUnivariateSolver::mids$ = NULL;
        bool BracketedUnivariateSolver::live$ = false;

        jclass BracketedUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_solve_264b7d79e28fc408] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solve_56efbacf041dc493] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solveInterval_83eff7516b8339dd] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");
            mids$[mid_solveInterval_1290cd17e7801197] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BracketedUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_264b7d79e28fc408], a0, a1.this$, a2, a3, a4.this$);
        }

        jdouble BracketedUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_56efbacf041dc493], a0, a1.this$, a2, a3, a4, a5.this$);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BracketedUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_83eff7516b8339dd], a0, a1.this$, a2, a3));
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BracketedUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_1290cd17e7801197], a0, a1.this$, a2, a3, a4));
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
      namespace solvers {
        static PyObject *t_BracketedUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver_of_(t_BracketedUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedUnivariateSolver_solve(t_BracketedUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedUnivariateSolver_solveInterval(t_BracketedUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedUnivariateSolver_get__parameters_(t_BracketedUnivariateSolver *self, void *data);
        static PyGetSetDef t_BracketedUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BracketedUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedUnivariateSolver)[] = {
          { Py_tp_methods, t_BracketedUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BracketedUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedUnivariateSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BracketedUnivariateSolver, t_BracketedUnivariateSolver, BracketedUnivariateSolver);
        PyObject *t_BracketedUnivariateSolver::wrap_Object(const BracketedUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver *self = (t_BracketedUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver *self = (t_BracketedUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedUnivariateSolver), &PY_TYPE_DEF(BracketedUnivariateSolver), module, "BracketedUnivariateSolver", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "Interval", make_descriptor(&PY_TYPE_DEF(BracketedUnivariateSolver$Interval)));
        }

        void t_BracketedUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "class_", make_descriptor(BracketedUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "wrapfn_", make_descriptor(t_BracketedUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BracketedUnivariateSolver::wrap_Object(BracketedUnivariateSolver(((t_BracketedUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BracketedUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedUnivariateSolver_of_(t_BracketedUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BracketedUnivariateSolver_solve(t_BracketedUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble result;

              if (!parseArgs(args, "IkDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble result;

              if (!parseArgs(args, "IkDDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(BracketedUnivariateSolver), (PyObject *) self, "solve", args, 2);
        }

        static PyObject *t_BracketedUnivariateSolver_solveInterval(t_BracketedUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3));
                return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver$Interval::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
                return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver$Interval::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BracketedUnivariateSolver_get__parameters_(t_BracketedUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventEnablingPredicateFilter.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventEnablingPredicateFilter::class$ = NULL;
        jmethodID *FieldEventEnablingPredicateFilter::mids$ = NULL;
        bool FieldEventEnablingPredicateFilter::live$ = false;

        jclass FieldEventEnablingPredicateFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventEnablingPredicateFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b1d11f9c2ad251c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/events/FieldEnablingPredicate;)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_3146cd1129cf853c] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_b8a21e6c1bd745e4] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldEventEnablingPredicateFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventEnablingPredicateFilter::FieldEventEnablingPredicateFilter(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::propagation::events::FieldEnablingPredicate & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b1d11f9c2ad251c4, a0.this$, a1.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEventEnablingPredicateFilter::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventEnablingPredicateFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_3146cd1129cf853c]));
        }

        void FieldEventEnablingPredicateFilter::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventEnablingPredicateFilter_of_(t_FieldEventEnablingPredicateFilter *self, PyObject *args);
        static int t_FieldEventEnablingPredicateFilter_init_(t_FieldEventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventEnablingPredicateFilter_g(t_FieldEventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_FieldEventEnablingPredicateFilter_getDetector(t_FieldEventEnablingPredicateFilter *self);
        static PyObject *t_FieldEventEnablingPredicateFilter_init(t_FieldEventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_FieldEventEnablingPredicateFilter_get__detector(t_FieldEventEnablingPredicateFilter *self, void *data);
        static PyObject *t_FieldEventEnablingPredicateFilter_get__parameters_(t_FieldEventEnablingPredicateFilter *self, void *data);
        static PyGetSetDef t_FieldEventEnablingPredicateFilter__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventEnablingPredicateFilter, detector),
          DECLARE_GET_FIELD(t_FieldEventEnablingPredicateFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventEnablingPredicateFilter__methods_[] = {
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventEnablingPredicateFilter)[] = {
          { Py_tp_methods, t_FieldEventEnablingPredicateFilter__methods_ },
          { Py_tp_init, (void *) t_FieldEventEnablingPredicateFilter_init_ },
          { Py_tp_getset, t_FieldEventEnablingPredicateFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventEnablingPredicateFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldEventEnablingPredicateFilter, t_FieldEventEnablingPredicateFilter, FieldEventEnablingPredicateFilter);
        PyObject *t_FieldEventEnablingPredicateFilter::wrap_Object(const FieldEventEnablingPredicateFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventEnablingPredicateFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventEnablingPredicateFilter *self = (t_FieldEventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventEnablingPredicateFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventEnablingPredicateFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventEnablingPredicateFilter *self = (t_FieldEventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventEnablingPredicateFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventEnablingPredicateFilter), &PY_TYPE_DEF(FieldEventEnablingPredicateFilter), module, "FieldEventEnablingPredicateFilter", 0);
        }

        void t_FieldEventEnablingPredicateFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventEnablingPredicateFilter), "class_", make_descriptor(FieldEventEnablingPredicateFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventEnablingPredicateFilter), "wrapfn_", make_descriptor(t_FieldEventEnablingPredicateFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventEnablingPredicateFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventEnablingPredicateFilter::initializeClass, 1)))
            return NULL;
          return t_FieldEventEnablingPredicateFilter::wrap_Object(FieldEventEnablingPredicateFilter(((t_FieldEventEnablingPredicateFilter *) arg)->object.this$));
        }
        static PyObject *t_FieldEventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventEnablingPredicateFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_of_(t_FieldEventEnablingPredicateFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventEnablingPredicateFilter_init_(t_FieldEventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldEnablingPredicate a1((jobject) NULL);
          PyTypeObject **p1;
          FieldEventEnablingPredicateFilter object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::propagation::events::FieldEnablingPredicate::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEnablingPredicate::parameters_))
          {
            INT_CALL(object = FieldEventEnablingPredicateFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_g(t_FieldEventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEventEnablingPredicateFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_getDetector(t_FieldEventEnablingPredicateFilter *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_init(t_FieldEventEnablingPredicateFilter *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldEventEnablingPredicateFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldEventEnablingPredicateFilter_get__parameters_(t_FieldEventEnablingPredicateFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_get__detector(t_FieldEventEnablingPredicateFilter *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Iterator::class$ = NULL;
    jmethodID *Iterator::mids$ = NULL;
    bool Iterator::live$ = false;

    jclass Iterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Iterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_hasNext_eee3de00fe971136] = env->getMethodID(cls, "hasNext", "()Z");
        mids$[mid_next_704a5bee58538972] = env->getMethodID(cls, "next", "()Ljava/lang/Object;");
        mids$[mid_remove_ff7cb6c242604316] = env->getMethodID(cls, "remove", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Iterator::hasNext() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasNext_eee3de00fe971136]);
    }

    ::java::lang::Object Iterator::next() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_next_704a5bee58538972]));
    }

    void Iterator::remove() const
    {
      env->callVoidMethod(this$, mids$[mid_remove_ff7cb6c242604316]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Iterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Iterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Iterator_of_(t_Iterator *self, PyObject *args);
    static PyObject *t_Iterator_hasNext(t_Iterator *self);
    static PyObject *t_Iterator_next(t_Iterator *self);
    static PyObject *t_Iterator_remove(t_Iterator *self);
    static PyObject *t_Iterator_get__parameters_(t_Iterator *self, void *data);
    static PyGetSetDef t_Iterator__fields_[] = {
      DECLARE_GET_FIELD(t_Iterator, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Iterator__methods_[] = {
      DECLARE_METHOD(t_Iterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Iterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Iterator, of_, METH_VARARGS),
      DECLARE_METHOD(t_Iterator, hasNext, METH_NOARGS),
      DECLARE_METHOD(t_Iterator, next, METH_NOARGS),
      DECLARE_METHOD(t_Iterator, remove, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Iterator)[] = {
      { Py_tp_methods, t_Iterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Iterator__fields_ },
      { Py_tp_iter, (void *) PyObject_SelfIter },
      { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Iterator *)) get_generic_iterator_next< ::java::util::t_Iterator,::java::lang::t_Object >) },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Iterator)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Iterator, t_Iterator, Iterator);
    PyObject *t_Iterator::wrap_Object(const Iterator& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Iterator::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Iterator *self = (t_Iterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Iterator::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Iterator::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Iterator *self = (t_Iterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Iterator::install(PyObject *module)
    {
      installType(&PY_TYPE(Iterator), &PY_TYPE_DEF(Iterator), module, "Iterator", 0);
    }

    void t_Iterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterator), "class_", make_descriptor(Iterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterator), "wrapfn_", make_descriptor(t_Iterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterator), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Iterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Iterator::initializeClass, 1)))
        return NULL;
      return t_Iterator::wrap_Object(Iterator(((t_Iterator *) arg)->object.this$));
    }
    static PyObject *t_Iterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Iterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Iterator_of_(t_Iterator *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Iterator_hasNext(t_Iterator *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.hasNext());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Iterator_next(t_Iterator *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.next());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Iterator_remove(t_Iterator *self)
    {
      OBJ_CALL(self->object.remove());
      Py_RETURN_NONE;
    }
    static PyObject *t_Iterator_get__parameters_(t_Iterator *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter2DPOCMethod.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *AbstractShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *AbstractShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool AbstractShortTermEncounter2DPOCMethod::live$ = false;
              jdouble AbstractShortTermEncounter2DPOCMethod::DEFAULT_TCA_DIFFERENCE_TOLERANCE = (jdouble) 0;

              jclass AbstractShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_387945137ebab778] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0110eb01e8b95b31] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_d71c9b0a2a1fa7ea] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_fabda52a93cfd27a] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_7eae8d8112e983e4] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8edb355cf7d54cf6] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_95dcab374babccc7] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_426d335df18e2f21] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_eee3de00fe971136] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");
                  mids$[mid_getObjectOrbitFromCdm_49f4e9a7f009669a] = env->getMethodID(cls, "getObjectOrbitFromCdm", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;Lorg/orekit/files/ccsds/ndm/cdm/CdmData;Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;Lorg/orekit/data/DataContext;)Lorg/orekit/orbits/Orbit;");
                  mids$[mid_getObjectStateCovarianceFromCdm_9e411e3026392eb1] = env->getMethodID(cls, "getObjectStateCovarianceFromCdm", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;Lorg/orekit/files/ccsds/ndm/cdm/CdmData;)Lorg/orekit/propagation/StateCovariance;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_TCA_DIFFERENCE_TOLERANCE = env->getStaticDoubleField(cls, "DEFAULT_TCA_DIFFERENCE_TOLERANCE");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_387945137ebab778], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_0110eb01e8b95b31], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_d71c9b0a2a1fa7ea], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_fabda52a93cfd27a], a0.this$, a1.this$, a2));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_7eae8d8112e983e4], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8edb355cf7d54cf6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_95dcab374babccc7], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_426d335df18e2f21], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5));
              }

              ::java::lang::String AbstractShortTermEncounter2DPOCMethod::getName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
              }

              jboolean AbstractShortTermEncounter2DPOCMethod::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_eee3de00fe971136]);
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_compute(t_AbstractShortTermEncounter2DPOCMethod *self, PyObject *args);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_getName(t_AbstractShortTermEncounter2DPOCMethod *self);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self, void *data);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__name(t_AbstractShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_AbstractShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_AbstractShortTermEncounter2DPOCMethod, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_AbstractShortTermEncounter2DPOCMethod, name),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AbstractShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, compute, METH_VARARGS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, getName, METH_NOARGS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, isAMaximumProbabilityOfCollisionMethod, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AbstractShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_AbstractShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AbstractShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AbstractShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AbstractShortTermEncounter2DPOCMethod, t_AbstractShortTermEncounter2DPOCMethod, AbstractShortTermEncounter2DPOCMethod);

              void t_AbstractShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(AbstractShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(AbstractShortTermEncounter2DPOCMethod), module, "AbstractShortTermEncounter2DPOCMethod", 0);
              }

              void t_AbstractShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "class_", make_descriptor(AbstractShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_AbstractShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                env->getClass(AbstractShortTermEncounter2DPOCMethod::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "DEFAULT_TCA_DIFFERENCE_TOLERANCE", make_descriptor(AbstractShortTermEncounter2DPOCMethod::DEFAULT_TCA_DIFFERENCE_TOLERANCE));
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AbstractShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_AbstractShortTermEncounter2DPOCMethod::wrap_Object(AbstractShortTermEncounter2DPOCMethod(((t_AbstractShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AbstractShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_compute(t_AbstractShortTermEncounter2DPOCMethod *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 2:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KD", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    jdouble a1;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kD", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, &a0, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 3:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    jdouble a2;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 5:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 6:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkkkDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "compute", args);
                return NULL;
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_getName(t_AbstractShortTermEncounter2DPOCMethod *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getName());
                return j2p(result);
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__name(t_AbstractShortTermEncounter2DPOCMethod *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getName());
                return j2p(value);
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
#include "org/orekit/forces/maneuvers/propulsion/PythonThrustPropulsionModel.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonThrustPropulsionModel::class$ = NULL;
          jmethodID *PythonThrustPropulsionModel::mids$ = NULL;
          bool PythonThrustPropulsionModel::live$ = false;

          jclass PythonThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getControl3DVectorCostType_fc9abda16ef946e0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getFlowRate_b443ba1cc794b916] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_4222abdadde032f5] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getFlowRate_6c8e6cd5d59063ae] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_38283c57554889c0] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_5e147f44c28a35c9] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_9816b8f76e94356a] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonThrustPropulsionModel::PythonThrustPropulsionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonThrustPropulsionModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonThrustPropulsionModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonThrustPropulsionModel::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonThrustPropulsionModel_init_(t_PythonThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonThrustPropulsionModel_finalize(t_PythonThrustPropulsionModel *self);
          static PyObject *t_PythonThrustPropulsionModel_pythonExtension(t_PythonThrustPropulsionModel *self, PyObject *args);
          static jobject JNICALL t_PythonThrustPropulsionModel_getControl3DVectorCostType0(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonThrustPropulsionModel_getParametersDrivers4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonThrustPropulsionModel_init8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonThrustPropulsionModel_pythonDecRef9(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonThrustPropulsionModel_get__self(t_PythonThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_PythonThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonThrustPropulsionModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PythonThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonThrustPropulsionModel)[] = {
            { Py_tp_methods, t_PythonThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_PythonThrustPropulsionModel_init_ },
            { Py_tp_getset, t_PythonThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonThrustPropulsionModel, t_PythonThrustPropulsionModel, PythonThrustPropulsionModel);

          void t_PythonThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonThrustPropulsionModel), &PY_TYPE_DEF(PythonThrustPropulsionModel), module, "PythonThrustPropulsionModel", 1);
          }

          void t_PythonThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustPropulsionModel), "class_", make_descriptor(PythonThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustPropulsionModel), "wrapfn_", make_descriptor(t_PythonThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonThrustPropulsionModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;", (void *) t_PythonThrustPropulsionModel_getControl3DVectorCostType0 },
              { "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonThrustPropulsionModel_getFlowRate1 },
              { "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonThrustPropulsionModel_getFlowRate2 },
              { "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D", (void *) t_PythonThrustPropulsionModel_getFlowRate3 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonThrustPropulsionModel_getParametersDrivers4 },
              { "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonThrustPropulsionModel_getThrustVector5 },
              { "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonThrustPropulsionModel_getThrustVector6 },
              { "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonThrustPropulsionModel_getThrustVector7 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonThrustPropulsionModel_init8 },
              { "pythonDecRef", "()V", (void *) t_PythonThrustPropulsionModel_pythonDecRef9 },
            };
            env->registerNatives(cls, methods, 10);
          }

          static PyObject *t_PythonThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PythonThrustPropulsionModel::wrap_Object(PythonThrustPropulsionModel(((t_PythonThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PythonThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonThrustPropulsionModel_init_(t_PythonThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            PythonThrustPropulsionModel object((jobject) NULL);

            INT_CALL(object = PythonThrustPropulsionModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonThrustPropulsionModel_finalize(t_PythonThrustPropulsionModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonThrustPropulsionModel_pythonExtension(t_PythonThrustPropulsionModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getControl3DVectorCostType0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getControl3DVectorCostType", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &value))
            {
              throwTypeError("getControl3DVectorCostType", result);
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

          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getFlowRate", result);
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

          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonThrustPropulsionModel_getParametersDrivers4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static void JNICALL t_PythonThrustPropulsionModel_init8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static void JNICALL t_PythonThrustPropulsionModel_pythonDecRef9(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonThrustPropulsionModel_get__self(t_PythonThrustPropulsionModel *self, void *data)
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
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedRealFieldUnivariateSolver$Interval::class$ = NULL;
        jmethodID *BracketedRealFieldUnivariateSolver$Interval::mids$ = NULL;
        bool BracketedRealFieldUnivariateSolver$Interval::live$ = false;

        jclass BracketedRealFieldUnivariateSolver$Interval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d9053bad9d08a9e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getLeftAbscissa_08d37e3f77b7239d] = env->getMethodID(cls, "getLeftAbscissa", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getLeftValue_08d37e3f77b7239d] = env->getMethodID(cls, "getLeftValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getRightAbscissa_08d37e3f77b7239d] = env->getMethodID(cls, "getRightAbscissa", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getRightValue_08d37e3f77b7239d] = env->getMethodID(cls, "getRightValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getSide_7cadd08d3a6050c1] = env->getMethodID(cls, "getSide", "(Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketedRealFieldUnivariateSolver$Interval::BracketedRealFieldUnivariateSolver$Interval(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d9053bad9d08a9e6, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getLeftAbscissa() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeftAbscissa_08d37e3f77b7239d]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getLeftValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeftValue_08d37e3f77b7239d]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getRightAbscissa() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAbscissa_08d37e3f77b7239d]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getRightValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightValue_08d37e3f77b7239d]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getSide(const ::org::hipparchus::analysis::solvers::AllowedSolution & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSide_7cadd08d3a6050c1], a0.this$));
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
      namespace solvers {
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_of_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args);
        static int t_BracketedRealFieldUnivariateSolver$Interval_init_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftValue(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightValue(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getSide(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__parameters_(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyGetSetDef t_BracketedRealFieldUnivariateSolver$Interval__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, leftAbscissa),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, leftValue),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, rightAbscissa),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, rightValue),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedRealFieldUnivariateSolver$Interval__methods_[] = {
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getLeftAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getLeftValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getRightAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getRightValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getSide, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedRealFieldUnivariateSolver$Interval)[] = {
          { Py_tp_methods, t_BracketedRealFieldUnivariateSolver$Interval__methods_ },
          { Py_tp_init, (void *) t_BracketedRealFieldUnivariateSolver$Interval_init_ },
          { Py_tp_getset, t_BracketedRealFieldUnivariateSolver$Interval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedRealFieldUnivariateSolver$Interval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketedRealFieldUnivariateSolver$Interval, t_BracketedRealFieldUnivariateSolver$Interval, BracketedRealFieldUnivariateSolver$Interval);
        PyObject *t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(const BracketedRealFieldUnivariateSolver$Interval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver$Interval *self = (t_BracketedRealFieldUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedRealFieldUnivariateSolver$Interval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver$Interval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver$Interval *self = (t_BracketedRealFieldUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedRealFieldUnivariateSolver$Interval::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), &PY_TYPE_DEF(BracketedRealFieldUnivariateSolver$Interval), module, "BracketedRealFieldUnivariateSolver$Interval", 0);
        }

        void t_BracketedRealFieldUnivariateSolver$Interval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), "class_", make_descriptor(BracketedRealFieldUnivariateSolver$Interval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), "wrapfn_", make_descriptor(t_BracketedRealFieldUnivariateSolver$Interval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedRealFieldUnivariateSolver$Interval::initializeClass, 1)))
            return NULL;
          return t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(BracketedRealFieldUnivariateSolver$Interval(((t_BracketedRealFieldUnivariateSolver$Interval *) arg)->object.this$));
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedRealFieldUnivariateSolver$Interval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_of_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BracketedRealFieldUnivariateSolver$Interval_init_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          BracketedRealFieldUnivariateSolver$Interval object((jobject) NULL);

          if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = BracketedRealFieldUnivariateSolver$Interval(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getLeftAbscissa());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftValue(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getLeftValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRightAbscissa());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightValue(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRightValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getSide(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::AllowedSolution a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
          {
            OBJ_CALL(result = self->object.getSide(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSide", arg);
          return NULL;
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__parameters_(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getLeftAbscissa());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getLeftValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRightAbscissa());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRightValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *AggregatableStatistic::class$ = NULL;
        jmethodID *AggregatableStatistic::mids$ = NULL;
        bool AggregatableStatistic::live$ = false;

        jclass AggregatableStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/AggregatableStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_aggregate_fc48e5166ee82e6b] = env->getMethodID(cls, "aggregate", "([Ljava/lang/Object;)V");
            mids$[mid_aggregate_26934bc48ccb39e9] = env->getMethodID(cls, "aggregate", "(Ljava/lang/Iterable;)V");
            mids$[mid_aggregate_83ee235bb1e64e94] = env->getMethodID(cls, "aggregate", "(Ljava/lang/Object;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AggregatableStatistic::aggregate(const JArray< ::java::lang::Object > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_fc48e5166ee82e6b], a0.this$);
        }

        void AggregatableStatistic::aggregate(const ::java::lang::Iterable & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_26934bc48ccb39e9], a0.this$);
        }

        void AggregatableStatistic::aggregate(const ::java::lang::Object & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_83ee235bb1e64e94], a0.this$);
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
        static PyObject *t_AggregatableStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AggregatableStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AggregatableStatistic_of_(t_AggregatableStatistic *self, PyObject *args);
        static PyObject *t_AggregatableStatistic_aggregate(t_AggregatableStatistic *self, PyObject *args);
        static PyObject *t_AggregatableStatistic_get__parameters_(t_AggregatableStatistic *self, void *data);
        static PyGetSetDef t_AggregatableStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_AggregatableStatistic, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AggregatableStatistic__methods_[] = {
          DECLARE_METHOD(t_AggregatableStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregatableStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregatableStatistic, of_, METH_VARARGS),
          DECLARE_METHOD(t_AggregatableStatistic, aggregate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AggregatableStatistic)[] = {
          { Py_tp_methods, t_AggregatableStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AggregatableStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AggregatableStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AggregatableStatistic, t_AggregatableStatistic, AggregatableStatistic);
        PyObject *t_AggregatableStatistic::wrap_Object(const AggregatableStatistic& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AggregatableStatistic::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AggregatableStatistic *self = (t_AggregatableStatistic *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AggregatableStatistic::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AggregatableStatistic::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AggregatableStatistic *self = (t_AggregatableStatistic *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AggregatableStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(AggregatableStatistic), &PY_TYPE_DEF(AggregatableStatistic), module, "AggregatableStatistic", 0);
        }

        void t_AggregatableStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatableStatistic), "class_", make_descriptor(AggregatableStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatableStatistic), "wrapfn_", make_descriptor(t_AggregatableStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatableStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AggregatableStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AggregatableStatistic::initializeClass, 1)))
            return NULL;
          return t_AggregatableStatistic::wrap_Object(AggregatableStatistic(((t_AggregatableStatistic *) arg)->object.this$));
        }
        static PyObject *t_AggregatableStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AggregatableStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AggregatableStatistic_of_(t_AggregatableStatistic *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AggregatableStatistic_aggregate(t_AggregatableStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::java::lang::Object > a0((jobject) NULL);

              if (!parseArgs(args, "[o", &a0))
              {
                OBJ_CALL(self->object.aggregate(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Iterable a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
              {
                OBJ_CALL(self->object.aggregate(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Object a0((jobject) NULL);

              if (!parseArgs(args, "O", self->parameters[0], &a0))
              {
                OBJ_CALL(self->object.aggregate(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "aggregate", args);
          return NULL;
        }
        static PyObject *t_AggregatableStatistic_get__parameters_(t_AggregatableStatistic *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateRealDistribution.h"
#include "java/util/List.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *MixtureMultivariateRealDistribution::class$ = NULL;
        jmethodID *MixtureMultivariateRealDistribution::mids$ = NULL;
        bool MixtureMultivariateRealDistribution::live$ = false;

        jclass MixtureMultivariateRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/MixtureMultivariateRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aa335fea495d60e0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_init$_8fdd5e0b7c0b469f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;Ljava/util/List;)V");
            mids$[mid_density_a40ce4fdf6559ac0] = env->getMethodID(cls, "density", "([D)D");
            mids$[mid_getComponents_d751c1a57012b438] = env->getMethodID(cls, "getComponents", "()Ljava/util/List;");
            mids$[mid_reseedRandomGenerator_f5bbab7e97879358] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
            mids$[mid_sample_be783177b060994b] = env->getMethodID(cls, "sample", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MixtureMultivariateRealDistribution::MixtureMultivariateRealDistribution(const ::java::util::List & a0) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_aa335fea495d60e0, a0.this$)) {}

        MixtureMultivariateRealDistribution::MixtureMultivariateRealDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const ::java::util::List & a1) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8fdd5e0b7c0b469f, a0.this$, a1.this$)) {}

        jdouble MixtureMultivariateRealDistribution::density(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_a40ce4fdf6559ac0], a0.this$);
        }

        ::java::util::List MixtureMultivariateRealDistribution::getComponents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComponents_d751c1a57012b438]));
        }

        void MixtureMultivariateRealDistribution::reseedRandomGenerator(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_f5bbab7e97879358], a0);
        }

        JArray< jdouble > MixtureMultivariateRealDistribution::sample() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_be783177b060994b]));
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
      namespace multivariate {
        static PyObject *t_MixtureMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateRealDistribution_of_(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static int t_MixtureMultivariateRealDistribution_init_(t_MixtureMultivariateRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MixtureMultivariateRealDistribution_density(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_MixtureMultivariateRealDistribution_getComponents(t_MixtureMultivariateRealDistribution *self);
        static PyObject *t_MixtureMultivariateRealDistribution_reseedRandomGenerator(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_MixtureMultivariateRealDistribution_sample(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_MixtureMultivariateRealDistribution_get__components(t_MixtureMultivariateRealDistribution *self, void *data);
        static PyObject *t_MixtureMultivariateRealDistribution_get__parameters_(t_MixtureMultivariateRealDistribution *self, void *data);
        static PyGetSetDef t_MixtureMultivariateRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_MixtureMultivariateRealDistribution, components),
          DECLARE_GET_FIELD(t_MixtureMultivariateRealDistribution, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MixtureMultivariateRealDistribution__methods_[] = {
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, of_, METH_VARARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, getComponents, METH_NOARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, reseedRandomGenerator, METH_VARARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, sample, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MixtureMultivariateRealDistribution)[] = {
          { Py_tp_methods, t_MixtureMultivariateRealDistribution__methods_ },
          { Py_tp_init, (void *) t_MixtureMultivariateRealDistribution_init_ },
          { Py_tp_getset, t_MixtureMultivariateRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MixtureMultivariateRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution),
          NULL
        };

        DEFINE_TYPE(MixtureMultivariateRealDistribution, t_MixtureMultivariateRealDistribution, MixtureMultivariateRealDistribution);
        PyObject *t_MixtureMultivariateRealDistribution::wrap_Object(const MixtureMultivariateRealDistribution& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateRealDistribution::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateRealDistribution *self = (t_MixtureMultivariateRealDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MixtureMultivariateRealDistribution::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateRealDistribution::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateRealDistribution *self = (t_MixtureMultivariateRealDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MixtureMultivariateRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(MixtureMultivariateRealDistribution), &PY_TYPE_DEF(MixtureMultivariateRealDistribution), module, "MixtureMultivariateRealDistribution", 0);
        }

        void t_MixtureMultivariateRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateRealDistribution), "class_", make_descriptor(MixtureMultivariateRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateRealDistribution), "wrapfn_", make_descriptor(t_MixtureMultivariateRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MixtureMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MixtureMultivariateRealDistribution::initializeClass, 1)))
            return NULL;
          return t_MixtureMultivariateRealDistribution::wrap_Object(MixtureMultivariateRealDistribution(((t_MixtureMultivariateRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_MixtureMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MixtureMultivariateRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MixtureMultivariateRealDistribution_of_(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MixtureMultivariateRealDistribution_init_(t_MixtureMultivariateRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              MixtureMultivariateRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateRealDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              MixtureMultivariateRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::hipparchus::random::RandomGenerator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateRealDistribution(a0, a1));
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

        static PyObject *t_MixtureMultivariateRealDistribution_density(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(MixtureMultivariateRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_MixtureMultivariateRealDistribution_getComponents(t_MixtureMultivariateRealDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_MixtureMultivariateRealDistribution_reseedRandomGenerator(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.reseedRandomGenerator(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(MixtureMultivariateRealDistribution), (PyObject *) self, "reseedRandomGenerator", args, 2);
        }

        static PyObject *t_MixtureMultivariateRealDistribution_sample(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sample());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MixtureMultivariateRealDistribution), (PyObject *) self, "sample", args, 2);
        }
        static PyObject *t_MixtureMultivariateRealDistribution_get__parameters_(t_MixtureMultivariateRealDistribution *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MixtureMultivariateRealDistribution_get__components(t_MixtureMultivariateRealDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/GzipFilter.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *GzipFilter::class$ = NULL;
      jmethodID *GzipFilter::mids$ = NULL;
      bool GzipFilter::live$ = false;

      jclass GzipFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/GzipFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_filter_4edc3983a04dd819] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GzipFilter::GzipFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ::org::orekit::data::DataSource GzipFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_4edc3983a04dd819], a0.this$));
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
      static PyObject *t_GzipFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GzipFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GzipFilter_init_(t_GzipFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GzipFilter_filter(t_GzipFilter *self, PyObject *arg);

      static PyMethodDef t_GzipFilter__methods_[] = {
        DECLARE_METHOD(t_GzipFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GzipFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GzipFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GzipFilter)[] = {
        { Py_tp_methods, t_GzipFilter__methods_ },
        { Py_tp_init, (void *) t_GzipFilter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GzipFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GzipFilter, t_GzipFilter, GzipFilter);

      void t_GzipFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(GzipFilter), &PY_TYPE_DEF(GzipFilter), module, "GzipFilter", 0);
      }

      void t_GzipFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GzipFilter), "class_", make_descriptor(GzipFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GzipFilter), "wrapfn_", make_descriptor(t_GzipFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GzipFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GzipFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GzipFilter::initializeClass, 1)))
          return NULL;
        return t_GzipFilter::wrap_Object(GzipFilter(((t_GzipFilter *) arg)->object.this$));
      }
      static PyObject *t_GzipFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GzipFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GzipFilter_init_(t_GzipFilter *self, PyObject *args, PyObject *kwds)
      {
        GzipFilter object((jobject) NULL);

        INT_CALL(object = GzipFilter());
        self->object = object;

        return 0;
      }

      static PyObject *t_GzipFilter_filter(t_GzipFilter *self, PyObject *arg)
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
