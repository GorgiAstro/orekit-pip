#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/LambdaMethod.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *LambdaMethod::class$ = NULL;
          jmethodID *LambdaMethod::mids$ = NULL;
          bool LambdaMethod::live$ = false;

          jclass LambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/LambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_discreteSearch_a1fa5dae97ea5ed2] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_ltdlDecomposition_a1fa5dae97ea5ed2] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_reduction_a1fa5dae97ea5ed2] = env->getMethodID(cls, "reduction", "()V");
              mids$[mid_inverseDecomposition_a1fa5dae97ea5ed2] = env->getMethodID(cls, "inverseDecomposition", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LambdaMethod::LambdaMethod() : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
          static PyObject *t_LambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LambdaMethod_init_(t_LambdaMethod *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_LambdaMethod__methods_[] = {
            DECLARE_METHOD(t_LambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LambdaMethod, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LambdaMethod)[] = {
            { Py_tp_methods, t_LambdaMethod__methods_ },
            { Py_tp_init, (void *) t_LambdaMethod_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LambdaMethod)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod),
            NULL
          };

          DEFINE_TYPE(LambdaMethod, t_LambdaMethod, LambdaMethod);

          void t_LambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(LambdaMethod), &PY_TYPE_DEF(LambdaMethod), module, "LambdaMethod", 0);
          }

          void t_LambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LambdaMethod), "class_", make_descriptor(LambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LambdaMethod), "wrapfn_", make_descriptor(t_LambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LambdaMethod), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LambdaMethod::initializeClass, 1)))
              return NULL;
            return t_LambdaMethod::wrap_Object(LambdaMethod(((t_LambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_LambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LambdaMethod_init_(t_LambdaMethod *self, PyObject *args, PyObject *kwds)
          {
            LambdaMethod object((jobject) NULL);

            INT_CALL(object = LambdaMethod());
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *ShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *ShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool ShortTermEncounter2DPOCMethod::live$ = false;
              jdouble ShortTermEncounter2DPOCMethod::DEFAULT_ZERO_THRESHOLD = (jdouble) 0;

              jclass ShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_264223a79423072b] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_76a9c916ce2b1546] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_cac25f7dbaea842d] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_75090526d857f3aa] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_613925b61b739417] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_a0489c76be101130] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_1bd00fec4020f6ae] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_6829aad0a64a3436] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_2b16e16faf82a389] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_87c647df3efaccbf] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_aa614adc5e98ffe5] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_a73e6347f5238a63] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_11689cd07cf55453] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_619a70d6b0e36c90] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_fa6d0cfa8ffe8cdd] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_37cbf5ef19b07742] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_f98b4f489decc901] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                  mids$[mid_getType_8397a286d982b383] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_9ab94ac1dc23b105] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_ZERO_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_ZERO_THRESHOLD");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_264223a79423072b], a0.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_76a9c916ce2b1546], a0.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_cac25f7dbaea842d], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_75090526d857f3aa], a0.this$, a1.this$));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_613925b61b739417], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a0489c76be101130], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1, jdouble a2) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_1bd00fec4020f6ae], a0.this$, a1, a2));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_6829aad0a64a3436], a0.this$, a1.this$, a2));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_2b16e16faf82a389], a0.this$, a1.this$, a2.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_87c647df3efaccbf], a0.this$, a1.this$, a2.this$, a3.this$, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_aa614adc5e98ffe5], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a73e6347f5238a63], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_11689cd07cf55453], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_619a70d6b0e36c90], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_fa6d0cfa8ffe8cdd], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_37cbf5ef19b07742], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_f98b4f489decc901], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5));
              }

              ::java::lang::String ShortTermEncounter2DPOCMethod::getName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType ShortTermEncounter2DPOCMethod::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_8397a286d982b383]));
              }

              jboolean ShortTermEncounter2DPOCMethod::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_9ab94ac1dc23b105]);
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
              static PyObject *t_ShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethod_compute(t_ShortTermEncounter2DPOCMethod *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DPOCMethod_getName(t_ShortTermEncounter2DPOCMethod *self);
              static PyObject *t_ShortTermEncounter2DPOCMethod_getType(t_ShortTermEncounter2DPOCMethod *self);
              static PyObject *t_ShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self);
              static PyObject *t_ShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethod_get__name(t_ShortTermEncounter2DPOCMethod *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethod_get__type(t_ShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_ShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethod, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethod, name),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethod, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, compute, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, getName, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, getType, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, isAMaximumProbabilityOfCollisionMethod, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_ShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(ShortTermEncounter2DPOCMethod, t_ShortTermEncounter2DPOCMethod, ShortTermEncounter2DPOCMethod);

              void t_ShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(ShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(ShortTermEncounter2DPOCMethod), module, "ShortTermEncounter2DPOCMethod", 0);
              }

              void t_ShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "class_", make_descriptor(ShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_ShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                env->getClass(ShortTermEncounter2DPOCMethod::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "DEFAULT_ZERO_THRESHOLD", make_descriptor(ShortTermEncounter2DPOCMethod::DEFAULT_ZERO_THRESHOLD));
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_ShortTermEncounter2DPOCMethod::wrap_Object(ShortTermEncounter2DPOCMethod(((t_ShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_ShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_compute(t_ShortTermEncounter2DPOCMethod *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 1:
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "K", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.compute(a0));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
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
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KK", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
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
                    jdouble a1;
                    jdouble a2;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KDD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &a2))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
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
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKK", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 5:
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
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
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
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkDkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_))
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

              static PyObject *t_ShortTermEncounter2DPOCMethod_getName(t_ShortTermEncounter2DPOCMethod *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getName());
                return j2p(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_getType(t_ShortTermEncounter2DPOCMethod *self)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_get__name(t_ShortTermEncounter2DPOCMethod *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getName());
                return j2p(value);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_get__type(t_ShortTermEncounter2DPOCMethod *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/orekit/forces/maneuvers/propulsion/PythonPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonPropulsionModel::class$ = NULL;
          jmethodID *PythonPropulsionModel::mids$ = NULL;
          bool PythonPropulsionModel::live$ = false;

          jclass PythonPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAcceleration_e58d235f532e1fec] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getAcceleration_fa24c1d0852b99d1] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getControl3DVectorCostType_2eba60c257188b83] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getMassDerivatives_8e86371c61460f23] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getMassDerivatives_f867476668f8eb00] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonPropulsionModel::PythonPropulsionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonPropulsionModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonPropulsionModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonPropulsionModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonPropulsionModel_init_(t_PythonPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonPropulsionModel_finalize(t_PythonPropulsionModel *self);
          static PyObject *t_PythonPropulsionModel_pythonExtension(t_PythonPropulsionModel *self, PyObject *args);
          static jobject JNICALL t_PythonPropulsionModel_getAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonPropulsionModel_getAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonPropulsionModel_getControl3DVectorCostType2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonPropulsionModel_getMassDerivatives3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jdouble JNICALL t_PythonPropulsionModel_getMassDerivatives4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonPropulsionModel_getName5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonPropulsionModel_getParametersDrivers6(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonPropulsionModel_get__self(t_PythonPropulsionModel *self, void *data);
          static PyGetSetDef t_PythonPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonPropulsionModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PythonPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPropulsionModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonPropulsionModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonPropulsionModel)[] = {
            { Py_tp_methods, t_PythonPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_PythonPropulsionModel_init_ },
            { Py_tp_getset, t_PythonPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonPropulsionModel, t_PythonPropulsionModel, PythonPropulsionModel);

          void t_PythonPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonPropulsionModel), &PY_TYPE_DEF(PythonPropulsionModel), module, "PythonPropulsionModel", 1);
          }

          void t_PythonPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropulsionModel), "class_", make_descriptor(PythonPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropulsionModel), "wrapfn_", make_descriptor(t_PythonPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropulsionModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonPropulsionModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonPropulsionModel_getAcceleration0 },
              { "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonPropulsionModel_getAcceleration1 },
              { "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;", (void *) t_PythonPropulsionModel_getControl3DVectorCostType2 },
              { "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonPropulsionModel_getMassDerivatives3 },
              { "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D", (void *) t_PythonPropulsionModel_getMassDerivatives4 },
              { "getName", "()Ljava/lang/String;", (void *) t_PythonPropulsionModel_getName5 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonPropulsionModel_getParametersDrivers6 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonPropulsionModel_init7 },
              { "pythonDecRef", "()V", (void *) t_PythonPropulsionModel_pythonDecRef8 },
            };
            env->registerNatives(cls, methods, 9);
          }

          static PyObject *t_PythonPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PythonPropulsionModel::wrap_Object(PythonPropulsionModel(((t_PythonPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PythonPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonPropulsionModel_init_(t_PythonPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            PythonPropulsionModel object((jobject) NULL);

            INT_CALL(object = PythonPropulsionModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonPropulsionModel_finalize(t_PythonPropulsionModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonPropulsionModel_pythonExtension(t_PythonPropulsionModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonPropulsionModel_getAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::attitudes::t_Attitude::wrap_Object(::org::orekit::attitudes::Attitude(a1));
            PyObject *o2 = JArray<jdouble>(a2).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getAcceleration", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getAcceleration", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(::org::orekit::attitudes::FieldAttitude(a1));
            PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getAcceleration", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getAcceleration", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getControl3DVectorCostType2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
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

          static jobject JNICALL t_PythonPropulsionModel_getMassDerivatives3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getMassDerivatives", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getMassDerivatives", result);
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

          static jdouble JNICALL t_PythonPropulsionModel_getMassDerivatives4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getMassDerivatives", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMassDerivatives", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonPropulsionModel_getName5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
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

          static jobject JNICALL t_PythonPropulsionModel_getParametersDrivers6(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
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

          static void JNICALL t_PythonPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
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

          static void JNICALL t_PythonPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonPropulsionModel_get__self(t_PythonPropulsionModel *self, void *data)
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
#include "org/orekit/forces/gravity/potential/ICGEMFormatReader.h"
#include "java/io/InputStream.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *ICGEMFormatReader::class$ = NULL;
          jmethodID *ICGEMFormatReader::mids$ = NULL;
          bool ICGEMFormatReader::live$ = false;

          jclass ICGEMFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/ICGEMFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_76cf8b957ccb7ae1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_f201530b2ce67e89] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_getProvider_752316a4c911183b] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ICGEMFormatReader::ICGEMFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_76cf8b957ccb7ae1, a0.this$, a1)) {}

          ICGEMFormatReader::ICGEMFormatReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_f201530b2ce67e89, a0.this$, a1, a2.this$)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider ICGEMFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_752316a4c911183b], a0, a1, a2));
          }

          void ICGEMFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
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
          static PyObject *t_ICGEMFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ICGEMFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ICGEMFormatReader_init_(t_ICGEMFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ICGEMFormatReader_getProvider(t_ICGEMFormatReader *self, PyObject *args);
          static PyObject *t_ICGEMFormatReader_loadData(t_ICGEMFormatReader *self, PyObject *args);

          static PyMethodDef t_ICGEMFormatReader__methods_[] = {
            DECLARE_METHOD(t_ICGEMFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ICGEMFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ICGEMFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_ICGEMFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ICGEMFormatReader)[] = {
            { Py_tp_methods, t_ICGEMFormatReader__methods_ },
            { Py_tp_init, (void *) t_ICGEMFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ICGEMFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(ICGEMFormatReader, t_ICGEMFormatReader, ICGEMFormatReader);

          void t_ICGEMFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(ICGEMFormatReader), &PY_TYPE_DEF(ICGEMFormatReader), module, "ICGEMFormatReader", 0);
          }

          void t_ICGEMFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ICGEMFormatReader), "class_", make_descriptor(ICGEMFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ICGEMFormatReader), "wrapfn_", make_descriptor(t_ICGEMFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ICGEMFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ICGEMFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ICGEMFormatReader::initializeClass, 1)))
              return NULL;
            return t_ICGEMFormatReader::wrap_Object(ICGEMFormatReader(((t_ICGEMFormatReader *) arg)->object.this$));
          }
          static PyObject *t_ICGEMFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ICGEMFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ICGEMFormatReader_init_(t_ICGEMFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ICGEMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = ICGEMFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                ICGEMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ICGEMFormatReader(a0, a1, a2));
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

          static PyObject *t_ICGEMFormatReader_getProvider(t_ICGEMFormatReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            return callSuper(PY_TYPE(ICGEMFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_ICGEMFormatReader_loadData(t_ICGEMFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(ICGEMFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/LinearOptimizer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearOptimizer::class$ = NULL;
        jmethodID *LinearOptimizer::mids$ = NULL;
        bool LinearOptimizer::live$ = false;

        jclass LinearOptimizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearOptimizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_optimize_9d04816d74472b44] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_parseOptimizationData_14193ddbce7a2cc0] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
            mids$[mid_getConstraints_cb666ea1a15f5210] = env->getMethodID(cls, "getConstraints", "()Ljava/util/Collection;");
            mids$[mid_isRestrictedToNonNegative_9ab94ac1dc23b105] = env->getMethodID(cls, "isRestrictedToNonNegative", "()Z");
            mids$[mid_getFunction_04ec5af671a3ecd3] = env->getMethodID(cls, "getFunction", "()Lorg/hipparchus/optim/linear/LinearObjectiveFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::optim::PointValuePair LinearOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_9d04816d74472b44], a0.this$));
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
        static PyObject *t_LinearOptimizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearOptimizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearOptimizer_of_(t_LinearOptimizer *self, PyObject *args);
        static PyObject *t_LinearOptimizer_optimize(t_LinearOptimizer *self, PyObject *args);
        static PyObject *t_LinearOptimizer_get__parameters_(t_LinearOptimizer *self, void *data);
        static PyGetSetDef t_LinearOptimizer__fields_[] = {
          DECLARE_GET_FIELD(t_LinearOptimizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearOptimizer__methods_[] = {
          DECLARE_METHOD(t_LinearOptimizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearOptimizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearOptimizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_LinearOptimizer, optimize, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearOptimizer)[] = {
          { Py_tp_methods, t_LinearOptimizer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_LinearOptimizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearOptimizer)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
          NULL
        };

        DEFINE_TYPE(LinearOptimizer, t_LinearOptimizer, LinearOptimizer);
        PyObject *t_LinearOptimizer::wrap_Object(const LinearOptimizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LinearOptimizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LinearOptimizer *self = (t_LinearOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LinearOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LinearOptimizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LinearOptimizer *self = (t_LinearOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LinearOptimizer::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearOptimizer), &PY_TYPE_DEF(LinearOptimizer), module, "LinearOptimizer", 0);
        }

        void t_LinearOptimizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearOptimizer), "class_", make_descriptor(LinearOptimizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearOptimizer), "wrapfn_", make_descriptor(t_LinearOptimizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearOptimizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearOptimizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearOptimizer::initializeClass, 1)))
            return NULL;
          return t_LinearOptimizer::wrap_Object(LinearOptimizer(((t_LinearOptimizer *) arg)->object.this$));
        }
        static PyObject *t_LinearOptimizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearOptimizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LinearOptimizer_of_(t_LinearOptimizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_LinearOptimizer_optimize(t_LinearOptimizer *self, PyObject *args)
        {
          JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
          ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
          }

          return callSuper(PY_TYPE(LinearOptimizer), (PyObject *) self, "optimize", args, 2);
        }
        static PyObject *t_LinearOptimizer_get__parameters_(t_LinearOptimizer *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
            mids$[mid_init$_4c11e89002512e6b] = env->getMethodID(cls, "<init>", "(DLorg/orekit/frames/Frame;)V");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LenseThirringRelativity::LenseThirringRelativity(jdouble a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c11e89002512e6b, a0, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LenseThirringRelativity::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LenseThirringRelativity::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        jboolean LenseThirringRelativity::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        ::java::util::List LenseThirringRelativity::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
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
#include "org/hipparchus/stat/regression/MillerUpdatingRegression.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *MillerUpdatingRegression::class$ = NULL;
        jmethodID *MillerUpdatingRegression::mids$ = NULL;
        bool MillerUpdatingRegression::live$ = false;

        jclass MillerUpdatingRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/MillerUpdatingRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_34742154de10200a] = env->getMethodID(cls, "<init>", "(IZ)V");
            mids$[mid_init$_2620dfac41107d35] = env->getMethodID(cls, "<init>", "(IZD)V");
            mids$[mid_addObservation_334f245ec9cee46b] = env->getMethodID(cls, "addObservation", "([DD)V");
            mids$[mid_addObservations_8a9d29a6bd2c9070] = env->getMethodID(cls, "addObservations", "([[D[D)V");
            mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getDiagonalOfHatMatrix_b060e4326765ccf1] = env->getMethodID(cls, "getDiagonalOfHatMatrix", "([D)D");
            mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getOrderOfRegressors_4d095d7a08163110] = env->getMethodID(cls, "getOrderOfRegressors", "()[I");
            mids$[mid_getPartialCorrelations_bb2a44a76ad252f7] = env->getMethodID(cls, "getPartialCorrelations", "(I)[D");
            mids$[mid_hasIntercept_9ab94ac1dc23b105] = env->getMethodID(cls, "hasIntercept", "()Z");
            mids$[mid_regress_d38bcfe2c0d5b843] = env->getMethodID(cls, "regress", "()Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_6d4269f398dcfc41] = env->getMethodID(cls, "regress", "([I)Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_c9fc7eba9cd71ebd] = env->getMethodID(cls, "regress", "(I)Lorg/hipparchus/stat/regression/RegressionResults;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MillerUpdatingRegression::MillerUpdatingRegression(jint a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_34742154de10200a, a0, a1)) {}

        MillerUpdatingRegression::MillerUpdatingRegression(jint a0, jboolean a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2620dfac41107d35, a0, a1, a2)) {}

        void MillerUpdatingRegression::addObservation(const JArray< jdouble > & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservation_334f245ec9cee46b], a0.this$, a1);
        }

        void MillerUpdatingRegression::addObservations(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservations_8a9d29a6bd2c9070], a0.this$, a1.this$);
        }

        void MillerUpdatingRegression::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
        }

        jdouble MillerUpdatingRegression::getDiagonalOfHatMatrix(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDiagonalOfHatMatrix_b060e4326765ccf1], a0.this$);
        }

        jlong MillerUpdatingRegression::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
        }

        JArray< jint > MillerUpdatingRegression::getOrderOfRegressors() const
        {
          return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getOrderOfRegressors_4d095d7a08163110]));
        }

        JArray< jdouble > MillerUpdatingRegression::getPartialCorrelations(jint a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPartialCorrelations_bb2a44a76ad252f7], a0));
        }

        jboolean MillerUpdatingRegression::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_9ab94ac1dc23b105]);
        }

        ::org::hipparchus::stat::regression::RegressionResults MillerUpdatingRegression::regress() const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_d38bcfe2c0d5b843]));
        }

        ::org::hipparchus::stat::regression::RegressionResults MillerUpdatingRegression::regress(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_6d4269f398dcfc41], a0.this$));
        }

        ::org::hipparchus::stat::regression::RegressionResults MillerUpdatingRegression::regress(jint a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_c9fc7eba9cd71ebd], a0));
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
        static PyObject *t_MillerUpdatingRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MillerUpdatingRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MillerUpdatingRegression_init_(t_MillerUpdatingRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MillerUpdatingRegression_addObservation(t_MillerUpdatingRegression *self, PyObject *args);
        static PyObject *t_MillerUpdatingRegression_addObservations(t_MillerUpdatingRegression *self, PyObject *args);
        static PyObject *t_MillerUpdatingRegression_clear(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_getDiagonalOfHatMatrix(t_MillerUpdatingRegression *self, PyObject *arg);
        static PyObject *t_MillerUpdatingRegression_getN(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_getOrderOfRegressors(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_getPartialCorrelations(t_MillerUpdatingRegression *self, PyObject *arg);
        static PyObject *t_MillerUpdatingRegression_hasIntercept(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_regress(t_MillerUpdatingRegression *self, PyObject *args);
        static PyObject *t_MillerUpdatingRegression_get__n(t_MillerUpdatingRegression *self, void *data);
        static PyObject *t_MillerUpdatingRegression_get__orderOfRegressors(t_MillerUpdatingRegression *self, void *data);
        static PyGetSetDef t_MillerUpdatingRegression__fields_[] = {
          DECLARE_GET_FIELD(t_MillerUpdatingRegression, n),
          DECLARE_GET_FIELD(t_MillerUpdatingRegression, orderOfRegressors),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MillerUpdatingRegression__methods_[] = {
          DECLARE_METHOD(t_MillerUpdatingRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MillerUpdatingRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MillerUpdatingRegression, addObservation, METH_VARARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, addObservations, METH_VARARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, clear, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, getDiagonalOfHatMatrix, METH_O),
          DECLARE_METHOD(t_MillerUpdatingRegression, getN, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, getOrderOfRegressors, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, getPartialCorrelations, METH_O),
          DECLARE_METHOD(t_MillerUpdatingRegression, hasIntercept, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, regress, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MillerUpdatingRegression)[] = {
          { Py_tp_methods, t_MillerUpdatingRegression__methods_ },
          { Py_tp_init, (void *) t_MillerUpdatingRegression_init_ },
          { Py_tp_getset, t_MillerUpdatingRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MillerUpdatingRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MillerUpdatingRegression, t_MillerUpdatingRegression, MillerUpdatingRegression);

        void t_MillerUpdatingRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(MillerUpdatingRegression), &PY_TYPE_DEF(MillerUpdatingRegression), module, "MillerUpdatingRegression", 0);
        }

        void t_MillerUpdatingRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MillerUpdatingRegression), "class_", make_descriptor(MillerUpdatingRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MillerUpdatingRegression), "wrapfn_", make_descriptor(t_MillerUpdatingRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MillerUpdatingRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MillerUpdatingRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MillerUpdatingRegression::initializeClass, 1)))
            return NULL;
          return t_MillerUpdatingRegression::wrap_Object(MillerUpdatingRegression(((t_MillerUpdatingRegression *) arg)->object.this$));
        }
        static PyObject *t_MillerUpdatingRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MillerUpdatingRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MillerUpdatingRegression_init_(t_MillerUpdatingRegression *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jboolean a1;
              MillerUpdatingRegression object((jobject) NULL);

              if (!parseArgs(args, "IZ", &a0, &a1))
              {
                INT_CALL(object = MillerUpdatingRegression(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jint a0;
              jboolean a1;
              jdouble a2;
              MillerUpdatingRegression object((jobject) NULL);

              if (!parseArgs(args, "IZD", &a0, &a1, &a2))
              {
                INT_CALL(object = MillerUpdatingRegression(a0, a1, a2));
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

        static PyObject *t_MillerUpdatingRegression_addObservation(t_MillerUpdatingRegression *self, PyObject *args)
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

        static PyObject *t_MillerUpdatingRegression_addObservations(t_MillerUpdatingRegression *self, PyObject *args)
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

        static PyObject *t_MillerUpdatingRegression_clear(t_MillerUpdatingRegression *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_MillerUpdatingRegression_getDiagonalOfHatMatrix(t_MillerUpdatingRegression *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.getDiagonalOfHatMatrix(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDiagonalOfHatMatrix", arg);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_getN(t_MillerUpdatingRegression *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_MillerUpdatingRegression_getOrderOfRegressors(t_MillerUpdatingRegression *self)
        {
          JArray< jint > result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrderOfRegressors());
          return result.wrap();
        }

        static PyObject *t_MillerUpdatingRegression_getPartialCorrelations(t_MillerUpdatingRegression *self, PyObject *arg)
        {
          jint a0;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialCorrelations(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialCorrelations", arg);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_hasIntercept(t_MillerUpdatingRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_MillerUpdatingRegression_regress(t_MillerUpdatingRegression *self, PyObject *args)
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
            {
              jint a0;
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "regress", args);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_get__n(t_MillerUpdatingRegression *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_MillerUpdatingRegression_get__orderOfRegressors(t_MillerUpdatingRegression *self, void *data)
        {
          JArray< jint > value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrderOfRegressors());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Ceil.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Ceil::class$ = NULL;
        jmethodID *Ceil::mids$ = NULL;
        bool Ceil::live$ = false;

        jclass Ceil::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Ceil");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Ceil::Ceil() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Ceil::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Ceil::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
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
        static PyObject *t_Ceil_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Ceil_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Ceil_init_(t_Ceil *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Ceil_value(t_Ceil *self, PyObject *args);

        static PyMethodDef t_Ceil__methods_[] = {
          DECLARE_METHOD(t_Ceil, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ceil, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ceil, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Ceil)[] = {
          { Py_tp_methods, t_Ceil__methods_ },
          { Py_tp_init, (void *) t_Ceil_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Ceil)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Ceil, t_Ceil, Ceil);

        void t_Ceil::install(PyObject *module)
        {
          installType(&PY_TYPE(Ceil), &PY_TYPE_DEF(Ceil), module, "Ceil", 0);
        }

        void t_Ceil::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ceil), "class_", make_descriptor(Ceil::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ceil), "wrapfn_", make_descriptor(t_Ceil::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ceil), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Ceil_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Ceil::initializeClass, 1)))
            return NULL;
          return t_Ceil::wrap_Object(Ceil(((t_Ceil *) arg)->object.this$));
        }
        static PyObject *t_Ceil_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Ceil::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Ceil_init_(t_Ceil *self, PyObject *args, PyObject *kwds)
        {
          Ceil object((jobject) NULL);

          INT_CALL(object = Ceil());
          self->object = object;

          return 0;
        }

        static PyObject *t_Ceil_value(t_Ceil *self, PyObject *args)
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
#include "org/orekit/estimation/leastsquares/DSSTBatchLSModel.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *DSSTBatchLSModel::class$ = NULL;
        jmethodID *DSSTBatchLSModel::mids$ = NULL;
        bool DSSTBatchLSModel::live$ = false;

        jclass DSSTBatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/DSSTBatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10a1e041259ccdae] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_configureHarvester_dafc362fdc9e50eb] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_3575848f266bfbed] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DSSTBatchLSModel::DSSTBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->newObject(initializeClass, &mids$, mid_init$_10a1e041259ccdae, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
        static PyObject *t_DSSTBatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSSTBatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DSSTBatchLSModel_init_(t_DSSTBatchLSModel *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_DSSTBatchLSModel__methods_[] = {
          DECLARE_METHOD(t_DSSTBatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSSTBatchLSModel, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSSTBatchLSModel)[] = {
          { Py_tp_methods, t_DSSTBatchLSModel__methods_ },
          { Py_tp_init, (void *) t_DSSTBatchLSModel_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSSTBatchLSModel)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::AbstractBatchLSModel),
          NULL
        };

        DEFINE_TYPE(DSSTBatchLSModel, t_DSSTBatchLSModel, DSSTBatchLSModel);

        void t_DSSTBatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(DSSTBatchLSModel), &PY_TYPE_DEF(DSSTBatchLSModel), module, "DSSTBatchLSModel", 0);
        }

        void t_DSSTBatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTBatchLSModel), "class_", make_descriptor(DSSTBatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTBatchLSModel), "wrapfn_", make_descriptor(t_DSSTBatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTBatchLSModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSSTBatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSSTBatchLSModel::initializeClass, 1)))
            return NULL;
          return t_DSSTBatchLSModel::wrap_Object(DSSTBatchLSModel(((t_DSSTBatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_DSSTBatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSSTBatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DSSTBatchLSModel_init_(t_DSSTBatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::propagation::PropagationType a4((jobject) NULL);
          PyTypeObject **p4;
          DSSTBatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkkK", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            INT_CALL(object = DSSTBatchLSModel(a0, a1, a2, a3, a4));
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
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_acceptComments_9ab94ac1dc23b105] = env->getMethodID(cls, "acceptComments", "()Z");
              mids$[mid_addComment_cde6b28e15c96b75] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)Z");
              mids$[mid_checkAllowed_62d478fa88e6e695] = env->getMethodID(cls, "checkAllowed", "(DLjava/lang/Object;Ljava/lang/String;DD)V");
              mids$[mid_checkNotNaN_e870be4439f1c3c6] = env->getMethodID(cls, "checkNotNaN", "(DLjava/lang/String;)V");
              mids$[mid_checkNotNegative_5817b937d38eafc1] = env->getMethodID(cls, "checkNotNegative", "(ILjava/lang/String;)V");
              mids$[mid_checkNotNull_337032593daab958] = env->getMethodID(cls, "checkNotNull", "(Ljava/lang/Object;Ljava/lang/String;)V");
              mids$[mid_getComments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
              mids$[mid_refuseFurtherComments_a1fa5dae97ea5ed2] = env->getMethodID(cls, "refuseFurtherComments", "()V");
              mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CommentsContainer::CommentsContainer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          jboolean CommentsContainer::acceptComments() const
          {
            return env->callBooleanMethod(this$, mids$[mid_acceptComments_9ab94ac1dc23b105]);
          }

          jboolean CommentsContainer::addComment(const ::java::lang::String & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_addComment_cde6b28e15c96b75], a0.this$);
          }

          void CommentsContainer::checkAllowed(jdouble a0, const ::java::lang::Object & a1, const ::java::lang::String & a2, jdouble a3, jdouble a4) const
          {
            env->callVoidMethod(this$, mids$[mid_checkAllowed_62d478fa88e6e695], a0, a1.this$, a2.this$, a3, a4);
          }

          void CommentsContainer::checkNotNaN(jdouble a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_checkNotNaN_e870be4439f1c3c6], a0, a1.this$);
          }

          void CommentsContainer::checkNotNegative(jint a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_checkNotNegative_5817b937d38eafc1], a0, a1.this$);
          }

          void CommentsContainer::checkNotNull(const ::java::lang::Object & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_checkNotNull_337032593daab958], a0.this$, a1.this$);
          }

          ::java::util::List CommentsContainer::getComments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_e62d3bb06d56d7e3]));
          }

          void CommentsContainer::refuseFurtherComments() const
          {
            env->callVoidMethod(this$, mids$[mid_refuseFurtherComments_a1fa5dae97ea5ed2]);
          }

          void CommentsContainer::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/util/List.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *Aem::class$ = NULL;
              jmethodID *Aem::mids$ = NULL;
              bool Aem::live$ = false;
              ::java::lang::String *Aem::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Aem::ROOT = NULL;

              jclass Aem::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/Aem");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9603b9963356e980] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getSatellites_810bed48fafb0b9a] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Aem::Aem(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_9603b9963356e980, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map Aem::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_810bed48fafb0b9a]));
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
              static PyObject *t_Aem_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Aem_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Aem_of_(t_Aem *self, PyObject *args);
              static int t_Aem_init_(t_Aem *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Aem_getSatellites(t_Aem *self);
              static PyObject *t_Aem_get__satellites(t_Aem *self, void *data);
              static PyObject *t_Aem_get__parameters_(t_Aem *self, void *data);
              static PyGetSetDef t_Aem__fields_[] = {
                DECLARE_GET_FIELD(t_Aem, satellites),
                DECLARE_GET_FIELD(t_Aem, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Aem__methods_[] = {
                DECLARE_METHOD(t_Aem, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Aem, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Aem, of_, METH_VARARGS),
                DECLARE_METHOD(t_Aem, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Aem)[] = {
                { Py_tp_methods, t_Aem__methods_ },
                { Py_tp_init, (void *) t_Aem_init_ },
                { Py_tp_getset, t_Aem__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Aem)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Aem, t_Aem, Aem);
              PyObject *t_Aem::wrap_Object(const Aem& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Aem::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Aem *self = (t_Aem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Aem::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Aem::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Aem *self = (t_Aem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Aem::install(PyObject *module)
              {
                installType(&PY_TYPE(Aem), &PY_TYPE_DEF(Aem), module, "Aem", 0);
              }

              void t_Aem::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "class_", make_descriptor(Aem::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "wrapfn_", make_descriptor(t_Aem::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "boxfn_", make_descriptor(boxObject));
                env->getClass(Aem::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Aem::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "ROOT", make_descriptor(j2p(*Aem::ROOT)));
              }

              static PyObject *t_Aem_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Aem::initializeClass, 1)))
                  return NULL;
                return t_Aem::wrap_Object(Aem(((t_Aem *) arg)->object.this$));
              }
              static PyObject *t_Aem_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Aem::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Aem_of_(t_Aem *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Aem_init_(t_Aem *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Aem object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Aem(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSegment);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Aem_getSatellites(t_Aem *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSatelliteEphemeris));
              }
              static PyObject *t_Aem_get__parameters_(t_Aem *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Aem_get__satellites(t_Aem *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
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
#include "org/orekit/forces/drag/PythonDragSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *PythonDragSensitive::class$ = NULL;
        jmethodID *PythonDragSensitive::mids$ = NULL;
        bool PythonDragSensitive::live$ = false;

        jclass PythonDragSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/PythonDragSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_dragAcceleration_c95e6c4bf4979a1a] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dragAcceleration_7a2b875d7cdeb947] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDragParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonDragSensitive::PythonDragSensitive() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonDragSensitive::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonDragSensitive::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonDragSensitive::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonDragSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonDragSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonDragSensitive_init_(t_PythonDragSensitive *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonDragSensitive_finalize(t_PythonDragSensitive *self);
        static PyObject *t_PythonDragSensitive_pythonExtension(t_PythonDragSensitive *self, PyObject *args);
        static jobject JNICALL t_PythonDragSensitive_dragAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonDragSensitive_dragAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonDragSensitive_getDragParametersDrivers2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonDragSensitive_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonDragSensitive_get__self(t_PythonDragSensitive *self, void *data);
        static PyGetSetDef t_PythonDragSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_PythonDragSensitive, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonDragSensitive__methods_[] = {
          DECLARE_METHOD(t_PythonDragSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonDragSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonDragSensitive, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonDragSensitive, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonDragSensitive)[] = {
          { Py_tp_methods, t_PythonDragSensitive__methods_ },
          { Py_tp_init, (void *) t_PythonDragSensitive_init_ },
          { Py_tp_getset, t_PythonDragSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonDragSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonDragSensitive, t_PythonDragSensitive, PythonDragSensitive);

        void t_PythonDragSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonDragSensitive), &PY_TYPE_DEF(PythonDragSensitive), module, "PythonDragSensitive", 1);
        }

        void t_PythonDragSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDragSensitive), "class_", make_descriptor(PythonDragSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDragSensitive), "wrapfn_", make_descriptor(t_PythonDragSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDragSensitive), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonDragSensitive::initializeClass);
          JNINativeMethod methods[] = {
            { "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonDragSensitive_dragAcceleration0 },
            { "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonDragSensitive_dragAcceleration1 },
            { "getDragParametersDrivers", "()Ljava/util/List;", (void *) t_PythonDragSensitive_getDragParametersDrivers2 },
            { "pythonDecRef", "()V", (void *) t_PythonDragSensitive_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonDragSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonDragSensitive::initializeClass, 1)))
            return NULL;
          return t_PythonDragSensitive::wrap_Object(PythonDragSensitive(((t_PythonDragSensitive *) arg)->object.this$));
        }
        static PyObject *t_PythonDragSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonDragSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonDragSensitive_init_(t_PythonDragSensitive *self, PyObject *args, PyObject *kwds)
        {
          PythonDragSensitive object((jobject) NULL);

          INT_CALL(object = PythonDragSensitive());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonDragSensitive_finalize(t_PythonDragSensitive *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonDragSensitive_pythonExtension(t_PythonDragSensitive *self, PyObject *args)
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

        static jobject JNICALL t_PythonDragSensitive_dragAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
          PyObject *o2 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a2));
          PyObject *o3 = JArray<jobject>(a3).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "dragAcceleration", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("dragAcceleration", result);
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

        static jobject JNICALL t_PythonDragSensitive_dragAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o2 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a2));
          PyObject *o3 = JArray<jdouble>(a3).wrap();
          PyObject *result = PyObject_CallMethod(obj, "dragAcceleration", "OdOO", o0, (double) a1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("dragAcceleration", result);
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

        static jobject JNICALL t_PythonDragSensitive_getDragParametersDrivers2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getDragParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getDragParametersDrivers", result);
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

        static void JNICALL t_PythonDragSensitive_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonDragSensitive_get__self(t_PythonDragSensitive *self, void *data)
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
#include "org/orekit/attitudes/PythonGroundPointing.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonGroundPointing::class$ = NULL;
      jmethodID *PythonGroundPointing::mids$ = NULL;
      bool PythonGroundPointing::live$ = false;

      jclass PythonGroundPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonGroundPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c2861e84272185b6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getTargetPV_0c9a6603286e7c6f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_4a6b199bd28f952f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonGroundPointing::PythonGroundPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_c2861e84272185b6, a0.this$, a1.this$)) {}

      void PythonGroundPointing::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonGroundPointing::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonGroundPointing::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonGroundPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonGroundPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonGroundPointing_init_(t_PythonGroundPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonGroundPointing_finalize(t_PythonGroundPointing *self);
      static PyObject *t_PythonGroundPointing_pythonExtension(t_PythonGroundPointing *self, PyObject *args);
      static jobject JNICALL t_PythonGroundPointing_getTargetPV0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonGroundPointing_getTargetPV1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonGroundPointing_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonGroundPointing_get__self(t_PythonGroundPointing *self, void *data);
      static PyGetSetDef t_PythonGroundPointing__fields_[] = {
        DECLARE_GET_FIELD(t_PythonGroundPointing, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonGroundPointing__methods_[] = {
        DECLARE_METHOD(t_PythonGroundPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonGroundPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonGroundPointing, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonGroundPointing, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonGroundPointing)[] = {
        { Py_tp_methods, t_PythonGroundPointing__methods_ },
        { Py_tp_init, (void *) t_PythonGroundPointing_init_ },
        { Py_tp_getset, t_PythonGroundPointing__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonGroundPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(PythonGroundPointing, t_PythonGroundPointing, PythonGroundPointing);

      void t_PythonGroundPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonGroundPointing), &PY_TYPE_DEF(PythonGroundPointing), module, "PythonGroundPointing", 1);
      }

      void t_PythonGroundPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundPointing), "class_", make_descriptor(PythonGroundPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundPointing), "wrapfn_", make_descriptor(t_PythonGroundPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundPointing), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonGroundPointing::initializeClass);
        JNINativeMethod methods[] = {
          { "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonGroundPointing_getTargetPV0 },
          { "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonGroundPointing_getTargetPV1 },
          { "pythonDecRef", "()V", (void *) t_PythonGroundPointing_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonGroundPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonGroundPointing::initializeClass, 1)))
          return NULL;
        return t_PythonGroundPointing::wrap_Object(PythonGroundPointing(((t_PythonGroundPointing *) arg)->object.this$));
      }
      static PyObject *t_PythonGroundPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonGroundPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonGroundPointing_init_(t_PythonGroundPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        PythonGroundPointing object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          INT_CALL(object = PythonGroundPointing(a0, a1));
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

      static PyObject *t_PythonGroundPointing_finalize(t_PythonGroundPointing *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonGroundPointing_pythonExtension(t_PythonGroundPointing *self, PyObject *args)
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

      static jobject JNICALL t_PythonGroundPointing_getTargetPV0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getTargetPV", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getTargetPV", result);
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

      static jobject JNICALL t_PythonGroundPointing_getTargetPV1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getTargetPV", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getTargetPV", result);
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

      static void JNICALL t_PythonGroundPointing_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonGroundPointing_get__self(t_PythonGroundPointing *self, void *data)
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
#include "org/hipparchus/linear/FieldLUDecomposer.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldLUDecomposer::class$ = NULL;
      jmethodID *FieldLUDecomposer::mids$ = NULL;
      bool FieldLUDecomposer::live$ = false;

      jclass FieldLUDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldLUDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_decompose_b399fec7c31dfc95] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldDecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldLUDecomposer::decompose(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_b399fec7c31dfc95], a0.this$));
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
      static PyObject *t_FieldLUDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposer_of_(t_FieldLUDecomposer *self, PyObject *args);
      static PyObject *t_FieldLUDecomposer_decompose(t_FieldLUDecomposer *self, PyObject *arg);
      static PyObject *t_FieldLUDecomposer_get__parameters_(t_FieldLUDecomposer *self, void *data);
      static PyGetSetDef t_FieldLUDecomposer__fields_[] = {
        DECLARE_GET_FIELD(t_FieldLUDecomposer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldLUDecomposer__methods_[] = {
        DECLARE_METHOD(t_FieldLUDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposer, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldLUDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldLUDecomposer)[] = {
        { Py_tp_methods, t_FieldLUDecomposer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldLUDecomposer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldLUDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldLUDecomposer, t_FieldLUDecomposer, FieldLUDecomposer);
      PyObject *t_FieldLUDecomposer::wrap_Object(const FieldLUDecomposer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposer *self = (t_FieldLUDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldLUDecomposer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposer *self = (t_FieldLUDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldLUDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldLUDecomposer), &PY_TYPE_DEF(FieldLUDecomposer), module, "FieldLUDecomposer", 0);
      }

      void t_FieldLUDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposer), "class_", make_descriptor(FieldLUDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposer), "wrapfn_", make_descriptor(t_FieldLUDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldLUDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldLUDecomposer::initializeClass, 1)))
          return NULL;
        return t_FieldLUDecomposer::wrap_Object(FieldLUDecomposer(((t_FieldLUDecomposer *) arg)->object.this$));
      }
      static PyObject *t_FieldLUDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldLUDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldLUDecomposer_of_(t_FieldLUDecomposer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldLUDecomposer_decompose(t_FieldLUDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
      static PyObject *t_FieldLUDecomposer_get__parameters_(t_FieldLUDecomposer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/OneWayGNSSPhaseBuilder.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *OneWayGNSSPhaseBuilder::class$ = NULL;
          jmethodID *OneWayGNSSPhaseBuilder::mids$ = NULL;
          bool OneWayGNSSPhaseBuilder::live$ = false;

          jclass OneWayGNSSPhaseBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/OneWayGNSSPhaseBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_build_29252f083e0782b7] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/OneWayGNSSPhase;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::OneWayGNSSPhase OneWayGNSSPhaseBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::OneWayGNSSPhase(env->callObjectMethod(this$, mids$[mid_build_29252f083e0782b7], a0.this$, a1.this$));
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
          static PyObject *t_OneWayGNSSPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseBuilder_of_(t_OneWayGNSSPhaseBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSPhaseBuilder_build(t_OneWayGNSSPhaseBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSPhaseBuilder_get__parameters_(t_OneWayGNSSPhaseBuilder *self, void *data);
          static PyGetSetDef t_OneWayGNSSPhaseBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSPhaseBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSPhaseBuilder__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSPhaseBuilder)[] = {
            { Py_tp_methods, t_OneWayGNSSPhaseBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OneWayGNSSPhaseBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSPhaseBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSPhaseBuilder, t_OneWayGNSSPhaseBuilder, OneWayGNSSPhaseBuilder);
          PyObject *t_OneWayGNSSPhaseBuilder::wrap_Object(const OneWayGNSSPhaseBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhaseBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhaseBuilder *self = (t_OneWayGNSSPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSPhaseBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhaseBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhaseBuilder *self = (t_OneWayGNSSPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSPhaseBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSPhaseBuilder), &PY_TYPE_DEF(OneWayGNSSPhaseBuilder), module, "OneWayGNSSPhaseBuilder", 0);
          }

          void t_OneWayGNSSPhaseBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseBuilder), "class_", make_descriptor(OneWayGNSSPhaseBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseBuilder), "wrapfn_", make_descriptor(t_OneWayGNSSPhaseBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OneWayGNSSPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSPhaseBuilder::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSPhaseBuilder::wrap_Object(OneWayGNSSPhaseBuilder(((t_OneWayGNSSPhaseBuilder *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSPhaseBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSPhaseBuilder_of_(t_OneWayGNSSPhaseBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OneWayGNSSPhaseBuilder_build(t_OneWayGNSSPhaseBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::OneWayGNSSPhase result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_OneWayGNSSPhase::wrap_Object(result);
            }

            return callSuper(PY_TYPE(OneWayGNSSPhaseBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_OneWayGNSSPhaseBuilder_get__parameters_(t_OneWayGNSSPhaseBuilder *self, void *data)
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
          mids$[mid_getRefraction_04fd0666b613d2ab] = env->getMethodID(cls, "getRefraction", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble AtmosphericRefractionModel::getRefraction(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRefraction_04fd0666b613d2ab], a0);
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
#include "org/hipparchus/distribution/discrete/UniformIntegerDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *UniformIntegerDistribution::class$ = NULL;
        jmethodID *UniformIntegerDistribution::mids$ = NULL;
        bool UniformIntegerDistribution::live$ = false;

        jclass UniformIntegerDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/UniformIntegerDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_cumulativeProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_probability_2afcbc21f4e57ab2] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UniformIntegerDistribution::UniformIntegerDistribution(jint a0, jint a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

        jdouble UniformIntegerDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_2afcbc21f4e57ab2], a0);
        }

        jdouble UniformIntegerDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble UniformIntegerDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jint UniformIntegerDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_55546ef6a647f39b]);
        }

        jint UniformIntegerDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_55546ef6a647f39b]);
        }

        jboolean UniformIntegerDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble UniformIntegerDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_2afcbc21f4e57ab2], a0);
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
      namespace discrete {
        static PyObject *t_UniformIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UniformIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UniformIntegerDistribution_init_(t_UniformIntegerDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UniformIntegerDistribution_cumulativeProbability(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getNumericalMean(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getNumericalVariance(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getSupportLowerBound(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getSupportUpperBound(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_isSupportConnected(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_probability(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_get__numericalMean(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__numericalVariance(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__supportConnected(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__supportLowerBound(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__supportUpperBound(t_UniformIntegerDistribution *self, void *data);
        static PyGetSetDef t_UniformIntegerDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, numericalMean),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, supportConnected),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UniformIntegerDistribution__methods_[] = {
          DECLARE_METHOD(t_UniformIntegerDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformIntegerDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformIntegerDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UniformIntegerDistribution)[] = {
          { Py_tp_methods, t_UniformIntegerDistribution__methods_ },
          { Py_tp_init, (void *) t_UniformIntegerDistribution_init_ },
          { Py_tp_getset, t_UniformIntegerDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UniformIntegerDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(UniformIntegerDistribution, t_UniformIntegerDistribution, UniformIntegerDistribution);

        void t_UniformIntegerDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(UniformIntegerDistribution), &PY_TYPE_DEF(UniformIntegerDistribution), module, "UniformIntegerDistribution", 0);
        }

        void t_UniformIntegerDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformIntegerDistribution), "class_", make_descriptor(UniformIntegerDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformIntegerDistribution), "wrapfn_", make_descriptor(t_UniformIntegerDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformIntegerDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UniformIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UniformIntegerDistribution::initializeClass, 1)))
            return NULL;
          return t_UniformIntegerDistribution::wrap_Object(UniformIntegerDistribution(((t_UniformIntegerDistribution *) arg)->object.this$));
        }
        static PyObject *t_UniformIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UniformIntegerDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UniformIntegerDistribution_init_(t_UniformIntegerDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          UniformIntegerDistribution object((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            INT_CALL(object = UniformIntegerDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UniformIntegerDistribution_cumulativeProbability(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getNumericalMean(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getNumericalVariance(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getSupportLowerBound(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getSupportUpperBound(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_isSupportConnected(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_probability(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_get__numericalMean(t_UniformIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformIntegerDistribution_get__numericalVariance(t_UniformIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformIntegerDistribution_get__supportConnected(t_UniformIntegerDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_UniformIntegerDistribution_get__supportLowerBound(t_UniformIntegerDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UniformIntegerDistribution_get__supportUpperBound(t_UniformIntegerDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DecompositionSolver::class$ = NULL;
      jmethodID *DecompositionSolver::mids$ = NULL;
      bool DecompositionSolver::live$ = false;

      jclass DecompositionSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DecompositionSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_55546ef6a647f39b] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getInverse_f77d745f2128c391] = env->getMethodID(cls, "getInverse", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRowDimension_55546ef6a647f39b] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isNonSingular_9ab94ac1dc23b105] = env->getMethodID(cls, "isNonSingular", "()Z");
          mids$[mid_solve_d5f1d017fd25113b] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_be124f4006dc9f69] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint DecompositionSolver::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::RealMatrix DecompositionSolver::getInverse() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInverse_f77d745f2128c391]));
      }

      jint DecompositionSolver::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_55546ef6a647f39b]);
      }

      jboolean DecompositionSolver::isNonSingular() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNonSingular_9ab94ac1dc23b105]);
      }

      ::org::hipparchus::linear::RealVector DecompositionSolver::solve(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_d5f1d017fd25113b], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DecompositionSolver::solve(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_solve_be124f4006dc9f69], a0.this$));
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
      static PyObject *t_DecompositionSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DecompositionSolver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DecompositionSolver_getColumnDimension(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_getInverse(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_getRowDimension(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_isNonSingular(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_solve(t_DecompositionSolver *self, PyObject *args);
      static PyObject *t_DecompositionSolver_get__columnDimension(t_DecompositionSolver *self, void *data);
      static PyObject *t_DecompositionSolver_get__inverse(t_DecompositionSolver *self, void *data);
      static PyObject *t_DecompositionSolver_get__nonSingular(t_DecompositionSolver *self, void *data);
      static PyObject *t_DecompositionSolver_get__rowDimension(t_DecompositionSolver *self, void *data);
      static PyGetSetDef t_DecompositionSolver__fields_[] = {
        DECLARE_GET_FIELD(t_DecompositionSolver, columnDimension),
        DECLARE_GET_FIELD(t_DecompositionSolver, inverse),
        DECLARE_GET_FIELD(t_DecompositionSolver, nonSingular),
        DECLARE_GET_FIELD(t_DecompositionSolver, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DecompositionSolver__methods_[] = {
        DECLARE_METHOD(t_DecompositionSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DecompositionSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DecompositionSolver, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, isNonSingular, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, solve, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DecompositionSolver)[] = {
        { Py_tp_methods, t_DecompositionSolver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DecompositionSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DecompositionSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DecompositionSolver, t_DecompositionSolver, DecompositionSolver);

      void t_DecompositionSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(DecompositionSolver), &PY_TYPE_DEF(DecompositionSolver), module, "DecompositionSolver", 0);
      }

      void t_DecompositionSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DecompositionSolver), "class_", make_descriptor(DecompositionSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DecompositionSolver), "wrapfn_", make_descriptor(t_DecompositionSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DecompositionSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DecompositionSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DecompositionSolver::initializeClass, 1)))
          return NULL;
        return t_DecompositionSolver::wrap_Object(DecompositionSolver(((t_DecompositionSolver *) arg)->object.this$));
      }
      static PyObject *t_DecompositionSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DecompositionSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DecompositionSolver_getColumnDimension(t_DecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DecompositionSolver_getInverse(t_DecompositionSolver *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_DecompositionSolver_getRowDimension(t_DecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DecompositionSolver_isNonSingular(t_DecompositionSolver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNonSingular());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_DecompositionSolver_solve(t_DecompositionSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "solve", args);
        return NULL;
      }

      static PyObject *t_DecompositionSolver_get__columnDimension(t_DecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DecompositionSolver_get__inverse(t_DecompositionSolver *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_DecompositionSolver_get__nonSingular(t_DecompositionSolver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNonSingular());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_DecompositionSolver_get__rowDimension(t_DecompositionSolver *self, void *data)
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
#include "org/orekit/rugged/adjustment/GroundOptimizationProblemBuilder.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "java/util/List.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *GroundOptimizationProblemBuilder::class$ = NULL;
        jmethodID *GroundOptimizationProblemBuilder::mids$ = NULL;
        bool GroundOptimizationProblemBuilder::live$ = false;

        jclass GroundOptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/GroundOptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_429e2d2ce7e91e3c] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/rugged/adjustment/measurements/Observables;Lorg/orekit/rugged/api/Rugged;)V");
            mids$[mid_build_6f03ef14ae36f9b3] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_createTargetAndWeight_a1fa5dae97ea5ed2] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_initMapping_a1fa5dae97ea5ed2] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_createFunction_6a20d4ddc607b9bb] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundOptimizationProblemBuilder::GroundOptimizationProblemBuilder(const ::java::util::List & a0, const ::org::orekit::rugged::adjustment::measurements::Observables & a1, const ::org::orekit::rugged::api::Rugged & a2) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(env->newObject(initializeClass, &mids$, mid_init$_429e2d2ce7e91e3c, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem GroundOptimizationProblemBuilder::build(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_6f03ef14ae36f9b3], a0, a1));
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
      namespace adjustment {
        static PyObject *t_GroundOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundOptimizationProblemBuilder_init_(t_GroundOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundOptimizationProblemBuilder_build(t_GroundOptimizationProblemBuilder *self, PyObject *args);

        static PyMethodDef t_GroundOptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_GroundOptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundOptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundOptimizationProblemBuilder, build, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundOptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_GroundOptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) t_GroundOptimizationProblemBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundOptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::adjustment::OptimizationProblemBuilder),
          NULL
        };

        DEFINE_TYPE(GroundOptimizationProblemBuilder, t_GroundOptimizationProblemBuilder, GroundOptimizationProblemBuilder);

        void t_GroundOptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundOptimizationProblemBuilder), &PY_TYPE_DEF(GroundOptimizationProblemBuilder), module, "GroundOptimizationProblemBuilder", 0);
        }

        void t_GroundOptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundOptimizationProblemBuilder), "class_", make_descriptor(GroundOptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundOptimizationProblemBuilder), "wrapfn_", make_descriptor(t_GroundOptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundOptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundOptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_GroundOptimizationProblemBuilder::wrap_Object(GroundOptimizationProblemBuilder(((t_GroundOptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_GroundOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundOptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundOptimizationProblemBuilder_init_(t_GroundOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::adjustment::measurements::Observables a1((jobject) NULL);
          ::org::orekit::rugged::api::Rugged a2((jobject) NULL);
          GroundOptimizationProblemBuilder object((jobject) NULL);

          if (!parseArgs(args, "Kkk", ::java::util::List::initializeClass, ::org::orekit::rugged::adjustment::measurements::Observables::initializeClass, ::org::orekit::rugged::api::Rugged::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
          {
            INT_CALL(object = GroundOptimizationProblemBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundOptimizationProblemBuilder_build(t_GroundOptimizationProblemBuilder *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.build(a0, a1));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
          }

          return callSuper(PY_TYPE(GroundOptimizationProblemBuilder), (PyObject *) self, "build", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/PythonSBASOrbitalElements.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *PythonSBASOrbitalElements::class$ = NULL;
            jmethodID *PythonSBASOrbitalElements::mids$ = NULL;
            bool PythonSBASOrbitalElements::live$ = false;

            jclass PythonSBASOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/PythonSBASOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getAGf0_b74f83833fdad017] = env->getMethodID(cls, "getAGf0", "()D");
                mids$[mid_getAGf1_b74f83833fdad017] = env->getMethodID(cls, "getAGf1", "()D");
                mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getIODN_55546ef6a647f39b] = env->getMethodID(cls, "getIODN", "()I");
                mids$[mid_getPRN_55546ef6a647f39b] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getTime_b74f83833fdad017] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getToc_b74f83833fdad017] = env->getMethodID(cls, "getToc", "()D");
                mids$[mid_getWeek_55546ef6a647f39b] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_getX_b74f83833fdad017] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_b74f83833fdad017] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_b74f83833fdad017] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_b74f83833fdad017] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_b74f83833fdad017] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_b74f83833fdad017] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_b74f83833fdad017] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_b74f83833fdad017] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_b74f83833fdad017] = env->getMethodID(cls, "getZDotDot", "()D");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonSBASOrbitalElements::PythonSBASOrbitalElements() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonSBASOrbitalElements::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonSBASOrbitalElements::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonSBASOrbitalElements::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
            static PyObject *t_PythonSBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonSBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonSBASOrbitalElements_init_(t_PythonSBASOrbitalElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonSBASOrbitalElements_finalize(t_PythonSBASOrbitalElements *self);
            static PyObject *t_PythonSBASOrbitalElements_pythonExtension(t_PythonSBASOrbitalElements *self, PyObject *args);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf00(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf11(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonSBASOrbitalElements_getDate2(JNIEnv *jenv, jobject jobj);
            static jint JNICALL t_PythonSBASOrbitalElements_getIODN3(JNIEnv *jenv, jobject jobj);
            static jint JNICALL t_PythonSBASOrbitalElements_getPRN4(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getTime5(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getToc6(JNIEnv *jenv, jobject jobj);
            static jint JNICALL t_PythonSBASOrbitalElements_getWeek7(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getX8(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDot9(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDotDot10(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getY11(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDot12(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDotDot13(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getZ14(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDot15(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDotDot16(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonSBASOrbitalElements_pythonDecRef17(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonSBASOrbitalElements_get__self(t_PythonSBASOrbitalElements *self, void *data);
            static PyGetSetDef t_PythonSBASOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_PythonSBASOrbitalElements, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonSBASOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_PythonSBASOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonSBASOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonSBASOrbitalElements, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonSBASOrbitalElements, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonSBASOrbitalElements)[] = {
              { Py_tp_methods, t_PythonSBASOrbitalElements__methods_ },
              { Py_tp_init, (void *) t_PythonSBASOrbitalElements_init_ },
              { Py_tp_getset, t_PythonSBASOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonSBASOrbitalElements)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonSBASOrbitalElements, t_PythonSBASOrbitalElements, PythonSBASOrbitalElements);

            void t_PythonSBASOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonSBASOrbitalElements), &PY_TYPE_DEF(PythonSBASOrbitalElements), module, "PythonSBASOrbitalElements", 1);
            }

            void t_PythonSBASOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSBASOrbitalElements), "class_", make_descriptor(PythonSBASOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSBASOrbitalElements), "wrapfn_", make_descriptor(t_PythonSBASOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSBASOrbitalElements), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonSBASOrbitalElements::initializeClass);
              JNINativeMethod methods[] = {
                { "getAGf0", "()D", (void *) t_PythonSBASOrbitalElements_getAGf00 },
                { "getAGf1", "()D", (void *) t_PythonSBASOrbitalElements_getAGf11 },
                { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSBASOrbitalElements_getDate2 },
                { "getIODN", "()I", (void *) t_PythonSBASOrbitalElements_getIODN3 },
                { "getPRN", "()I", (void *) t_PythonSBASOrbitalElements_getPRN4 },
                { "getTime", "()D", (void *) t_PythonSBASOrbitalElements_getTime5 },
                { "getToc", "()D", (void *) t_PythonSBASOrbitalElements_getToc6 },
                { "getWeek", "()I", (void *) t_PythonSBASOrbitalElements_getWeek7 },
                { "getX", "()D", (void *) t_PythonSBASOrbitalElements_getX8 },
                { "getXDot", "()D", (void *) t_PythonSBASOrbitalElements_getXDot9 },
                { "getXDotDot", "()D", (void *) t_PythonSBASOrbitalElements_getXDotDot10 },
                { "getY", "()D", (void *) t_PythonSBASOrbitalElements_getY11 },
                { "getYDot", "()D", (void *) t_PythonSBASOrbitalElements_getYDot12 },
                { "getYDotDot", "()D", (void *) t_PythonSBASOrbitalElements_getYDotDot13 },
                { "getZ", "()D", (void *) t_PythonSBASOrbitalElements_getZ14 },
                { "getZDot", "()D", (void *) t_PythonSBASOrbitalElements_getZDot15 },
                { "getZDotDot", "()D", (void *) t_PythonSBASOrbitalElements_getZDotDot16 },
                { "pythonDecRef", "()V", (void *) t_PythonSBASOrbitalElements_pythonDecRef17 },
              };
              env->registerNatives(cls, methods, 18);
            }

            static PyObject *t_PythonSBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonSBASOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_PythonSBASOrbitalElements::wrap_Object(PythonSBASOrbitalElements(((t_PythonSBASOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_PythonSBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonSBASOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonSBASOrbitalElements_init_(t_PythonSBASOrbitalElements *self, PyObject *args, PyObject *kwds)
            {
              PythonSBASOrbitalElements object((jobject) NULL);

              INT_CALL(object = PythonSBASOrbitalElements());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonSBASOrbitalElements_finalize(t_PythonSBASOrbitalElements *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonSBASOrbitalElements_pythonExtension(t_PythonSBASOrbitalElements *self, PyObject *args)
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

            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf00(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getAGf0", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAGf0", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getAGf1", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAGf1", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jobject JNICALL t_PythonSBASOrbitalElements_getDate2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
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

            static jint JNICALL t_PythonSBASOrbitalElements_getIODN3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jint value;
              PyObject *result = PyObject_CallMethod(obj, "getIODN", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "I", &value))
              {
                throwTypeError("getIODN", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jint) 0;
            }

            static jint JNICALL t_PythonSBASOrbitalElements_getPRN4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jint value;
              PyObject *result = PyObject_CallMethod(obj, "getPRN", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "I", &value))
              {
                throwTypeError("getPRN", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jint) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getTime5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getTime", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getTime", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getToc6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getToc", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getToc", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jint JNICALL t_PythonSBASOrbitalElements_getWeek7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jint value;
              PyObject *result = PyObject_CallMethod(obj, "getWeek", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "I", &value))
              {
                throwTypeError("getWeek", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jint) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getX8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getX", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getX", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDot9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getXDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getXDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDotDot10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getXDotDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getXDotDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getY11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getY", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getY", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDot12(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getYDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getYDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDotDot13(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getYDotDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getYDotDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getZ14(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getZ", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getZ", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDot15(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getZDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getZDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDotDot16(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getZDotDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getZDotDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonSBASOrbitalElements_pythonDecRef17(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonSBASOrbitalElements_get__self(t_PythonSBASOrbitalElements *self, void *data)
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
#include "org/hipparchus/ode/events/AbstractODEDetector.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/AbstractODEDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *AbstractODEDetector::class$ = NULL;
        jmethodID *AbstractODEDetector::mids$ = NULL;
        bool AbstractODEDetector::live$ = false;
        jdouble AbstractODEDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint AbstractODEDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble AbstractODEDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass AbstractODEDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/AbstractODEDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_038ef328b98483a2] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_getHandler_7cbaa83091baafae] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/ODEEventHandler;");
            mids$[mid_getMaxCheckInterval_ba458ca302d83bff] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_18aebf44ec9df73a] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;");
            mids$[mid_init_a7556bd72cab73f1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_isForward_9ab94ac1dc23b105] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_c19703f3603adf39] = env->getMethodID(cls, "withHandler", "(Lorg/hipparchus/ode/events/ODEEventHandler;)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withMaxCheck_468b47e2d78ba8a5] = env->getMethodID(cls, "withMaxCheck", "(D)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withMaxCheck_526235279d3e7b88] = env->getMethodID(cls, "withMaxCheck", "(Lorg/hipparchus/ode/events/AdaptableInterval;)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withMaxIter_08beb84a61e797e0] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withSolver_33dcd86a035ace70] = env->getMethodID(cls, "withSolver", "(Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withThreshold_468b47e2d78ba8a5] = env->getMethodID(cls, "withThreshold", "(D)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_create_93952e9ef79de03b] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/AdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;Lorg/hipparchus/ode/events/ODEEventHandler;)Lorg/hipparchus/ode/events/AbstractODEDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractODEDetector::g(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_038ef328b98483a2], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventHandler AbstractODEDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::ODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_7cbaa83091baafae]));
        }

        ::org::hipparchus::ode::events::AdaptableInterval AbstractODEDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_ba458ca302d83bff]));
        }

        jint AbstractODEDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_55546ef6a647f39b]);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver AbstractODEDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_18aebf44ec9df73a]));
        }

        void AbstractODEDetector::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_a7556bd72cab73f1], a0.this$, a1);
        }

        jboolean AbstractODEDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_9ab94ac1dc23b105]);
        }

        AbstractODEDetector AbstractODEDetector::withHandler(const ::org::hipparchus::ode::events::ODEEventHandler & a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withHandler_c19703f3603adf39], a0.this$));
        }

        AbstractODEDetector AbstractODEDetector::withMaxCheck(jdouble a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_468b47e2d78ba8a5], a0));
        }

        AbstractODEDetector AbstractODEDetector::withMaxCheck(const ::org::hipparchus::ode::events::AdaptableInterval & a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_526235279d3e7b88], a0.this$));
        }

        AbstractODEDetector AbstractODEDetector::withMaxIter(jint a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_08beb84a61e797e0], a0));
        }

        AbstractODEDetector AbstractODEDetector::withSolver(const ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver & a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withSolver_33dcd86a035ace70], a0.this$));
        }

        AbstractODEDetector AbstractODEDetector::withThreshold(jdouble a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_468b47e2d78ba8a5], a0));
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
        static PyObject *t_AbstractODEDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEDetector_of_(t_AbstractODEDetector *self, PyObject *args);
        static PyObject *t_AbstractODEDetector_g(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_getHandler(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_getMaxCheckInterval(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_getMaxIterationCount(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_getSolver(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_init(t_AbstractODEDetector *self, PyObject *args);
        static PyObject *t_AbstractODEDetector_isForward(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_withHandler(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_withMaxCheck(t_AbstractODEDetector *self, PyObject *args);
        static PyObject *t_AbstractODEDetector_withMaxIter(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_withSolver(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_withThreshold(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_get__forward(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__handler(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__maxCheckInterval(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__maxIterationCount(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__solver(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__parameters_(t_AbstractODEDetector *self, void *data);
        static PyGetSetDef t_AbstractODEDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractODEDetector, forward),
          DECLARE_GET_FIELD(t_AbstractODEDetector, handler),
          DECLARE_GET_FIELD(t_AbstractODEDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AbstractODEDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AbstractODEDetector, solver),
          DECLARE_GET_FIELD(t_AbstractODEDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractODEDetector__methods_[] = {
          DECLARE_METHOD(t_AbstractODEDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractODEDetector, g, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_AbstractODEDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, withHandler, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_AbstractODEDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, withSolver, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractODEDetector)[] = {
          { Py_tp_methods, t_AbstractODEDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractODEDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractODEDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractODEDetector, t_AbstractODEDetector, AbstractODEDetector);
        PyObject *t_AbstractODEDetector::wrap_Object(const AbstractODEDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractODEDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractODEDetector *self = (t_AbstractODEDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractODEDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractODEDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractODEDetector *self = (t_AbstractODEDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractODEDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractODEDetector), &PY_TYPE_DEF(AbstractODEDetector), module, "AbstractODEDetector", 0);
        }

        void t_AbstractODEDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "class_", make_descriptor(AbstractODEDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "wrapfn_", make_descriptor(t_AbstractODEDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(AbstractODEDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "DEFAULT_MAXCHECK", make_descriptor(AbstractODEDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "DEFAULT_MAX_ITER", make_descriptor(AbstractODEDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "DEFAULT_THRESHOLD", make_descriptor(AbstractODEDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_AbstractODEDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractODEDetector::initializeClass, 1)))
            return NULL;
          return t_AbstractODEDetector::wrap_Object(AbstractODEDetector(((t_AbstractODEDetector *) arg)->object.this$));
        }
        static PyObject *t_AbstractODEDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractODEDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractODEDetector_of_(t_AbstractODEDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractODEDetector_g(t_AbstractODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_getHandler(t_AbstractODEDetector *self)
        {
          ::org::hipparchus::ode::events::ODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(result);
        }

        static PyObject *t_AbstractODEDetector_getMaxCheckInterval(t_AbstractODEDetector *self)
        {
          ::org::hipparchus::ode::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_AbstractODEDetector_getMaxIterationCount(t_AbstractODEDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractODEDetector_getSolver(t_AbstractODEDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(result, ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction));
        }

        static PyObject *t_AbstractODEDetector_init(t_AbstractODEDetector *self, PyObject *args)
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

        static PyObject *t_AbstractODEDetector_isForward(t_AbstractODEDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEDetector_withHandler(t_AbstractODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::events::ODEEventHandler a0((jobject) NULL);
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEEventHandler::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withMaxCheck(t_AbstractODEDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              AbstractODEDetector result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::ode::events::AdaptableInterval a0((jobject) NULL);
              AbstractODEDetector result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::ode::events::AdaptableInterval::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withMaxIter(t_AbstractODEDetector *self, PyObject *arg)
        {
          jint a0;
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withSolver(t_AbstractODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::parameters_))
          {
            OBJ_CALL(result = self->object.withSolver(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withSolver", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withThreshold(t_AbstractODEDetector *self, PyObject *arg)
        {
          jdouble a0;
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_AbstractODEDetector_get__parameters_(t_AbstractODEDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractODEDetector_get__forward(t_AbstractODEDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractODEDetector_get__handler(t_AbstractODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_AbstractODEDetector_get__maxCheckInterval(t_AbstractODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AbstractODEDetector_get__maxIterationCount(t_AbstractODEDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractODEDetector_get__solver(t_AbstractODEDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeModifierUtil.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeModifierUtil::class$ = NULL;
          jmethodID *RangeModifierUtil::mids$ = NULL;
          bool RangeModifierUtil::live$ = false;

          jclass RangeModifierUtil::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeModifierUtil");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
          static PyObject *t_RangeModifierUtil_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeModifierUtil_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_RangeModifierUtil__methods_[] = {
            DECLARE_METHOD(t_RangeModifierUtil, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeModifierUtil, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeModifierUtil)[] = {
            { Py_tp_methods, t_RangeModifierUtil__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeModifierUtil)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RangeModifierUtil, t_RangeModifierUtil, RangeModifierUtil);

          void t_RangeModifierUtil::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeModifierUtil), &PY_TYPE_DEF(RangeModifierUtil), module, "RangeModifierUtil", 0);
          }

          void t_RangeModifierUtil::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeModifierUtil), "class_", make_descriptor(RangeModifierUtil::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeModifierUtil), "wrapfn_", make_descriptor(t_RangeModifierUtil::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeModifierUtil), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeModifierUtil_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeModifierUtil::initializeClass, 1)))
              return NULL;
            return t_RangeModifierUtil::wrap_Object(RangeModifierUtil(((t_RangeModifierUtil *) arg)->object.this$));
          }
          static PyObject *t_RangeModifierUtil_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeModifierUtil::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/AbstractIntegerDistribution.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/distribution/IntegerDistribution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *AbstractIntegerDistribution::class$ = NULL;
        jmethodID *AbstractIntegerDistribution::mids$ = NULL;
        bool AbstractIntegerDistribution::live$ = false;

        jclass AbstractIntegerDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/AbstractIntegerDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_inverseCumulativeProbability_2af4736545087009] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)I");
            mids$[mid_logProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_cad98089d00f8a5b] = env->getMethodID(cls, "probability", "(II)D");
            mids$[mid_solveInverseCumulativeProbability_a9fca030171c8f92] = env->getMethodID(cls, "solveInverseCumulativeProbability", "(DII)I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractIntegerDistribution::AbstractIntegerDistribution() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jint AbstractIntegerDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_inverseCumulativeProbability_2af4736545087009], a0);
        }

        jdouble AbstractIntegerDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_2afcbc21f4e57ab2], a0);
        }

        jdouble AbstractIntegerDistribution::probability(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_cad98089d00f8a5b], a0, a1);
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
      namespace discrete {
        static PyObject *t_AbstractIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractIntegerDistribution_init_(t_AbstractIntegerDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractIntegerDistribution_inverseCumulativeProbability(t_AbstractIntegerDistribution *self, PyObject *arg);
        static PyObject *t_AbstractIntegerDistribution_logProbability(t_AbstractIntegerDistribution *self, PyObject *arg);
        static PyObject *t_AbstractIntegerDistribution_probability(t_AbstractIntegerDistribution *self, PyObject *args);

        static PyMethodDef t_AbstractIntegerDistribution__methods_[] = {
          DECLARE_METHOD(t_AbstractIntegerDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegerDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegerDistribution, inverseCumulativeProbability, METH_O),
          DECLARE_METHOD(t_AbstractIntegerDistribution, logProbability, METH_O),
          DECLARE_METHOD(t_AbstractIntegerDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractIntegerDistribution)[] = {
          { Py_tp_methods, t_AbstractIntegerDistribution__methods_ },
          { Py_tp_init, (void *) t_AbstractIntegerDistribution_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractIntegerDistribution)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractIntegerDistribution, t_AbstractIntegerDistribution, AbstractIntegerDistribution);

        void t_AbstractIntegerDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractIntegerDistribution), &PY_TYPE_DEF(AbstractIntegerDistribution), module, "AbstractIntegerDistribution", 0);
        }

        void t_AbstractIntegerDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegerDistribution), "class_", make_descriptor(AbstractIntegerDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegerDistribution), "wrapfn_", make_descriptor(t_AbstractIntegerDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegerDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractIntegerDistribution::initializeClass, 1)))
            return NULL;
          return t_AbstractIntegerDistribution::wrap_Object(AbstractIntegerDistribution(((t_AbstractIntegerDistribution *) arg)->object.this$));
        }
        static PyObject *t_AbstractIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractIntegerDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractIntegerDistribution_init_(t_AbstractIntegerDistribution *self, PyObject *args, PyObject *kwds)
        {
          AbstractIntegerDistribution object((jobject) NULL);

          INT_CALL(object = AbstractIntegerDistribution());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractIntegerDistribution_inverseCumulativeProbability(t_AbstractIntegerDistribution *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegerDistribution_logProbability(t_AbstractIntegerDistribution *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "logProbability", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegerDistribution_probability(t_AbstractIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "probability", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GNSSClockElements::class$ = NULL;
            jmethodID *GNSSClockElements::mids$ = NULL;
            bool GNSSClockElements::live$ = false;

            jclass GNSSClockElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GNSSClockElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAf0_b74f83833fdad017] = env->getMethodID(cls, "getAf0", "()D");
                mids$[mid_getAf1_b74f83833fdad017] = env->getMethodID(cls, "getAf1", "()D");
                mids$[mid_getAf2_b74f83833fdad017] = env->getMethodID(cls, "getAf2", "()D");
                mids$[mid_getCycleDuration_b74f83833fdad017] = env->getMethodID(cls, "getCycleDuration", "()D");
                mids$[mid_getTGD_b74f83833fdad017] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getToc_b74f83833fdad017] = env->getMethodID(cls, "getToc", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble GNSSClockElements::getAf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf0_b74f83833fdad017]);
            }

            jdouble GNSSClockElements::getAf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf1_b74f83833fdad017]);
            }

            jdouble GNSSClockElements::getAf2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf2_b74f83833fdad017]);
            }

            jdouble GNSSClockElements::getCycleDuration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCycleDuration_b74f83833fdad017]);
            }

            jdouble GNSSClockElements::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_b74f83833fdad017]);
            }

            jdouble GNSSClockElements::getToc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getToc_b74f83833fdad017]);
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
            static PyObject *t_GNSSClockElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSClockElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSClockElements_getAf0(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getAf1(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getAf2(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getCycleDuration(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getTGD(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getToc(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_get__af0(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__af1(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__af2(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__cycleDuration(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__tGD(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__toc(t_GNSSClockElements *self, void *data);
            static PyGetSetDef t_GNSSClockElements__fields_[] = {
              DECLARE_GET_FIELD(t_GNSSClockElements, af0),
              DECLARE_GET_FIELD(t_GNSSClockElements, af1),
              DECLARE_GET_FIELD(t_GNSSClockElements, af2),
              DECLARE_GET_FIELD(t_GNSSClockElements, cycleDuration),
              DECLARE_GET_FIELD(t_GNSSClockElements, tGD),
              DECLARE_GET_FIELD(t_GNSSClockElements, toc),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GNSSClockElements__methods_[] = {
              DECLARE_METHOD(t_GNSSClockElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSClockElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSClockElements, getAf0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getAf1, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getAf2, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getCycleDuration, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getToc, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GNSSClockElements)[] = {
              { Py_tp_methods, t_GNSSClockElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_GNSSClockElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GNSSClockElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(GNSSClockElements, t_GNSSClockElements, GNSSClockElements);

            void t_GNSSClockElements::install(PyObject *module)
            {
              installType(&PY_TYPE(GNSSClockElements), &PY_TYPE_DEF(GNSSClockElements), module, "GNSSClockElements", 0);
            }

            void t_GNSSClockElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSClockElements), "class_", make_descriptor(GNSSClockElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSClockElements), "wrapfn_", make_descriptor(t_GNSSClockElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSClockElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GNSSClockElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GNSSClockElements::initializeClass, 1)))
                return NULL;
              return t_GNSSClockElements::wrap_Object(GNSSClockElements(((t_GNSSClockElements *) arg)->object.this$));
            }
            static PyObject *t_GNSSClockElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GNSSClockElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_GNSSClockElements_getAf0(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getAf1(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getAf2(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getCycleDuration(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getTGD(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getToc(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getToc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_get__af0(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__af1(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__af2(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__cycleDuration(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__tGD(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__toc(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getToc());
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
#include "org/hipparchus/analysis/interpolation/TrivariateGridInterpolator.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *TrivariateGridInterpolator::class$ = NULL;
        jmethodID *TrivariateGridInterpolator::mids$ = NULL;
        bool TrivariateGridInterpolator::live$ = false;

        jclass TrivariateGridInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/TrivariateGridInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_d9cef4b073b958a1] = env->getMethodID(cls, "interpolate", "([D[D[D[[[D)Lorg/hipparchus/analysis/TrivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::TrivariateFunction TrivariateGridInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< JArray< jdouble > > > & a3) const
        {
          return ::org::hipparchus::analysis::TrivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_d9cef4b073b958a1], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_TrivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TrivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TrivariateGridInterpolator_interpolate(t_TrivariateGridInterpolator *self, PyObject *args);

        static PyMethodDef t_TrivariateGridInterpolator__methods_[] = {
          DECLARE_METHOD(t_TrivariateGridInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TrivariateGridInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TrivariateGridInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TrivariateGridInterpolator)[] = {
          { Py_tp_methods, t_TrivariateGridInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TrivariateGridInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TrivariateGridInterpolator, t_TrivariateGridInterpolator, TrivariateGridInterpolator);

        void t_TrivariateGridInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(TrivariateGridInterpolator), &PY_TYPE_DEF(TrivariateGridInterpolator), module, "TrivariateGridInterpolator", 0);
        }

        void t_TrivariateGridInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateGridInterpolator), "class_", make_descriptor(TrivariateGridInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateGridInterpolator), "wrapfn_", make_descriptor(t_TrivariateGridInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateGridInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TrivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TrivariateGridInterpolator::initializeClass, 1)))
            return NULL;
          return t_TrivariateGridInterpolator::wrap_Object(TrivariateGridInterpolator(((t_TrivariateGridInterpolator *) arg)->object.this$));
        }
        static PyObject *t_TrivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TrivariateGridInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TrivariateGridInterpolator_interpolate(t_TrivariateGridInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
          ::org::hipparchus::analysis::TrivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[D[[[D", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2, a3));
            return ::org::hipparchus::analysis::t_TrivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ITRFVersion$Converter.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersion::class$ = NULL;
      jmethodID *ITRFVersion::mids$ = NULL;
      bool ITRFVersion::live$ = false;
      ITRFVersion *ITRFVersion::ITRF_1988 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1989 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1990 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1991 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1992 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1993 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1994 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1996 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1997 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2000 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2005 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2008 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2014 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2020 = NULL;

      jclass ITRFVersion::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersion");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConverter_ad1e76c5a5e62625] = env->getStaticMethodID(cls, "getConverter", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/frames/ITRFVersion;)Lorg/orekit/frames/ITRFVersion$Converter;");
          mids$[mid_getConverter_3ba4b02a32b22bb8] = env->getStaticMethodID(cls, "getConverter", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/frames/ITRFVersion;Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/ITRFVersion$Converter;");
          mids$[mid_getITRFVersion_031874fbc127eede] = env->getStaticMethodID(cls, "getITRFVersion", "(Ljava/lang/String;)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getITRFVersion_611a84321ee92ece] = env->getStaticMethodID(cls, "getITRFVersion", "(I)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getLast_8bcdfad365f6d36a] = env->getStaticMethodID(cls, "getLast", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getYear_55546ef6a647f39b] = env->getMethodID(cls, "getYear", "()I");
          mids$[mid_valueOf_031874fbc127eede] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_values_764e284abbfef657] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/ITRFVersion;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ITRF_1988 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1988", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1989 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1989", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1990 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1990", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1991 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1991", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1992 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1992", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1993 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1993", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1994 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1994", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1996 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1996", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1997 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1997", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2000 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2000", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2005 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2005", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2008 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2008", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2014 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2014", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2020 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2020", "Lorg/orekit/frames/ITRFVersion;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersion$Converter ITRFVersion::getConverter(const ITRFVersion & a0, const ITRFVersion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::ITRFVersion$Converter(env->callStaticObjectMethod(cls, mids$[mid_getConverter_ad1e76c5a5e62625], a0.this$, a1.this$));
      }

      ::org::orekit::frames::ITRFVersion$Converter ITRFVersion::getConverter(const ITRFVersion & a0, const ITRFVersion & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::ITRFVersion$Converter(env->callStaticObjectMethod(cls, mids$[mid_getConverter_3ba4b02a32b22bb8], a0.this$, a1.this$, a2.this$));
      }

      ITRFVersion ITRFVersion::getITRFVersion(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_getITRFVersion_031874fbc127eede], a0.this$));
      }

      ITRFVersion ITRFVersion::getITRFVersion(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_getITRFVersion_611a84321ee92ece], a0));
      }

      ITRFVersion ITRFVersion::getLast()
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_getLast_8bcdfad365f6d36a]));
      }

      ::java::lang::String ITRFVersion::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jint ITRFVersion::getYear() const
      {
        return env->callIntMethod(this$, mids$[mid_getYear_55546ef6a647f39b]);
      }

      ITRFVersion ITRFVersion::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_valueOf_031874fbc127eede], a0.this$));
      }

      JArray< ITRFVersion > ITRFVersion::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ITRFVersion >(env->callStaticObjectMethod(cls, mids$[mid_values_764e284abbfef657]));
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
      static PyObject *t_ITRFVersion_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion_of_(t_ITRFVersion *self, PyObject *args);
      static PyObject *t_ITRFVersion_getConverter(PyTypeObject *type, PyObject *args);
      static PyObject *t_ITRFVersion_getITRFVersion(PyTypeObject *type, PyObject *args);
      static PyObject *t_ITRFVersion_getLast(PyTypeObject *type);
      static PyObject *t_ITRFVersion_getName(t_ITRFVersion *self);
      static PyObject *t_ITRFVersion_getYear(t_ITRFVersion *self);
      static PyObject *t_ITRFVersion_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ITRFVersion_values(PyTypeObject *type);
      static PyObject *t_ITRFVersion_get__last(t_ITRFVersion *self, void *data);
      static PyObject *t_ITRFVersion_get__name(t_ITRFVersion *self, void *data);
      static PyObject *t_ITRFVersion_get__year(t_ITRFVersion *self, void *data);
      static PyObject *t_ITRFVersion_get__parameters_(t_ITRFVersion *self, void *data);
      static PyGetSetDef t_ITRFVersion__fields_[] = {
        DECLARE_GET_FIELD(t_ITRFVersion, last),
        DECLARE_GET_FIELD(t_ITRFVersion, name),
        DECLARE_GET_FIELD(t_ITRFVersion, year),
        DECLARE_GET_FIELD(t_ITRFVersion, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ITRFVersion__methods_[] = {
        DECLARE_METHOD(t_ITRFVersion, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, of_, METH_VARARGS),
        DECLARE_METHOD(t_ITRFVersion, getConverter, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, getITRFVersion, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, getLast, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, getName, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion, getYear, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersion)[] = {
        { Py_tp_methods, t_ITRFVersion__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ITRFVersion__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersion)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ITRFVersion, t_ITRFVersion, ITRFVersion);
      PyObject *t_ITRFVersion::wrap_Object(const ITRFVersion& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion *self = (t_ITRFVersion *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ITRFVersion::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion *self = (t_ITRFVersion *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ITRFVersion::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersion), &PY_TYPE_DEF(ITRFVersion), module, "ITRFVersion", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "Converter", make_descriptor(&PY_TYPE_DEF(ITRFVersion$Converter)));
      }

      void t_ITRFVersion::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "class_", make_descriptor(ITRFVersion::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "wrapfn_", make_descriptor(t_ITRFVersion::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "boxfn_", make_descriptor(boxObject));
        env->getClass(ITRFVersion::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1988", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1989", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1990", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1991", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1992", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1993", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1994", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1996", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1997", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2000", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2005", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2008", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2008)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2014", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2014)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2020", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2020)));
      }

      static PyObject *t_ITRFVersion_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersion::initializeClass, 1)))
          return NULL;
        return t_ITRFVersion::wrap_Object(ITRFVersion(((t_ITRFVersion *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersion_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersion::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ITRFVersion_of_(t_ITRFVersion *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ITRFVersion_getConverter(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ITRFVersion a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::ITRFVersion$Converter result((jobject) NULL);

            if (!parseArgs(args, "KK", ITRFVersion::initializeClass, ITRFVersion::initializeClass, &a0, &p0, t_ITRFVersion::parameters_, &a1, &p1, t_ITRFVersion::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getConverter(a0, a1));
              return ::org::orekit::frames::t_ITRFVersion$Converter::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ITRFVersion a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            ::org::orekit::frames::ITRFVersion$Converter result((jobject) NULL);

            if (!parseArgs(args, "KKk", ITRFVersion::initializeClass, ITRFVersion::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, t_ITRFVersion::parameters_, &a1, &p1, t_ITRFVersion::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getConverter(a0, a1, a2));
              return ::org::orekit::frames::t_ITRFVersion$Converter::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getConverter", args);
        return NULL;
      }

      static PyObject *t_ITRFVersion_getITRFVersion(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ITRFVersion result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getITRFVersion(a0));
              return t_ITRFVersion::wrap_Object(result);
            }
          }
          {
            jint a0;
            ITRFVersion result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getITRFVersion(a0));
              return t_ITRFVersion::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getITRFVersion", args);
        return NULL;
      }

      static PyObject *t_ITRFVersion_getLast(PyTypeObject *type)
      {
        ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getLast());
        return t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersion_getName(t_ITRFVersion *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ITRFVersion_getYear(t_ITRFVersion *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getYear());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ITRFVersion_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ITRFVersion result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::valueOf(a0));
          return t_ITRFVersion::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ITRFVersion_values(PyTypeObject *type)
      {
        JArray< ITRFVersion > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::values());
        return JArray<jobject>(result.this$).wrap(t_ITRFVersion::wrap_jobject);
      }
      static PyObject *t_ITRFVersion_get__parameters_(t_ITRFVersion *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ITRFVersion_get__last(t_ITRFVersion *self, void *data)
      {
        ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getLast());
        return t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_ITRFVersion_get__name(t_ITRFVersion *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_ITRFVersion_get__year(t_ITRFVersion *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getYear());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/BaseRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *BaseRandomGenerator::class$ = NULL;
      jmethodID *BaseRandomGenerator::mids$ = NULL;
      bool BaseRandomGenerator::live$ = false;

      jclass BaseRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/BaseRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextGaussian_b74f83833fdad017] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_0e7cf35192c3effe] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_9db63109f74a74fc] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_44ed599e93e8a30c] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3d7dd2314a0dd456] = env->getMethodID(cls, "setSeed", "(J)V");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_clearCache_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearCache", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble BaseRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_b74f83833fdad017]);
      }

      jint BaseRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_0e7cf35192c3effe], a0);
      }

      jlong BaseRandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_9db63109f74a74fc], a0);
      }

      void BaseRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_44ed599e93e8a30c], a0);
      }

      void BaseRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3d7dd2314a0dd456], a0);
      }

      ::java::lang::String BaseRandomGenerator::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
      static PyObject *t_BaseRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseRandomGenerator_nextGaussian(t_BaseRandomGenerator *self);
      static PyObject *t_BaseRandomGenerator_nextInt(t_BaseRandomGenerator *self, PyObject *arg);
      static PyObject *t_BaseRandomGenerator_nextLong(t_BaseRandomGenerator *self, PyObject *arg);
      static PyObject *t_BaseRandomGenerator_setSeed(t_BaseRandomGenerator *self, PyObject *args);
      static PyObject *t_BaseRandomGenerator_toString(t_BaseRandomGenerator *self, PyObject *args);
      static int t_BaseRandomGenerator_set__seed(t_BaseRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_BaseRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_BaseRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_BaseRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseRandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_BaseRandomGenerator, nextInt, METH_O),
        DECLARE_METHOD(t_BaseRandomGenerator, nextLong, METH_O),
        DECLARE_METHOD(t_BaseRandomGenerator, setSeed, METH_VARARGS),
        DECLARE_METHOD(t_BaseRandomGenerator, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseRandomGenerator)[] = {
        { Py_tp_methods, t_BaseRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BaseRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BaseRandomGenerator, t_BaseRandomGenerator, BaseRandomGenerator);

      void t_BaseRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseRandomGenerator), &PY_TYPE_DEF(BaseRandomGenerator), module, "BaseRandomGenerator", 0);
      }

      void t_BaseRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRandomGenerator), "class_", make_descriptor(BaseRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRandomGenerator), "wrapfn_", make_descriptor(t_BaseRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_BaseRandomGenerator::wrap_Object(BaseRandomGenerator(((t_BaseRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_BaseRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseRandomGenerator_nextGaussian(t_BaseRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BaseRandomGenerator_nextInt(t_BaseRandomGenerator *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.nextInt(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextInt", arg);
        return NULL;
      }

      static PyObject *t_BaseRandomGenerator_nextLong(t_BaseRandomGenerator *self, PyObject *arg)
      {
        jlong a0;
        jlong result;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.nextLong(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextLong", arg);
        return NULL;
      }

      static PyObject *t_BaseRandomGenerator_setSeed(t_BaseRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
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

      static PyObject *t_BaseRandomGenerator_toString(t_BaseRandomGenerator *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(BaseRandomGenerator), (PyObject *) self, "toString", args, 2);
      }

      static int t_BaseRandomGenerator_set__seed(t_BaseRandomGenerator *self, PyObject *arg, void *data)
      {
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
#include "org/orekit/files/ccsds/ndm/odm/PythonOdmParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *PythonOdmParser::class$ = NULL;
            jmethodID *PythonOdmParser::mids$ = NULL;
            bool PythonOdmParser::live$ = false;

            jclass PythonOdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/PythonOdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_2ec5724104d9082e] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_finalizeData_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getFileFormat_e4c64bde02ca34c3] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getHeader_de29107d9fd9c097] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                mids$[mid_getMuSet_b74f83833fdad017] = env->getMethodID(cls, "getMuSet", "()D");
                mids$[mid_inData_9ab94ac1dc23b105] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");
                mids$[mid_setMuCreated_8ba9fe7a847cecad] = env->getMethodID(cls, "setMuCreated", "(D)V");
                mids$[mid_setMuParsed_8ba9fe7a847cecad] = env->getMethodID(cls, "setMuParsed", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonOdmParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            ::org::orekit::files::ccsds::utils::FileFormat PythonOdmParser::getFileFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFileFormat_e4c64bde02ca34c3]));
            }

            jdouble PythonOdmParser::getMuSet() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMuSet_b74f83833fdad017]);
            }

            jlong PythonOdmParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonOdmParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
            }

            void PythonOdmParser::setMuCreated(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMuCreated_8ba9fe7a847cecad], a0);
            }

            void PythonOdmParser::setMuParsed(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMuParsed_8ba9fe7a847cecad], a0);
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
            static PyObject *t_PythonOdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonOdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonOdmParser_of_(t_PythonOdmParser *self, PyObject *args);
            static PyObject *t_PythonOdmParser_finalize(t_PythonOdmParser *self);
            static PyObject *t_PythonOdmParser_getFileFormat(t_PythonOdmParser *self, PyObject *args);
            static PyObject *t_PythonOdmParser_getMuSet(t_PythonOdmParser *self);
            static PyObject *t_PythonOdmParser_pythonExtension(t_PythonOdmParser *self, PyObject *args);
            static PyObject *t_PythonOdmParser_setMuCreated(t_PythonOdmParser *self, PyObject *arg);
            static PyObject *t_PythonOdmParser_setMuParsed(t_PythonOdmParser *self, PyObject *arg);
            static jobject JNICALL t_PythonOdmParser_build0(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_finalizeData1(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonOdmParser_getHeader4(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_inData5(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_inHeader6(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_inMetadata7(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_prepareData8(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonOdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonOdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonOdmParser_get__self(t_PythonOdmParser *self, void *data);
            static PyObject *t_PythonOdmParser_get__fileFormat(t_PythonOdmParser *self, void *data);
            static int t_PythonOdmParser_set__muCreated(t_PythonOdmParser *self, PyObject *arg, void *data);
            static int t_PythonOdmParser_set__muParsed(t_PythonOdmParser *self, PyObject *arg, void *data);
            static PyObject *t_PythonOdmParser_get__muSet(t_PythonOdmParser *self, void *data);
            static PyObject *t_PythonOdmParser_get__parameters_(t_PythonOdmParser *self, void *data);
            static PyGetSetDef t_PythonOdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonOdmParser, fileFormat),
              DECLARE_SET_FIELD(t_PythonOdmParser, muCreated),
              DECLARE_SET_FIELD(t_PythonOdmParser, muParsed),
              DECLARE_GET_FIELD(t_PythonOdmParser, muSet),
              DECLARE_GET_FIELD(t_PythonOdmParser, self),
              DECLARE_GET_FIELD(t_PythonOdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonOdmParser__methods_[] = {
              DECLARE_METHOD(t_PythonOdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonOdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonOdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonOdmParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonOdmParser, getFileFormat, METH_VARARGS),
              DECLARE_METHOD(t_PythonOdmParser, getMuSet, METH_NOARGS),
              DECLARE_METHOD(t_PythonOdmParser, pythonExtension, METH_VARARGS),
              DECLARE_METHOD(t_PythonOdmParser, setMuCreated, METH_O),
              DECLARE_METHOD(t_PythonOdmParser, setMuParsed, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonOdmParser)[] = {
              { Py_tp_methods, t_PythonOdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonOdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonOdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
              NULL
            };

            DEFINE_TYPE(PythonOdmParser, t_PythonOdmParser, PythonOdmParser);
            PyObject *t_PythonOdmParser::wrap_Object(const PythonOdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonOdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonOdmParser *self = (t_PythonOdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_PythonOdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonOdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonOdmParser *self = (t_PythonOdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_PythonOdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonOdmParser), &PY_TYPE_DEF(PythonOdmParser), module, "PythonOdmParser", 1);
            }

            void t_PythonOdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOdmParser), "class_", make_descriptor(PythonOdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOdmParser), "wrapfn_", make_descriptor(t_PythonOdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOdmParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonOdmParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;", (void *) t_PythonOdmParser_build0 },
                { "finalizeData", "()Z", (void *) t_PythonOdmParser_finalizeData1 },
                { "finalizeHeader", "()Z", (void *) t_PythonOdmParser_finalizeHeader2 },
                { "finalizeMetadata", "()Z", (void *) t_PythonOdmParser_finalizeMetadata3 },
                { "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;", (void *) t_PythonOdmParser_getHeader4 },
                { "inData", "()Z", (void *) t_PythonOdmParser_inData5 },
                { "inHeader", "()Z", (void *) t_PythonOdmParser_inHeader6 },
                { "inMetadata", "()Z", (void *) t_PythonOdmParser_inMetadata7 },
                { "prepareData", "()Z", (void *) t_PythonOdmParser_prepareData8 },
                { "prepareHeader", "()Z", (void *) t_PythonOdmParser_prepareHeader9 },
                { "prepareMetadata", "()Z", (void *) t_PythonOdmParser_prepareMetadata10 },
                { "pythonDecRef", "()V", (void *) t_PythonOdmParser_pythonDecRef11 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonOdmParser_reset12 },
              };
              env->registerNatives(cls, methods, 13);
            }

            static PyObject *t_PythonOdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonOdmParser::initializeClass, 1)))
                return NULL;
              return t_PythonOdmParser::wrap_Object(PythonOdmParser(((t_PythonOdmParser *) arg)->object.this$));
            }
            static PyObject *t_PythonOdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonOdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonOdmParser_of_(t_PythonOdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonOdmParser_finalize(t_PythonOdmParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonOdmParser_getFileFormat(t_PythonOdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getFileFormat());
                return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
              }

              return callSuper(PY_TYPE(PythonOdmParser), (PyObject *) self, "getFileFormat", args, 2);
            }

            static PyObject *t_PythonOdmParser_getMuSet(t_PythonOdmParser *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMuSet());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_PythonOdmParser_pythonExtension(t_PythonOdmParser *self, PyObject *args)
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

            static PyObject *t_PythonOdmParser_setMuCreated(t_PythonOdmParser *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMuCreated(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMuCreated", arg);
              return NULL;
            }

            static PyObject *t_PythonOdmParser_setMuParsed(t_PythonOdmParser *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMuParsed(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMuParsed", arg);
              return NULL;
            }

            static jobject JNICALL t_PythonOdmParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::NdmConstituent value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &value))
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

            static jboolean JNICALL t_PythonOdmParser_finalizeData1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jobject JNICALL t_PythonOdmParser_getHeader4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, &value))
              {
                throwTypeError("getHeader", result);
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

            static jboolean JNICALL t_PythonOdmParser_inData5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_inHeader6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_inMetadata7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_prepareData8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonOdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonOdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
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

            static PyObject *t_PythonOdmParser_get__self(t_PythonOdmParser *self, void *data)
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
            static PyObject *t_PythonOdmParser_get__parameters_(t_PythonOdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_PythonOdmParser_get__fileFormat(t_PythonOdmParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static int t_PythonOdmParser_set__muCreated(t_PythonOdmParser *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMuCreated(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "muCreated", arg);
              return -1;
            }

            static int t_PythonOdmParser_set__muParsed(t_PythonOdmParser *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMuParsed(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "muParsed", arg);
              return -1;
            }

            static PyObject *t_PythonOdmParser_get__muSet(t_PythonOdmParser *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMuSet());
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
#include "org/orekit/files/sinex/DcbDescription.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *DcbDescription::class$ = NULL;
        jmethodID *DcbDescription::mids$ = NULL;
        bool DcbDescription::live$ = false;

        jclass DcbDescription::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/DcbDescription");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getBiasMode_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getBiasMode", "()Ljava/lang/String;");
            mids$[mid_getDeterminationMethod_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getDeterminationMethod", "()Ljava/lang/String;");
            mids$[mid_getObservationSampling_55546ef6a647f39b] = env->getMethodID(cls, "getObservationSampling", "()I");
            mids$[mid_getParameterSpacing_55546ef6a647f39b] = env->getMethodID(cls, "getParameterSpacing", "()I");
            mids$[mid_getTimeSystem_28830357acffb3e1] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
            mids$[mid_setBiasMode_734b91ac30d5f9b4] = env->getMethodID(cls, "setBiasMode", "(Ljava/lang/String;)V");
            mids$[mid_setDeterminationMethod_734b91ac30d5f9b4] = env->getMethodID(cls, "setDeterminationMethod", "(Ljava/lang/String;)V");
            mids$[mid_setObservationSampling_44ed599e93e8a30c] = env->getMethodID(cls, "setObservationSampling", "(I)V");
            mids$[mid_setParameterSpacing_44ed599e93e8a30c] = env->getMethodID(cls, "setParameterSpacing", "(I)V");
            mids$[mid_setTimeSystem_885124f6a0a748ea] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DcbDescription::DcbDescription() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::java::lang::String DcbDescription::getBiasMode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getBiasMode_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String DcbDescription::getDeterminationMethod() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDeterminationMethod_1c1fa1e935d6cdcf]));
        }

        jint DcbDescription::getObservationSampling() const
        {
          return env->callIntMethod(this$, mids$[mid_getObservationSampling_55546ef6a647f39b]);
        }

        jint DcbDescription::getParameterSpacing() const
        {
          return env->callIntMethod(this$, mids$[mid_getParameterSpacing_55546ef6a647f39b]);
        }

        ::org::orekit::gnss::TimeSystem DcbDescription::getTimeSystem() const
        {
          return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_28830357acffb3e1]));
        }

        void DcbDescription::setBiasMode(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setBiasMode_734b91ac30d5f9b4], a0.this$);
        }

        void DcbDescription::setDeterminationMethod(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDeterminationMethod_734b91ac30d5f9b4], a0.this$);
        }

        void DcbDescription::setObservationSampling(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObservationSampling_44ed599e93e8a30c], a0);
        }

        void DcbDescription::setParameterSpacing(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setParameterSpacing_44ed599e93e8a30c], a0);
        }

        void DcbDescription::setTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeSystem_885124f6a0a748ea], a0.this$);
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
        static PyObject *t_DcbDescription_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DcbDescription_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DcbDescription_init_(t_DcbDescription *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DcbDescription_getBiasMode(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getDeterminationMethod(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getObservationSampling(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getParameterSpacing(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getTimeSystem(t_DcbDescription *self);
        static PyObject *t_DcbDescription_setBiasMode(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setDeterminationMethod(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setObservationSampling(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setParameterSpacing(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setTimeSystem(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_get__biasMode(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__biasMode(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__determinationMethod(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__determinationMethod(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__observationSampling(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__observationSampling(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__parameterSpacing(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__parameterSpacing(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__timeSystem(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__timeSystem(t_DcbDescription *self, PyObject *arg, void *data);
        static PyGetSetDef t_DcbDescription__fields_[] = {
          DECLARE_GETSET_FIELD(t_DcbDescription, biasMode),
          DECLARE_GETSET_FIELD(t_DcbDescription, determinationMethod),
          DECLARE_GETSET_FIELD(t_DcbDescription, observationSampling),
          DECLARE_GETSET_FIELD(t_DcbDescription, parameterSpacing),
          DECLARE_GETSET_FIELD(t_DcbDescription, timeSystem),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DcbDescription__methods_[] = {
          DECLARE_METHOD(t_DcbDescription, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbDescription, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbDescription, getBiasMode, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getDeterminationMethod, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getObservationSampling, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getParameterSpacing, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getTimeSystem, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, setBiasMode, METH_O),
          DECLARE_METHOD(t_DcbDescription, setDeterminationMethod, METH_O),
          DECLARE_METHOD(t_DcbDescription, setObservationSampling, METH_O),
          DECLARE_METHOD(t_DcbDescription, setParameterSpacing, METH_O),
          DECLARE_METHOD(t_DcbDescription, setTimeSystem, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DcbDescription)[] = {
          { Py_tp_methods, t_DcbDescription__methods_ },
          { Py_tp_init, (void *) t_DcbDescription_init_ },
          { Py_tp_getset, t_DcbDescription__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DcbDescription)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DcbDescription, t_DcbDescription, DcbDescription);

        void t_DcbDescription::install(PyObject *module)
        {
          installType(&PY_TYPE(DcbDescription), &PY_TYPE_DEF(DcbDescription), module, "DcbDescription", 0);
        }

        void t_DcbDescription::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbDescription), "class_", make_descriptor(DcbDescription::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbDescription), "wrapfn_", make_descriptor(t_DcbDescription::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbDescription), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DcbDescription_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DcbDescription::initializeClass, 1)))
            return NULL;
          return t_DcbDescription::wrap_Object(DcbDescription(((t_DcbDescription *) arg)->object.this$));
        }
        static PyObject *t_DcbDescription_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DcbDescription::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DcbDescription_init_(t_DcbDescription *self, PyObject *args, PyObject *kwds)
        {
          DcbDescription object((jobject) NULL);

          INT_CALL(object = DcbDescription());
          self->object = object;

          return 0;
        }

        static PyObject *t_DcbDescription_getBiasMode(t_DcbDescription *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getBiasMode());
          return j2p(result);
        }

        static PyObject *t_DcbDescription_getDeterminationMethod(t_DcbDescription *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDeterminationMethod());
          return j2p(result);
        }

        static PyObject *t_DcbDescription_getObservationSampling(t_DcbDescription *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getObservationSampling());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DcbDescription_getParameterSpacing(t_DcbDescription *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getParameterSpacing());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DcbDescription_getTimeSystem(t_DcbDescription *self)
        {
          ::org::orekit::gnss::TimeSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
        }

        static PyObject *t_DcbDescription_setBiasMode(t_DcbDescription *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setBiasMode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setBiasMode", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setDeterminationMethod(t_DcbDescription *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDeterminationMethod(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDeterminationMethod", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setObservationSampling(t_DcbDescription *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setObservationSampling(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObservationSampling", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setParameterSpacing(t_DcbDescription *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setParameterSpacing(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setParameterSpacing", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setTimeSystem(t_DcbDescription *self, PyObject *arg)
        {
          ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
          {
            OBJ_CALL(self->object.setTimeSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_get__biasMode(t_DcbDescription *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getBiasMode());
          return j2p(value);
        }
        static int t_DcbDescription_set__biasMode(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setBiasMode(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "biasMode", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__determinationMethod(t_DcbDescription *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDeterminationMethod());
          return j2p(value);
        }
        static int t_DcbDescription_set__determinationMethod(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDeterminationMethod(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "determinationMethod", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__observationSampling(t_DcbDescription *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getObservationSampling());
          return PyLong_FromLong((long) value);
        }
        static int t_DcbDescription_set__observationSampling(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setObservationSampling(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observationSampling", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__parameterSpacing(t_DcbDescription *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getParameterSpacing());
          return PyLong_FromLong((long) value);
        }
        static int t_DcbDescription_set__parameterSpacing(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setParameterSpacing(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "parameterSpacing", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__timeSystem(t_DcbDescription *self, void *data)
        {
          ::org::orekit::gnss::TimeSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
        }
        static int t_DcbDescription_set__timeSystem(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
            {
              INT_CALL(self->object.setTimeSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StreamingStatistics$StreamingStatisticsBuilder::class$ = NULL;
        jmethodID *StreamingStatistics$StreamingStatisticsBuilder::mids$ = NULL;
        bool StreamingStatistics$StreamingStatisticsBuilder::live$ = false;

        jclass StreamingStatistics$StreamingStatisticsBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_build_32dcaf3e8c6a3a28] = env->getMethodID(cls, "build", "()Lorg/hipparchus/stat/descriptive/StreamingStatistics;");
            mids$[mid_extrema_b0d6fa13965b2c50] = env->getMethodID(cls, "extrema", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_moments_b0d6fa13965b2c50] = env->getMethodID(cls, "moments", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_percentiles_4c8a006128e4bf2a] = env->getMethodID(cls, "percentiles", "(DLorg/hipparchus/random/RandomGenerator;)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_sumOfLogs_b0d6fa13965b2c50] = env->getMethodID(cls, "sumOfLogs", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_sumOfSquares_b0d6fa13965b2c50] = env->getMethodID(cls, "sumOfSquares", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StreamingStatistics$StreamingStatisticsBuilder::StreamingStatistics$StreamingStatisticsBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::hipparchus::stat::descriptive::StreamingStatistics StreamingStatistics$StreamingStatisticsBuilder::build() const
        {
          return ::org::hipparchus::stat::descriptive::StreamingStatistics(env->callObjectMethod(this$, mids$[mid_build_32dcaf3e8c6a3a28]));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::extrema(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_extrema_b0d6fa13965b2c50], a0));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::moments(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_moments_b0d6fa13965b2c50], a0));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::percentiles(jdouble a0, const ::org::hipparchus::random::RandomGenerator & a1) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_percentiles_4c8a006128e4bf2a], a0, a1.this$));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::sumOfLogs(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_sumOfLogs_b0d6fa13965b2c50], a0));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::sumOfSquares(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_sumOfSquares_b0d6fa13965b2c50], a0));
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
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StreamingStatistics$StreamingStatisticsBuilder_init_(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_build(t_StreamingStatistics$StreamingStatisticsBuilder *self);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_extrema(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_moments(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_percentiles(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfLogs(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfSquares(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);

        static PyMethodDef t_StreamingStatistics$StreamingStatisticsBuilder__methods_[] = {
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, extrema, METH_O),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, moments, METH_O),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, percentiles, METH_VARARGS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, sumOfLogs, METH_O),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, sumOfSquares, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingStatistics$StreamingStatisticsBuilder)[] = {
          { Py_tp_methods, t_StreamingStatistics$StreamingStatisticsBuilder__methods_ },
          { Py_tp_init, (void *) t_StreamingStatistics$StreamingStatisticsBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingStatistics$StreamingStatisticsBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingStatistics$StreamingStatisticsBuilder, t_StreamingStatistics$StreamingStatisticsBuilder, StreamingStatistics$StreamingStatisticsBuilder);

        void t_StreamingStatistics$StreamingStatisticsBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), &PY_TYPE_DEF(StreamingStatistics$StreamingStatisticsBuilder), module, "StreamingStatistics$StreamingStatisticsBuilder", 0);
        }

        void t_StreamingStatistics$StreamingStatisticsBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), "class_", make_descriptor(StreamingStatistics$StreamingStatisticsBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), "wrapfn_", make_descriptor(t_StreamingStatistics$StreamingStatisticsBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingStatistics$StreamingStatisticsBuilder::initializeClass, 1)))
            return NULL;
          return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(StreamingStatistics$StreamingStatisticsBuilder(((t_StreamingStatistics$StreamingStatisticsBuilder *) arg)->object.this$));
        }
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingStatistics$StreamingStatisticsBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StreamingStatistics$StreamingStatisticsBuilder_init_(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args, PyObject *kwds)
        {
          StreamingStatistics$StreamingStatisticsBuilder object((jobject) NULL);

          INT_CALL(object = StreamingStatistics$StreamingStatisticsBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_build(t_StreamingStatistics$StreamingStatisticsBuilder *self)
        {
          ::org::hipparchus::stat::descriptive::StreamingStatistics result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::hipparchus::stat::descriptive::t_StreamingStatistics::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_extrema(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.extrema(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "extrema", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_moments(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.moments(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "moments", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_percentiles(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args)
        {
          jdouble a0;
          ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.percentiles(a0, a1));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "percentiles", args);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfLogs(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.sumOfLogs(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sumOfLogs", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfSquares(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.sumOfSquares(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sumOfSquares", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *DTM2000InputParameters::class$ = NULL;
          jmethodID *DTM2000InputParameters::mids$ = NULL;
          bool DTM2000InputParameters::live$ = false;

          jclass DTM2000InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/DTM2000InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_get24HoursKp_fd347811007a6ba3] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getInstantFlux_fd347811007a6ba3] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMeanFlux_fd347811007a6ba3] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getThreeHourlyKP_fd347811007a6ba3] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble DTM2000InputParameters::get24HoursKp(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_get24HoursKp_fd347811007a6ba3], a0.this$);
          }

          jdouble DTM2000InputParameters::getInstantFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInstantFlux_fd347811007a6ba3], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate DTM2000InputParameters::getMaxDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
          }

          jdouble DTM2000InputParameters::getMeanFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanFlux_fd347811007a6ba3], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate DTM2000InputParameters::getMinDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
          }

          jdouble DTM2000InputParameters::getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKP_fd347811007a6ba3], a0.this$);
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
          static PyObject *t_DTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_get24HoursKp(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_getInstantFlux(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_getMaxDate(t_DTM2000InputParameters *self);
          static PyObject *t_DTM2000InputParameters_getMeanFlux(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_getMinDate(t_DTM2000InputParameters *self);
          static PyObject *t_DTM2000InputParameters_getThreeHourlyKP(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_get__maxDate(t_DTM2000InputParameters *self, void *data);
          static PyObject *t_DTM2000InputParameters_get__minDate(t_DTM2000InputParameters *self, void *data);
          static PyGetSetDef t_DTM2000InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_DTM2000InputParameters, maxDate),
            DECLARE_GET_FIELD(t_DTM2000InputParameters, minDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DTM2000InputParameters__methods_[] = {
            DECLARE_METHOD(t_DTM2000InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000InputParameters, get24HoursKp, METH_O),
            DECLARE_METHOD(t_DTM2000InputParameters, getInstantFlux, METH_O),
            DECLARE_METHOD(t_DTM2000InputParameters, getMaxDate, METH_NOARGS),
            DECLARE_METHOD(t_DTM2000InputParameters, getMeanFlux, METH_O),
            DECLARE_METHOD(t_DTM2000InputParameters, getMinDate, METH_NOARGS),
            DECLARE_METHOD(t_DTM2000InputParameters, getThreeHourlyKP, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DTM2000InputParameters)[] = {
            { Py_tp_methods, t_DTM2000InputParameters__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DTM2000InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DTM2000InputParameters)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(DTM2000InputParameters, t_DTM2000InputParameters, DTM2000InputParameters);

          void t_DTM2000InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(DTM2000InputParameters), &PY_TYPE_DEF(DTM2000InputParameters), module, "DTM2000InputParameters", 0);
          }

          void t_DTM2000InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000InputParameters), "class_", make_descriptor(DTM2000InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000InputParameters), "wrapfn_", make_descriptor(t_DTM2000InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000InputParameters), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DTM2000InputParameters::initializeClass, 1)))
              return NULL;
            return t_DTM2000InputParameters::wrap_Object(DTM2000InputParameters(((t_DTM2000InputParameters *) arg)->object.this$));
          }
          static PyObject *t_DTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DTM2000InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DTM2000InputParameters_get24HoursKp(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.get24HoursKp(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "get24HoursKp", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_getInstantFlux(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getInstantFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInstantFlux", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_getMaxDate(t_DTM2000InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_DTM2000InputParameters_getMeanFlux(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMeanFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getMeanFlux", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_getMinDate(t_DTM2000InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_DTM2000InputParameters_getThreeHourlyKP(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getThreeHourlyKP(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getThreeHourlyKP", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_get__maxDate(t_DTM2000InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_DTM2000InputParameters_get__minDate(t_DTM2000InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ilrs/CPF.h"
#include "java/lang/String.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
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
            mids$[mid_init$_978d3472b061456a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ilrs/CPF;Ljava/lang/String;)V");
            mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getEphemeridesDataLines_e62d3bb06d56d7e3] = env->getMethodID(cls, "getEphemeridesDataLines", "()Ljava/util/List;");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_2d80cda3dc1f1422] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_9e515362e8de0afe] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPF$CPFEphemeris::CPF$CPFEphemeris(const ::org::orekit::files::ilrs::CPF & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_978d3472b061456a, a0.this$, a1.this$)) {}

        ::org::orekit::utils::CartesianDerivativesFilter CPF$CPFEphemeris::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c]));
        }

        ::java::util::List CPF$CPFEphemeris::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_e62d3bb06d56d7e3]));
        }

        ::java::util::List CPF$CPFEphemeris::getEphemeridesDataLines() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEphemeridesDataLines_e62d3bb06d56d7e3]));
        }

        ::org::orekit::frames::Frame CPF$CPFEphemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
        }

        ::java::lang::String CPF$CPFEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_1c1fa1e935d6cdcf]));
        }

        jint CPF$CPFEphemeris::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_55546ef6a647f39b]);
        }

        jdouble CPF$CPFEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        ::org::orekit::propagation::BoundedPropagator CPF$CPFEphemeris::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_2d80cda3dc1f1422]));
        }

        ::org::orekit::propagation::BoundedPropagator CPF$CPFEphemeris::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_9e515362e8de0afe], a0.this$));
        }

        ::java::util::List CPF$CPFEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_e62d3bb06d56d7e3]));
        }

        ::org::orekit::time::AbsoluteDate CPF$CPFEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate CPF$CPFEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
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
