#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter2DPOCMethod.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonAbstractShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *PythonAbstractShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool PythonAbstractShortTermEncounter2DPOCMethod::live$ = false;

              jclass PythonAbstractShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
                  mids$[mid_compute_184c2f4ec5889c74] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0ed38e7bbee7fafc] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getType_5d7ecb27bb5e3bc3] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonAbstractShortTermEncounter2DPOCMethod::PythonAbstractShortTermEncounter2DPOCMethod(const ::java::lang::String & a0) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

              void PythonAbstractShortTermEncounter2DPOCMethod::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
              }

              jlong PythonAbstractShortTermEncounter2DPOCMethod::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
              }

              void PythonAbstractShortTermEncounter2DPOCMethod::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonAbstractShortTermEncounter2DPOCMethod_init_(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter2DPOCMethod *self);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args);
              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4);
              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4);
              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_PythonAbstractShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_PythonAbstractShortTermEncounter2DPOCMethod, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonAbstractShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonAbstractShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_PythonAbstractShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_init_ },
                { Py_tp_getset, t_PythonAbstractShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonAbstractShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(PythonAbstractShortTermEncounter2DPOCMethod, t_PythonAbstractShortTermEncounter2DPOCMethod, PythonAbstractShortTermEncounter2DPOCMethod);

              void t_PythonAbstractShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(PythonAbstractShortTermEncounter2DPOCMethod), module, "PythonAbstractShortTermEncounter2DPOCMethod", 1);
              }

              void t_PythonAbstractShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), "class_", make_descriptor(PythonAbstractShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_PythonAbstractShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonAbstractShortTermEncounter2DPOCMethod::initializeClass);
                JNINativeMethod methods[] = {
                  { "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_compute0 },
                  { "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_compute1 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_getType2 },
                  { "pythonDecRef", "()V", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_pythonDecRef3 },
                };
                env->registerNatives(cls, methods, 4);
              }

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonAbstractShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_PythonAbstractShortTermEncounter2DPOCMethod::wrap_Object(PythonAbstractShortTermEncounter2DPOCMethod(((t_PythonAbstractShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonAbstractShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonAbstractShortTermEncounter2DPOCMethod_init_(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                PythonAbstractShortTermEncounter2DPOCMethod object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = PythonAbstractShortTermEncounter2DPOCMethod(a0));
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

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter2DPOCMethod *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args)
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "compute", "ddddd", (double) a0, (double) a1, (double) a2, (double) a3, (double) a4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *o3 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOO", o0, o1, o2, o3, o4);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "getType", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::initializeClass, &value))
                {
                  throwTypeError("getType", result);
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

              static void JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter2DPOCMethod *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/fraction/BigFraction$ConvergenceTest.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/fraction/BigFractionField.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Boolean.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFraction::class$ = NULL;
      jmethodID *BigFraction::mids$ = NULL;
      bool BigFraction::live$ = false;
      BigFraction *BigFraction::FOUR_FIFTHS = NULL;
      BigFraction *BigFraction::MINUS_ONE = NULL;
      BigFraction *BigFraction::ONE = NULL;
      BigFraction *BigFraction::ONE_FIFTH = NULL;
      BigFraction *BigFraction::ONE_HALF = NULL;
      BigFraction *BigFraction::ONE_QUARTER = NULL;
      BigFraction *BigFraction::ONE_THIRD = NULL;
      BigFraction *BigFraction::THREE_FIFTHS = NULL;
      BigFraction *BigFraction::THREE_QUARTERS = NULL;
      BigFraction *BigFraction::TWO = NULL;
      BigFraction *BigFraction::TWO_FIFTHS = NULL;
      BigFraction *BigFraction::TWO_QUARTERS = NULL;
      BigFraction *BigFraction::TWO_THIRDS = NULL;
      BigFraction *BigFraction::ZERO = NULL;

      jclass BigFraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_937e8350af41f9fd] = env->getMethodID(cls, "<init>", "(DJ)V");
          mids$[mid_init$_b3c0d262fb9ab281] = env->getMethodID(cls, "<init>", "(JJ)V");
          mids$[mid_init$_01fb2c777e5def32] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_abs_785133ac6602777f] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_add_92e8b97ee33171ea] = env->getMethodID(cls, "add", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_add_ffea0fd1f84a1bdc] = env->getMethodID(cls, "add", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_add_20c744803059662a] = env->getMethodID(cls, "add", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_compareTo_2353eebd82c14db1] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/fraction/BigFraction;)I");
          mids$[mid_convergent_7b49999adb131a29] = env->getStaticMethodID(cls, "convergent", "(DILorg/hipparchus/fraction/BigFraction$ConvergenceTest;)Lorg/hipparchus/util/Pair;");
          mids$[mid_convergents_6e644ae679b81b73] = env->getStaticMethodID(cls, "convergents", "(DI)Ljava/util/stream/Stream;");
          mids$[mid_divide_92e8b97ee33171ea] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_divide_ffea0fd1f84a1bdc] = env->getMethodID(cls, "divide", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_divide_20c744803059662a] = env->getMethodID(cls, "divide", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_doubleValue_dff5885c2c873297] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_floatValue_5adccb493ada08e8] = env->getMethodID(cls, "floatValue", "()F");
          mids$[mid_getDenominatorAsInt_570ce0828f81a2c1] = env->getMethodID(cls, "getDenominatorAsInt", "()I");
          mids$[mid_getDenominatorAsLong_492808a339bfa35f] = env->getMethodID(cls, "getDenominatorAsLong", "()J");
          mids$[mid_getField_bd5b8d6d09b3bc67] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/fraction/BigFractionField;");
          mids$[mid_getNumeratorAsInt_570ce0828f81a2c1] = env->getMethodID(cls, "getNumeratorAsInt", "()I");
          mids$[mid_getNumeratorAsLong_492808a339bfa35f] = env->getMethodID(cls, "getNumeratorAsLong", "()J");
          mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getReducedFraction_ec3241b67099e973] = env->getStaticMethodID(cls, "getReducedFraction", "(II)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_intValue_570ce0828f81a2c1] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInteger_b108b35ef48e27bd] = env->getMethodID(cls, "isInteger", "()Z");
          mids$[mid_longValue_492808a339bfa35f] = env->getMethodID(cls, "longValue", "()J");
          mids$[mid_multiply_92e8b97ee33171ea] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_multiply_ffea0fd1f84a1bdc] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_multiply_20c744803059662a] = env->getMethodID(cls, "multiply", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_negate_785133ac6602777f] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_percentageValue_dff5885c2c873297] = env->getMethodID(cls, "percentageValue", "()D");
          mids$[mid_pow_dcbc7ce2902fa136] = env->getMethodID(cls, "pow", "(D)D");
          mids$[mid_pow_ffea0fd1f84a1bdc] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_pow_20c744803059662a] = env->getMethodID(cls, "pow", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_reciprocal_785133ac6602777f] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_reduce_785133ac6602777f] = env->getMethodID(cls, "reduce", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_signum_570ce0828f81a2c1] = env->getMethodID(cls, "signum", "()I");
          mids$[mid_subtract_92e8b97ee33171ea] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_subtract_ffea0fd1f84a1bdc] = env->getMethodID(cls, "subtract", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_subtract_20c744803059662a] = env->getMethodID(cls, "subtract", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FOUR_FIFTHS = new BigFraction(env->getStaticObjectField(cls, "FOUR_FIFTHS", "Lorg/hipparchus/fraction/BigFraction;"));
          MINUS_ONE = new BigFraction(env->getStaticObjectField(cls, "MINUS_ONE", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE = new BigFraction(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_FIFTH = new BigFraction(env->getStaticObjectField(cls, "ONE_FIFTH", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_HALF = new BigFraction(env->getStaticObjectField(cls, "ONE_HALF", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_QUARTER = new BigFraction(env->getStaticObjectField(cls, "ONE_QUARTER", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_THIRD = new BigFraction(env->getStaticObjectField(cls, "ONE_THIRD", "Lorg/hipparchus/fraction/BigFraction;"));
          THREE_FIFTHS = new BigFraction(env->getStaticObjectField(cls, "THREE_FIFTHS", "Lorg/hipparchus/fraction/BigFraction;"));
          THREE_QUARTERS = new BigFraction(env->getStaticObjectField(cls, "THREE_QUARTERS", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO = new BigFraction(env->getStaticObjectField(cls, "TWO", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO_FIFTHS = new BigFraction(env->getStaticObjectField(cls, "TWO_FIFTHS", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO_QUARTERS = new BigFraction(env->getStaticObjectField(cls, "TWO_QUARTERS", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO_THIRDS = new BigFraction(env->getStaticObjectField(cls, "TWO_THIRDS", "Lorg/hipparchus/fraction/BigFraction;"));
          ZERO = new BigFraction(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/fraction/BigFraction;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BigFraction::BigFraction(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

      BigFraction::BigFraction(jint a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      BigFraction::BigFraction(jlong a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

      BigFraction::BigFraction(jint a0, jint a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

      BigFraction::BigFraction(jdouble a0, jlong a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_937e8350af41f9fd, a0, a1)) {}

      BigFraction::BigFraction(jlong a0, jlong a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_b3c0d262fb9ab281, a0, a1)) {}

      BigFraction::BigFraction(jdouble a0, jdouble a1, jint a2) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_01fb2c777e5def32, a0, a1, a2)) {}

      BigFraction BigFraction::abs() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_abs_785133ac6602777f]));
      }

      BigFraction BigFraction::add(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_add_92e8b97ee33171ea], a0.this$));
      }

      BigFraction BigFraction::add(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_add_ffea0fd1f84a1bdc], a0));
      }

      BigFraction BigFraction::add(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_add_20c744803059662a], a0));
      }

      jint BigFraction::compareTo(const BigFraction & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_2353eebd82c14db1], a0.this$);
      }

      ::org::hipparchus::util::Pair BigFraction::convergent(jdouble a0, jint a1, const ::org::hipparchus::fraction::BigFraction$ConvergenceTest & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::Pair(env->callStaticObjectMethod(cls, mids$[mid_convergent_7b49999adb131a29], a0, a1, a2.this$));
      }

      ::java::util::stream::Stream BigFraction::convergents(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_convergents_6e644ae679b81b73], a0, a1));
      }

      BigFraction BigFraction::divide(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_divide_92e8b97ee33171ea], a0.this$));
      }

      BigFraction BigFraction::divide(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_divide_ffea0fd1f84a1bdc], a0));
      }

      BigFraction BigFraction::divide(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_divide_20c744803059662a], a0));
      }

      jdouble BigFraction::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_dff5885c2c873297]);
      }

      jboolean BigFraction::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      jfloat BigFraction::floatValue() const
      {
        return env->callFloatMethod(this$, mids$[mid_floatValue_5adccb493ada08e8]);
      }

      jint BigFraction::getDenominatorAsInt() const
      {
        return env->callIntMethod(this$, mids$[mid_getDenominatorAsInt_570ce0828f81a2c1]);
      }

      jlong BigFraction::getDenominatorAsLong() const
      {
        return env->callLongMethod(this$, mids$[mid_getDenominatorAsLong_492808a339bfa35f]);
      }

      ::org::hipparchus::fraction::BigFractionField BigFraction::getField() const
      {
        return ::org::hipparchus::fraction::BigFractionField(env->callObjectMethod(this$, mids$[mid_getField_bd5b8d6d09b3bc67]));
      }

      jint BigFraction::getNumeratorAsInt() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumeratorAsInt_570ce0828f81a2c1]);
      }

      jlong BigFraction::getNumeratorAsLong() const
      {
        return env->callLongMethod(this$, mids$[mid_getNumeratorAsLong_492808a339bfa35f]);
      }

      jdouble BigFraction::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
      }

      BigFraction BigFraction::getReducedFraction(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return BigFraction(env->callStaticObjectMethod(cls, mids$[mid_getReducedFraction_ec3241b67099e973], a0, a1));
      }

      jint BigFraction::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      jint BigFraction::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_570ce0828f81a2c1]);
      }

      jboolean BigFraction::isInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInteger_b108b35ef48e27bd]);
      }

      jlong BigFraction::longValue() const
      {
        return env->callLongMethod(this$, mids$[mid_longValue_492808a339bfa35f]);
      }

      BigFraction BigFraction::multiply(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_multiply_92e8b97ee33171ea], a0.this$));
      }

      BigFraction BigFraction::multiply(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_multiply_ffea0fd1f84a1bdc], a0));
      }

      BigFraction BigFraction::multiply(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_multiply_20c744803059662a], a0));
      }

      BigFraction BigFraction::negate() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_negate_785133ac6602777f]));
      }

      jdouble BigFraction::percentageValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_percentageValue_dff5885c2c873297]);
      }

      jdouble BigFraction::pow(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_pow_dcbc7ce2902fa136], a0);
      }

      BigFraction BigFraction::pow(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_pow_ffea0fd1f84a1bdc], a0));
      }

      BigFraction BigFraction::pow(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_pow_20c744803059662a], a0));
      }

      BigFraction BigFraction::reciprocal() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_reciprocal_785133ac6602777f]));
      }

      BigFraction BigFraction::reduce() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_reduce_785133ac6602777f]));
      }

      jint BigFraction::signum() const
      {
        return env->callIntMethod(this$, mids$[mid_signum_570ce0828f81a2c1]);
      }

      BigFraction BigFraction::subtract(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_subtract_92e8b97ee33171ea], a0.this$));
      }

      BigFraction BigFraction::subtract(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_subtract_ffea0fd1f84a1bdc], a0));
      }

      BigFraction BigFraction::subtract(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_subtract_20c744803059662a], a0));
      }

      ::java::lang::String BigFraction::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_BigFraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFraction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BigFraction_init_(t_BigFraction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BigFraction_abs(t_BigFraction *self);
      static PyObject *t_BigFraction_add(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_compareTo(t_BigFraction *self, PyObject *arg);
      static PyObject *t_BigFraction_convergent(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFraction_convergents(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFraction_divide(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_doubleValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_equals(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_floatValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_getDenominatorAsInt(t_BigFraction *self);
      static PyObject *t_BigFraction_getDenominatorAsLong(t_BigFraction *self);
      static PyObject *t_BigFraction_getField(t_BigFraction *self);
      static PyObject *t_BigFraction_getNumeratorAsInt(t_BigFraction *self);
      static PyObject *t_BigFraction_getNumeratorAsLong(t_BigFraction *self);
      static PyObject *t_BigFraction_getReal(t_BigFraction *self);
      static PyObject *t_BigFraction_getReducedFraction(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFraction_hashCode(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_intValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_isInteger(t_BigFraction *self);
      static PyObject *t_BigFraction_longValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_multiply(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_negate(t_BigFraction *self);
      static PyObject *t_BigFraction_percentageValue(t_BigFraction *self);
      static PyObject *t_BigFraction_pow(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_reciprocal(t_BigFraction *self);
      static PyObject *t_BigFraction_reduce(t_BigFraction *self);
      static PyObject *t_BigFraction_signum(t_BigFraction *self);
      static PyObject *t_BigFraction_subtract(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_toString(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_get__denominatorAsInt(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__denominatorAsLong(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__field(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__integer(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__numeratorAsInt(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__numeratorAsLong(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__real(t_BigFraction *self, void *data);
      static PyGetSetDef t_BigFraction__fields_[] = {
        DECLARE_GET_FIELD(t_BigFraction, denominatorAsInt),
        DECLARE_GET_FIELD(t_BigFraction, denominatorAsLong),
        DECLARE_GET_FIELD(t_BigFraction, field),
        DECLARE_GET_FIELD(t_BigFraction, integer),
        DECLARE_GET_FIELD(t_BigFraction, numeratorAsInt),
        DECLARE_GET_FIELD(t_BigFraction, numeratorAsLong),
        DECLARE_GET_FIELD(t_BigFraction, real),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigFraction__methods_[] = {
        DECLARE_METHOD(t_BigFraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, abs, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, add, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, compareTo, METH_O),
        DECLARE_METHOD(t_BigFraction, convergent, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, convergents, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, divide, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, doubleValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, floatValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, getDenominatorAsInt, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getDenominatorAsLong, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getField, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getNumeratorAsInt, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getNumeratorAsLong, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getReal, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getReducedFraction, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, intValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, isInteger, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, longValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, negate, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, percentageValue, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, pow, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, reduce, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, signum, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, subtract, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFraction)[] = {
        { Py_tp_methods, t_BigFraction__methods_ },
        { Py_tp_init, (void *) t_BigFraction_init_ },
        { Py_tp_getset, t_BigFraction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFraction)[] = {
        &PY_TYPE_DEF(::java::lang::Number),
        NULL
      };

      DEFINE_TYPE(BigFraction, t_BigFraction, BigFraction);

      void t_BigFraction::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFraction), &PY_TYPE_DEF(BigFraction), module, "BigFraction", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ConvergenceTest", make_descriptor(&PY_TYPE_DEF(BigFraction$ConvergenceTest)));
      }

      void t_BigFraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "class_", make_descriptor(BigFraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "wrapfn_", make_descriptor(t_BigFraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "boxfn_", make_descriptor(boxObject));
        env->getClass(BigFraction::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "FOUR_FIFTHS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::FOUR_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "MINUS_ONE", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::MINUS_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_FIFTH", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_FIFTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_HALF", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_HALF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_QUARTER", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_QUARTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_THIRD", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_THIRD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "THREE_FIFTHS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::THREE_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "THREE_QUARTERS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::THREE_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO_FIFTHS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO_QUARTERS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO_THIRDS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO_THIRDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ZERO", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ZERO)));
      }

      static PyObject *t_BigFraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFraction::initializeClass, 1)))
          return NULL;
        return t_BigFraction::wrap_Object(BigFraction(((t_BigFraction *) arg)->object.this$));
      }
      static PyObject *t_BigFraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BigFraction_init_(t_BigFraction *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = BigFraction(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = BigFraction(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = BigFraction(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jint a1;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = BigFraction(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            jlong a1;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "DJ", &a0, &a1))
            {
              INT_CALL(object = BigFraction(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            jlong a1;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              INT_CALL(object = BigFraction(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = BigFraction(a0, a1, a2));
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

      static PyObject *t_BigFraction_abs(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_add(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_BigFraction_compareTo(t_BigFraction *self, PyObject *arg)
      {
        BigFraction a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", BigFraction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_BigFraction_convergent(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::org::hipparchus::fraction::BigFraction$ConvergenceTest a2((jobject) NULL);
        ::org::hipparchus::util::Pair result((jobject) NULL);

        if (!parseArgs(args, "DIk", ::org::hipparchus::fraction::BigFraction$ConvergenceTest::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFraction::convergent(a0, a1, a2));
          return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(BigFraction), ::java::lang::PY_TYPE(Boolean));
        }

        PyErr_SetArgsError(type, "convergent", args);
        return NULL;
      }

      static PyObject *t_BigFraction_convergents(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "DI", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFraction::convergents(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(BigFraction));
        }

        PyErr_SetArgsError(type, "convergents", args);
        return NULL;
      }

      static PyObject *t_BigFraction_divide(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_BigFraction_doubleValue(t_BigFraction *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.doubleValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "doubleValue", args, 2);
      }

      static PyObject *t_BigFraction_equals(t_BigFraction *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigFraction_floatValue(t_BigFraction *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.floatValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "floatValue", args, 2);
      }

      static PyObject *t_BigFraction_getDenominatorAsInt(t_BigFraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDenominatorAsInt());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigFraction_getDenominatorAsLong(t_BigFraction *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.getDenominatorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_BigFraction_getField(t_BigFraction *self)
      {
        ::org::hipparchus::fraction::BigFractionField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::fraction::t_BigFractionField::wrap_Object(result);
      }

      static PyObject *t_BigFraction_getNumeratorAsInt(t_BigFraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumeratorAsInt());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigFraction_getNumeratorAsLong(t_BigFraction *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.getNumeratorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_BigFraction_getReal(t_BigFraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigFraction_getReducedFraction(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        BigFraction result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFraction::getReducedFraction(a0, a1));
          return t_BigFraction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getReducedFraction", args);
        return NULL;
      }

      static PyObject *t_BigFraction_hashCode(t_BigFraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigFraction_intValue(t_BigFraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.intValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "intValue", args, 2);
      }

      static PyObject *t_BigFraction_isInteger(t_BigFraction *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_BigFraction_longValue(t_BigFraction *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.longValue());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "longValue", args, 2);
      }

      static PyObject *t_BigFraction_multiply(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_BigFraction_negate(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_percentageValue(t_BigFraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.percentageValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigFraction_pow(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_BigFraction_reciprocal(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_reduce(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.reduce());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_signum(t_BigFraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.signum());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigFraction_subtract(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_BigFraction_toString(t_BigFraction *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_BigFraction_get__denominatorAsInt(t_BigFraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDenominatorAsInt());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BigFraction_get__denominatorAsLong(t_BigFraction *self, void *data)
      {
        jlong value;
        OBJ_CALL(value = self->object.getDenominatorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) value);
      }

      static PyObject *t_BigFraction_get__field(t_BigFraction *self, void *data)
      {
        ::org::hipparchus::fraction::BigFractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::fraction::t_BigFractionField::wrap_Object(value);
      }

      static PyObject *t_BigFraction_get__integer(t_BigFraction *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_BigFraction_get__numeratorAsInt(t_BigFraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumeratorAsInt());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BigFraction_get__numeratorAsLong(t_BigFraction *self, void *data)
      {
        jlong value;
        OBJ_CALL(value = self->object.getNumeratorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) value);
      }

      static PyObject *t_BigFraction_get__real(t_BigFraction *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/TimeSpanDragForce.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *TimeSpanDragForce::class$ = NULL;
        jmethodID *TimeSpanDragForce::mids$ = NULL;
        bool TimeSpanDragForce::live$ = false;
        ::java::lang::String *TimeSpanDragForce::DATE_AFTER = NULL;
        ::java::lang::String *TimeSpanDragForce::DATE_BEFORE = NULL;

        jclass TimeSpanDragForce::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/TimeSpanDragForce");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_47c8c3109a8b7c41] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;)V");
            mids$[mid_init$_55ce961c64ea54a7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_addDragSensitiveValidAfter_4d838ef2b1c30430] = env->getMethodID(cls, "addDragSensitiveValidAfter", "(Lorg/orekit/forces/drag/DragSensitive;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addDragSensitiveValidBefore_4d838ef2b1c30430] = env->getMethodID(cls, "addDragSensitiveValidBefore", "(Lorg/orekit/forces/drag/DragSensitive;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_extractDragSensitiveRange_56889532bb31616d] = env->getMethodID(cls, "extractDragSensitiveRange", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_extractParameters_020d17bb8c285475] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
            mids$[mid_extractParameters_547c908eaeea187e] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDragSensitive_7254da19cc7a4040] = env->getMethodID(cls, "getDragSensitive", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/drag/DragSensitive;");
            mids$[mid_getDragSensitiveSpan_561a18a65c5f000d] = env->getMethodID(cls, "getDragSensitiveSpan", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getFirstSpan_971209c2bf2033e7] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DATE_AFTER = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_AFTER", "Ljava/lang/String;"));
            DATE_BEFORE = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_BEFORE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TimeSpanDragForce::TimeSpanDragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_47c8c3109a8b7c41, a0.this$, a1.this$)) {}

        TimeSpanDragForce::TimeSpanDragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_55ce961c64ea54a7, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeSpanDragForce::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeSpanDragForce::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        void TimeSpanDragForce::addDragSensitiveValidAfter(const ::org::orekit::forces::drag::DragSensitive & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addDragSensitiveValidAfter_4d838ef2b1c30430], a0.this$, a1.this$);
        }

        void TimeSpanDragForce::addDragSensitiveValidBefore(const ::org::orekit::forces::drag::DragSensitive & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addDragSensitiveValidBefore_4d838ef2b1c30430], a0.this$, a1.this$);
        }

        ::org::orekit::utils::TimeSpanMap TimeSpanDragForce::extractDragSensitiveRange(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_extractDragSensitiveRange_56889532bb31616d], a0.this$, a1.this$));
        }

        JArray< jdouble > TimeSpanDragForce::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_020d17bb8c285475], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > TimeSpanDragForce::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_547c908eaeea187e], a0.this$, a1.this$));
        }

        ::org::orekit::forces::drag::DragSensitive TimeSpanDragForce::getDragSensitive(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::forces::drag::DragSensitive(env->callObjectMethod(this$, mids$[mid_getDragSensitive_7254da19cc7a4040], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanDragForce::getDragSensitiveSpan(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getDragSensitiveSpan_561a18a65c5f000d], a0.this$));
        }

        ::java::util::stream::Stream TimeSpanDragForce::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_20f6d2b462aaef4b]));
        }

        ::java::util::stream::Stream TimeSpanDragForce::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_361313cd1a9c693a], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanDragForce::getFirstSpan() const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_971209c2bf2033e7]));
        }

        ::java::util::List TimeSpanDragForce::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
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
        static PyObject *t_TimeSpanDragForce_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeSpanDragForce_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TimeSpanDragForce_init_(t_TimeSpanDragForce *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TimeSpanDragForce_acceleration(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidAfter(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidBefore(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_extractDragSensitiveRange(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_extractParameters(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_getDragSensitive(t_TimeSpanDragForce *self, PyObject *arg);
        static PyObject *t_TimeSpanDragForce_getDragSensitiveSpan(t_TimeSpanDragForce *self, PyObject *arg);
        static PyObject *t_TimeSpanDragForce_getEventDetectors(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_getFieldEventDetectors(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_getFirstSpan(t_TimeSpanDragForce *self);
        static PyObject *t_TimeSpanDragForce_getParametersDrivers(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_get__eventDetectors(t_TimeSpanDragForce *self, void *data);
        static PyObject *t_TimeSpanDragForce_get__firstSpan(t_TimeSpanDragForce *self, void *data);
        static PyObject *t_TimeSpanDragForce_get__parametersDrivers(t_TimeSpanDragForce *self, void *data);
        static PyGetSetDef t_TimeSpanDragForce__fields_[] = {
          DECLARE_GET_FIELD(t_TimeSpanDragForce, eventDetectors),
          DECLARE_GET_FIELD(t_TimeSpanDragForce, firstSpan),
          DECLARE_GET_FIELD(t_TimeSpanDragForce, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeSpanDragForce__methods_[] = {
          DECLARE_METHOD(t_TimeSpanDragForce, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanDragForce, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanDragForce, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, addDragSensitiveValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, addDragSensitiveValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, extractDragSensitiveRange, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, extractParameters, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getDragSensitive, METH_O),
          DECLARE_METHOD(t_TimeSpanDragForce, getDragSensitiveSpan, METH_O),
          DECLARE_METHOD(t_TimeSpanDragForce, getEventDetectors, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getFieldEventDetectors, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getFirstSpan, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getParametersDrivers, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeSpanDragForce)[] = {
          { Py_tp_methods, t_TimeSpanDragForce__methods_ },
          { Py_tp_init, (void *) t_TimeSpanDragForce_init_ },
          { Py_tp_getset, t_TimeSpanDragForce__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeSpanDragForce)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::drag::AbstractDragForceModel),
          NULL
        };

        DEFINE_TYPE(TimeSpanDragForce, t_TimeSpanDragForce, TimeSpanDragForce);

        void t_TimeSpanDragForce::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeSpanDragForce), &PY_TYPE_DEF(TimeSpanDragForce), module, "TimeSpanDragForce", 0);
        }

        void t_TimeSpanDragForce::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "class_", make_descriptor(TimeSpanDragForce::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "wrapfn_", make_descriptor(t_TimeSpanDragForce::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "boxfn_", make_descriptor(boxObject));
          env->getClass(TimeSpanDragForce::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "DATE_AFTER", make_descriptor(j2p(*TimeSpanDragForce::DATE_AFTER)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "DATE_BEFORE", make_descriptor(j2p(*TimeSpanDragForce::DATE_BEFORE)));
        }

        static PyObject *t_TimeSpanDragForce_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeSpanDragForce::initializeClass, 1)))
            return NULL;
          return t_TimeSpanDragForce::wrap_Object(TimeSpanDragForce(((t_TimeSpanDragForce *) arg)->object.this$));
        }
        static PyObject *t_TimeSpanDragForce_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeSpanDragForce::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TimeSpanDragForce_init_(t_TimeSpanDragForce *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
              ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
              TimeSpanDragForce object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, &a0, &a1))
              {
                INT_CALL(object = TimeSpanDragForce(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
              ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
              ::org::orekit::time::TimeScale a2((jobject) NULL);
              TimeSpanDragForce object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = TimeSpanDragForce(a0, a1, a2));
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

        static PyObject *t_TimeSpanDragForce_acceleration(t_TimeSpanDragForce *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidAfter(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::orekit::forces::drag::DragSensitive a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::drag::DragSensitive::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addDragSensitiveValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDragSensitiveValidAfter", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidBefore(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::orekit::forces::drag::DragSensitive a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::drag::DragSensitive::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addDragSensitiveValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDragSensitiveValidBefore", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_extractDragSensitiveRange(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.extractDragSensitiveRange(a0, a1));
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::orekit::forces::drag::PY_TYPE(DragSensitive));
          }

          PyErr_SetArgsError((PyObject *) self, "extractDragSensitiveRange", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_extractParameters(t_TimeSpanDragForce *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return result.wrap();
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_getDragSensitive(t_TimeSpanDragForce *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::forces::drag::DragSensitive result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDragSensitive(a0));
            return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDragSensitive", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_getDragSensitiveSpan(t_TimeSpanDragForce *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDragSensitiveSpan(a0));
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::drag::PY_TYPE(DragSensitive));
          }

          PyErr_SetArgsError((PyObject *) self, "getDragSensitiveSpan", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_getEventDetectors(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "getEventDetectors", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_getFieldEventDetectors(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "getFieldEventDetectors", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_getFirstSpan(t_TimeSpanDragForce *self)
        {
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::drag::PY_TYPE(DragSensitive));
        }

        static PyObject *t_TimeSpanDragForce_getParametersDrivers(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_get__eventDetectors(t_TimeSpanDragForce *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_TimeSpanDragForce_get__firstSpan(t_TimeSpanDragForce *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
        }

        static PyObject *t_TimeSpanDragForce_get__parametersDrivers(t_TimeSpanDragForce *self, void *data)
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
#include "org/orekit/utils/PythonConstants.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/Constants.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonConstants::class$ = NULL;
      jmethodID *PythonConstants::mids$ = NULL;
      bool PythonConstants::live$ = false;

      jclass PythonConstants::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonConstants");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonConstants::PythonConstants() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonConstants::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonConstants::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonConstants::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonConstants_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonConstants_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonConstants_init_(t_PythonConstants *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonConstants_finalize(t_PythonConstants *self);
      static PyObject *t_PythonConstants_pythonExtension(t_PythonConstants *self, PyObject *args);
      static void JNICALL t_PythonConstants_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonConstants_get__self(t_PythonConstants *self, void *data);
      static PyGetSetDef t_PythonConstants__fields_[] = {
        DECLARE_GET_FIELD(t_PythonConstants, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonConstants__methods_[] = {
        DECLARE_METHOD(t_PythonConstants, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonConstants, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonConstants, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonConstants, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonConstants)[] = {
        { Py_tp_methods, t_PythonConstants__methods_ },
        { Py_tp_init, (void *) t_PythonConstants_init_ },
        { Py_tp_getset, t_PythonConstants__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonConstants)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonConstants, t_PythonConstants, PythonConstants);

      void t_PythonConstants::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonConstants), &PY_TYPE_DEF(PythonConstants), module, "PythonConstants", 1);
      }

      void t_PythonConstants::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonConstants), "class_", make_descriptor(PythonConstants::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonConstants), "wrapfn_", make_descriptor(t_PythonConstants::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonConstants), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonConstants::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonConstants_pythonDecRef0 },
        };
        env->registerNatives(cls, methods, 1);
      }

      static PyObject *t_PythonConstants_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonConstants::initializeClass, 1)))
          return NULL;
        return t_PythonConstants::wrap_Object(PythonConstants(((t_PythonConstants *) arg)->object.this$));
      }
      static PyObject *t_PythonConstants_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonConstants::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonConstants_init_(t_PythonConstants *self, PyObject *args, PyObject *kwds)
      {
        PythonConstants object((jobject) NULL);

        INT_CALL(object = PythonConstants());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonConstants_finalize(t_PythonConstants *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonConstants_pythonExtension(t_PythonConstants *self, PyObject *args)
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

      static void JNICALL t_PythonConstants_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonConstants::mids$[PythonConstants::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonConstants::mids$[PythonConstants::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonConstants_get__self(t_PythonConstants *self, void *data)
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
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
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
            mids$[mid_write_1c80e0cccc4d4797] = env->getMethodID(cls, "write", "(Ljava/lang/String;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");
            mids$[mid_write_9b09ecef0da8f461] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AttitudeEphemerisFileWriter::write(const ::java::lang::String & a0, const ::org::orekit::files::general::AttitudeEphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_1c80e0cccc4d4797], a0.this$, a1.this$);
        }

        void AttitudeEphemerisFileWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::AttitudeEphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_9b09ecef0da8f461], a0.this$, a1.this$);
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
#include "org/hipparchus/random/ForwardingRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *ForwardingRandomGenerator::class$ = NULL;
      jmethodID *ForwardingRandomGenerator::mids$ = NULL;
      bool ForwardingRandomGenerator::live$ = false;

      jclass ForwardingRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/ForwardingRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextBoolean_b108b35ef48e27bd] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_20012b3010a39c05] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_d7af9aedcdd3845b] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_dff5885c2c873297] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_5adccb493ada08e8] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_dff5885c2c873297] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_570ce0828f81a2c1] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_2235cd056f5a882b] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_492808a339bfa35f] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_02b241598e254a3f] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_d147d7ce001e2d45] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_99803b0791f320ff] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3a8e7649f31fdb20] = env->getMethodID(cls, "setSeed", "(J)V");
          mids$[mid_delegate_cf774856d74e158c] = env->getMethodID(cls, "delegate", "()Lorg/hipparchus/random/RandomGenerator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean ForwardingRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_b108b35ef48e27bd]);
      }

      void ForwardingRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_20012b3010a39c05], a0.this$);
      }

      void ForwardingRandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_d7af9aedcdd3845b], a0.this$, a1, a2);
      }

      jdouble ForwardingRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_dff5885c2c873297]);
      }

      jfloat ForwardingRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_5adccb493ada08e8]);
      }

      jdouble ForwardingRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_dff5885c2c873297]);
      }

      jint ForwardingRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_570ce0828f81a2c1]);
      }

      jint ForwardingRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_2235cd056f5a882b], a0);
      }

      jlong ForwardingRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_492808a339bfa35f]);
      }

      jlong ForwardingRandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_02b241598e254a3f], a0);
      }

      void ForwardingRandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d147d7ce001e2d45], a0.this$);
      }

      void ForwardingRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_99803b0791f320ff], a0);
      }

      void ForwardingRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3a8e7649f31fdb20], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_ForwardingRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForwardingRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForwardingRandomGenerator_nextBoolean(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextBytes(t_ForwardingRandomGenerator *self, PyObject *args);
      static PyObject *t_ForwardingRandomGenerator_nextDouble(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextFloat(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextGaussian(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextInt(t_ForwardingRandomGenerator *self, PyObject *args);
      static PyObject *t_ForwardingRandomGenerator_nextLong(t_ForwardingRandomGenerator *self, PyObject *args);
      static PyObject *t_ForwardingRandomGenerator_setSeed(t_ForwardingRandomGenerator *self, PyObject *args);
      static int t_ForwardingRandomGenerator_set__seed(t_ForwardingRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_ForwardingRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_ForwardingRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ForwardingRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_ForwardingRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextBoolean, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextDouble, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextFloat, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ForwardingRandomGenerator)[] = {
        { Py_tp_methods, t_ForwardingRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ForwardingRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ForwardingRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ForwardingRandomGenerator, t_ForwardingRandomGenerator, ForwardingRandomGenerator);

      void t_ForwardingRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(ForwardingRandomGenerator), &PY_TYPE_DEF(ForwardingRandomGenerator), module, "ForwardingRandomGenerator", 0);
      }

      void t_ForwardingRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForwardingRandomGenerator), "class_", make_descriptor(ForwardingRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForwardingRandomGenerator), "wrapfn_", make_descriptor(t_ForwardingRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForwardingRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ForwardingRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ForwardingRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_ForwardingRandomGenerator::wrap_Object(ForwardingRandomGenerator(((t_ForwardingRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_ForwardingRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ForwardingRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ForwardingRandomGenerator_nextBoolean(t_ForwardingRandomGenerator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.nextBoolean());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextBytes(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextBytes", args);
        return NULL;
      }

      static PyObject *t_ForwardingRandomGenerator_nextDouble(t_ForwardingRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextFloat(t_ForwardingRandomGenerator *self)
      {
        jfloat result;
        OBJ_CALL(result = self->object.nextFloat());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextGaussian(t_ForwardingRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextInt(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextInt", args);
        return NULL;
      }

      static PyObject *t_ForwardingRandomGenerator_nextLong(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextLong", args);
        return NULL;
      }

      static PyObject *t_ForwardingRandomGenerator_setSeed(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setSeed", args);
        return NULL;
      }

      static int t_ForwardingRandomGenerator_set__seed(t_ForwardingRandomGenerator *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *OneWayGNSSPhase::class$ = NULL;
          jmethodID *OneWayGNSSPhase::mids$ = NULL;
          bool OneWayGNSSPhase::live$ = false;
          ::java::lang::String *OneWayGNSSPhase::AMBIGUITY_NAME = NULL;
          ::java::lang::String *OneWayGNSSPhase::MEASUREMENT_TYPE = NULL;

          jclass OneWayGNSSPhase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/OneWayGNSSPhase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_27e5ca9a3c7c8ec0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/time/AbsoluteDate;DDDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_getAmbiguityDriver_a25ed222178aa59f] = env->getMethodID(cls, "getAmbiguityDriver", "()Lorg/orekit/utils/ParameterDriver;");
              mids$[mid_getWavelength_dff5885c2c873297] = env->getMethodID(cls, "getWavelength", "()D");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AMBIGUITY_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "AMBIGUITY_NAME", "Ljava/lang/String;"));
              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OneWayGNSSPhase::OneWayGNSSPhase(const ::org::orekit::utils::PVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, const ::org::orekit::estimation::measurements::ObservableSatellite & a7) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_27e5ca9a3c7c8ec0, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7.this$)) {}

          ::org::orekit::utils::ParameterDriver OneWayGNSSPhase::getAmbiguityDriver() const
          {
            return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getAmbiguityDriver_a25ed222178aa59f]));
          }

          jdouble OneWayGNSSPhase::getWavelength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWavelength_dff5885c2c873297]);
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
          static PyObject *t_OneWayGNSSPhase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhase_of_(t_OneWayGNSSPhase *self, PyObject *args);
          static int t_OneWayGNSSPhase_init_(t_OneWayGNSSPhase *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OneWayGNSSPhase_getAmbiguityDriver(t_OneWayGNSSPhase *self);
          static PyObject *t_OneWayGNSSPhase_getWavelength(t_OneWayGNSSPhase *self);
          static PyObject *t_OneWayGNSSPhase_get__ambiguityDriver(t_OneWayGNSSPhase *self, void *data);
          static PyObject *t_OneWayGNSSPhase_get__wavelength(t_OneWayGNSSPhase *self, void *data);
          static PyObject *t_OneWayGNSSPhase_get__parameters_(t_OneWayGNSSPhase *self, void *data);
          static PyGetSetDef t_OneWayGNSSPhase__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSPhase, ambiguityDriver),
            DECLARE_GET_FIELD(t_OneWayGNSSPhase, wavelength),
            DECLARE_GET_FIELD(t_OneWayGNSSPhase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSPhase__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSPhase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhase, of_, METH_VARARGS),
            DECLARE_METHOD(t_OneWayGNSSPhase, getAmbiguityDriver, METH_NOARGS),
            DECLARE_METHOD(t_OneWayGNSSPhase, getWavelength, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSPhase)[] = {
            { Py_tp_methods, t_OneWayGNSSPhase__methods_ },
            { Py_tp_init, (void *) t_OneWayGNSSPhase_init_ },
            { Py_tp_getset, t_OneWayGNSSPhase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSPhase)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSPhase, t_OneWayGNSSPhase, OneWayGNSSPhase);
          PyObject *t_OneWayGNSSPhase::wrap_Object(const OneWayGNSSPhase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhase *self = (t_OneWayGNSSPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSPhase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhase *self = (t_OneWayGNSSPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSPhase::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSPhase), &PY_TYPE_DEF(OneWayGNSSPhase), module, "OneWayGNSSPhase", 0);
          }

          void t_OneWayGNSSPhase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "class_", make_descriptor(OneWayGNSSPhase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "wrapfn_", make_descriptor(t_OneWayGNSSPhase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "boxfn_", make_descriptor(boxObject));
            env->getClass(OneWayGNSSPhase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "AMBIGUITY_NAME", make_descriptor(j2p(*OneWayGNSSPhase::AMBIGUITY_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "MEASUREMENT_TYPE", make_descriptor(j2p(*OneWayGNSSPhase::MEASUREMENT_TYPE)));
          }

          static PyObject *t_OneWayGNSSPhase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSPhase::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSPhase::wrap_Object(OneWayGNSSPhase(((t_OneWayGNSSPhase *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSPhase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSPhase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSPhase_of_(t_OneWayGNSSPhase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_OneWayGNSSPhase_init_(t_OneWayGNSSPhase *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            ::org::orekit::estimation::measurements::ObservableSatellite a7((jobject) NULL);
            OneWayGNSSPhase object((jobject) NULL);

            if (!parseArgs(args, "kDkDDDDk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = OneWayGNSSPhase(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(OneWayGNSSPhase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OneWayGNSSPhase_getAmbiguityDriver(t_OneWayGNSSPhase *self)
          {
            ::org::orekit::utils::ParameterDriver result((jobject) NULL);
            OBJ_CALL(result = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
          }

          static PyObject *t_OneWayGNSSPhase_getWavelength(t_OneWayGNSSPhase *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWavelength());
            return PyFloat_FromDouble((double) result);
          }
          static PyObject *t_OneWayGNSSPhase_get__parameters_(t_OneWayGNSSPhase *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OneWayGNSSPhase_get__ambiguityDriver(t_OneWayGNSSPhase *self, void *data)
          {
            ::org::orekit::utils::ParameterDriver value((jobject) NULL);
            OBJ_CALL(value = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
          }

          static PyObject *t_OneWayGNSSPhase_get__wavelength(t_OneWayGNSSPhase *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getWavelength());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AngularSeparationDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AngularSeparationDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AngularSeparationDetector::class$ = NULL;
        jmethodID *AngularSeparationDetector::mids$ = NULL;
        bool AngularSeparationDetector::live$ = false;

        jclass AngularSeparationDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AngularSeparationDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_186eec647879c1ca] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBeacon_903aca6bb4523e29] = env->getMethodID(cls, "getBeacon", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getObserver_903aca6bb4523e29] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getProximityAngle_dff5885c2c873297] = env->getMethodID(cls, "getProximityAngle", "()D");
            mids$[mid_create_24b8c8ac908a137f] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AngularSeparationDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularSeparationDetector::AngularSeparationDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_186eec647879c1ca, a0.this$, a1.this$, a2)) {}

        jdouble AngularSeparationDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationDetector::getBeacon() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getBeacon_903aca6bb4523e29]));
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationDetector::getObserver() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getObserver_903aca6bb4523e29]));
        }

        jdouble AngularSeparationDetector::getProximityAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProximityAngle_dff5885c2c873297]);
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
        static PyObject *t_AngularSeparationDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationDetector_of_(t_AngularSeparationDetector *self, PyObject *args);
        static int t_AngularSeparationDetector_init_(t_AngularSeparationDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularSeparationDetector_g(t_AngularSeparationDetector *self, PyObject *args);
        static PyObject *t_AngularSeparationDetector_getBeacon(t_AngularSeparationDetector *self);
        static PyObject *t_AngularSeparationDetector_getObserver(t_AngularSeparationDetector *self);
        static PyObject *t_AngularSeparationDetector_getProximityAngle(t_AngularSeparationDetector *self);
        static PyObject *t_AngularSeparationDetector_get__beacon(t_AngularSeparationDetector *self, void *data);
        static PyObject *t_AngularSeparationDetector_get__observer(t_AngularSeparationDetector *self, void *data);
        static PyObject *t_AngularSeparationDetector_get__proximityAngle(t_AngularSeparationDetector *self, void *data);
        static PyObject *t_AngularSeparationDetector_get__parameters_(t_AngularSeparationDetector *self, void *data);
        static PyGetSetDef t_AngularSeparationDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AngularSeparationDetector, beacon),
          DECLARE_GET_FIELD(t_AngularSeparationDetector, observer),
          DECLARE_GET_FIELD(t_AngularSeparationDetector, proximityAngle),
          DECLARE_GET_FIELD(t_AngularSeparationDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularSeparationDetector__methods_[] = {
          DECLARE_METHOD(t_AngularSeparationDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, getBeacon, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, getProximityAngle, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularSeparationDetector)[] = {
          { Py_tp_methods, t_AngularSeparationDetector__methods_ },
          { Py_tp_init, (void *) t_AngularSeparationDetector_init_ },
          { Py_tp_getset, t_AngularSeparationDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularSeparationDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AngularSeparationDetector, t_AngularSeparationDetector, AngularSeparationDetector);
        PyObject *t_AngularSeparationDetector::wrap_Object(const AngularSeparationDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationDetector *self = (t_AngularSeparationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularSeparationDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationDetector *self = (t_AngularSeparationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularSeparationDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularSeparationDetector), &PY_TYPE_DEF(AngularSeparationDetector), module, "AngularSeparationDetector", 0);
        }

        void t_AngularSeparationDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationDetector), "class_", make_descriptor(AngularSeparationDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationDetector), "wrapfn_", make_descriptor(t_AngularSeparationDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AngularSeparationDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularSeparationDetector::initializeClass, 1)))
            return NULL;
          return t_AngularSeparationDetector::wrap_Object(AngularSeparationDetector(((t_AngularSeparationDetector *) arg)->object.this$));
        }
        static PyObject *t_AngularSeparationDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularSeparationDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularSeparationDetector_of_(t_AngularSeparationDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularSeparationDetector_init_(t_AngularSeparationDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          jdouble a2;
          AngularSeparationDetector object((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = AngularSeparationDetector(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AngularSeparationDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularSeparationDetector_g(t_AngularSeparationDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AngularSeparationDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AngularSeparationDetector_getBeacon(t_AngularSeparationDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getBeacon());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AngularSeparationDetector_getObserver(t_AngularSeparationDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AngularSeparationDetector_getProximityAngle(t_AngularSeparationDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_AngularSeparationDetector_get__parameters_(t_AngularSeparationDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AngularSeparationDetector_get__beacon(t_AngularSeparationDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getBeacon());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_AngularSeparationDetector_get__observer(t_AngularSeparationDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_AngularSeparationDetector_get__proximityAngle(t_AngularSeparationDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonStaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonStaticTransform::class$ = NULL;
      jmethodID *PythonStaticTransform::mids$ = NULL;
      bool PythonStaticTransform::live$ = false;

      jclass PythonStaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonStaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getInverse_892837e768e813bc] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getRotation_de86c7efc42eac14] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getTranslation_d52645e0d4c07563] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStaticTransform::PythonStaticTransform() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonStaticTransform::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonStaticTransform::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonStaticTransform::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonStaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStaticTransform_init_(t_PythonStaticTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStaticTransform_finalize(t_PythonStaticTransform *self);
      static PyObject *t_PythonStaticTransform_pythonExtension(t_PythonStaticTransform *self, PyObject *args);
      static jobject JNICALL t_PythonStaticTransform_getDate0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonStaticTransform_get__self(t_PythonStaticTransform *self, void *data);
      static PyGetSetDef t_PythonStaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStaticTransform, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStaticTransform__methods_[] = {
        DECLARE_METHOD(t_PythonStaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStaticTransform, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStaticTransform, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStaticTransform)[] = {
        { Py_tp_methods, t_PythonStaticTransform__methods_ },
        { Py_tp_init, (void *) t_PythonStaticTransform_init_ },
        { Py_tp_getset, t_PythonStaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStaticTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStaticTransform, t_PythonStaticTransform, PythonStaticTransform);

      void t_PythonStaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStaticTransform), &PY_TYPE_DEF(PythonStaticTransform), module, "PythonStaticTransform", 1);
      }

      void t_PythonStaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStaticTransform), "class_", make_descriptor(PythonStaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStaticTransform), "wrapfn_", make_descriptor(t_PythonStaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStaticTransform), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStaticTransform::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonStaticTransform_getDate0 },
          { "getInverse", "()Lorg/orekit/frames/StaticTransform;", (void *) t_PythonStaticTransform_getInverse1 },
          { "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonStaticTransform_getRotation2 },
          { "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonStaticTransform_getTranslation3 },
          { "pythonDecRef", "()V", (void *) t_PythonStaticTransform_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonStaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStaticTransform::initializeClass, 1)))
          return NULL;
        return t_PythonStaticTransform::wrap_Object(PythonStaticTransform(((t_PythonStaticTransform *) arg)->object.this$));
      }
      static PyObject *t_PythonStaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStaticTransform_init_(t_PythonStaticTransform *self, PyObject *args, PyObject *kwds)
      {
        PythonStaticTransform object((jobject) NULL);

        INT_CALL(object = PythonStaticTransform());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStaticTransform_finalize(t_PythonStaticTransform *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStaticTransform_pythonExtension(t_PythonStaticTransform *self, PyObject *args)
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

      static jobject JNICALL t_PythonStaticTransform_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::StaticTransform value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInverse", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::StaticTransform::initializeClass, &value))
        {
          throwTypeError("getInverse", result);
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

      static jobject JNICALL t_PythonStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getRotation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
        {
          throwTypeError("getRotation", result);
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

      static jobject JNICALL t_PythonStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTranslation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("getTranslation", result);
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

      static void JNICALL t_PythonStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonStaticTransform_get__self(t_PythonStaticTransform *self, void *data)
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
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *ParseException::class$ = NULL;
    jmethodID *ParseException::mids$ = NULL;
    bool ParseException::live$ = false;

    jclass ParseException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/ParseException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e227023543046618] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;I)V");
        mids$[mid_getErrorOffset_570ce0828f81a2c1] = env->getMethodID(cls, "getErrorOffset", "()I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ParseException::ParseException(const ::java::lang::String & a0, jint a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_e227023543046618, a0.this$, a1)) {}

    jint ParseException::getErrorOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getErrorOffset_570ce0828f81a2c1]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_ParseException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ParseException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ParseException_init_(t_ParseException *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ParseException_getErrorOffset(t_ParseException *self);
    static PyObject *t_ParseException_get__errorOffset(t_ParseException *self, void *data);
    static PyGetSetDef t_ParseException__fields_[] = {
      DECLARE_GET_FIELD(t_ParseException, errorOffset),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ParseException__methods_[] = {
      DECLARE_METHOD(t_ParseException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParseException, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParseException, getErrorOffset, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ParseException)[] = {
      { Py_tp_methods, t_ParseException__methods_ },
      { Py_tp_init, (void *) t_ParseException_init_ },
      { Py_tp_getset, t_ParseException__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ParseException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(ParseException, t_ParseException, ParseException);

    void t_ParseException::install(PyObject *module)
    {
      installType(&PY_TYPE(ParseException), &PY_TYPE_DEF(ParseException), module, "ParseException", 0);
    }

    void t_ParseException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParseException), "class_", make_descriptor(ParseException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParseException), "wrapfn_", make_descriptor(t_ParseException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParseException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ParseException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ParseException::initializeClass, 1)))
        return NULL;
      return t_ParseException::wrap_Object(ParseException(((t_ParseException *) arg)->object.this$));
    }
    static PyObject *t_ParseException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ParseException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ParseException_init_(t_ParseException *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      jint a1;
      ParseException object((jobject) NULL);

      if (!parseArgs(args, "sI", &a0, &a1))
      {
        INT_CALL(object = ParseException(a0, a1));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ParseException_getErrorOffset(t_ParseException *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getErrorOffset());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ParseException_get__errorOffset(t_ParseException *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getErrorOffset());
      return PyLong_FromLong((long) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceHistory::class$ = NULL;
              jmethodID *AttitudeCovarianceHistory::mids$ = NULL;
              bool AttitudeCovarianceHistory::live$ = false;

              jclass AttitudeCovarianceHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_62ade5292ab38bb4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getCovariances_2afa36052df4765d] = env->getMethodID(cls, "getCovariances", "()Ljava/util/List;");
                  mids$[mid_getMetadata_99cc4dcf1f1291d2] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeCovarianceHistory::AttitudeCovarianceHistory(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_62ade5292ab38bb4, a0.this$, a1.this$)) {}

              ::java::util::List AttitudeCovarianceHistory::getCovariances() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovariances_2afa36052df4765d]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata AttitudeCovarianceHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_99cc4dcf1f1291d2]));
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
              static PyObject *t_AttitudeCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeCovarianceHistory_init_(t_AttitudeCovarianceHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeCovarianceHistory_getCovariances(t_AttitudeCovarianceHistory *self);
              static PyObject *t_AttitudeCovarianceHistory_getMetadata(t_AttitudeCovarianceHistory *self);
              static PyObject *t_AttitudeCovarianceHistory_get__covariances(t_AttitudeCovarianceHistory *self, void *data);
              static PyObject *t_AttitudeCovarianceHistory_get__metadata(t_AttitudeCovarianceHistory *self, void *data);
              static PyGetSetDef t_AttitudeCovarianceHistory__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovarianceHistory, covariances),
                DECLARE_GET_FIELD(t_AttitudeCovarianceHistory, metadata),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceHistory__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistory, getCovariances, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistory, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceHistory)[] = {
                { Py_tp_methods, t_AttitudeCovarianceHistory__methods_ },
                { Py_tp_init, (void *) t_AttitudeCovarianceHistory_init_ },
                { Py_tp_getset, t_AttitudeCovarianceHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceHistory, t_AttitudeCovarianceHistory, AttitudeCovarianceHistory);

              void t_AttitudeCovarianceHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceHistory), &PY_TYPE_DEF(AttitudeCovarianceHistory), module, "AttitudeCovarianceHistory", 0);
              }

              void t_AttitudeCovarianceHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistory), "class_", make_descriptor(AttitudeCovarianceHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistory), "wrapfn_", make_descriptor(t_AttitudeCovarianceHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceHistory::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceHistory::wrap_Object(AttitudeCovarianceHistory(((t_AttitudeCovarianceHistory *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeCovarianceHistory_init_(t_AttitudeCovarianceHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AttitudeCovarianceHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AttitudeCovarianceHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeCovarianceHistory_getCovariances(t_AttitudeCovarianceHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeCovariance));
              }

              static PyObject *t_AttitudeCovarianceHistory_getMetadata(t_AttitudeCovarianceHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovarianceHistory_get__covariances(t_AttitudeCovarianceHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeCovarianceHistory_get__metadata(t_AttitudeCovarianceHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceHistoryMetadata::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
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
                  mids$[mid_valueOf_c55b9c8df598dae5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;");
                  mids$[mid_values_d7383d858ca1d758] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;");

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
                return AttitudeEntryKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c55b9c8df598dae5], a0.this$));
              }

              JArray< AttitudeEntryKey > AttitudeEntryKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeEntryKey >(env->callStaticObjectMethod(cls, mids$[mid_values_d7383d858ca1d758]));
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
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
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
                mids$[mid_getAngularVelocity_dff5885c2c873297] = env->getMethodID(cls, "getAngularVelocity", "()D");
                mids$[mid_getCic_dff5885c2c873297] = env->getMethodID(cls, "getCic", "()D");
                mids$[mid_getCis_dff5885c2c873297] = env->getMethodID(cls, "getCis", "()D");
                mids$[mid_getCrc_dff5885c2c873297] = env->getMethodID(cls, "getCrc", "()D");
                mids$[mid_getCrs_dff5885c2c873297] = env->getMethodID(cls, "getCrs", "()D");
                mids$[mid_getCuc_dff5885c2c873297] = env->getMethodID(cls, "getCuc", "()D");
                mids$[mid_getCus_dff5885c2c873297] = env->getMethodID(cls, "getCus", "()D");
                mids$[mid_getCycleDuration_dff5885c2c873297] = env->getMethodID(cls, "getCycleDuration", "()D");
                mids$[mid_getE_dff5885c2c873297] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getI0_dff5885c2c873297] = env->getMethodID(cls, "getI0", "()D");
                mids$[mid_getIDot_dff5885c2c873297] = env->getMethodID(cls, "getIDot", "()D");
                mids$[mid_getM0_dff5885c2c873297] = env->getMethodID(cls, "getM0", "()D");
                mids$[mid_getMeanMotion_dff5885c2c873297] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getOmega0_dff5885c2c873297] = env->getMethodID(cls, "getOmega0", "()D");
                mids$[mid_getOmegaDot_dff5885c2c873297] = env->getMethodID(cls, "getOmegaDot", "()D");
                mids$[mid_getPRN_570ce0828f81a2c1] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getPa_dff5885c2c873297] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getPropagator_6d7baa04e9d5997e] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
                mids$[mid_getPropagator_1f6ce194c3ea0981] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
                mids$[mid_getPropagator_c9b0be5ff079ea0a] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;D)Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
                mids$[mid_getSma_dff5885c2c873297] = env->getMethodID(cls, "getSma", "()D");
                mids$[mid_getTime_dff5885c2c873297] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getWeek_570ce0828f81a2c1] = env->getMethodID(cls, "getWeek", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble GNSSOrbitalElements::getAngularVelocity() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAngularVelocity_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getCic() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCic_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getCis() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCis_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getCrc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrc_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getCrs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrs_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getCuc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCuc_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getCus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCus_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getCycleDuration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCycleDuration_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getI0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getI0_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getIDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIDot_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getM0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM0_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getOmega0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmega0_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getOmegaDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_dff5885c2c873297]);
            }

            jint GNSSOrbitalElements::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_570ce0828f81a2c1]);
            }

            jdouble GNSSOrbitalElements::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_dff5885c2c873297]);
            }

            ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSOrbitalElements::getPropagator() const
            {
              return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_6d7baa04e9d5997e]));
            }

            ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSOrbitalElements::getPropagator(const ::org::orekit::frames::Frames & a0) const
            {
              return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_1f6ce194c3ea0981], a0.this$));
            }

            ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSOrbitalElements::getPropagator(const ::org::orekit::frames::Frames & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, jdouble a4) const
            {
              return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_c9b0be5ff079ea0a], a0.this$, a1.this$, a2.this$, a3.this$, a4));
            }

            jdouble GNSSOrbitalElements::getSma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSma_dff5885c2c873297]);
            }

            jdouble GNSSOrbitalElements::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_dff5885c2c873297]);
            }

            jint GNSSOrbitalElements::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_570ce0828f81a2c1]);
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
#include "org/orekit/propagation/events/handlers/FieldStopOnIncreasing.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
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
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_fc49a7ff6cb062a2] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldStopOnIncreasing::FieldStopOnIncreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::hipparchus::ode::events::Action FieldStopOnIncreasing::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_fc49a7ff6cb062a2], a0.this$, a1.this$, a2));
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
#include "org/hipparchus/geometry/euclidean/threed/SphericalCoordinates.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SphericalCoordinates::class$ = NULL;
          jmethodID *SphericalCoordinates::mids$ = NULL;
          bool SphericalCoordinates::live$ = false;

          jclass SphericalCoordinates::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SphericalCoordinates");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_029ff0cbf68ea054] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getCartesian_d52645e0d4c07563] = env->getMethodID(cls, "getCartesian", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getPhi_dff5885c2c873297] = env->getMethodID(cls, "getPhi", "()D");
              mids$[mid_getR_dff5885c2c873297] = env->getMethodID(cls, "getR", "()D");
              mids$[mid_getTheta_dff5885c2c873297] = env->getMethodID(cls, "getTheta", "()D");
              mids$[mid_toCartesianGradient_ac3d742ccc742f22] = env->getMethodID(cls, "toCartesianGradient", "([D)[D");
              mids$[mid_toCartesianHessian_81ab62e515fe2068] = env->getMethodID(cls, "toCartesianHessian", "([[D[D)[[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SphericalCoordinates::SphericalCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_029ff0cbf68ea054, a0.this$)) {}

          SphericalCoordinates::SphericalCoordinates(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D SphericalCoordinates::getCartesian() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCartesian_d52645e0d4c07563]));
          }

          jdouble SphericalCoordinates::getPhi() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhi_dff5885c2c873297]);
          }

          jdouble SphericalCoordinates::getR() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getR_dff5885c2c873297]);
          }

          jdouble SphericalCoordinates::getTheta() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTheta_dff5885c2c873297]);
          }

          JArray< jdouble > SphericalCoordinates::toCartesianGradient(const JArray< jdouble > & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toCartesianGradient_ac3d742ccc742f22], a0.this$));
          }

          JArray< JArray< jdouble > > SphericalCoordinates::toCartesianHessian(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
          {
            return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_toCartesianHessian_81ab62e515fe2068], a0.this$, a1.this$));
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
          static PyObject *t_SphericalCoordinates_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalCoordinates_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SphericalCoordinates_init_(t_SphericalCoordinates *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SphericalCoordinates_getCartesian(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_getPhi(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_getR(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_getTheta(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_toCartesianGradient(t_SphericalCoordinates *self, PyObject *arg);
          static PyObject *t_SphericalCoordinates_toCartesianHessian(t_SphericalCoordinates *self, PyObject *args);
          static PyObject *t_SphericalCoordinates_get__cartesian(t_SphericalCoordinates *self, void *data);
          static PyObject *t_SphericalCoordinates_get__phi(t_SphericalCoordinates *self, void *data);
          static PyObject *t_SphericalCoordinates_get__r(t_SphericalCoordinates *self, void *data);
          static PyObject *t_SphericalCoordinates_get__theta(t_SphericalCoordinates *self, void *data);
          static PyGetSetDef t_SphericalCoordinates__fields_[] = {
            DECLARE_GET_FIELD(t_SphericalCoordinates, cartesian),
            DECLARE_GET_FIELD(t_SphericalCoordinates, phi),
            DECLARE_GET_FIELD(t_SphericalCoordinates, r),
            DECLARE_GET_FIELD(t_SphericalCoordinates, theta),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SphericalCoordinates__methods_[] = {
            DECLARE_METHOD(t_SphericalCoordinates, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalCoordinates, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalCoordinates, getCartesian, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, getPhi, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, getR, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, getTheta, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, toCartesianGradient, METH_O),
            DECLARE_METHOD(t_SphericalCoordinates, toCartesianHessian, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphericalCoordinates)[] = {
            { Py_tp_methods, t_SphericalCoordinates__methods_ },
            { Py_tp_init, (void *) t_SphericalCoordinates_init_ },
            { Py_tp_getset, t_SphericalCoordinates__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphericalCoordinates)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SphericalCoordinates, t_SphericalCoordinates, SphericalCoordinates);

          void t_SphericalCoordinates::install(PyObject *module)
          {
            installType(&PY_TYPE(SphericalCoordinates), &PY_TYPE_DEF(SphericalCoordinates), module, "SphericalCoordinates", 0);
          }

          void t_SphericalCoordinates::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalCoordinates), "class_", make_descriptor(SphericalCoordinates::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalCoordinates), "wrapfn_", make_descriptor(t_SphericalCoordinates::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalCoordinates), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphericalCoordinates_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphericalCoordinates::initializeClass, 1)))
              return NULL;
            return t_SphericalCoordinates::wrap_Object(SphericalCoordinates(((t_SphericalCoordinates *) arg)->object.this$));
          }
          static PyObject *t_SphericalCoordinates_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphericalCoordinates::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SphericalCoordinates_init_(t_SphericalCoordinates *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                SphericalCoordinates object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  INT_CALL(object = SphericalCoordinates(a0));
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
                SphericalCoordinates object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = SphericalCoordinates(a0, a1, a2));
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

          static PyObject *t_SphericalCoordinates_getCartesian(t_SphericalCoordinates *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getCartesian());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_SphericalCoordinates_getPhi(t_SphericalCoordinates *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPhi());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalCoordinates_getR(t_SphericalCoordinates *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getR());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalCoordinates_getTheta(t_SphericalCoordinates *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTheta());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalCoordinates_toCartesianGradient(t_SphericalCoordinates *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.toCartesianGradient(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "toCartesianGradient", arg);
            return NULL;
          }

          static PyObject *t_SphericalCoordinates_toCartesianHessian(t_SphericalCoordinates *self, PyObject *args)
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< JArray< jdouble > > result((jobject) NULL);

            if (!parseArgs(args, "[[D[D", &a0, &a1))
            {
              OBJ_CALL(result = self->object.toCartesianHessian(a0, a1));
              return JArray<jobject>(result.this$).wrap(NULL);
            }

            PyErr_SetArgsError((PyObject *) self, "toCartesianHessian", args);
            return NULL;
          }

          static PyObject *t_SphericalCoordinates_get__cartesian(t_SphericalCoordinates *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getCartesian());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_SphericalCoordinates_get__phi(t_SphericalCoordinates *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPhi());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalCoordinates_get__r(t_SphericalCoordinates *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getR());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalCoordinates_get__theta(t_SphericalCoordinates *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTheta());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationUtil.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *TleGenerationUtil::class$ = NULL;
            jmethodID *TleGenerationUtil::mids$ = NULL;
            bool TleGenerationUtil::live$ = false;

            jclass TleGenerationUtil::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/TleGenerationUtil");

                mids$ = new jmethodID[max_mid];
                mids$[mid_newTLE_6a02b71c2722d4c9] = env->getStaticMethodID(cls, "newTLE", "(Lorg/orekit/orbits/FieldKeplerianOrbit;Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_newTLE_90f440e2043552fb] = env->getStaticMethodID(cls, "newTLE", "(Lorg/orekit/orbits/KeplerianOrbit;Lorg/orekit/propagation/analytical/tle/TLE;DLorg/orekit/time/TimeScale;)Lorg/orekit/propagation/analytical/tle/TLE;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::analytical::tle::FieldTLE TleGenerationUtil::newTLE(const ::org::orekit::orbits::FieldKeplerianOrbit & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::time::TimeScale & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callStaticObjectMethod(cls, mids$[mid_newTLE_6a02b71c2722d4c9], a0.this$, a1.this$, a2.this$, a3.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE TleGenerationUtil::newTLE(const ::org::orekit::orbits::KeplerianOrbit & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1, jdouble a2, const ::org::orekit::time::TimeScale & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::orekit::propagation::analytical::tle::TLE(env->callStaticObjectMethod(cls, mids$[mid_newTLE_90f440e2043552fb], a0.this$, a1.this$, a2, a3.this$));
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
        namespace tle {
          namespace generation {
            static PyObject *t_TleGenerationUtil_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationUtil_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationUtil_newTLE(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_TleGenerationUtil__methods_[] = {
              DECLARE_METHOD(t_TleGenerationUtil, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationUtil, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationUtil, newTLE, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TleGenerationUtil)[] = {
              { Py_tp_methods, t_TleGenerationUtil__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TleGenerationUtil)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(TleGenerationUtil, t_TleGenerationUtil, TleGenerationUtil);

            void t_TleGenerationUtil::install(PyObject *module)
            {
              installType(&PY_TYPE(TleGenerationUtil), &PY_TYPE_DEF(TleGenerationUtil), module, "TleGenerationUtil", 0);
            }

            void t_TleGenerationUtil::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationUtil), "class_", make_descriptor(TleGenerationUtil::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationUtil), "wrapfn_", make_descriptor(t_TleGenerationUtil::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationUtil), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TleGenerationUtil_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TleGenerationUtil::initializeClass, 1)))
                return NULL;
              return t_TleGenerationUtil::wrap_Object(TleGenerationUtil(((t_TleGenerationUtil *) arg)->object.this$));
            }
            static PyObject *t_TleGenerationUtil_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TleGenerationUtil::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TleGenerationUtil_newTLE(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  ::org::orekit::orbits::KeplerianOrbit a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  jdouble a2;
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kkDk", ::org::orekit::orbits::KeplerianOrbit::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::generation::TleGenerationUtil::newTLE(a0, a1, a2, a3));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::orbits::FieldKeplerianOrbit a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KKKk", ::org::orekit::orbits::FieldKeplerianOrbit::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldKeplerianOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::generation::TleGenerationUtil::newTLE(a0, a1, a2, a3));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "newTLE", args);
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
#include "org/hipparchus/optim/linear/Relationship.h"
#include "java/lang/String.h"
#include "org/hipparchus/optim/linear/Relationship.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *Relationship::class$ = NULL;
        jmethodID *Relationship::mids$ = NULL;
        bool Relationship::live$ = false;
        Relationship *Relationship::EQ = NULL;
        Relationship *Relationship::GEQ = NULL;
        Relationship *Relationship::LEQ = NULL;

        jclass Relationship::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/Relationship");

            mids$ = new jmethodID[max_mid];
            mids$[mid_oppositeRelationship_90960c2c386c2df2] = env->getMethodID(cls, "oppositeRelationship", "()Lorg/hipparchus/optim/linear/Relationship;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
            mids$[mid_valueOf_e841a6f998c6076a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/linear/Relationship;");
            mids$[mid_values_4058d8b914f76def] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/linear/Relationship;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EQ = new Relationship(env->getStaticObjectField(cls, "EQ", "Lorg/hipparchus/optim/linear/Relationship;"));
            GEQ = new Relationship(env->getStaticObjectField(cls, "GEQ", "Lorg/hipparchus/optim/linear/Relationship;"));
            LEQ = new Relationship(env->getStaticObjectField(cls, "LEQ", "Lorg/hipparchus/optim/linear/Relationship;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Relationship Relationship::oppositeRelationship() const
        {
          return Relationship(env->callObjectMethod(this$, mids$[mid_oppositeRelationship_90960c2c386c2df2]));
        }

        ::java::lang::String Relationship::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
        }

        Relationship Relationship::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Relationship(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e841a6f998c6076a], a0.this$));
        }

        JArray< Relationship > Relationship::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Relationship >(env->callStaticObjectMethod(cls, mids$[mid_values_4058d8b914f76def]));
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
      namespace linear {
        static PyObject *t_Relationship_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Relationship_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Relationship_of_(t_Relationship *self, PyObject *args);
        static PyObject *t_Relationship_oppositeRelationship(t_Relationship *self);
        static PyObject *t_Relationship_toString(t_Relationship *self, PyObject *args);
        static PyObject *t_Relationship_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Relationship_values(PyTypeObject *type);
        static PyObject *t_Relationship_get__parameters_(t_Relationship *self, void *data);
        static PyGetSetDef t_Relationship__fields_[] = {
          DECLARE_GET_FIELD(t_Relationship, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Relationship__methods_[] = {
          DECLARE_METHOD(t_Relationship, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relationship, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relationship, of_, METH_VARARGS),
          DECLARE_METHOD(t_Relationship, oppositeRelationship, METH_NOARGS),
          DECLARE_METHOD(t_Relationship, toString, METH_VARARGS),
          DECLARE_METHOD(t_Relationship, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Relationship, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Relationship)[] = {
          { Py_tp_methods, t_Relationship__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Relationship__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Relationship)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Relationship, t_Relationship, Relationship);
        PyObject *t_Relationship::wrap_Object(const Relationship& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Relationship::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Relationship *self = (t_Relationship *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Relationship::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Relationship::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Relationship *self = (t_Relationship *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Relationship::install(PyObject *module)
        {
          installType(&PY_TYPE(Relationship), &PY_TYPE_DEF(Relationship), module, "Relationship", 0);
        }

        void t_Relationship::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "class_", make_descriptor(Relationship::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "wrapfn_", make_descriptor(t_Relationship::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "boxfn_", make_descriptor(boxObject));
          env->getClass(Relationship::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "EQ", make_descriptor(t_Relationship::wrap_Object(*Relationship::EQ)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "GEQ", make_descriptor(t_Relationship::wrap_Object(*Relationship::GEQ)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "LEQ", make_descriptor(t_Relationship::wrap_Object(*Relationship::LEQ)));
        }

        static PyObject *t_Relationship_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Relationship::initializeClass, 1)))
            return NULL;
          return t_Relationship::wrap_Object(Relationship(((t_Relationship *) arg)->object.this$));
        }
        static PyObject *t_Relationship_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Relationship::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Relationship_of_(t_Relationship *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Relationship_oppositeRelationship(t_Relationship *self)
        {
          Relationship result((jobject) NULL);
          OBJ_CALL(result = self->object.oppositeRelationship());
          return t_Relationship::wrap_Object(result);
        }

        static PyObject *t_Relationship_toString(t_Relationship *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(Relationship), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_Relationship_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Relationship result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::optim::linear::Relationship::valueOf(a0));
            return t_Relationship::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Relationship_values(PyTypeObject *type)
        {
          JArray< Relationship > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::optim::linear::Relationship::values());
          return JArray<jobject>(result.this$).wrap(t_Relationship::wrap_jobject);
        }
        static PyObject *t_Relationship_get__parameters_(t_Relationship *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *SpacecraftParametersWriter::class$ = NULL;
            jmethodID *SpacecraftParametersWriter::mids$ = NULL;
            bool SpacecraftParametersWriter::live$ = false;

            jclass SpacecraftParametersWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/SpacecraftParametersWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_1c2d99aab8d4d96b] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;)V");
                mids$[mid_writeContent_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SpacecraftParametersWriter::SpacecraftParametersWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a2) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_1c2d99aab8d4d96b, a0.this$, a1.this$, a2.this$)) {}
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
            static PyObject *t_SpacecraftParametersWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParametersWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SpacecraftParametersWriter_init_(t_SpacecraftParametersWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_SpacecraftParametersWriter__methods_[] = {
              DECLARE_METHOD(t_SpacecraftParametersWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SpacecraftParametersWriter)[] = {
              { Py_tp_methods, t_SpacecraftParametersWriter__methods_ },
              { Py_tp_init, (void *) t_SpacecraftParametersWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SpacecraftParametersWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(SpacecraftParametersWriter, t_SpacecraftParametersWriter, SpacecraftParametersWriter);

            void t_SpacecraftParametersWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(SpacecraftParametersWriter), &PY_TYPE_DEF(SpacecraftParametersWriter), module, "SpacecraftParametersWriter", 0);
            }

            void t_SpacecraftParametersWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersWriter), "class_", make_descriptor(SpacecraftParametersWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersWriter), "wrapfn_", make_descriptor(t_SpacecraftParametersWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SpacecraftParametersWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SpacecraftParametersWriter::initializeClass, 1)))
                return NULL;
              return t_SpacecraftParametersWriter::wrap_Object(SpacecraftParametersWriter(((t_SpacecraftParametersWriter *) arg)->object.this$));
            }
            static PyObject *t_SpacecraftParametersWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SpacecraftParametersWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SpacecraftParametersWriter_init_(t_SpacecraftParametersWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a2((jobject) NULL);
              SpacecraftParametersWriter object((jobject) NULL);

              if (!parseArgs(args, "ssk", ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SpacecraftParametersWriter(a0, a1, a2));
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
#include "org/orekit/data/FundamentalNutationArguments.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FundamentalNutationArguments::class$ = NULL;
      jmethodID *FundamentalNutationArguments::mids$ = NULL;
      bool FundamentalNutationArguments::live$ = false;

      jclass FundamentalNutationArguments::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FundamentalNutationArguments");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6be915333cfac2fc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/util/List;)V");
          mids$[mid_init$_34b40839a1481ffd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_init$_0690ab0f15e6cf3f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/util/List;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_init$_1cb3f8250f029147] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/io/InputStream;Ljava/lang/String;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_evaluateAll_697ddc758d45542c] = env->getMethodID(cls, "evaluateAll", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/data/BodiesElements;");
          mids$[mid_evaluateAll_c625c7afc26b358d] = env->getMethodID(cls, "evaluateAll", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/data/FieldBodiesElements;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6be915333cfac2fc, a0.this$, a1.this$, a2.this$)) {}

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::io::InputStream & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_34b40839a1481ffd, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeScales & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0690ab0f15e6cf3f, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::io::InputStream & a2, const ::java::lang::String & a3, const ::org::orekit::time::TimeScales & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1cb3f8250f029147, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::data::BodiesElements FundamentalNutationArguments::evaluateAll(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::data::BodiesElements(env->callObjectMethod(this$, mids$[mid_evaluateAll_697ddc758d45542c], a0.this$));
      }

      ::org::orekit::data::FieldBodiesElements FundamentalNutationArguments::evaluateAll(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::data::FieldBodiesElements(env->callObjectMethod(this$, mids$[mid_evaluateAll_c625c7afc26b358d], a0.this$));
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
      static PyObject *t_FundamentalNutationArguments_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FundamentalNutationArguments_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FundamentalNutationArguments_init_(t_FundamentalNutationArguments *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FundamentalNutationArguments_evaluateAll(t_FundamentalNutationArguments *self, PyObject *args);

      static PyMethodDef t_FundamentalNutationArguments__methods_[] = {
        DECLARE_METHOD(t_FundamentalNutationArguments, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FundamentalNutationArguments, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FundamentalNutationArguments, evaluateAll, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FundamentalNutationArguments)[] = {
        { Py_tp_methods, t_FundamentalNutationArguments__methods_ },
        { Py_tp_init, (void *) t_FundamentalNutationArguments_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FundamentalNutationArguments)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FundamentalNutationArguments, t_FundamentalNutationArguments, FundamentalNutationArguments);

      void t_FundamentalNutationArguments::install(PyObject *module)
      {
        installType(&PY_TYPE(FundamentalNutationArguments), &PY_TYPE_DEF(FundamentalNutationArguments), module, "FundamentalNutationArguments", 0);
      }

      void t_FundamentalNutationArguments::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FundamentalNutationArguments), "class_", make_descriptor(FundamentalNutationArguments::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FundamentalNutationArguments), "wrapfn_", make_descriptor(t_FundamentalNutationArguments::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FundamentalNutationArguments), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FundamentalNutationArguments_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FundamentalNutationArguments::initializeClass, 1)))
          return NULL;
        return t_FundamentalNutationArguments::wrap_Object(FundamentalNutationArguments(((t_FundamentalNutationArguments *) arg)->object.this$));
      }
      static PyObject *t_FundamentalNutationArguments_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FundamentalNutationArguments::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FundamentalNutationArguments_init_(t_FundamentalNutationArguments *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::io::InputStream a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "Kkks", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::io::InputStream::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::TimeScales a3((jobject) NULL);
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "KkKk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::io::InputStream a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::org::orekit::time::TimeScales a4((jobject) NULL);
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "Kkksk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::io::InputStream::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2, a3, a4));
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

      static PyObject *t_FundamentalNutationArguments_evaluateAll(t_FundamentalNutationArguments *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::data::BodiesElements result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.evaluateAll(a0));
              return ::org::orekit::data::t_BodiesElements::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::data::FieldBodiesElements result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.evaluateAll(a0));
              return ::org::orekit::data::t_FieldBodiesElements::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluateAll", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {

      ::java::lang::Class *AtmosphericRefractionModel::class$ = NULL;
      jmethodID *AtmosphericRefractionModel::mids$ = NULL;
      bool AtmosphericRefractionModel::live$ = false;

      jclass AtmosphericRefractionModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/models/AtmosphericRefractionModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getRefraction_dcbc7ce2902fa136] = env->getMethodID(cls, "getRefraction", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble AtmosphericRefractionModel::getRefraction(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRefraction_dcbc7ce2902fa136], a0);
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
      static PyObject *t_AtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AtmosphericRefractionModel_getRefraction(t_AtmosphericRefractionModel *self, PyObject *arg);

      static PyMethodDef t_AtmosphericRefractionModel__methods_[] = {
        DECLARE_METHOD(t_AtmosphericRefractionModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AtmosphericRefractionModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AtmosphericRefractionModel, getRefraction, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AtmosphericRefractionModel)[] = {
        { Py_tp_methods, t_AtmosphericRefractionModel__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AtmosphericRefractionModel)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(AtmosphericRefractionModel, t_AtmosphericRefractionModel, AtmosphericRefractionModel);

      void t_AtmosphericRefractionModel::install(PyObject *module)
      {
        installType(&PY_TYPE(AtmosphericRefractionModel), &PY_TYPE_DEF(AtmosphericRefractionModel), module, "AtmosphericRefractionModel", 0);
      }

      void t_AtmosphericRefractionModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefractionModel), "class_", make_descriptor(AtmosphericRefractionModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefractionModel), "wrapfn_", make_descriptor(t_AtmosphericRefractionModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefractionModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AtmosphericRefractionModel::initializeClass, 1)))
          return NULL;
        return t_AtmosphericRefractionModel::wrap_Object(AtmosphericRefractionModel(((t_AtmosphericRefractionModel *) arg)->object.this$));
      }
      static PyObject *t_AtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AtmosphericRefractionModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AtmosphericRefractionModel_getRefraction(t_AtmosphericRefractionModel *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getRefraction(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRefraction", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonMultiSatStepHandler.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonMultiSatStepHandler::class$ = NULL;
        jmethodID *PythonMultiSatStepHandler::mids$ = NULL;
        bool PythonMultiSatStepHandler::live$ = false;

        jclass PythonMultiSatStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonMultiSatStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_de3e021e7266b71e] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_de3e021e7266b71e] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_741f4d97cd6d356c] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonMultiSatStepHandler::PythonMultiSatStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonMultiSatStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonMultiSatStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonMultiSatStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonMultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonMultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonMultiSatStepHandler_init_(t_PythonMultiSatStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonMultiSatStepHandler_finalize(t_PythonMultiSatStepHandler *self);
        static PyObject *t_PythonMultiSatStepHandler_pythonExtension(t_PythonMultiSatStepHandler *self, PyObject *args);
        static void JNICALL t_PythonMultiSatStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonMultiSatStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonMultiSatStepHandler_get__self(t_PythonMultiSatStepHandler *self, void *data);
        static PyGetSetDef t_PythonMultiSatStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonMultiSatStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonMultiSatStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonMultiSatStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonMultiSatStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonMultiSatStepHandler)[] = {
          { Py_tp_methods, t_PythonMultiSatStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonMultiSatStepHandler_init_ },
          { Py_tp_getset, t_PythonMultiSatStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonMultiSatStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonMultiSatStepHandler, t_PythonMultiSatStepHandler, PythonMultiSatStepHandler);

        void t_PythonMultiSatStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonMultiSatStepHandler), &PY_TYPE_DEF(PythonMultiSatStepHandler), module, "PythonMultiSatStepHandler", 1);
        }

        void t_PythonMultiSatStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatStepHandler), "class_", make_descriptor(PythonMultiSatStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatStepHandler), "wrapfn_", make_descriptor(t_PythonMultiSatStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonMultiSatStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Ljava/util/List;)V", (void *) t_PythonMultiSatStepHandler_finish0 },
            { "handleStep", "(Ljava/util/List;)V", (void *) t_PythonMultiSatStepHandler_handleStep1 },
            { "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonMultiSatStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonMultiSatStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonMultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonMultiSatStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonMultiSatStepHandler::wrap_Object(PythonMultiSatStepHandler(((t_PythonMultiSatStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonMultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonMultiSatStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonMultiSatStepHandler_init_(t_PythonMultiSatStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonMultiSatStepHandler object((jobject) NULL);

          INT_CALL(object = PythonMultiSatStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonMultiSatStepHandler_finalize(t_PythonMultiSatStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonMultiSatStepHandler_pythonExtension(t_PythonMultiSatStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonMultiSatStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonMultiSatStepHandler_get__self(t_PythonMultiSatStepHandler *self, void *data)
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
#include "org/hipparchus/analysis/function/Gaussian$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Gaussian$Parametric::class$ = NULL;
        jmethodID *Gaussian$Parametric::mids$ = NULL;
        bool Gaussian$Parametric::live$ = false;

        jclass Gaussian$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Gaussian$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_125ce48de7dbfde5] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_19285de97bbc7eea] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Gaussian$Parametric::Gaussian$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        JArray< jdouble > Gaussian$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_125ce48de7dbfde5], a0, a1.this$));
        }

        jdouble Gaussian$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_19285de97bbc7eea], a0, a1.this$);
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
        static PyObject *t_Gaussian$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Gaussian$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Gaussian$Parametric_init_(t_Gaussian$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Gaussian$Parametric_gradient(t_Gaussian$Parametric *self, PyObject *args);
        static PyObject *t_Gaussian$Parametric_value(t_Gaussian$Parametric *self, PyObject *args);

        static PyMethodDef t_Gaussian$Parametric__methods_[] = {
          DECLARE_METHOD(t_Gaussian$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Gaussian$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Gaussian$Parametric)[] = {
          { Py_tp_methods, t_Gaussian$Parametric__methods_ },
          { Py_tp_init, (void *) t_Gaussian$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Gaussian$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Gaussian$Parametric, t_Gaussian$Parametric, Gaussian$Parametric);

        void t_Gaussian$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Gaussian$Parametric), &PY_TYPE_DEF(Gaussian$Parametric), module, "Gaussian$Parametric", 0);
        }

        void t_Gaussian$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian$Parametric), "class_", make_descriptor(Gaussian$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian$Parametric), "wrapfn_", make_descriptor(t_Gaussian$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Gaussian$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Gaussian$Parametric::initializeClass, 1)))
            return NULL;
          return t_Gaussian$Parametric::wrap_Object(Gaussian$Parametric(((t_Gaussian$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Gaussian$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Gaussian$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Gaussian$Parametric_init_(t_Gaussian$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Gaussian$Parametric object((jobject) NULL);

          INT_CALL(object = Gaussian$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Gaussian$Parametric_gradient(t_Gaussian$Parametric *self, PyObject *args)
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

        static PyObject *t_Gaussian$Parametric_value(t_Gaussian$Parametric *self, PyObject *args)
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
#include "java/lang/Byte.h"
#include "java/lang/Byte.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Byte::class$ = NULL;
    jmethodID *Byte::mids$ = NULL;
    bool Byte::live$ = false;
    jint Byte::BYTES = (jint) 0;
    jbyte Byte::MAX_VALUE = (jbyte) 0;
    jbyte Byte::MIN_VALUE = (jbyte) 0;
    jint Byte::SIZE = (jint) 0;
    ::java::lang::Class *Byte::TYPE = NULL;

    jclass Byte::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Byte");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_75a957b0fa0af2fc] = env->getMethodID(cls, "<init>", "(B)V");
        mids$[mid_byteValue_42a1555092006f7f] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_c28330d04052299f] = env->getStaticMethodID(cls, "compare", "(BB)I");
        mids$[mid_compareTo_b22b7494b19a6935] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Byte;)I");
        mids$[mid_compareUnsigned_c28330d04052299f] = env->getStaticMethodID(cls, "compareUnsigned", "(BB)I");
        mids$[mid_decode_1c2a79cb0dcd9874] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Byte;");
        mids$[mid_doubleValue_dff5885c2c873297] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_5adccb493ada08e8] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_0090221016e6154f] = env->getStaticMethodID(cls, "hashCode", "(B)I");
        mids$[mid_intValue_570ce0828f81a2c1] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_492808a339bfa35f] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_parseByte_e05d60cdb51d2965] = env->getStaticMethodID(cls, "parseByte", "(Ljava/lang/String;)B");
        mids$[mid_parseByte_45092d94bf3a462d] = env->getStaticMethodID(cls, "parseByte", "(Ljava/lang/String;I)B");
        mids$[mid_shortValue_b5dd6688e7dce57d] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_29e9e63239e7a6b2] = env->getStaticMethodID(cls, "toString", "(B)Ljava/lang/String;");
        mids$[mid_toUnsignedInt_0090221016e6154f] = env->getStaticMethodID(cls, "toUnsignedInt", "(B)I");
        mids$[mid_toUnsignedLong_f9fbce2436ae74f2] = env->getStaticMethodID(cls, "toUnsignedLong", "(B)J");
        mids$[mid_valueOf_1c2a79cb0dcd9874] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Byte;");
        mids$[mid_valueOf_7e3cc57b85209927] = env->getStaticMethodID(cls, "valueOf", "(B)Ljava/lang/Byte;");
        mids$[mid_valueOf_7c17169bb43de73b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Byte;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticByteField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticByteField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Byte::Byte(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    Byte::Byte(jbyte a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_75a957b0fa0af2fc, a0)) {}

    jbyte Byte::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_42a1555092006f7f]);
    }

    jint Byte::compare(jbyte a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_c28330d04052299f], a0, a1);
    }

    jint Byte::compareTo(const Byte & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_b22b7494b19a6935], a0.this$);
    }

    jint Byte::compareUnsigned(jbyte a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_c28330d04052299f], a0, a1);
    }

    Byte Byte::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_decode_1c2a79cb0dcd9874], a0.this$));
    }

    jdouble Byte::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_dff5885c2c873297]);
    }

    jboolean Byte::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jfloat Byte::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_5adccb493ada08e8]);
    }

    jint Byte::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jint Byte::hashCode(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_0090221016e6154f], a0);
    }

    jint Byte::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_570ce0828f81a2c1]);
    }

    jlong Byte::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_492808a339bfa35f]);
    }

    jbyte Byte::parseByte(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_parseByte_e05d60cdb51d2965], a0.this$);
    }

    jbyte Byte::parseByte(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_parseByte_45092d94bf3a462d], a0.this$, a1);
    }

    jshort Byte::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_b5dd6688e7dce57d]);
    }

    ::java::lang::String Byte::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    ::java::lang::String Byte::toString(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_29e9e63239e7a6b2], a0));
    }

    jint Byte::toUnsignedInt(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toUnsignedInt_0090221016e6154f], a0);
    }

    jlong Byte::toUnsignedLong(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_toUnsignedLong_f9fbce2436ae74f2], a0);
    }

    Byte Byte::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1c2a79cb0dcd9874], a0.this$));
    }

    Byte Byte::valueOf(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7e3cc57b85209927], a0));
    }

    Byte Byte::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7c17169bb43de73b], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Byte_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Byte_init_(t_Byte *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Byte_byteValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_compareTo(t_Byte *self, PyObject *arg);
    static PyObject *t_Byte_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_doubleValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_equals(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_floatValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_hashCode(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_intValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_longValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_parseByte(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_shortValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_toString(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_toUnsignedInt(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_toUnsignedLong(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Byte__methods_[] = {
      DECLARE_METHOD(t_Byte, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Byte, compareTo, METH_O),
      DECLARE_METHOD(t_Byte, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Byte, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, equals, METH_VARARGS),
      DECLARE_METHOD(t_Byte, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Byte, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, parseByte, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Byte, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, toString, METH_VARARGS),
      DECLARE_METHOD(t_Byte, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, toUnsignedInt, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, toUnsignedLong, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Byte)[] = {
      { Py_tp_methods, t_Byte__methods_ },
      { Py_tp_init, (void *) t_Byte_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Byte)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Byte, t_Byte, Byte);

    void t_Byte::install(PyObject *module)
    {
      installType(&PY_TYPE(Byte), &PY_TYPE_DEF(Byte), module, "Byte", 0);
    }

    void t_Byte::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "class_", make_descriptor(Byte::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "wrapfn_", make_descriptor(unboxByte));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "boxfn_", make_descriptor(boxByte));
      env->getClass(Byte::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "BYTES", make_descriptor(Byte::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "MAX_VALUE", make_descriptor(Byte::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "MIN_VALUE", make_descriptor(Byte::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "SIZE", make_descriptor(Byte::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Byte::TYPE)));
    }

    static PyObject *t_Byte_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Byte::initializeClass, 1)))
        return NULL;
      return t_Byte::wrap_Object(Byte(((t_Byte *) arg)->object.this$));
    }
    static PyObject *t_Byte_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Byte::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Byte_init_(t_Byte *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Byte object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Byte(a0));
            self->object = object;
            break;
          }
        }
        {
          jbyte a0;
          Byte object((jobject) NULL);

          if (!parseArgs(args, "B", &a0))
          {
            INT_CALL(object = Byte(a0));
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

    static PyObject *t_Byte_byteValue(t_Byte *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Byte_compare(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      jbyte a1;
      jint result;

      if (!parseArgs(args, "BB", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Byte::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Byte_compareTo(t_Byte *self, PyObject *arg)
    {
      Byte a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Byte), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Byte_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      jbyte a1;
      jint result;

      if (!parseArgs(args, "BB", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Byte::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Byte_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Byte result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::decode(a0));
        return t_Byte::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Byte_doubleValue(t_Byte *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Byte_equals(t_Byte *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Byte_floatValue(t_Byte *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Byte_hashCode(t_Byte *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Byte_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      jint result;

      if (!parseArgs(args, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Byte_intValue(t_Byte *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Byte_longValue(t_Byte *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Byte_parseByte(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jbyte result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Byte::parseByte(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jbyte result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Byte::parseByte(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseByte", args);
      return NULL;
    }

    static PyObject *t_Byte_shortValue(t_Byte *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Byte_toString(t_Byte *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Byte_toString_(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Byte_toUnsignedInt(PyTypeObject *type, PyObject *arg)
    {
      jbyte a0;
      jint result;

      if (!parseArg(arg, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::toUnsignedInt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "toUnsignedInt", arg);
      return NULL;
    }

    static PyObject *t_Byte_toUnsignedLong(PyTypeObject *type, PyObject *arg)
    {
      jbyte a0;
      jlong result;

      if (!parseArg(arg, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::toUnsignedLong(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "toUnsignedLong", arg);
      return NULL;
    }

    static PyObject *t_Byte_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Byte result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Byte::valueOf(a0));
            return t_Byte::wrap_Object(result);
          }
        }
        {
          jbyte a0;
          Byte result((jobject) NULL);

          if (!parseArgs(args, "B", &a0))
          {
            OBJ_CALL(result = ::java::lang::Byte::valueOf(a0));
            return t_Byte::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Byte result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Byte::valueOf(a0, a1));
            return t_Byte::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonAbstractListCrawler.h"
#include "java/io/IOException.h"
#include "org/orekit/data/ZipJarCrawler.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonAbstractListCrawler::class$ = NULL;
      jmethodID *PythonAbstractListCrawler::mids$ = NULL;
      bool PythonAbstractListCrawler::live$ = false;

      jclass PythonAbstractListCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonAbstractListCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBaseName_e816b890c4273bbd] = env->getMethodID(cls, "getBaseName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getCompleteName_e816b890c4273bbd] = env->getMethodID(cls, "getCompleteName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getStream_21e7c14915faab34] = env->getMethodID(cls, "getStream", "(Ljava/lang/Object;)Ljava/io/InputStream;");
          mids$[mid_getZipJarCrawler_30558b0704cd5966] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/lang/Object;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractListCrawler::PythonAbstractListCrawler() : ::org::orekit::data::AbstractListCrawler(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonAbstractListCrawler::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonAbstractListCrawler::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonAbstractListCrawler::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonAbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractListCrawler_of_(t_PythonAbstractListCrawler *self, PyObject *args);
      static int t_PythonAbstractListCrawler_init_(t_PythonAbstractListCrawler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractListCrawler_finalize(t_PythonAbstractListCrawler *self);
      static PyObject *t_PythonAbstractListCrawler_pythonExtension(t_PythonAbstractListCrawler *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractListCrawler_getBaseName0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractListCrawler_getCompleteName1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractListCrawler_getStream2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractListCrawler_getZipJarCrawler3(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonAbstractListCrawler_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractListCrawler_get__self(t_PythonAbstractListCrawler *self, void *data);
      static PyObject *t_PythonAbstractListCrawler_get__parameters_(t_PythonAbstractListCrawler *self, void *data);
      static PyGetSetDef t_PythonAbstractListCrawler__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractListCrawler, self),
        DECLARE_GET_FIELD(t_PythonAbstractListCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractListCrawler__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractListCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractListCrawler)[] = {
        { Py_tp_methods, t_PythonAbstractListCrawler__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractListCrawler_init_ },
        { Py_tp_getset, t_PythonAbstractListCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractListCrawler)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractListCrawler),
        NULL
      };

      DEFINE_TYPE(PythonAbstractListCrawler, t_PythonAbstractListCrawler, PythonAbstractListCrawler);
      PyObject *t_PythonAbstractListCrawler::wrap_Object(const PythonAbstractListCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonAbstractListCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonAbstractListCrawler *self = (t_PythonAbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonAbstractListCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonAbstractListCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonAbstractListCrawler *self = (t_PythonAbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonAbstractListCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractListCrawler), &PY_TYPE_DEF(PythonAbstractListCrawler), module, "PythonAbstractListCrawler", 1);
      }

      void t_PythonAbstractListCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractListCrawler), "class_", make_descriptor(PythonAbstractListCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractListCrawler), "wrapfn_", make_descriptor(t_PythonAbstractListCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractListCrawler), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractListCrawler::initializeClass);
        JNINativeMethod methods[] = {
          { "getBaseName", "(Ljava/lang/Object;)Ljava/lang/String;", (void *) t_PythonAbstractListCrawler_getBaseName0 },
          { "getCompleteName", "(Ljava/lang/Object;)Ljava/lang/String;", (void *) t_PythonAbstractListCrawler_getCompleteName1 },
          { "getStream", "(Ljava/lang/Object;)Ljava/io/InputStream;", (void *) t_PythonAbstractListCrawler_getStream2 },
          { "getZipJarCrawler", "(Ljava/lang/Object;)Lorg/orekit/data/ZipJarCrawler;", (void *) t_PythonAbstractListCrawler_getZipJarCrawler3 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractListCrawler_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonAbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractListCrawler::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractListCrawler::wrap_Object(PythonAbstractListCrawler(((t_PythonAbstractListCrawler *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractListCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonAbstractListCrawler_of_(t_PythonAbstractListCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonAbstractListCrawler_init_(t_PythonAbstractListCrawler *self, PyObject *args, PyObject *kwds)
      {
        PythonAbstractListCrawler object((jobject) NULL);

        INT_CALL(object = PythonAbstractListCrawler());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractListCrawler_finalize(t_PythonAbstractListCrawler *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractListCrawler_pythonExtension(t_PythonAbstractListCrawler *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractListCrawler_getBaseName0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getBaseName", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getBaseName", result);
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

      static jobject JNICALL t_PythonAbstractListCrawler_getCompleteName1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getCompleteName", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getCompleteName", result);
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

      static jobject JNICALL t_PythonAbstractListCrawler_getStream2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::io::InputStream value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getStream", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::io::InputStream::initializeClass, &value))
        {
          throwTypeError("getStream", result);
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

      static jobject JNICALL t_PythonAbstractListCrawler_getZipJarCrawler3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::data::ZipJarCrawler value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getZipJarCrawler", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::data::ZipJarCrawler::initializeClass, &value))
        {
          throwTypeError("getZipJarCrawler", result);
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

      static void JNICALL t_PythonAbstractListCrawler_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractListCrawler_get__self(t_PythonAbstractListCrawler *self, void *data)
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
      static PyObject *t_PythonAbstractListCrawler_get__parameters_(t_PythonAbstractListCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroRangeModifier::class$ = NULL;
          jmethodID *ShapiroRangeModifier::mids$ = NULL;
          bool ShapiroRangeModifier::live$ = false;

          jclass ShapiroRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroRangeModifier::ShapiroRangeModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          ::java::util::List ShapiroRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void ShapiroRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_ShapiroRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroRangeModifier_init_(t_ShapiroRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroRangeModifier_getParametersDrivers(t_ShapiroRangeModifier *self);
          static PyObject *t_ShapiroRangeModifier_modifyWithoutDerivatives(t_ShapiroRangeModifier *self, PyObject *arg);
          static PyObject *t_ShapiroRangeModifier_get__parametersDrivers(t_ShapiroRangeModifier *self, void *data);
          static PyGetSetDef t_ShapiroRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroRangeModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroRangeModifier)[] = {
            { Py_tp_methods, t_ShapiroRangeModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroRangeModifier_init_ },
            { Py_tp_getset, t_ShapiroRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroRangeModifier, t_ShapiroRangeModifier, ShapiroRangeModifier);

          void t_ShapiroRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroRangeModifier), &PY_TYPE_DEF(ShapiroRangeModifier), module, "ShapiroRangeModifier", 0);
          }

          void t_ShapiroRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroRangeModifier), "class_", make_descriptor(ShapiroRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroRangeModifier), "wrapfn_", make_descriptor(t_ShapiroRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroRangeModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroRangeModifier::wrap_Object(ShapiroRangeModifier(((t_ShapiroRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroRangeModifier_init_(t_ShapiroRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroRangeModifier_getParametersDrivers(t_ShapiroRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroRangeModifier_modifyWithoutDerivatives(t_ShapiroRangeModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroRangeModifier_get__parametersDrivers(t_ShapiroRangeModifier *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldForceModelContext::class$ = NULL;
            jmethodID *FieldForceModelContext::mids$ = NULL;
            bool FieldForceModelContext::live$ = false;

            jclass FieldForceModelContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getFieldAuxiliaryElements_b01db8dd217f8da6] = env->getMethodID(cls, "getFieldAuxiliaryElements", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements FieldForceModelContext::getFieldAuxiliaryElements() const
            {
              return ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(env->callObjectMethod(this$, mids$[mid_getFieldAuxiliaryElements_b01db8dd217f8da6]));
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
            static PyObject *t_FieldForceModelContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldForceModelContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldForceModelContext_of_(t_FieldForceModelContext *self, PyObject *args);
            static PyObject *t_FieldForceModelContext_getFieldAuxiliaryElements(t_FieldForceModelContext *self);
            static PyObject *t_FieldForceModelContext_get__fieldAuxiliaryElements(t_FieldForceModelContext *self, void *data);
            static PyObject *t_FieldForceModelContext_get__parameters_(t_FieldForceModelContext *self, void *data);
            static PyGetSetDef t_FieldForceModelContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldForceModelContext, fieldAuxiliaryElements),
              DECLARE_GET_FIELD(t_FieldForceModelContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldForceModelContext__methods_[] = {
              DECLARE_METHOD(t_FieldForceModelContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldForceModelContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldForceModelContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldForceModelContext, getFieldAuxiliaryElements, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldForceModelContext)[] = {
              { Py_tp_methods, t_FieldForceModelContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldForceModelContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldForceModelContext)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldForceModelContext, t_FieldForceModelContext, FieldForceModelContext);
            PyObject *t_FieldForceModelContext::wrap_Object(const FieldForceModelContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldForceModelContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldForceModelContext *self = (t_FieldForceModelContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldForceModelContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldForceModelContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldForceModelContext *self = (t_FieldForceModelContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldForceModelContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldForceModelContext), &PY_TYPE_DEF(FieldForceModelContext), module, "FieldForceModelContext", 0);
            }

            void t_FieldForceModelContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldForceModelContext), "class_", make_descriptor(FieldForceModelContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldForceModelContext), "wrapfn_", make_descriptor(t_FieldForceModelContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldForceModelContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldForceModelContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldForceModelContext::initializeClass, 1)))
                return NULL;
              return t_FieldForceModelContext::wrap_Object(FieldForceModelContext(((t_FieldForceModelContext *) arg)->object.this$));
            }
            static PyObject *t_FieldForceModelContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldForceModelContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldForceModelContext_of_(t_FieldForceModelContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldForceModelContext_getFieldAuxiliaryElements(t_FieldForceModelContext *self)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements result((jobject) NULL);
              OBJ_CALL(result = self->object.getFieldAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(result, self->parameters[0]);
            }
            static PyObject *t_FieldForceModelContext_get__parameters_(t_FieldForceModelContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldForceModelContext_get__fieldAuxiliaryElements(t_FieldForceModelContext *self, void *data)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements value((jobject) NULL);
              OBJ_CALL(value = self->object.getFieldAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *ProcessEstimate::class$ = NULL;
        jmethodID *ProcessEstimate::mids$ = NULL;
        bool ProcessEstimate::live$ = false;

        jclass ProcessEstimate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/ProcessEstimate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d905195db03d249f] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_b5a6dee5d269e523] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_getCovariance_688b496048ff947b] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getInnovationCovariance_688b496048ff947b] = env->getMethodID(cls, "getInnovationCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getKalmanGain_688b496048ff947b] = env->getMethodID(cls, "getKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getMeasurementJacobian_688b496048ff947b] = env->getMethodID(cls, "getMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getState_aab4fbf77867daa8] = env->getMethodID(cls, "getState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getStateTransitionMatrix_688b496048ff947b] = env->getMethodID(cls, "getStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getTime_dff5885c2c873297] = env->getMethodID(cls, "getTime", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ProcessEstimate::ProcessEstimate(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealMatrix & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d905195db03d249f, a0, a1.this$, a2.this$)) {}

        ProcessEstimate::ProcessEstimate(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::linear::RealMatrix & a4, const ::org::hipparchus::linear::RealMatrix & a5, const ::org::hipparchus::linear::RealMatrix & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5a6dee5d269e523, a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getInnovationCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInnovationCovariance_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getKalmanGain_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMeasurementJacobian_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealVector ProcessEstimate::getState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getState_aab4fbf77867daa8]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_688b496048ff947b]));
        }

        jdouble ProcessEstimate::getTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTime_dff5885c2c873297]);
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
        static PyObject *t_ProcessEstimate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ProcessEstimate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ProcessEstimate_init_(t_ProcessEstimate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ProcessEstimate_getCovariance(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getInnovationCovariance(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getKalmanGain(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getMeasurementJacobian(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getState(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getStateTransitionMatrix(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getTime(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_get__covariance(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__innovationCovariance(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__kalmanGain(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__measurementJacobian(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__state(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__stateTransitionMatrix(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__time(t_ProcessEstimate *self, void *data);
        static PyGetSetDef t_ProcessEstimate__fields_[] = {
          DECLARE_GET_FIELD(t_ProcessEstimate, covariance),
          DECLARE_GET_FIELD(t_ProcessEstimate, innovationCovariance),
          DECLARE_GET_FIELD(t_ProcessEstimate, kalmanGain),
          DECLARE_GET_FIELD(t_ProcessEstimate, measurementJacobian),
          DECLARE_GET_FIELD(t_ProcessEstimate, state),
          DECLARE_GET_FIELD(t_ProcessEstimate, stateTransitionMatrix),
          DECLARE_GET_FIELD(t_ProcessEstimate, time),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ProcessEstimate__methods_[] = {
          DECLARE_METHOD(t_ProcessEstimate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProcessEstimate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProcessEstimate, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getInnovationCovariance, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getState, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getTime, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ProcessEstimate)[] = {
          { Py_tp_methods, t_ProcessEstimate__methods_ },
          { Py_tp_init, (void *) t_ProcessEstimate_init_ },
          { Py_tp_getset, t_ProcessEstimate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ProcessEstimate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ProcessEstimate, t_ProcessEstimate, ProcessEstimate);

        void t_ProcessEstimate::install(PyObject *module)
        {
          installType(&PY_TYPE(ProcessEstimate), &PY_TYPE_DEF(ProcessEstimate), module, "ProcessEstimate", 0);
        }

        void t_ProcessEstimate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessEstimate), "class_", make_descriptor(ProcessEstimate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessEstimate), "wrapfn_", make_descriptor(t_ProcessEstimate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessEstimate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ProcessEstimate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ProcessEstimate::initializeClass, 1)))
            return NULL;
          return t_ProcessEstimate::wrap_Object(ProcessEstimate(((t_ProcessEstimate *) arg)->object.this$));
        }
        static PyObject *t_ProcessEstimate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ProcessEstimate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ProcessEstimate_init_(t_ProcessEstimate *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector a1((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
              ProcessEstimate object((jobject) NULL);

              if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ProcessEstimate(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector a1((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a5((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a6((jobject) NULL);
              ProcessEstimate object((jobject) NULL);

              if (!parseArgs(args, "Dkkkkkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = ProcessEstimate(a0, a1, a2, a3, a4, a5, a6));
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

        static PyObject *t_ProcessEstimate_getCovariance(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getInnovationCovariance(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getInnovationCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getKalmanGain(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getMeasurementJacobian(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getState(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getStateTransitionMatrix(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getTime(t_ProcessEstimate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProcessEstimate_get__covariance(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__innovationCovariance(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getInnovationCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__kalmanGain(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__measurementJacobian(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__state(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__stateTransitionMatrix(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__time(t_ProcessEstimate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PredictedEOPHistory.h"
#include "org/orekit/frames/EOPFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PredictedEOPHistory::class$ = NULL;
      jmethodID *PredictedEOPHistory::mids$ = NULL;
      bool PredictedEOPHistory::live$ = false;

      jclass PredictedEOPHistory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PredictedEOPHistory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_eecc46ed0fd30bf7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/EOPHistory;DLorg/orekit/frames/EOPFitter;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PredictedEOPHistory::PredictedEOPHistory(const ::org::orekit::frames::EOPHistory & a0, jdouble a1, const ::org::orekit::frames::EOPFitter & a2) : ::org::orekit::frames::EOPHistory(env->newObject(initializeClass, &mids$, mid_init$_eecc46ed0fd30bf7, a0.this$, a1, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_PredictedEOPHistory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PredictedEOPHistory_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PredictedEOPHistory_init_(t_PredictedEOPHistory *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_PredictedEOPHistory__methods_[] = {
        DECLARE_METHOD(t_PredictedEOPHistory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PredictedEOPHistory, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PredictedEOPHistory)[] = {
        { Py_tp_methods, t_PredictedEOPHistory__methods_ },
        { Py_tp_init, (void *) t_PredictedEOPHistory_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PredictedEOPHistory)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::EOPHistory),
        NULL
      };

      DEFINE_TYPE(PredictedEOPHistory, t_PredictedEOPHistory, PredictedEOPHistory);

      void t_PredictedEOPHistory::install(PyObject *module)
      {
        installType(&PY_TYPE(PredictedEOPHistory), &PY_TYPE_DEF(PredictedEOPHistory), module, "PredictedEOPHistory", 0);
      }

      void t_PredictedEOPHistory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PredictedEOPHistory), "class_", make_descriptor(PredictedEOPHistory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PredictedEOPHistory), "wrapfn_", make_descriptor(t_PredictedEOPHistory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PredictedEOPHistory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PredictedEOPHistory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PredictedEOPHistory::initializeClass, 1)))
          return NULL;
        return t_PredictedEOPHistory::wrap_Object(PredictedEOPHistory(((t_PredictedEOPHistory *) arg)->object.this$));
      }
      static PyObject *t_PredictedEOPHistory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PredictedEOPHistory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PredictedEOPHistory_init_(t_PredictedEOPHistory *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        jdouble a1;
        ::org::orekit::frames::EOPFitter a2((jobject) NULL);
        PredictedEOPHistory object((jobject) NULL);

        if (!parseArgs(args, "kDk", ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::frames::EOPFitter::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = PredictedEOPHistory(a0, a1, a2));
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
#include "org/hipparchus/stat/descriptive/rank/PSquarePercentile.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/stat/descriptive/rank/PSquarePercentile.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *PSquarePercentile::class$ = NULL;
          jmethodID *PSquarePercentile::mids$ = NULL;
          bool PSquarePercentile::live$ = false;

          jclass PSquarePercentile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/PSquarePercentile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_1c9028170adaf4fe] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/PSquarePercentile;");
              mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getQuantile_dff5885c2c873297] = env->getMethodID(cls, "getQuantile", "()D");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_quantile_dff5885c2c873297] = env->getMethodID(cls, "quantile", "()D");
              mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PSquarePercentile::PSquarePercentile(jdouble a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          void PSquarePercentile::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          PSquarePercentile PSquarePercentile::copy() const
          {
            return PSquarePercentile(env->callObjectMethod(this$, mids$[mid_copy_1c9028170adaf4fe]));
          }

          jboolean PSquarePercentile::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
          }

          jlong PSquarePercentile::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          jdouble PSquarePercentile::getQuantile() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQuantile_dff5885c2c873297]);
          }

          jdouble PSquarePercentile::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          jint PSquarePercentile::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
          }

          void PSquarePercentile::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
          }

          jdouble PSquarePercentile::quantile() const
          {
            return env->callDoubleMethod(this$, mids$[mid_quantile_dff5885c2c873297]);
          }

          ::java::lang::String PSquarePercentile::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
          static PyObject *t_PSquarePercentile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PSquarePercentile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PSquarePercentile_init_(t_PSquarePercentile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PSquarePercentile_clear(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_copy(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_equals(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_getN(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_getQuantile(t_PSquarePercentile *self);
          static PyObject *t_PSquarePercentile_getResult(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_hashCode(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_increment(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_quantile(t_PSquarePercentile *self);
          static PyObject *t_PSquarePercentile_toString(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_get__n(t_PSquarePercentile *self, void *data);
          static PyObject *t_PSquarePercentile_get__result(t_PSquarePercentile *self, void *data);
          static PyGetSetDef t_PSquarePercentile__fields_[] = {
            DECLARE_GET_FIELD(t_PSquarePercentile, n),
            DECLARE_GET_FIELD(t_PSquarePercentile, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PSquarePercentile__methods_[] = {
            DECLARE_METHOD(t_PSquarePercentile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PSquarePercentile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PSquarePercentile, clear, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, copy, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, equals, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, getN, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, getQuantile, METH_NOARGS),
            DECLARE_METHOD(t_PSquarePercentile, getResult, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, increment, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, quantile, METH_NOARGS),
            DECLARE_METHOD(t_PSquarePercentile, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PSquarePercentile)[] = {
            { Py_tp_methods, t_PSquarePercentile__methods_ },
            { Py_tp_init, (void *) t_PSquarePercentile_init_ },
            { Py_tp_getset, t_PSquarePercentile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PSquarePercentile)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(PSquarePercentile, t_PSquarePercentile, PSquarePercentile);

          void t_PSquarePercentile::install(PyObject *module)
          {
            installType(&PY_TYPE(PSquarePercentile), &PY_TYPE_DEF(PSquarePercentile), module, "PSquarePercentile", 0);
          }

          void t_PSquarePercentile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PSquarePercentile), "class_", make_descriptor(PSquarePercentile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PSquarePercentile), "wrapfn_", make_descriptor(t_PSquarePercentile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PSquarePercentile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PSquarePercentile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PSquarePercentile::initializeClass, 1)))
              return NULL;
            return t_PSquarePercentile::wrap_Object(PSquarePercentile(((t_PSquarePercentile *) arg)->object.this$));
          }
          static PyObject *t_PSquarePercentile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PSquarePercentile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PSquarePercentile_init_(t_PSquarePercentile *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            PSquarePercentile object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = PSquarePercentile(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PSquarePercentile_clear(t_PSquarePercentile *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_PSquarePercentile_copy(t_PSquarePercentile *self, PyObject *args)
          {
            PSquarePercentile result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_PSquarePercentile::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_PSquarePercentile_equals(t_PSquarePercentile *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_PSquarePercentile_getN(t_PSquarePercentile *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_PSquarePercentile_getQuantile(t_PSquarePercentile *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQuantile());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PSquarePercentile_getResult(t_PSquarePercentile *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_PSquarePercentile_hashCode(t_PSquarePercentile *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_PSquarePercentile_increment(t_PSquarePercentile *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_PSquarePercentile_quantile(t_PSquarePercentile *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.quantile());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PSquarePercentile_toString(t_PSquarePercentile *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_PSquarePercentile_get__n(t_PSquarePercentile *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_PSquarePercentile_get__result(t_PSquarePercentile *self, void *data)
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
