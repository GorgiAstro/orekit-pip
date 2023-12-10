#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter2DPOCMethod.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
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
                  mids$[mid_compute_4c5fe0d13c4a2327] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_a4d7e214295a00c5] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_a50e19d883e35f53] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_4f61fc1ea038da56] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_23211d1e26c9c2c1] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_f7ffb3ec4f2d0056] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_c51dae52f7f8ac4e] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_97c5e8233a686699] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_e470b6d9e0d979db] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");
                  mids$[mid_getObjectOrbitFromCdm_8b39a4ef386bb0e6] = env->getMethodID(cls, "getObjectOrbitFromCdm", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;Lorg/orekit/files/ccsds/ndm/cdm/CdmData;Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;Lorg/orekit/data/DataContext;)Lorg/orekit/orbits/Orbit;");
                  mids$[mid_getObjectStateCovarianceFromCdm_b5c57b385a7c10bb] = env->getMethodID(cls, "getObjectStateCovarianceFromCdm", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;Lorg/orekit/files/ccsds/ndm/cdm/CdmData;)Lorg/orekit/propagation/StateCovariance;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_TCA_DIFFERENCE_TOLERANCE = env->getStaticDoubleField(cls, "DEFAULT_TCA_DIFFERENCE_TOLERANCE");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_4c5fe0d13c4a2327], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a4d7e214295a00c5], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a50e19d883e35f53], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_4f61fc1ea038da56], a0.this$, a1.this$, a2));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_23211d1e26c9c2c1], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_f7ffb3ec4f2d0056], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_c51dae52f7f8ac4e], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_97c5e8233a686699], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5));
              }

              ::java::lang::String AbstractShortTermEncounter2DPOCMethod::getName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
              }

              jboolean AbstractShortTermEncounter2DPOCMethod::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_e470b6d9e0d979db]);
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
#include "org/orekit/estimation/measurements/modifiers/TurnAroundRangeIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TurnAroundRangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *TurnAroundRangeIonosphericDelayModifier::mids$ = NULL;
          bool TurnAroundRangeIonosphericDelayModifier::live$ = false;

          jclass TurnAroundRangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TurnAroundRangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_70ec985998eac326] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TurnAroundRangeIonosphericDelayModifier::TurnAroundRangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_70ec985998eac326, a0.this$, a1)) {}

          ::java::util::List TurnAroundRangeIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void TurnAroundRangeIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void TurnAroundRangeIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TurnAroundRangeIonosphericDelayModifier_init_(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_getParametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modify(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_TurnAroundRangeIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TurnAroundRangeIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TurnAroundRangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TurnAroundRangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_TurnAroundRangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TurnAroundRangeIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_TurnAroundRangeIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TurnAroundRangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TurnAroundRangeIonosphericDelayModifier, t_TurnAroundRangeIonosphericDelayModifier, TurnAroundRangeIonosphericDelayModifier);

          void t_TurnAroundRangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TurnAroundRangeIonosphericDelayModifier), &PY_TYPE_DEF(TurnAroundRangeIonosphericDelayModifier), module, "TurnAroundRangeIonosphericDelayModifier", 0);
          }

          void t_TurnAroundRangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeIonosphericDelayModifier), "class_", make_descriptor(TurnAroundRangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_TurnAroundRangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TurnAroundRangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TurnAroundRangeIonosphericDelayModifier::wrap_Object(TurnAroundRangeIonosphericDelayModifier(((t_TurnAroundRangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TurnAroundRangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TurnAroundRangeIonosphericDelayModifier_init_(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            TurnAroundRangeIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TurnAroundRangeIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_getParametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modify(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuverHistoryMetadataKey::class$ = NULL;
              jmethodID *OrbitManeuverHistoryMetadataKey::mids$ = NULL;
              bool OrbitManeuverHistoryMetadataKey::live$ = false;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::COMMENT = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_BODY_FRAME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_BODY_TRIGGER = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_EXEC_START = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_EXEC_STOP = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_MAX_CYCLES = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_MIN_CYCLES = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_PA_START_ANGLE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_PA_STOP_ANGLE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_REF_DIR = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_REF_TIME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_DURATION = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_PERIOD = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_TYPE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_WIN_CLOSE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_WIN_OPEN = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::GRAV_ASSIST_NAME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_BASIS = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_BASIS_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_COMPOSITION = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_DEVICE_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_FRAME_EPOCH = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_NEXT_EPOCH = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_NEXT_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PRED_SOURCE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PREV_EPOCH = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PREV_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PURPOSE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_REF_FRAME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_UNITS = NULL;

              jclass OrbitManeuverHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_0378730a305bc2bf] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata;)Z");
                  mids$[mid_valueOf_51d837660ab0dd63] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;");
                  mids$[mid_values_c8f2b3b65fff12f4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_BODY_FRAME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_BODY_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_BODY_TRIGGER = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_BODY_TRIGGER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_EXEC_START = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_EXEC_START", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_EXEC_STOP = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_EXEC_STOP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_MAX_CYCLES = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_MAX_CYCLES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_MIN_CYCLES = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_MIN_CYCLES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_PA_START_ANGLE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_PA_START_ANGLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_PA_STOP_ANGLE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_PA_STOP_ANGLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_REF_DIR = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_REF_DIR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_REF_TIME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_REF_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_TIME_PULSE_DURATION = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_TIME_PULSE_DURATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_TIME_PULSE_PERIOD = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_TIME_PULSE_PERIOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_TYPE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_WIN_CLOSE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_WIN_CLOSE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_WIN_OPEN = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_WIN_OPEN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  GRAV_ASSIST_NAME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "GRAV_ASSIST_NAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_BASIS = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_BASIS_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_COMPOSITION = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_COMPOSITION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_DEVICE_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_DEVICE_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_FRAME_EPOCH = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_NEXT_EPOCH = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_NEXT_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_NEXT_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_NEXT_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PRED_SOURCE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PRED_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PREV_EPOCH = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PREV_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PREV_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PURPOSE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PURPOSE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_REF_FRAME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_UNITS = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_UNITS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitManeuverHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_0378730a305bc2bf], a0.this$, a1.this$, a2.this$);
              }

              OrbitManeuverHistoryMetadataKey OrbitManeuverHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitManeuverHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_51d837660ab0dd63], a0.this$));
              }

              JArray< OrbitManeuverHistoryMetadataKey > OrbitManeuverHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitManeuverHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c8f2b3b65fff12f4]));
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
              static PyObject *t_OrbitManeuverHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_of_(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_process(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_get__parameters_(t_OrbitManeuverHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_OrbitManeuverHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitManeuverHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuverHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuverHistoryMetadataKey)[] = {
                { Py_tp_methods, t_OrbitManeuverHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitManeuverHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuverHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitManeuverHistoryMetadataKey, t_OrbitManeuverHistoryMetadataKey, OrbitManeuverHistoryMetadataKey);
              PyObject *t_OrbitManeuverHistoryMetadataKey::wrap_Object(const OrbitManeuverHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitManeuverHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitManeuverHistoryMetadataKey *self = (t_OrbitManeuverHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitManeuverHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitManeuverHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitManeuverHistoryMetadataKey *self = (t_OrbitManeuverHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitManeuverHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuverHistoryMetadataKey), &PY_TYPE_DEF(OrbitManeuverHistoryMetadataKey), module, "OrbitManeuverHistoryMetadataKey", 0);
              }

              void t_OrbitManeuverHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "class_", make_descriptor(OrbitManeuverHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "wrapfn_", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitManeuverHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "COMMENT", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_BODY_FRAME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_BODY_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_BODY_TRIGGER", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_BODY_TRIGGER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_EXEC_START", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_EXEC_START)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_EXEC_STOP", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_EXEC_STOP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_MAX_CYCLES", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_MAX_CYCLES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_MIN_CYCLES", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_MIN_CYCLES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_PA_START_ANGLE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_PA_START_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_PA_STOP_ANGLE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_PA_STOP_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_REF_DIR", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_REF_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_REF_TIME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_REF_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_TIME_PULSE_DURATION", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_TIME_PULSE_PERIOD", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_PERIOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_TYPE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_WIN_CLOSE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_WIN_CLOSE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_WIN_OPEN", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_WIN_OPEN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "GRAV_ASSIST_NAME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::GRAV_ASSIST_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_BASIS", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_BASIS_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_COMPOSITION", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_COMPOSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_DEVICE_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_DEVICE_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_FRAME_EPOCH", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_NEXT_EPOCH", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_NEXT_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_NEXT_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_NEXT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PRED_SOURCE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PRED_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PREV_EPOCH", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PREV_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PREV_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PURPOSE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PURPOSE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_REF_FRAME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_UNITS", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_UNITS)));
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuverHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuverHistoryMetadataKey::wrap_Object(OrbitManeuverHistoryMetadataKey(((t_OrbitManeuverHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuverHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuverHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_of_(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_process(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitManeuverHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadataKey::valueOf(a0));
                  return t_OrbitManeuverHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< OrbitManeuverHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitManeuverHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_OrbitManeuverHistoryMetadataKey_get__parameters_(t_OrbitManeuverHistoryMetadataKey *self, void *data)
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
#include "org/orekit/files/general/PythonEphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonEphemerisFileParser::class$ = NULL;
        jmethodID *PythonEphemerisFileParser::mids$ = NULL;
        bool PythonEphemerisFileParser::live$ = false;

        jclass PythonEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_parse_08d07e742af2bd58] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/EphemerisFile;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEphemerisFileParser::PythonEphemerisFileParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonEphemerisFileParser::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonEphemerisFileParser::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonEphemerisFileParser::pythonExtension(jlong a0) const
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
    namespace files {
      namespace general {
        static PyObject *t_PythonEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEphemerisFileParser_init_(t_PythonEphemerisFileParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEphemerisFileParser_finalize(t_PythonEphemerisFileParser *self);
        static PyObject *t_PythonEphemerisFileParser_pythonExtension(t_PythonEphemerisFileParser *self, PyObject *args);
        static jobject JNICALL t_PythonEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEphemerisFileParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEphemerisFileParser_get__self(t_PythonEphemerisFileParser *self, void *data);
        static PyGetSetDef t_PythonEphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEphemerisFileParser, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_PythonEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileParser, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEphemerisFileParser, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisFileParser)[] = {
          { Py_tp_methods, t_PythonEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) t_PythonEphemerisFileParser_init_ },
          { Py_tp_getset, t_PythonEphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEphemerisFileParser, t_PythonEphemerisFileParser, PythonEphemerisFileParser);

        void t_PythonEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEphemerisFileParser), &PY_TYPE_DEF(PythonEphemerisFileParser), module, "PythonEphemerisFileParser", 1);
        }

        void t_PythonEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileParser), "class_", make_descriptor(PythonEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileParser), "wrapfn_", make_descriptor(t_PythonEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEphemerisFileParser::initializeClass);
          JNINativeMethod methods[] = {
            { "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/EphemerisFile;", (void *) t_PythonEphemerisFileParser_parse0 },
            { "pythonDecRef", "()V", (void *) t_PythonEphemerisFileParser_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_PythonEphemerisFileParser::wrap_Object(PythonEphemerisFileParser(((t_PythonEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_PythonEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEphemerisFileParser_init_(t_PythonEphemerisFileParser *self, PyObject *args, PyObject *kwds)
        {
          PythonEphemerisFileParser object((jobject) NULL);

          INT_CALL(object = PythonEphemerisFileParser());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEphemerisFileParser_finalize(t_PythonEphemerisFileParser *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEphemerisFileParser_pythonExtension(t_PythonEphemerisFileParser *self, PyObject *args)
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

        static jobject JNICALL t_PythonEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileParser::mids$[PythonEphemerisFileParser::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::files::general::EphemerisFile value((jobject) NULL);
          PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
          PyObject *result = PyObject_CallMethod(obj, "parse", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::files::general::EphemerisFile::initializeClass, &value))
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

        static void JNICALL t_PythonEphemerisFileParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileParser::mids$[PythonEphemerisFileParser::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEphemerisFileParser::mids$[PythonEphemerisFileParser::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEphemerisFileParser_get__self(t_PythonEphemerisFileParser *self, void *data)
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
#include "org/hipparchus/distribution/continuous/ChiSquaredDistribution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ChiSquaredDistribution::class$ = NULL;
        jmethodID *ChiSquaredDistribution::mids$ = NULL;
        bool ChiSquaredDistribution::live$ = false;

        jclass ChiSquaredDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ChiSquaredDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getDegreesOfFreedom_456d9a2f64d6b28d] = env->getMethodID(cls, "getDegreesOfFreedom", "()D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_0ba5fed9597b693e] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ChiSquaredDistribution::ChiSquaredDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ChiSquaredDistribution::ChiSquaredDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble ChiSquaredDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble ChiSquaredDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble ChiSquaredDistribution::getDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDegreesOfFreedom_456d9a2f64d6b28d]);
        }

        jdouble ChiSquaredDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble ChiSquaredDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble ChiSquaredDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble ChiSquaredDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jboolean ChiSquaredDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble ChiSquaredDistribution::logDensity(jdouble a0) const
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
        static PyObject *t_ChiSquaredDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ChiSquaredDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ChiSquaredDistribution_init_(t_ChiSquaredDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ChiSquaredDistribution_cumulativeProbability(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_density(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getDegreesOfFreedom(t_ChiSquaredDistribution *self);
        static PyObject *t_ChiSquaredDistribution_getNumericalMean(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getNumericalVariance(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getSupportLowerBound(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getSupportUpperBound(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_isSupportConnected(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_logDensity(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_get__degreesOfFreedom(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__numericalMean(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__numericalVariance(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__supportConnected(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__supportLowerBound(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__supportUpperBound(t_ChiSquaredDistribution *self, void *data);
        static PyGetSetDef t_ChiSquaredDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, degreesOfFreedom),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ChiSquaredDistribution__methods_[] = {
          DECLARE_METHOD(t_ChiSquaredDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquaredDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquaredDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ChiSquaredDistribution)[] = {
          { Py_tp_methods, t_ChiSquaredDistribution__methods_ },
          { Py_tp_init, (void *) t_ChiSquaredDistribution_init_ },
          { Py_tp_getset, t_ChiSquaredDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ChiSquaredDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ChiSquaredDistribution, t_ChiSquaredDistribution, ChiSquaredDistribution);

        void t_ChiSquaredDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ChiSquaredDistribution), &PY_TYPE_DEF(ChiSquaredDistribution), module, "ChiSquaredDistribution", 0);
        }

        void t_ChiSquaredDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquaredDistribution), "class_", make_descriptor(ChiSquaredDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquaredDistribution), "wrapfn_", make_descriptor(t_ChiSquaredDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquaredDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ChiSquaredDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ChiSquaredDistribution::initializeClass, 1)))
            return NULL;
          return t_ChiSquaredDistribution::wrap_Object(ChiSquaredDistribution(((t_ChiSquaredDistribution *) arg)->object.this$));
        }
        static PyObject *t_ChiSquaredDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ChiSquaredDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ChiSquaredDistribution_init_(t_ChiSquaredDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ChiSquaredDistribution object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = ChiSquaredDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              ChiSquaredDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = ChiSquaredDistribution(a0, a1));
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

        static PyObject *t_ChiSquaredDistribution_cumulativeProbability(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_density(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getDegreesOfFreedom(t_ChiSquaredDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ChiSquaredDistribution_getNumericalMean(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getNumericalVariance(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getSupportLowerBound(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getSupportUpperBound(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_isSupportConnected(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_logDensity(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_get__degreesOfFreedom(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__numericalMean(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__numericalVariance(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__supportConnected(t_ChiSquaredDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ChiSquaredDistribution_get__supportLowerBound(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__supportUpperBound(t_ChiSquaredDistribution *self, void *data)
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
#include "org/hipparchus/special/BesselJ$BesselJResult.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *BesselJ$BesselJResult::class$ = NULL;
      jmethodID *BesselJ$BesselJResult::mids$ = NULL;
      bool BesselJ$BesselJResult::live$ = false;

      jclass BesselJ$BesselJResult::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/BesselJ$BesselJResult");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_204d8fef8522b316] = env->getMethodID(cls, "<init>", "([DI)V");
          mids$[mid_getVals_7cdc325af0834901] = env->getMethodID(cls, "getVals", "()[D");
          mids$[mid_getnVals_f2f64475e4580546] = env->getMethodID(cls, "getnVals", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BesselJ$BesselJResult::BesselJ$BesselJResult(const JArray< jdouble > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_204d8fef8522b316, a0.this$, a1)) {}

      JArray< jdouble > BesselJ$BesselJResult::getVals() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVals_7cdc325af0834901]));
      }

      jint BesselJ$BesselJResult::getnVals() const
      {
        return env->callIntMethod(this$, mids$[mid_getnVals_f2f64475e4580546]);
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
      static PyObject *t_BesselJ$BesselJResult_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BesselJ$BesselJResult_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BesselJ$BesselJResult_init_(t_BesselJ$BesselJResult *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BesselJ$BesselJResult_getVals(t_BesselJ$BesselJResult *self);
      static PyObject *t_BesselJ$BesselJResult_getnVals(t_BesselJ$BesselJResult *self);
      static PyObject *t_BesselJ$BesselJResult_get__nVals(t_BesselJ$BesselJResult *self, void *data);
      static PyObject *t_BesselJ$BesselJResult_get__vals(t_BesselJ$BesselJResult *self, void *data);
      static PyGetSetDef t_BesselJ$BesselJResult__fields_[] = {
        DECLARE_GET_FIELD(t_BesselJ$BesselJResult, nVals),
        DECLARE_GET_FIELD(t_BesselJ$BesselJResult, vals),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BesselJ$BesselJResult__methods_[] = {
        DECLARE_METHOD(t_BesselJ$BesselJResult, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ$BesselJResult, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ$BesselJResult, getVals, METH_NOARGS),
        DECLARE_METHOD(t_BesselJ$BesselJResult, getnVals, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BesselJ$BesselJResult)[] = {
        { Py_tp_methods, t_BesselJ$BesselJResult__methods_ },
        { Py_tp_init, (void *) t_BesselJ$BesselJResult_init_ },
        { Py_tp_getset, t_BesselJ$BesselJResult__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BesselJ$BesselJResult)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BesselJ$BesselJResult, t_BesselJ$BesselJResult, BesselJ$BesselJResult);

      void t_BesselJ$BesselJResult::install(PyObject *module)
      {
        installType(&PY_TYPE(BesselJ$BesselJResult), &PY_TYPE_DEF(BesselJ$BesselJResult), module, "BesselJ$BesselJResult", 0);
      }

      void t_BesselJ$BesselJResult::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ$BesselJResult), "class_", make_descriptor(BesselJ$BesselJResult::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ$BesselJResult), "wrapfn_", make_descriptor(t_BesselJ$BesselJResult::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ$BesselJResult), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BesselJ$BesselJResult_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BesselJ$BesselJResult::initializeClass, 1)))
          return NULL;
        return t_BesselJ$BesselJResult::wrap_Object(BesselJ$BesselJResult(((t_BesselJ$BesselJResult *) arg)->object.this$));
      }
      static PyObject *t_BesselJ$BesselJResult_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BesselJ$BesselJResult::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BesselJ$BesselJResult_init_(t_BesselJ$BesselJResult *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        jint a1;
        BesselJ$BesselJResult object((jobject) NULL);

        if (!parseArgs(args, "[DI", &a0, &a1))
        {
          INT_CALL(object = BesselJ$BesselJResult(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BesselJ$BesselJResult_getVals(t_BesselJ$BesselJResult *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getVals());
        return result.wrap();
      }

      static PyObject *t_BesselJ$BesselJResult_getnVals(t_BesselJ$BesselJResult *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getnVals());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BesselJ$BesselJResult_get__nVals(t_BesselJ$BesselJResult *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getnVals());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BesselJ$BesselJResult_get__vals(t_BesselJ$BesselJResult *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getVals());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/LutherIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *LutherIntegratorBuilder::class$ = NULL;
        jmethodID *LutherIntegratorBuilder::mids$ = NULL;
        bool LutherIntegratorBuilder::live$ = false;

        jclass LutherIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/LutherIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_501b0015ccc7d54e] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherIntegratorBuilder::LutherIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator LutherIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_501b0015ccc7d54e], a0.this$, a1.this$));
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
        static PyObject *t_LutherIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LutherIntegratorBuilder_init_(t_LutherIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherIntegratorBuilder_buildIntegrator(t_LutherIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_LutherIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_LutherIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherIntegratorBuilder)[] = {
          { Py_tp_methods, t_LutherIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_LutherIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LutherIntegratorBuilder, t_LutherIntegratorBuilder, LutherIntegratorBuilder);

        void t_LutherIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherIntegratorBuilder), &PY_TYPE_DEF(LutherIntegratorBuilder), module, "LutherIntegratorBuilder", 0);
        }

        void t_LutherIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegratorBuilder), "class_", make_descriptor(LutherIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegratorBuilder), "wrapfn_", make_descriptor(t_LutherIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_LutherIntegratorBuilder::wrap_Object(LutherIntegratorBuilder(((t_LutherIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_LutherIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LutherIntegratorBuilder_init_(t_LutherIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          LutherIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = LutherIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LutherIntegratorBuilder_buildIntegrator(t_LutherIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFile$SatelliteAttitudeEphemeris::class$ = NULL;
        jmethodID *AttitudeEphemerisFile$SatelliteAttitudeEphemeris::mids$ = NULL;
        bool AttitudeEphemerisFile$SatelliteAttitudeEphemeris::live$ = false;

        jclass AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitudeProvider_05a2839e8fecde67] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getId_0090f7797e403f43] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::BoundedAttitudeProvider AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_05a2839e8fecde67]));
        }

        ::java::lang::String AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_0090f7797e403f43]));
        }

        ::java::util::List AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_a6156df500549a58]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_of_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getAttitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getId(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getSegments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStart(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__attitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__id(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__segments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__start(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__stop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__parameters_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, attitudeProvider),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, id),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, segments),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, start),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, stop),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFile$SatelliteAttitudeEphemeris)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFile$SatelliteAttitudeEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris, t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, AttitudeEphemerisFile$SatelliteAttitudeEphemeris);
        PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_Object(const AttitudeEphemerisFile$SatelliteAttitudeEphemeris& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self = (t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self = (t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), &PY_TYPE_DEF(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), module, "AttitudeEphemerisFile$SatelliteAttitudeEphemeris", 0);
        }

        void t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), "class_", make_descriptor(AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), "wrapfn_", make_descriptor(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_Object(AttitudeEphemerisFile$SatelliteAttitudeEphemeris(((t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_of_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getAttitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getId(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getSegments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStart(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__parameters_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__attitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__id(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__segments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__start(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__stop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
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
#include "java/net/URL.h"
#include "java/io/IOException.h"
#include "java/io/Serializable.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "JArray.h"

namespace java {
  namespace net {

    ::java::lang::Class *URL::class$ = NULL;
    jmethodID *URL::mids$ = NULL;
    bool URL::live$ = false;

    jclass URL::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/net/URL");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_1a726bfb6068e3c5] = env->getMethodID(cls, "<init>", "(Ljava/net/URL;Ljava/lang/String;)V");
        mids$[mid_init$_de8316969b81209c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_6030818780d04cbc] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getAuthority_0090f7797e403f43] = env->getMethodID(cls, "getAuthority", "()Ljava/lang/String;");
        mids$[mid_getContent_dfd7647d9110ac9f] = env->getMethodID(cls, "getContent", "()Ljava/lang/Object;");
        mids$[mid_getContent_0ff9eea8393c08aa] = env->getMethodID(cls, "getContent", "([Ljava/lang/Class;)Ljava/lang/Object;");
        mids$[mid_getDefaultPort_f2f64475e4580546] = env->getMethodID(cls, "getDefaultPort", "()I");
        mids$[mid_getFile_0090f7797e403f43] = env->getMethodID(cls, "getFile", "()Ljava/lang/String;");
        mids$[mid_getHost_0090f7797e403f43] = env->getMethodID(cls, "getHost", "()Ljava/lang/String;");
        mids$[mid_getPath_0090f7797e403f43] = env->getMethodID(cls, "getPath", "()Ljava/lang/String;");
        mids$[mid_getPort_f2f64475e4580546] = env->getMethodID(cls, "getPort", "()I");
        mids$[mid_getProtocol_0090f7797e403f43] = env->getMethodID(cls, "getProtocol", "()Ljava/lang/String;");
        mids$[mid_getQuery_0090f7797e403f43] = env->getMethodID(cls, "getQuery", "()Ljava/lang/String;");
        mids$[mid_getRef_0090f7797e403f43] = env->getMethodID(cls, "getRef", "()Ljava/lang/String;");
        mids$[mid_getUserInfo_0090f7797e403f43] = env->getMethodID(cls, "getUserInfo", "()Ljava/lang/String;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_openStream_eafcb03912e8859c] = env->getMethodID(cls, "openStream", "()Ljava/io/InputStream;");
        mids$[mid_sameFile_44e8a9d7e85e19cd] = env->getMethodID(cls, "sameFile", "(Ljava/net/URL;)Z");
        mids$[mid_toExternalForm_0090f7797e403f43] = env->getMethodID(cls, "toExternalForm", "()Ljava/lang/String;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    URL::URL(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    URL::URL(const URL & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1a726bfb6068e3c5, a0.this$, a1.this$)) {}

    URL::URL(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de8316969b81209c, a0.this$, a1.this$, a2.this$)) {}

    URL::URL(const ::java::lang::String & a0, const ::java::lang::String & a1, jint a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6030818780d04cbc, a0.this$, a1.this$, a2, a3.this$)) {}

    jboolean URL::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::String URL::getAuthority() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAuthority_0090f7797e403f43]));
    }

    ::java::lang::Object URL::getContent() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getContent_dfd7647d9110ac9f]));
    }

    ::java::lang::Object URL::getContent(const JArray< ::java::lang::Class > & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getContent_0ff9eea8393c08aa], a0.this$));
    }

    jint URL::getDefaultPort() const
    {
      return env->callIntMethod(this$, mids$[mid_getDefaultPort_f2f64475e4580546]);
    }

    ::java::lang::String URL::getFile() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFile_0090f7797e403f43]));
    }

    ::java::lang::String URL::getHost() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHost_0090f7797e403f43]));
    }

    ::java::lang::String URL::getPath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPath_0090f7797e403f43]));
    }

    jint URL::getPort() const
    {
      return env->callIntMethod(this$, mids$[mid_getPort_f2f64475e4580546]);
    }

    ::java::lang::String URL::getProtocol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProtocol_0090f7797e403f43]));
    }

    ::java::lang::String URL::getQuery() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getQuery_0090f7797e403f43]));
    }

    ::java::lang::String URL::getRef() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRef_0090f7797e403f43]));
    }

    ::java::lang::String URL::getUserInfo() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUserInfo_0090f7797e403f43]));
    }

    jint URL::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    ::java::io::InputStream URL::openStream() const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_openStream_eafcb03912e8859c]));
    }

    jboolean URL::sameFile(const URL & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_sameFile_44e8a9d7e85e19cd], a0.this$);
    }

    ::java::lang::String URL::toExternalForm() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toExternalForm_0090f7797e403f43]));
    }

    ::java::lang::String URL::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace net {
    static PyObject *t_URL_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_URL_instance_(PyTypeObject *type, PyObject *arg);
    static int t_URL_init_(t_URL *self, PyObject *args, PyObject *kwds);
    static PyObject *t_URL_equals(t_URL *self, PyObject *args);
    static PyObject *t_URL_getAuthority(t_URL *self);
    static PyObject *t_URL_getContent(t_URL *self, PyObject *args);
    static PyObject *t_URL_getDefaultPort(t_URL *self);
    static PyObject *t_URL_getFile(t_URL *self);
    static PyObject *t_URL_getHost(t_URL *self);
    static PyObject *t_URL_getPath(t_URL *self);
    static PyObject *t_URL_getPort(t_URL *self);
    static PyObject *t_URL_getProtocol(t_URL *self);
    static PyObject *t_URL_getQuery(t_URL *self);
    static PyObject *t_URL_getRef(t_URL *self);
    static PyObject *t_URL_getUserInfo(t_URL *self);
    static PyObject *t_URL_hashCode(t_URL *self, PyObject *args);
    static PyObject *t_URL_openStream(t_URL *self);
    static PyObject *t_URL_sameFile(t_URL *self, PyObject *arg);
    static PyObject *t_URL_toExternalForm(t_URL *self);
    static PyObject *t_URL_toString(t_URL *self, PyObject *args);
    static PyObject *t_URL_get__authority(t_URL *self, void *data);
    static PyObject *t_URL_get__content(t_URL *self, void *data);
    static PyObject *t_URL_get__defaultPort(t_URL *self, void *data);
    static PyObject *t_URL_get__file(t_URL *self, void *data);
    static PyObject *t_URL_get__host(t_URL *self, void *data);
    static PyObject *t_URL_get__path(t_URL *self, void *data);
    static PyObject *t_URL_get__port(t_URL *self, void *data);
    static PyObject *t_URL_get__protocol(t_URL *self, void *data);
    static PyObject *t_URL_get__query(t_URL *self, void *data);
    static PyObject *t_URL_get__ref(t_URL *self, void *data);
    static PyObject *t_URL_get__userInfo(t_URL *self, void *data);
    static PyGetSetDef t_URL__fields_[] = {
      DECLARE_GET_FIELD(t_URL, authority),
      DECLARE_GET_FIELD(t_URL, content),
      DECLARE_GET_FIELD(t_URL, defaultPort),
      DECLARE_GET_FIELD(t_URL, file),
      DECLARE_GET_FIELD(t_URL, host),
      DECLARE_GET_FIELD(t_URL, path),
      DECLARE_GET_FIELD(t_URL, port),
      DECLARE_GET_FIELD(t_URL, protocol),
      DECLARE_GET_FIELD(t_URL, query),
      DECLARE_GET_FIELD(t_URL, ref),
      DECLARE_GET_FIELD(t_URL, userInfo),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_URL__methods_[] = {
      DECLARE_METHOD(t_URL, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_URL, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_URL, equals, METH_VARARGS),
      DECLARE_METHOD(t_URL, getAuthority, METH_NOARGS),
      DECLARE_METHOD(t_URL, getContent, METH_VARARGS),
      DECLARE_METHOD(t_URL, getDefaultPort, METH_NOARGS),
      DECLARE_METHOD(t_URL, getFile, METH_NOARGS),
      DECLARE_METHOD(t_URL, getHost, METH_NOARGS),
      DECLARE_METHOD(t_URL, getPath, METH_NOARGS),
      DECLARE_METHOD(t_URL, getPort, METH_NOARGS),
      DECLARE_METHOD(t_URL, getProtocol, METH_NOARGS),
      DECLARE_METHOD(t_URL, getQuery, METH_NOARGS),
      DECLARE_METHOD(t_URL, getRef, METH_NOARGS),
      DECLARE_METHOD(t_URL, getUserInfo, METH_NOARGS),
      DECLARE_METHOD(t_URL, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_URL, openStream, METH_NOARGS),
      DECLARE_METHOD(t_URL, sameFile, METH_O),
      DECLARE_METHOD(t_URL, toExternalForm, METH_NOARGS),
      DECLARE_METHOD(t_URL, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(URL)[] = {
      { Py_tp_methods, t_URL__methods_ },
      { Py_tp_init, (void *) t_URL_init_ },
      { Py_tp_getset, t_URL__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(URL)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(URL, t_URL, URL);

    void t_URL::install(PyObject *module)
    {
      installType(&PY_TYPE(URL), &PY_TYPE_DEF(URL), module, "URL", 0);
    }

    void t_URL::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(URL), "class_", make_descriptor(URL::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(URL), "wrapfn_", make_descriptor(t_URL::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(URL), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_URL_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, URL::initializeClass, 1)))
        return NULL;
      return t_URL::wrap_Object(URL(((t_URL *) arg)->object.this$));
    }
    static PyObject *t_URL_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, URL::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_URL_init_(t_URL *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = URL(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          URL a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "ks", URL::initializeClass, &a0, &a1))
          {
            INT_CALL(object = URL(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "sss", &a0, &a1, &a2))
          {
            INT_CALL(object = URL(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 4:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          jint a2;
          ::java::lang::String a3((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "ssIs", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = URL(a0, a1, a2, a3));
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

    static PyObject *t_URL_equals(t_URL *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(URL), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_URL_getAuthority(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getAuthority());
      return j2p(result);
    }

    static PyObject *t_URL_getContent(t_URL *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getContent());
          return ::java::lang::t_Object::wrap_Object(result);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Class > a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "[K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
          {
            OBJ_CALL(result = self->object.getContent(a0));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getContent", args);
      return NULL;
    }

    static PyObject *t_URL_getDefaultPort(t_URL *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDefaultPort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_URL_getFile(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getFile());
      return j2p(result);
    }

    static PyObject *t_URL_getHost(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getHost());
      return j2p(result);
    }

    static PyObject *t_URL_getPath(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPath());
      return j2p(result);
    }

    static PyObject *t_URL_getPort(t_URL *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getPort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_URL_getProtocol(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getProtocol());
      return j2p(result);
    }

    static PyObject *t_URL_getQuery(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getQuery());
      return j2p(result);
    }

    static PyObject *t_URL_getRef(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getRef());
      return j2p(result);
    }

    static PyObject *t_URL_getUserInfo(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getUserInfo());
      return j2p(result);
    }

    static PyObject *t_URL_hashCode(t_URL *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(URL), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_URL_openStream(t_URL *self)
    {
      ::java::io::InputStream result((jobject) NULL);
      OBJ_CALL(result = self->object.openStream());
      return ::java::io::t_InputStream::wrap_Object(result);
    }

    static PyObject *t_URL_sameFile(t_URL *self, PyObject *arg)
    {
      URL a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", URL::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.sameFile(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "sameFile", arg);
      return NULL;
    }

    static PyObject *t_URL_toExternalForm(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toExternalForm());
      return j2p(result);
    }

    static PyObject *t_URL_toString(t_URL *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(URL), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_URL_get__authority(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getAuthority());
      return j2p(value);
    }

    static PyObject *t_URL_get__content(t_URL *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getContent());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_URL_get__defaultPort(t_URL *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDefaultPort());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_URL_get__file(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getFile());
      return j2p(value);
    }

    static PyObject *t_URL_get__host(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getHost());
      return j2p(value);
    }

    static PyObject *t_URL_get__path(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPath());
      return j2p(value);
    }

    static PyObject *t_URL_get__port(t_URL *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getPort());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_URL_get__protocol(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getProtocol());
      return j2p(value);
    }

    static PyObject *t_URL_get__query(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getQuery());
      return j2p(value);
    }

    static PyObject *t_URL_get__ref(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getRef());
      return j2p(value);
    }

    static PyObject *t_URL_get__userInfo(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getUserInfo());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/DSGenerator.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *DSGenerator::class$ = NULL;
        jmethodID *DSGenerator::mids$ = NULL;
        bool DSGenerator::live$ = false;

        jclass DSGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/DSGenerator");

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
    namespace rugged {
      namespace utils {
        static PyObject *t_DSGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSGenerator_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_DSGenerator__methods_[] = {
          DECLARE_METHOD(t_DSGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSGenerator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSGenerator)[] = {
          { Py_tp_methods, t_DSGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSGenerator)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::utils::DerivativeGenerator),
          NULL
        };

        DEFINE_TYPE(DSGenerator, t_DSGenerator, DSGenerator);

        void t_DSGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(DSGenerator), &PY_TYPE_DEF(DSGenerator), module, "DSGenerator", 0);
        }

        void t_DSGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSGenerator), "class_", make_descriptor(DSGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSGenerator), "wrapfn_", make_descriptor(t_DSGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSGenerator::initializeClass, 1)))
            return NULL;
          return t_DSGenerator::wrap_Object(DSGenerator(((t_DSGenerator *) arg)->object.this$));
        }
        static PyObject *t_DSGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *DtcDataLoader$LineParameters::class$ = NULL;
            jmethodID *DtcDataLoader$LineParameters::mids$ = NULL;
            bool DtcDataLoader$LineParameters::live$ = false;

            jclass DtcDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_076f09dda44638d8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;D)V");
                mids$[mid_getDSTDTC_456d9a2f64d6b28d] = env->getMethodID(cls, "getDSTDTC", "()D");
                mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DtcDataLoader$LineParameters::DtcDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_076f09dda44638d8, a0.this$, a1)) {}

            jdouble DtcDataLoader$LineParameters::getDSTDTC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDSTDTC_456d9a2f64d6b28d]);
            }

            ::org::orekit::time::AbsoluteDate DtcDataLoader$LineParameters::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
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
            static PyObject *t_DtcDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DtcDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DtcDataLoader$LineParameters_init_(t_DtcDataLoader$LineParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DtcDataLoader$LineParameters_getDSTDTC(t_DtcDataLoader$LineParameters *self);
            static PyObject *t_DtcDataLoader$LineParameters_getDate(t_DtcDataLoader$LineParameters *self);
            static PyObject *t_DtcDataLoader$LineParameters_get__dSTDTC(t_DtcDataLoader$LineParameters *self, void *data);
            static PyObject *t_DtcDataLoader$LineParameters_get__date(t_DtcDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_DtcDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_DtcDataLoader$LineParameters, dSTDTC),
              DECLARE_GET_FIELD(t_DtcDataLoader$LineParameters, date),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DtcDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, getDSTDTC, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, getDate, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DtcDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_DtcDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) t_DtcDataLoader$LineParameters_init_ },
              { Py_tp_getset, t_DtcDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DtcDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DtcDataLoader$LineParameters, t_DtcDataLoader$LineParameters, DtcDataLoader$LineParameters);

            void t_DtcDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(DtcDataLoader$LineParameters), &PY_TYPE_DEF(DtcDataLoader$LineParameters), module, "DtcDataLoader$LineParameters", 0);
            }

            void t_DtcDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader$LineParameters), "class_", make_descriptor(DtcDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader$LineParameters), "wrapfn_", make_descriptor(t_DtcDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DtcDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DtcDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_DtcDataLoader$LineParameters::wrap_Object(DtcDataLoader$LineParameters(((t_DtcDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_DtcDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DtcDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DtcDataLoader$LineParameters_init_(t_DtcDataLoader$LineParameters *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              DtcDataLoader$LineParameters object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DtcDataLoader$LineParameters(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DtcDataLoader$LineParameters_getDSTDTC(t_DtcDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDSTDTC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DtcDataLoader$LineParameters_getDate(t_DtcDataLoader$LineParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_DtcDataLoader$LineParameters_get__dSTDTC(t_DtcDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDSTDTC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DtcDataLoader$LineParameters_get__date(t_DtcDataLoader$LineParameters *self, void *data)
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
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace metrics {

        ::java::lang::Class *FieldProbabilityOfCollision::class$ = NULL;
        jmethodID *FieldProbabilityOfCollision::mids$ = NULL;
        bool FieldProbabilityOfCollision::live$ = false;

        jclass FieldProbabilityOfCollision::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/ssa/metrics/FieldProbabilityOfCollision");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6325a14c826373f5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Ljava/lang/String;)V");
            mids$[mid_init$_9a35f8d38d86978e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Ljava/lang/String;Z)V");
            mids$[mid_init$_1aee98120e32b8d3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Ljava/lang/String;Z)V");
            mids$[mid_getLowerLimit_e6d4d3215c30992a] = env->getMethodID(cls, "getLowerLimit", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getProbabilityOfCollisionMethodName_0090f7797e403f43] = env->getMethodID(cls, "getProbabilityOfCollisionMethodName", "()Ljava/lang/String;");
            mids$[mid_getUpperLimit_e6d4d3215c30992a] = env->getMethodID(cls, "getUpperLimit", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValue_e6d4d3215c30992a] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_isMaxProbability_e470b6d9e0d979db] = env->getMethodID(cls, "isMaxProbability", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldProbabilityOfCollision::FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6325a14c826373f5, a0.this$, a1.this$)) {}

        FieldProbabilityOfCollision::FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement & a0, const ::java::lang::String & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9a35f8d38d86978e, a0.this$, a1.this$, a2)) {}

        FieldProbabilityOfCollision::FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::java::lang::String & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1aee98120e32b8d3, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

        ::org::hipparchus::CalculusFieldElement FieldProbabilityOfCollision::getLowerLimit() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLowerLimit_e6d4d3215c30992a]));
        }

        ::java::lang::String FieldProbabilityOfCollision::getProbabilityOfCollisionMethodName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProbabilityOfCollisionMethodName_0090f7797e403f43]));
        }

        ::org::hipparchus::CalculusFieldElement FieldProbabilityOfCollision::getUpperLimit() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getUpperLimit_e6d4d3215c30992a]));
        }

        ::org::hipparchus::CalculusFieldElement FieldProbabilityOfCollision::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_e6d4d3215c30992a]));
        }

        jboolean FieldProbabilityOfCollision::isMaxProbability() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isMaxProbability_e470b6d9e0d979db]);
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
      namespace metrics {
        static PyObject *t_FieldProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldProbabilityOfCollision_of_(t_FieldProbabilityOfCollision *self, PyObject *args);
        static int t_FieldProbabilityOfCollision_init_(t_FieldProbabilityOfCollision *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldProbabilityOfCollision_getLowerLimit(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_getUpperLimit(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_getValue(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_isMaxProbability(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_get__lowerLimit(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__maxProbability(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__upperLimit(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__value(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__parameters_(t_FieldProbabilityOfCollision *self, void *data);
        static PyGetSetDef t_FieldProbabilityOfCollision__fields_[] = {
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, lowerLimit),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, maxProbability),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, probabilityOfCollisionMethodName),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, upperLimit),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, value),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldProbabilityOfCollision__methods_[] = {
          DECLARE_METHOD(t_FieldProbabilityOfCollision, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getLowerLimit, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getProbabilityOfCollisionMethodName, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getUpperLimit, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getValue, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, isMaxProbability, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldProbabilityOfCollision)[] = {
          { Py_tp_methods, t_FieldProbabilityOfCollision__methods_ },
          { Py_tp_init, (void *) t_FieldProbabilityOfCollision_init_ },
          { Py_tp_getset, t_FieldProbabilityOfCollision__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldProbabilityOfCollision)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldProbabilityOfCollision, t_FieldProbabilityOfCollision, FieldProbabilityOfCollision);
        PyObject *t_FieldProbabilityOfCollision::wrap_Object(const FieldProbabilityOfCollision& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldProbabilityOfCollision::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldProbabilityOfCollision *self = (t_FieldProbabilityOfCollision *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldProbabilityOfCollision::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldProbabilityOfCollision::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldProbabilityOfCollision *self = (t_FieldProbabilityOfCollision *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldProbabilityOfCollision::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldProbabilityOfCollision), &PY_TYPE_DEF(FieldProbabilityOfCollision), module, "FieldProbabilityOfCollision", 0);
        }

        void t_FieldProbabilityOfCollision::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldProbabilityOfCollision), "class_", make_descriptor(FieldProbabilityOfCollision::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldProbabilityOfCollision), "wrapfn_", make_descriptor(t_FieldProbabilityOfCollision::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldProbabilityOfCollision), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldProbabilityOfCollision::initializeClass, 1)))
            return NULL;
          return t_FieldProbabilityOfCollision::wrap_Object(FieldProbabilityOfCollision(((t_FieldProbabilityOfCollision *) arg)->object.this$));
        }
        static PyObject *t_FieldProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldProbabilityOfCollision::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldProbabilityOfCollision_of_(t_FieldProbabilityOfCollision *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldProbabilityOfCollision_init_(t_FieldProbabilityOfCollision *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              FieldProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "Ks", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
              {
                INT_CALL(object = FieldProbabilityOfCollision(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jboolean a2;
              FieldProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "KsZ", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldProbabilityOfCollision(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::lang::String a3((jobject) NULL);
              jboolean a4;
              FieldProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "KKKsZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4))
              {
                INT_CALL(object = FieldProbabilityOfCollision(a0, a1, a2, a3, a4));
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

        static PyObject *t_FieldProbabilityOfCollision_getLowerLimit(t_FieldProbabilityOfCollision *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getLowerLimit());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProbabilityOfCollisionMethodName());
          return j2p(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_getUpperLimit(t_FieldProbabilityOfCollision *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getUpperLimit());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_getValue(t_FieldProbabilityOfCollision *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_isMaxProbability(t_FieldProbabilityOfCollision *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isMaxProbability());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldProbabilityOfCollision_get__parameters_(t_FieldProbabilityOfCollision *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldProbabilityOfCollision_get__lowerLimit(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getLowerLimit());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__maxProbability(t_FieldProbabilityOfCollision *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isMaxProbability());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProbabilityOfCollisionMethodName());
          return j2p(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__upperLimit(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getUpperLimit());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__value(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSRangeModifier.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *OnBoardAntennaOneWayGNSSRangeModifier::mids$ = NULL;
          bool OnBoardAntennaOneWayGNSSRangeModifier::live$ = false;

          jclass OnBoardAntennaOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_dd70a907d504c65c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaOneWayGNSSRangeModifier::OnBoardAntennaOneWayGNSSRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dd70a907d504c65c, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List OnBoardAntennaOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void OnBoardAntennaOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaOneWayGNSSRangeModifier_init_(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaOneWayGNSSRangeModifier, t_OnBoardAntennaOneWayGNSSRangeModifier, OnBoardAntennaOneWayGNSSRangeModifier);

          void t_OnBoardAntennaOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), &PY_TYPE_DEF(OnBoardAntennaOneWayGNSSRangeModifier), module, "OnBoardAntennaOneWayGNSSRangeModifier", 0);
          }

          void t_OnBoardAntennaOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), "class_", make_descriptor(OnBoardAntennaOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaOneWayGNSSRangeModifier::wrap_Object(OnBoardAntennaOneWayGNSSRangeModifier(((t_OnBoardAntennaOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaOneWayGNSSRangeModifier_init_(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            OnBoardAntennaOneWayGNSSRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OnBoardAntennaOneWayGNSSRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self, void *data)
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
          mids$[mid_nextGaussian_456d9a2f64d6b28d] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_38565d58479aa24a] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_955f7541fca701ab] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_0a2a1ac2721c0336] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_fefb08975c10f0a1] = env->getMethodID(cls, "setSeed", "(J)V");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_clearCache_7ae3461a92a43152] = env->getMethodID(cls, "clearCache", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble BaseRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_456d9a2f64d6b28d]);
      }

      jint BaseRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_38565d58479aa24a], a0);
      }

      jlong BaseRandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_955f7541fca701ab], a0);
      }

      void BaseRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_0a2a1ac2721c0336], a0);
      }

      void BaseRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_fefb08975c10f0a1], a0);
      }

      ::java::lang::String BaseRandomGenerator::toString() const
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
#include "org/orekit/forces/gravity/potential/SphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *SphericalHarmonicsProvider::class$ = NULL;
          jmethodID *SphericalHarmonicsProvider::mids$ = NULL;
          bool SphericalHarmonicsProvider::live$ = false;

          jclass SphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/SphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAe_456d9a2f64d6b28d] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_f2f64475e4580546] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_f2f64475e4580546] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_aaa854c403487cf3] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SphericalHarmonicsProvider::getAe() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAe_456d9a2f64d6b28d]);
          }

          jint SphericalHarmonicsProvider::getMaxDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxDegree_f2f64475e4580546]);
          }

          jint SphericalHarmonicsProvider::getMaxOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxOrder_f2f64475e4580546]);
          }

          jdouble SphericalHarmonicsProvider::getMu() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
          }

          ::org::orekit::time::AbsoluteDate SphericalHarmonicsProvider::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_aaa854c403487cf3]));
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
          static PyObject *t_SphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalHarmonicsProvider_getAe(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getMaxDegree(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getMaxOrder(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getMu(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getReferenceDate(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_get__ae(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__maxDegree(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__maxOrder(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__mu(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__referenceDate(t_SphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_SphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, ae),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, maxDegree),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, maxOrder),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, mu),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, referenceDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_SphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getAe, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getMaxDegree, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getMaxOrder, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getMu, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getReferenceDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_SphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::TideSystemProvider),
            NULL
          };

          DEFINE_TYPE(SphericalHarmonicsProvider, t_SphericalHarmonicsProvider, SphericalHarmonicsProvider);

          void t_SphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(SphericalHarmonicsProvider), &PY_TYPE_DEF(SphericalHarmonicsProvider), module, "SphericalHarmonicsProvider", 0);
          }

          void t_SphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalHarmonicsProvider), "class_", make_descriptor(SphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_SphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_SphericalHarmonicsProvider::wrap_Object(SphericalHarmonicsProvider(((t_SphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_SphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SphericalHarmonicsProvider_getAe(t_SphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAe());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getMaxDegree(t_SphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getMaxOrder(t_SphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getMu(t_SphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMu());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getReferenceDate(t_SphericalHarmonicsProvider *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__ae(t_SphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAe());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__maxDegree(t_SphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__maxOrder(t_SphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxOrder());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__mu(t_SphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMu());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__referenceDate(t_SphericalHarmonicsProvider *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Map.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Map::class$ = NULL;
    jmethodID *Map::mids$ = NULL;
    bool Map::live$ = false;

    jclass Map::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Map");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_containsKey_229c87223f486349] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_229c87223f486349] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_copyOf_08202a898cbb39d5] = env->getStaticMethodID(cls, "copyOf", "(Ljava/util/Map;)Ljava/util/Map;");
        mids$[mid_entry_3d38e210253e6556] = env->getStaticMethodID(cls, "entry", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_entrySet_e9e1a6780fe94297] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_ed50a8b49b8274dc] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_286de79696ab0806] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_e9e1a6780fe94297] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_of_d6753b7055940a54] = env->getStaticMethodID(cls, "of", "()Ljava/util/Map;");
        mids$[mid_of_b6ac13fbe4a379e1] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_e4444c9f2615f801] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_188df6dd56b4cf20] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_423169855a8c41e6] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_28e67bee2ecbf41a] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_ac98862806e80c95] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_f21b887c6e388379] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_154a6c353f195ae6] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_354e2a841cfb1472] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_51d3b1e1bc9c230c] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_ofEntries_33dbce61912b1a14] = env->getStaticMethodID(cls, "ofEntries", "([Ljava/util/Map$Entry;)Ljava/util/Map;");
        mids$[mid_put_286de79696ab0806] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_8b4e3987d7532731] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_286de79696ab0806] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_ed50a8b49b8274dc] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_f8c930c8a53ce61d] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_286de79696ab0806] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_9f7c677a07c1445a] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
        mids$[mid_values_cfcfd130f9013e3e] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Map::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
    }

    jboolean Map::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_229c87223f486349], a0.this$);
    }

    jboolean Map::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_229c87223f486349], a0.this$);
    }

    Map Map::copyOf(const Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_copyOf_08202a898cbb39d5], a0.this$));
    }

    ::java::util::Map$Entry Map::entry(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map$Entry(env->callStaticObjectMethod(cls, mids$[mid_entry_3d38e210253e6556], a0.this$, a1.this$));
    }

    ::java::util::Set Map::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_e9e1a6780fe94297]));
    }

    jboolean Map::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::Object Map::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_ed50a8b49b8274dc], a0.this$));
    }

    ::java::lang::Object Map::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_286de79696ab0806], a0.this$, a1.this$));
    }

    jint Map::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jboolean Map::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    ::java::util::Set Map::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_e9e1a6780fe94297]));
    }

    Map Map::of()
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_d6753b7055940a54]));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_b6ac13fbe4a379e1], a0.this$, a1.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_e4444c9f2615f801], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_188df6dd56b4cf20], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_423169855a8c41e6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_28e67bee2ecbf41a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_ac98862806e80c95], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_f21b887c6e388379], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13, const ::java::lang::Object & a14, const ::java::lang::Object & a15)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_154a6c353f195ae6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13, const ::java::lang::Object & a14, const ::java::lang::Object & a15, const ::java::lang::Object & a16, const ::java::lang::Object & a17)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_354e2a841cfb1472], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16.this$, a17.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13, const ::java::lang::Object & a14, const ::java::lang::Object & a15, const ::java::lang::Object & a16, const ::java::lang::Object & a17, const ::java::lang::Object & a18, const ::java::lang::Object & a19)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_51d3b1e1bc9c230c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16.this$, a17.this$, a18.this$, a19.this$));
    }

    Map Map::ofEntries(const JArray< ::java::util::Map$Entry > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_ofEntries_33dbce61912b1a14], a0.this$));
    }

    ::java::lang::Object Map::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_286de79696ab0806], a0.this$, a1.this$));
    }

    void Map::putAll(const Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_8b4e3987d7532731], a0.this$);
    }

    ::java::lang::Object Map::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_286de79696ab0806], a0.this$, a1.this$));
    }

    ::java::lang::Object Map::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_ed50a8b49b8274dc], a0.this$));
    }

    jboolean Map::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_f8c930c8a53ce61d], a0.this$, a1.this$);
    }

    ::java::lang::Object Map::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_286de79696ab0806], a0.this$, a1.this$));
    }

    jboolean Map::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_9f7c677a07c1445a], a0.this$, a1.this$, a2.this$);
    }

    jint Map::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
    }

    ::java::util::Collection Map::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_cfcfd130f9013e3e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Map_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_of_(t_Map *self, PyObject *args);
    static PyObject *t_Map_clear(t_Map *self);
    static PyObject *t_Map_containsKey(t_Map *self, PyObject *arg);
    static PyObject *t_Map_containsValue(t_Map *self, PyObject *arg);
    static PyObject *t_Map_copyOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_entry(PyTypeObject *type, PyObject *args);
    static PyObject *t_Map_entrySet(t_Map *self);
    static PyObject *t_Map_equals(t_Map *self, PyObject *args);
    static PyObject *t_Map_get(t_Map *self, PyObject *arg);
    static PyObject *t_Map_getOrDefault(t_Map *self, PyObject *args);
    static PyObject *t_Map_hashCode(t_Map *self, PyObject *args);
    static PyObject *t_Map_isEmpty(t_Map *self);
    static PyObject *t_Map_keySet(t_Map *self);
    static PyObject *t_Map_of(PyTypeObject *type, PyObject *args);
    static PyObject *t_Map_ofEntries(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_put(t_Map *self, PyObject *args);
    static PyObject *t_Map_putAll(t_Map *self, PyObject *arg);
    static PyObject *t_Map_putIfAbsent(t_Map *self, PyObject *args);
    static PyObject *t_Map_remove(t_Map *self, PyObject *args);
    static PyObject *t_Map_replace(t_Map *self, PyObject *args);
    static PyObject *t_Map_size(t_Map *self);
    static PyObject *t_Map_values(t_Map *self);
    static PyObject *t_Map_get__empty(t_Map *self, void *data);
    static PyObject *t_Map_get__parameters_(t_Map *self, void *data);
    static PyGetSetDef t_Map__fields_[] = {
      DECLARE_GET_FIELD(t_Map, empty),
      DECLARE_GET_FIELD(t_Map, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Map__methods_[] = {
      DECLARE_METHOD(t_Map, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, of_, METH_VARARGS),
      DECLARE_METHOD(t_Map, clear, METH_NOARGS),
      DECLARE_METHOD(t_Map, containsKey, METH_O),
      DECLARE_METHOD(t_Map, containsValue, METH_O),
      DECLARE_METHOD(t_Map, copyOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, entry, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Map, entrySet, METH_NOARGS),
      DECLARE_METHOD(t_Map, equals, METH_VARARGS),
      DECLARE_METHOD(t_Map, get, METH_O),
      DECLARE_METHOD(t_Map, getOrDefault, METH_VARARGS),
      DECLARE_METHOD(t_Map, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Map, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_Map, keySet, METH_NOARGS),
      DECLARE_METHOD(t_Map, of, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Map, ofEntries, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, put, METH_VARARGS),
      DECLARE_METHOD(t_Map, putAll, METH_O),
      DECLARE_METHOD(t_Map, putIfAbsent, METH_VARARGS),
      DECLARE_METHOD(t_Map, remove, METH_VARARGS),
      DECLARE_METHOD(t_Map, replace, METH_VARARGS),
      DECLARE_METHOD(t_Map, size, METH_NOARGS),
      DECLARE_METHOD(t_Map, values, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Map)[] = {
      { Py_tp_methods, t_Map__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Map__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Map)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Map, t_Map, Map);
    PyObject *t_Map::wrap_Object(const Map& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Map::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Map *self = (t_Map *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_Map::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Map::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Map *self = (t_Map *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_Map::install(PyObject *module)
    {
      installType(&PY_TYPE(Map), &PY_TYPE_DEF(Map), module, "Map", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "Entry", make_descriptor(&PY_TYPE_DEF(Map$Entry)));
    }

    void t_Map::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "class_", make_descriptor(Map::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "wrapfn_", make_descriptor(t_Map::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Map_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Map::initializeClass, 1)))
        return NULL;
      return t_Map::wrap_Object(Map(((t_Map *) arg)->object.this$));
    }
    static PyObject *t_Map_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Map::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Map_of_(t_Map *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Map_clear(t_Map *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_Map_containsKey(t_Map *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
      return NULL;
    }

    static PyObject *t_Map_containsValue(t_Map *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsValue", arg);
      return NULL;
    }

    static PyObject *t_Map_copyOf(PyTypeObject *type, PyObject *arg)
    {
      Map a0((jobject) NULL);
      PyTypeObject **p0;
      Map result((jobject) NULL);

      if (!parseArg(arg, "K", Map::initializeClass, &a0, &p0, t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Map::copyOf(a0));
        return t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "copyOf", arg);
      return NULL;
    }

    static PyObject *t_Map_entry(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Map::entry(a0, a1));
        return ::java::util::t_Map$Entry::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "entry", args);
      return NULL;
    }

    static PyObject *t_Map_entrySet(t_Map *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.entrySet());
      return ::java::util::t_Set::wrap_Object(result);
    }

    static PyObject *t_Map_equals(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Map), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Map_get(t_Map *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_Map_getOrDefault(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oO", self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.getOrDefault(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getOrDefault", args);
      return NULL;
    }

    static PyObject *t_Map_hashCode(t_Map *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Map), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Map_isEmpty(t_Map *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Map_keySet(t_Map *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.keySet());
      return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Map_of(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Map result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Map::of());
          return t_Map::wrap_Object(result);
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooo", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 10:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 12:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 14:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 16:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          ::java::lang::Object a14((jobject) NULL);
          ::java::lang::Object a15((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 18:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          ::java::lang::Object a14((jobject) NULL);
          ::java::lang::Object a15((jobject) NULL);
          ::java::lang::Object a16((jobject) NULL);
          ::java::lang::Object a17((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 20:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          ::java::lang::Object a14((jobject) NULL);
          ::java::lang::Object a15((jobject) NULL);
          ::java::lang::Object a16((jobject) NULL);
          ::java::lang::Object a17((jobject) NULL);
          ::java::lang::Object a18((jobject) NULL);
          ::java::lang::Object a19((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17, &a18, &a19))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19));
            return t_Map::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "of", args);
      return NULL;
    }

    static PyObject *t_Map_ofEntries(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::util::Map$Entry > a0((jobject) NULL);
      PyTypeObject **p0;
      Map result((jobject) NULL);

      if (!parseArg(arg, "[K", ::java::util::Map$Entry::initializeClass, &a0, &p0, ::java::util::t_Map$Entry::parameters_))
      {
        OBJ_CALL(result = ::java::util::Map::ofEntries(a0));
        return t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "ofEntries", arg);
      return NULL;
    }

    static PyObject *t_Map_put(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "put", args);
      return NULL;
    }

    static PyObject *t_Map_putAll(t_Map *self, PyObject *arg)
    {
      Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", Map::initializeClass, &a0, &p0, t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "putAll", arg);
      return NULL;
    }

    static PyObject *t_Map_putIfAbsent(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.putIfAbsent(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "putIfAbsent", args);
      return NULL;
    }

    static PyObject *t_Map_remove(t_Map *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.remove(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "remove", args);
      return NULL;
    }

    static PyObject *t_Map_replace(t_Map *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "OOO", self->parameters[0], self->parameters[1], self->parameters[1], &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.replace(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "replace", args);
      return NULL;
    }

    static PyObject *t_Map_size(t_Map *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Map_values(t_Map *self)
    {
      ::java::util::Collection result((jobject) NULL);
      OBJ_CALL(result = self->object.values());
      return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
    }
    static PyObject *t_Map_get__parameters_(t_Map *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Map_get__empty(t_Map *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitFixedStepHandler::class$ = NULL;
        jmethodID *FieldOrekitFixedStepHandler::mids$ = NULL;
        bool FieldOrekitFixedStepHandler::live$ = false;

        jclass FieldOrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_52154b94d63e10ed] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_52154b94d63e10ed] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_init_2dfc984e8e112b73] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldOrekitFixedStepHandler::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_52154b94d63e10ed], a0.this$);
        }

        void FieldOrekitFixedStepHandler::handleStep(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_52154b94d63e10ed], a0.this$);
        }

        void FieldOrekitFixedStepHandler::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2dfc984e8e112b73], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_FieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_of_(t_FieldOrekitFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitFixedStepHandler_finish(t_FieldOrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_handleStep(t_FieldOrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_init(t_FieldOrekitFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitFixedStepHandler_get__parameters_(t_FieldOrekitFixedStepHandler *self, void *data);
        static PyGetSetDef t_FieldOrekitFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitFixedStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, finish, METH_O),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_FieldOrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOrekitFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOrekitFixedStepHandler, t_FieldOrekitFixedStepHandler, FieldOrekitFixedStepHandler);
        PyObject *t_FieldOrekitFixedStepHandler::wrap_Object(const FieldOrekitFixedStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitFixedStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitFixedStepHandler *self = (t_FieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitFixedStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitFixedStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitFixedStepHandler *self = (t_FieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitFixedStepHandler), &PY_TYPE_DEF(FieldOrekitFixedStepHandler), module, "FieldOrekitFixedStepHandler", 0);
        }

        void t_FieldOrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitFixedStepHandler), "class_", make_descriptor(FieldOrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitFixedStepHandler), "wrapfn_", make_descriptor(t_FieldOrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitFixedStepHandler::wrap_Object(FieldOrekitFixedStepHandler(((t_FieldOrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitFixedStepHandler_of_(t_FieldOrekitFixedStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldOrekitFixedStepHandler_finish(t_FieldOrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitFixedStepHandler_handleStep(t_FieldOrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitFixedStepHandler_init(t_FieldOrekitFixedStepHandler *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "KKK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldOrekitFixedStepHandler_get__parameters_(t_FieldOrekitFixedStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LibrationOrbitFamily::class$ = NULL;
      jmethodID *LibrationOrbitFamily::mids$ = NULL;
      bool LibrationOrbitFamily::live$ = false;
      LibrationOrbitFamily *LibrationOrbitFamily::NORTHERN = NULL;
      LibrationOrbitFamily *LibrationOrbitFamily::SOUTHERN = NULL;

      jclass LibrationOrbitFamily::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LibrationOrbitFamily");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_892c58b79d5b5e3a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/LibrationOrbitFamily;");
          mids$[mid_values_e93e460626f5302a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/LibrationOrbitFamily;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NORTHERN = new LibrationOrbitFamily(env->getStaticObjectField(cls, "NORTHERN", "Lorg/orekit/orbits/LibrationOrbitFamily;"));
          SOUTHERN = new LibrationOrbitFamily(env->getStaticObjectField(cls, "SOUTHERN", "Lorg/orekit/orbits/LibrationOrbitFamily;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LibrationOrbitFamily LibrationOrbitFamily::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LibrationOrbitFamily(env->callStaticObjectMethod(cls, mids$[mid_valueOf_892c58b79d5b5e3a], a0.this$));
      }

      JArray< LibrationOrbitFamily > LibrationOrbitFamily::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LibrationOrbitFamily >(env->callStaticObjectMethod(cls, mids$[mid_values_e93e460626f5302a]));
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
      static PyObject *t_LibrationOrbitFamily_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitFamily_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitFamily_of_(t_LibrationOrbitFamily *self, PyObject *args);
      static PyObject *t_LibrationOrbitFamily_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LibrationOrbitFamily_values(PyTypeObject *type);
      static PyObject *t_LibrationOrbitFamily_get__parameters_(t_LibrationOrbitFamily *self, void *data);
      static PyGetSetDef t_LibrationOrbitFamily__fields_[] = {
        DECLARE_GET_FIELD(t_LibrationOrbitFamily, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LibrationOrbitFamily__methods_[] = {
        DECLARE_METHOD(t_LibrationOrbitFamily, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitFamily, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitFamily, of_, METH_VARARGS),
        DECLARE_METHOD(t_LibrationOrbitFamily, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitFamily, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LibrationOrbitFamily)[] = {
        { Py_tp_methods, t_LibrationOrbitFamily__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LibrationOrbitFamily__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LibrationOrbitFamily)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LibrationOrbitFamily, t_LibrationOrbitFamily, LibrationOrbitFamily);
      PyObject *t_LibrationOrbitFamily::wrap_Object(const LibrationOrbitFamily& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitFamily::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitFamily *self = (t_LibrationOrbitFamily *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LibrationOrbitFamily::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitFamily::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitFamily *self = (t_LibrationOrbitFamily *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LibrationOrbitFamily::install(PyObject *module)
      {
        installType(&PY_TYPE(LibrationOrbitFamily), &PY_TYPE_DEF(LibrationOrbitFamily), module, "LibrationOrbitFamily", 0);
      }

      void t_LibrationOrbitFamily::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "class_", make_descriptor(LibrationOrbitFamily::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "wrapfn_", make_descriptor(t_LibrationOrbitFamily::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "boxfn_", make_descriptor(boxObject));
        env->getClass(LibrationOrbitFamily::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "NORTHERN", make_descriptor(t_LibrationOrbitFamily::wrap_Object(*LibrationOrbitFamily::NORTHERN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "SOUTHERN", make_descriptor(t_LibrationOrbitFamily::wrap_Object(*LibrationOrbitFamily::SOUTHERN)));
      }

      static PyObject *t_LibrationOrbitFamily_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LibrationOrbitFamily::initializeClass, 1)))
          return NULL;
        return t_LibrationOrbitFamily::wrap_Object(LibrationOrbitFamily(((t_LibrationOrbitFamily *) arg)->object.this$));
      }
      static PyObject *t_LibrationOrbitFamily_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LibrationOrbitFamily::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LibrationOrbitFamily_of_(t_LibrationOrbitFamily *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LibrationOrbitFamily_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LibrationOrbitFamily result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitFamily::valueOf(a0));
          return t_LibrationOrbitFamily::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LibrationOrbitFamily_values(PyTypeObject *type)
      {
        JArray< LibrationOrbitFamily > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitFamily::values());
        return JArray<jobject>(result.this$).wrap(t_LibrationOrbitFamily::wrap_jobject);
      }
      static PyObject *t_LibrationOrbitFamily_get__parameters_(t_LibrationOrbitFamily *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AdamsMoultonIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AdamsMoultonIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsMoultonIntegratorBuilder::mids$ = NULL;
        bool AdamsMoultonIntegratorBuilder::live$ = false;

        jclass AdamsMoultonIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsMoultonIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d3d0b69fc0b5db95] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_501b0015ccc7d54e] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonIntegratorBuilder::AdamsMoultonIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d3d0b69fc0b5db95, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractIntegrator AdamsMoultonIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_501b0015ccc7d54e], a0.this$, a1.this$));
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
        static PyObject *t_AdamsMoultonIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsMoultonIntegratorBuilder_init_(t_AdamsMoultonIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsMoultonIntegratorBuilder_buildIntegrator(t_AdamsMoultonIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_AdamsMoultonIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsMoultonIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonIntegratorBuilder, t_AdamsMoultonIntegratorBuilder, AdamsMoultonIntegratorBuilder);

        void t_AdamsMoultonIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonIntegratorBuilder), &PY_TYPE_DEF(AdamsMoultonIntegratorBuilder), module, "AdamsMoultonIntegratorBuilder", 0);
        }

        void t_AdamsMoultonIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegratorBuilder), "class_", make_descriptor(AdamsMoultonIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsMoultonIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonIntegratorBuilder::wrap_Object(AdamsMoultonIntegratorBuilder(((t_AdamsMoultonIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsMoultonIntegratorBuilder_init_(t_AdamsMoultonIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsMoultonIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsMoultonIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsMoultonIntegratorBuilder_buildIntegrator(t_AdamsMoultonIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/util/Map.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *ShortPeriodTerms::class$ = NULL;
            jmethodID *ShortPeriodTerms::mids$ = NULL;
            bool ShortPeriodTerms::live$ = false;

            jclass ShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getCoefficients_f2bf54770645c00d] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_0090f7797e403f43] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_value_bae9521eacc13195] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/Orbit;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::Map ShortPeriodTerms::getCoefficients(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Set & a1) const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCoefficients_f2bf54770645c00d], a0.this$, a1.this$));
            }

            ::java::lang::String ShortPeriodTerms::getCoefficientsKeyPrefix() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCoefficientsKeyPrefix_0090f7797e403f43]));
            }

            JArray< jdouble > ShortPeriodTerms::value(const ::org::orekit::orbits::Orbit & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_bae9521eacc13195], a0.this$));
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
            static PyObject *t_ShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ShortPeriodTerms_getCoefficients(t_ShortPeriodTerms *self, PyObject *args);
            static PyObject *t_ShortPeriodTerms_getCoefficientsKeyPrefix(t_ShortPeriodTerms *self);
            static PyObject *t_ShortPeriodTerms_value(t_ShortPeriodTerms *self, PyObject *arg);
            static PyObject *t_ShortPeriodTerms_get__coefficientsKeyPrefix(t_ShortPeriodTerms *self, void *data);
            static PyGetSetDef t_ShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_ShortPeriodTerms, coefficientsKeyPrefix),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_ShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodTerms, getCoefficients, METH_VARARGS),
              DECLARE_METHOD(t_ShortPeriodTerms, getCoefficientsKeyPrefix, METH_NOARGS),
              DECLARE_METHOD(t_ShortPeriodTerms, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ShortPeriodTerms)[] = {
              { Py_tp_methods, t_ShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ShortPeriodTerms, t_ShortPeriodTerms, ShortPeriodTerms);

            void t_ShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(ShortPeriodTerms), &PY_TYPE_DEF(ShortPeriodTerms), module, "ShortPeriodTerms", 0);
            }

            void t_ShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodTerms), "class_", make_descriptor(ShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodTerms), "wrapfn_", make_descriptor(t_ShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_ShortPeriodTerms::wrap_Object(ShortPeriodTerms(((t_ShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_ShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ShortPeriodTerms_getCoefficients(t_ShortPeriodTerms *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::java::util::Set a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::Map result((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Set::initializeClass, &a0, &a1, &p1, ::java::util::t_Set::parameters_))
              {
                OBJ_CALL(result = self->object.getCoefficients(a0, a1));
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(Object));
              }

              PyErr_SetArgsError((PyObject *) self, "getCoefficients", args);
              return NULL;
            }

            static PyObject *t_ShortPeriodTerms_getCoefficientsKeyPrefix(t_ShortPeriodTerms *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCoefficientsKeyPrefix());
              return j2p(result);
            }

            static PyObject *t_ShortPeriodTerms_value(t_ShortPeriodTerms *self, PyObject *arg)
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
              return NULL;
            }

            static PyObject *t_ShortPeriodTerms_get__coefficientsKeyPrefix(t_ShortPeriodTerms *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCoefficientsKeyPrefix());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "java/lang/String.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *OptimizerId::class$ = NULL;
        jmethodID *OptimizerId::mids$ = NULL;
        bool OptimizerId::live$ = false;
        OptimizerId *OptimizerId::GAUSS_NEWTON_LU = NULL;
        OptimizerId *OptimizerId::GAUSS_NEWTON_QR = NULL;
        OptimizerId *OptimizerId::LEVENBERG_MARQUADT = NULL;

        jclass OptimizerId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/OptimizerId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_571ffc31fcdafa41] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/adjustment/OptimizerId;");
            mids$[mid_values_4b58c853facf53c2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/adjustment/OptimizerId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GAUSS_NEWTON_LU = new OptimizerId(env->getStaticObjectField(cls, "GAUSS_NEWTON_LU", "Lorg/orekit/rugged/adjustment/OptimizerId;"));
            GAUSS_NEWTON_QR = new OptimizerId(env->getStaticObjectField(cls, "GAUSS_NEWTON_QR", "Lorg/orekit/rugged/adjustment/OptimizerId;"));
            LEVENBERG_MARQUADT = new OptimizerId(env->getStaticObjectField(cls, "LEVENBERG_MARQUADT", "Lorg/orekit/rugged/adjustment/OptimizerId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OptimizerId OptimizerId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return OptimizerId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_571ffc31fcdafa41], a0.this$));
        }

        JArray< OptimizerId > OptimizerId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< OptimizerId >(env->callStaticObjectMethod(cls, mids$[mid_values_4b58c853facf53c2]));
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
        static PyObject *t_OptimizerId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizerId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizerId_of_(t_OptimizerId *self, PyObject *args);
        static PyObject *t_OptimizerId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_OptimizerId_values(PyTypeObject *type);
        static PyObject *t_OptimizerId_get__parameters_(t_OptimizerId *self, void *data);
        static PyGetSetDef t_OptimizerId__fields_[] = {
          DECLARE_GET_FIELD(t_OptimizerId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OptimizerId__methods_[] = {
          DECLARE_METHOD(t_OptimizerId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizerId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizerId, of_, METH_VARARGS),
          DECLARE_METHOD(t_OptimizerId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_OptimizerId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OptimizerId)[] = {
          { Py_tp_methods, t_OptimizerId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_OptimizerId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OptimizerId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(OptimizerId, t_OptimizerId, OptimizerId);
        PyObject *t_OptimizerId::wrap_Object(const OptimizerId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_OptimizerId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_OptimizerId *self = (t_OptimizerId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_OptimizerId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_OptimizerId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_OptimizerId *self = (t_OptimizerId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_OptimizerId::install(PyObject *module)
        {
          installType(&PY_TYPE(OptimizerId), &PY_TYPE_DEF(OptimizerId), module, "OptimizerId", 0);
        }

        void t_OptimizerId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "class_", make_descriptor(OptimizerId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "wrapfn_", make_descriptor(t_OptimizerId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "boxfn_", make_descriptor(boxObject));
          env->getClass(OptimizerId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "GAUSS_NEWTON_LU", make_descriptor(t_OptimizerId::wrap_Object(*OptimizerId::GAUSS_NEWTON_LU)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "GAUSS_NEWTON_QR", make_descriptor(t_OptimizerId::wrap_Object(*OptimizerId::GAUSS_NEWTON_QR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "LEVENBERG_MARQUADT", make_descriptor(t_OptimizerId::wrap_Object(*OptimizerId::LEVENBERG_MARQUADT)));
        }

        static PyObject *t_OptimizerId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OptimizerId::initializeClass, 1)))
            return NULL;
          return t_OptimizerId::wrap_Object(OptimizerId(((t_OptimizerId *) arg)->object.this$));
        }
        static PyObject *t_OptimizerId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OptimizerId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OptimizerId_of_(t_OptimizerId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_OptimizerId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          OptimizerId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::adjustment::OptimizerId::valueOf(a0));
            return t_OptimizerId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_OptimizerId_values(PyTypeObject *type)
        {
          JArray< OptimizerId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::adjustment::OptimizerId::values());
          return JArray<jobject>(result.this$).wrap(t_OptimizerId::wrap_jobject);
        }
        static PyObject *t_OptimizerId_get__parameters_(t_OptimizerId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriversProvider::class$ = NULL;
      jmethodID *ParameterDriversProvider::mids$ = NULL;
      bool ParameterDriversProvider::live$ = false;

      jclass ParameterDriversProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriversProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getNbParametersDriversValue_f2f64475e4580546] = env->getMethodID(cls, "getNbParametersDriversValue", "()I");
          mids$[mid_getParameterDriver_d5ba0ef5703f4c62] = env->getMethodID(cls, "getParameterDriver", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriver;");
          mids$[mid_getParameters_7cdc325af0834901] = env->getMethodID(cls, "getParameters", "()[D");
          mids$[mid_getParameters_e586dea4c0bad69b] = env->getMethodID(cls, "getParameters", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_getParameters_62f3dd52a41b90da] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParameters_e702a9655dcb43da] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParametersAllValues_7cdc325af0834901] = env->getMethodID(cls, "getParametersAllValues", "()[D");
          mids$[mid_getParametersAllValues_62f3dd52a41b90da] = env->getMethodID(cls, "getParametersAllValues", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
          mids$[mid_isSupported_6b161f495ea569b8] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint ParameterDriversProvider::getNbParametersDriversValue() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbParametersDriversValue_f2f64475e4580546]);
      }

      ::org::orekit::utils::ParameterDriver ParameterDriversProvider::getParameterDriver(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getParameterDriver_d5ba0ef5703f4c62], a0.this$));
      }

      JArray< jdouble > ParameterDriversProvider::getParameters() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameters_7cdc325af0834901]));
      }

      JArray< jdouble > ParameterDriversProvider::getParameters(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameters_e586dea4c0bad69b], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > ParameterDriversProvider::getParameters(const ::org::hipparchus::Field & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getParameters_62f3dd52a41b90da], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > ParameterDriversProvider::getParameters(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getParameters_e702a9655dcb43da], a0.this$, a1.this$));
      }

      JArray< jdouble > ParameterDriversProvider::getParametersAllValues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParametersAllValues_7cdc325af0834901]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > ParameterDriversProvider::getParametersAllValues(const ::org::hipparchus::Field & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getParametersAllValues_62f3dd52a41b90da], a0.this$));
      }

      ::java::util::List ParameterDriversProvider::getParametersDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
      }

      jboolean ParameterDriversProvider::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_6b161f495ea569b8], a0.this$);
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
      static PyObject *t_ParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_getNbParametersDriversValue(t_ParameterDriversProvider *self);
      static PyObject *t_ParameterDriversProvider_getParameterDriver(t_ParameterDriversProvider *self, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_getParameters(t_ParameterDriversProvider *self, PyObject *args);
      static PyObject *t_ParameterDriversProvider_getParametersAllValues(t_ParameterDriversProvider *self, PyObject *args);
      static PyObject *t_ParameterDriversProvider_getParametersDrivers(t_ParameterDriversProvider *self);
      static PyObject *t_ParameterDriversProvider_isSupported(t_ParameterDriversProvider *self, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_get__nbParametersDriversValue(t_ParameterDriversProvider *self, void *data);
      static PyObject *t_ParameterDriversProvider_get__parameters(t_ParameterDriversProvider *self, void *data);
      static PyObject *t_ParameterDriversProvider_get__parametersAllValues(t_ParameterDriversProvider *self, void *data);
      static PyObject *t_ParameterDriversProvider_get__parametersDrivers(t_ParameterDriversProvider *self, void *data);
      static PyGetSetDef t_ParameterDriversProvider__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterDriversProvider, nbParametersDriversValue),
        DECLARE_GET_FIELD(t_ParameterDriversProvider, parameters),
        DECLARE_GET_FIELD(t_ParameterDriversProvider, parametersAllValues),
        DECLARE_GET_FIELD(t_ParameterDriversProvider, parametersDrivers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriversProvider__methods_[] = {
        DECLARE_METHOD(t_ParameterDriversProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversProvider, getNbParametersDriversValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, getParameterDriver, METH_O),
        DECLARE_METHOD(t_ParameterDriversProvider, getParameters, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, getParametersAllValues, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, getParametersDrivers, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriversProvider)[] = {
        { Py_tp_methods, t_ParameterDriversProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ParameterDriversProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriversProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterDriversProvider, t_ParameterDriversProvider, ParameterDriversProvider);

      void t_ParameterDriversProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriversProvider), &PY_TYPE_DEF(ParameterDriversProvider), module, "ParameterDriversProvider", 0);
      }

      void t_ParameterDriversProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversProvider), "class_", make_descriptor(ParameterDriversProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversProvider), "wrapfn_", make_descriptor(t_ParameterDriversProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriversProvider::initializeClass, 1)))
          return NULL;
        return t_ParameterDriversProvider::wrap_Object(ParameterDriversProvider(((t_ParameterDriversProvider *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriversProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterDriversProvider_getNbParametersDriversValue(t_ParameterDriversProvider *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbParametersDriversValue());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriversProvider_getParameterDriver(t_ParameterDriversProvider *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriver result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getParameterDriver(a0));
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParameterDriver", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversProvider_getParameters(t_ParameterDriversProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getParameters());
            return result.wrap();
          }
          break;
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getParameters(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getParameters(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getParameters(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getParameters", args);
        return NULL;
      }

      static PyObject *t_ParameterDriversProvider_getParametersAllValues(t_ParameterDriversProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersAllValues());
            return result.wrap();
          }
          break;
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getParametersAllValues(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getParametersAllValues", args);
        return NULL;
      }

      static PyObject *t_ParameterDriversProvider_getParametersDrivers(t_ParameterDriversProvider *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_ParameterDriversProvider_isSupported(t_ParameterDriversProvider *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversProvider_get__nbParametersDriversValue(t_ParameterDriversProvider *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbParametersDriversValue());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ParameterDriversProvider_get__parameters(t_ParameterDriversProvider *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParameters());
        return value.wrap();
      }

      static PyObject *t_ParameterDriversProvider_get__parametersAllValues(t_ParameterDriversProvider *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersAllValues());
        return value.wrap();
      }

      static PyObject *t_ParameterDriversProvider_get__parametersDrivers(t_ParameterDriversProvider *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/MariniMurrayModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/troposphere/MariniMurrayModel.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *MariniMurrayModel::class$ = NULL;
          jmethodID *MariniMurrayModel::mids$ = NULL;
          bool MariniMurrayModel::live$ = false;

          jclass MariniMurrayModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/MariniMurrayModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_667a7965403ed91a] = env->getMethodID(cls, "<init>", "(DDDD)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStandardModel_c896c6573dd866aa] = env->getStaticMethodID(cls, "getStandardModel", "(D)Lorg/orekit/models/earth/troposphere/MariniMurrayModel;");
              mids$[mid_pathDelay_af133f80cdba1dc2] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_0326270bf0e8ed17] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MariniMurrayModel::MariniMurrayModel(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_667a7965403ed91a, a0, a1, a2, a3)) {}

          ::java::util::List MariniMurrayModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          MariniMurrayModel MariniMurrayModel::getStandardModel(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return MariniMurrayModel(env->callStaticObjectMethod(cls, mids$[mid_getStandardModel_c896c6573dd866aa], a0));
          }

          jdouble MariniMurrayModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_af133f80cdba1dc2], a0, a1.this$, a2.this$, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement MariniMurrayModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_0326270bf0e8ed17], a0.this$, a1.this$, a2.this$, a3.this$));
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
        namespace troposphere {
          static PyObject *t_MariniMurrayModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MariniMurrayModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MariniMurrayModel_init_(t_MariniMurrayModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MariniMurrayModel_getParametersDrivers(t_MariniMurrayModel *self);
          static PyObject *t_MariniMurrayModel_getStandardModel(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MariniMurrayModel_pathDelay(t_MariniMurrayModel *self, PyObject *args);
          static PyObject *t_MariniMurrayModel_get__parametersDrivers(t_MariniMurrayModel *self, void *data);
          static PyGetSetDef t_MariniMurrayModel__fields_[] = {
            DECLARE_GET_FIELD(t_MariniMurrayModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MariniMurrayModel__methods_[] = {
            DECLARE_METHOD(t_MariniMurrayModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MariniMurrayModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MariniMurrayModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_MariniMurrayModel, getStandardModel, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MariniMurrayModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MariniMurrayModel)[] = {
            { Py_tp_methods, t_MariniMurrayModel__methods_ },
            { Py_tp_init, (void *) t_MariniMurrayModel_init_ },
            { Py_tp_getset, t_MariniMurrayModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MariniMurrayModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MariniMurrayModel, t_MariniMurrayModel, MariniMurrayModel);

          void t_MariniMurrayModel::install(PyObject *module)
          {
            installType(&PY_TYPE(MariniMurrayModel), &PY_TYPE_DEF(MariniMurrayModel), module, "MariniMurrayModel", 0);
          }

          void t_MariniMurrayModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MariniMurrayModel), "class_", make_descriptor(MariniMurrayModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MariniMurrayModel), "wrapfn_", make_descriptor(t_MariniMurrayModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MariniMurrayModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MariniMurrayModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MariniMurrayModel::initializeClass, 1)))
              return NULL;
            return t_MariniMurrayModel::wrap_Object(MariniMurrayModel(((t_MariniMurrayModel *) arg)->object.this$));
          }
          static PyObject *t_MariniMurrayModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MariniMurrayModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MariniMurrayModel_init_(t_MariniMurrayModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            MariniMurrayModel object((jobject) NULL);

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = MariniMurrayModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MariniMurrayModel_getParametersDrivers(t_MariniMurrayModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_MariniMurrayModel_getStandardModel(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;
            MariniMurrayModel result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = ::org::orekit::models::earth::troposphere::MariniMurrayModel::getStandardModel(a0));
              return t_MariniMurrayModel::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getStandardModel", arg);
            return NULL;
          }

          static PyObject *t_MariniMurrayModel_pathDelay(t_MariniMurrayModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_MariniMurrayModel_get__parametersDrivers(t_MariniMurrayModel *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/AbstractRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/RuleFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *AbstractRuleFactory::class$ = NULL;
          jmethodID *AbstractRuleFactory::mids$ = NULL;
          bool AbstractRuleFactory::live$ = false;

          jclass AbstractRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/AbstractRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getRule_086dd68d091255ed] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_computeRule_086dd68d091255ed] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_findRoots_3000edd95e7e9f28] = env->getMethodID(cls, "findRoots", "(ILorg/hipparchus/analysis/UnivariateFunction;)[D");
              mids$[mid_enforceSymmetry_ebc26dcaf4761286] = env->getMethodID(cls, "enforceSymmetry", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractRuleFactory::AbstractRuleFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::hipparchus::util::Pair AbstractRuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_086dd68d091255ed], a0));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_AbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractRuleFactory_init_(t_AbstractRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AbstractRuleFactory_getRule(t_AbstractRuleFactory *self, PyObject *arg);

          static PyMethodDef t_AbstractRuleFactory__methods_[] = {
            DECLARE_METHOD(t_AbstractRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractRuleFactory)[] = {
            { Py_tp_methods, t_AbstractRuleFactory__methods_ },
            { Py_tp_init, (void *) t_AbstractRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractRuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractRuleFactory, t_AbstractRuleFactory, AbstractRuleFactory);

          void t_AbstractRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractRuleFactory), &PY_TYPE_DEF(AbstractRuleFactory), module, "AbstractRuleFactory", 0);
          }

          void t_AbstractRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRuleFactory), "class_", make_descriptor(AbstractRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRuleFactory), "wrapfn_", make_descriptor(t_AbstractRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractRuleFactory::initializeClass, 1)))
              return NULL;
            return t_AbstractRuleFactory::wrap_Object(AbstractRuleFactory(((t_AbstractRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_AbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractRuleFactory_init_(t_AbstractRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            AbstractRuleFactory object((jobject) NULL);

            INT_CALL(object = AbstractRuleFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_AbstractRuleFactory_getRule(t_AbstractRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::java::lang::PY_TYPE(Object), ::java::lang::PY_TYPE(Object));
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Pair::class$ = NULL;
      jmethodID *Pair::mids$ = NULL;
      bool Pair::live$ = false;

      jclass Pair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Pair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0d8a2282c8979673] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
          mids$[mid_create_0c1f52eb3dc20797] = env->getStaticMethodID(cls, "create", "(Ljava/lang/Object;Ljava/lang/Object;)Lorg/hipparchus/util/Pair;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getFirst_dfd7647d9110ac9f] = env->getMethodID(cls, "getFirst", "()Ljava/lang/Object;");
          mids$[mid_getKey_dfd7647d9110ac9f] = env->getMethodID(cls, "getKey", "()Ljava/lang/Object;");
          mids$[mid_getSecond_dfd7647d9110ac9f] = env->getMethodID(cls, "getSecond", "()Ljava/lang/Object;");
          mids$[mid_getValue_dfd7647d9110ac9f] = env->getMethodID(cls, "getValue", "()Ljava/lang/Object;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Pair::Pair(const ::java::lang::Object & a0, const ::java::lang::Object & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d8a2282c8979673, a0.this$, a1.this$)) {}

      Pair Pair::create(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Pair(env->callStaticObjectMethod(cls, mids$[mid_create_0c1f52eb3dc20797], a0.this$, a1.this$));
      }

      jboolean Pair::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      ::java::lang::Object Pair::getFirst() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getFirst_dfd7647d9110ac9f]));
      }

      ::java::lang::Object Pair::getKey() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getKey_dfd7647d9110ac9f]));
      }

      ::java::lang::Object Pair::getSecond() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getSecond_dfd7647d9110ac9f]));
      }

      ::java::lang::Object Pair::getValue() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getValue_dfd7647d9110ac9f]));
      }

      jint Pair::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      ::java::lang::String Pair::toString() const
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
  namespace hipparchus {
    namespace util {
      static PyObject *t_Pair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Pair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Pair_of_(t_Pair *self, PyObject *args);
      static int t_Pair_init_(t_Pair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Pair_create(PyTypeObject *type, PyObject *args);
      static PyObject *t_Pair_equals(t_Pair *self, PyObject *args);
      static PyObject *t_Pair_getFirst(t_Pair *self);
      static PyObject *t_Pair_getKey(t_Pair *self);
      static PyObject *t_Pair_getSecond(t_Pair *self);
      static PyObject *t_Pair_getValue(t_Pair *self);
      static PyObject *t_Pair_hashCode(t_Pair *self, PyObject *args);
      static PyObject *t_Pair_toString(t_Pair *self, PyObject *args);
      static PyObject *t_Pair_get__first(t_Pair *self, void *data);
      static PyObject *t_Pair_get__key(t_Pair *self, void *data);
      static PyObject *t_Pair_get__second(t_Pair *self, void *data);
      static PyObject *t_Pair_get__value(t_Pair *self, void *data);
      static PyObject *t_Pair_get__parameters_(t_Pair *self, void *data);
      static PyGetSetDef t_Pair__fields_[] = {
        DECLARE_GET_FIELD(t_Pair, first),
        DECLARE_GET_FIELD(t_Pair, key),
        DECLARE_GET_FIELD(t_Pair, second),
        DECLARE_GET_FIELD(t_Pair, value),
        DECLARE_GET_FIELD(t_Pair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Pair__methods_[] = {
        DECLARE_METHOD(t_Pair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Pair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Pair, of_, METH_VARARGS),
        DECLARE_METHOD(t_Pair, create, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Pair, equals, METH_VARARGS),
        DECLARE_METHOD(t_Pair, getFirst, METH_NOARGS),
        DECLARE_METHOD(t_Pair, getKey, METH_NOARGS),
        DECLARE_METHOD(t_Pair, getSecond, METH_NOARGS),
        DECLARE_METHOD(t_Pair, getValue, METH_NOARGS),
        DECLARE_METHOD(t_Pair, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Pair, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Pair)[] = {
        { Py_tp_methods, t_Pair__methods_ },
        { Py_tp_init, (void *) t_Pair_init_ },
        { Py_tp_getset, t_Pair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Pair)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Pair, t_Pair, Pair);
      PyObject *t_Pair::wrap_Object(const Pair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Pair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Pair *self = (t_Pair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_Pair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Pair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Pair *self = (t_Pair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_Pair::install(PyObject *module)
      {
        installType(&PY_TYPE(Pair), &PY_TYPE_DEF(Pair), module, "Pair", 0);
      }

      void t_Pair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Pair), "class_", make_descriptor(Pair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Pair), "wrapfn_", make_descriptor(t_Pair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Pair), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Pair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Pair::initializeClass, 1)))
          return NULL;
        return t_Pair::wrap_Object(Pair(((t_Pair *) arg)->object.this$));
      }
      static PyObject *t_Pair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Pair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Pair_of_(t_Pair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_Pair_init_(t_Pair *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        Pair object((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          INT_CALL(object = Pair(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Pair_create(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        Pair result((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::Pair::create(a0, a1));
          return t_Pair::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", args);
        return NULL;
      }

      static PyObject *t_Pair_equals(t_Pair *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Pair), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Pair_getFirst(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirst());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_getKey(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_getSecond(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecond());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_getValue(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_hashCode(t_Pair *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Pair), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Pair_toString(t_Pair *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Pair), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_Pair_get__parameters_(t_Pair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Pair_get__first(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirst());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_Pair_get__key(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_Pair_get__second(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecond());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_Pair_get__value(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return ::java::lang::t_Object::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm03Header::class$ = NULL;
              jmethodID *SsrIgm03Header::mids$ = NULL;
              bool SsrIgm03Header::live$ = false;

              jclass SsrIgm03Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCrsIndicator_f2f64475e4580546] = env->getMethodID(cls, "getCrsIndicator", "()I");
                  mids$[mid_setCrsIndicator_0a2a1ac2721c0336] = env->getMethodID(cls, "setCrsIndicator", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm03Header::SsrIgm03Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jint SsrIgm03Header::getCrsIndicator() const
              {
                return env->callIntMethod(this$, mids$[mid_getCrsIndicator_f2f64475e4580546]);
              }

              void SsrIgm03Header::setCrsIndicator(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCrsIndicator_0a2a1ac2721c0336], a0);
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
              static PyObject *t_SsrIgm03Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm03Header_init_(t_SsrIgm03Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm03Header_getCrsIndicator(t_SsrIgm03Header *self);
              static PyObject *t_SsrIgm03Header_setCrsIndicator(t_SsrIgm03Header *self, PyObject *arg);
              static PyObject *t_SsrIgm03Header_get__crsIndicator(t_SsrIgm03Header *self, void *data);
              static int t_SsrIgm03Header_set__crsIndicator(t_SsrIgm03Header *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm03Header__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm03Header, crsIndicator),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm03Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm03Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Header, getCrsIndicator, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm03Header, setCrsIndicator, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm03Header)[] = {
                { Py_tp_methods, t_SsrIgm03Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm03Header_init_ },
                { Py_tp_getset, t_SsrIgm03Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm03Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm03Header, t_SsrIgm03Header, SsrIgm03Header);

              void t_SsrIgm03Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm03Header), &PY_TYPE_DEF(SsrIgm03Header), module, "SsrIgm03Header", 0);
              }

              void t_SsrIgm03Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Header), "class_", make_descriptor(SsrIgm03Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Header), "wrapfn_", make_descriptor(t_SsrIgm03Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm03Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm03Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm03Header::wrap_Object(SsrIgm03Header(((t_SsrIgm03Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm03Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm03Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm03Header_init_(t_SsrIgm03Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm03Header object((jobject) NULL);

                INT_CALL(object = SsrIgm03Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm03Header_getCrsIndicator(t_SsrIgm03Header *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getCrsIndicator());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm03Header_setCrsIndicator(t_SsrIgm03Header *self, PyObject *arg)
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

              static PyObject *t_SsrIgm03Header_get__crsIndicator(t_SsrIgm03Header *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getCrsIndicator());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm03Header_set__crsIndicator(t_SsrIgm03Header *self, PyObject *arg, void *data)
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
#include "org/hipparchus/analysis/function/Ulp.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Ulp::class$ = NULL;
        jmethodID *Ulp::mids$ = NULL;
        bool Ulp::live$ = false;

        jclass Ulp::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Ulp");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Ulp::Ulp() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Ulp::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
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
        static PyObject *t_Ulp_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Ulp_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Ulp_init_(t_Ulp *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Ulp_value(t_Ulp *self, PyObject *arg);

        static PyMethodDef t_Ulp__methods_[] = {
          DECLARE_METHOD(t_Ulp, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ulp, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ulp, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Ulp)[] = {
          { Py_tp_methods, t_Ulp__methods_ },
          { Py_tp_init, (void *) t_Ulp_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Ulp)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Ulp, t_Ulp, Ulp);

        void t_Ulp::install(PyObject *module)
        {
          installType(&PY_TYPE(Ulp), &PY_TYPE_DEF(Ulp), module, "Ulp", 0);
        }

        void t_Ulp::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ulp), "class_", make_descriptor(Ulp::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ulp), "wrapfn_", make_descriptor(t_Ulp::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ulp), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Ulp_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Ulp::initializeClass, 1)))
            return NULL;
          return t_Ulp::wrap_Object(Ulp(((t_Ulp *) arg)->object.this$));
        }
        static PyObject *t_Ulp_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Ulp::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Ulp_init_(t_Ulp *self, PyObject *args, PyObject *kwds)
        {
          Ulp object((jobject) NULL);

          INT_CALL(object = Ulp());
          self->object = object;

          return 0;
        }

        static PyObject *t_Ulp_value(t_Ulp *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return PyFloat_FromDouble((double) result);
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
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *BodyRotatingFrameId::class$ = NULL;
        jmethodID *BodyRotatingFrameId::mids$ = NULL;
        bool BodyRotatingFrameId::live$ = false;
        BodyRotatingFrameId *BodyRotatingFrameId::GTOD = NULL;
        BodyRotatingFrameId *BodyRotatingFrameId::ITRF = NULL;
        BodyRotatingFrameId *BodyRotatingFrameId::ITRF_EQUINOX = NULL;

        jclass BodyRotatingFrameId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/BodyRotatingFrameId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_0e2268125faf80ef] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/BodyRotatingFrameId;");
            mids$[mid_values_225464e14cee5fb1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/BodyRotatingFrameId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GTOD = new BodyRotatingFrameId(env->getStaticObjectField(cls, "GTOD", "Lorg/orekit/rugged/api/BodyRotatingFrameId;"));
            ITRF = new BodyRotatingFrameId(env->getStaticObjectField(cls, "ITRF", "Lorg/orekit/rugged/api/BodyRotatingFrameId;"));
            ITRF_EQUINOX = new BodyRotatingFrameId(env->getStaticObjectField(cls, "ITRF_EQUINOX", "Lorg/orekit/rugged/api/BodyRotatingFrameId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BodyRotatingFrameId BodyRotatingFrameId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BodyRotatingFrameId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0e2268125faf80ef], a0.this$));
        }

        JArray< BodyRotatingFrameId > BodyRotatingFrameId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< BodyRotatingFrameId >(env->callStaticObjectMethod(cls, mids$[mid_values_225464e14cee5fb1]));
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
      namespace api {
        static PyObject *t_BodyRotatingFrameId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BodyRotatingFrameId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BodyRotatingFrameId_of_(t_BodyRotatingFrameId *self, PyObject *args);
        static PyObject *t_BodyRotatingFrameId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_BodyRotatingFrameId_values(PyTypeObject *type);
        static PyObject *t_BodyRotatingFrameId_get__parameters_(t_BodyRotatingFrameId *self, void *data);
        static PyGetSetDef t_BodyRotatingFrameId__fields_[] = {
          DECLARE_GET_FIELD(t_BodyRotatingFrameId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BodyRotatingFrameId__methods_[] = {
          DECLARE_METHOD(t_BodyRotatingFrameId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BodyRotatingFrameId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BodyRotatingFrameId, of_, METH_VARARGS),
          DECLARE_METHOD(t_BodyRotatingFrameId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BodyRotatingFrameId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BodyRotatingFrameId)[] = {
          { Py_tp_methods, t_BodyRotatingFrameId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BodyRotatingFrameId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BodyRotatingFrameId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(BodyRotatingFrameId, t_BodyRotatingFrameId, BodyRotatingFrameId);
        PyObject *t_BodyRotatingFrameId::wrap_Object(const BodyRotatingFrameId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BodyRotatingFrameId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BodyRotatingFrameId *self = (t_BodyRotatingFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BodyRotatingFrameId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BodyRotatingFrameId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BodyRotatingFrameId *self = (t_BodyRotatingFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BodyRotatingFrameId::install(PyObject *module)
        {
          installType(&PY_TYPE(BodyRotatingFrameId), &PY_TYPE_DEF(BodyRotatingFrameId), module, "BodyRotatingFrameId", 0);
        }

        void t_BodyRotatingFrameId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "class_", make_descriptor(BodyRotatingFrameId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "wrapfn_", make_descriptor(t_BodyRotatingFrameId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "boxfn_", make_descriptor(boxObject));
          env->getClass(BodyRotatingFrameId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "GTOD", make_descriptor(t_BodyRotatingFrameId::wrap_Object(*BodyRotatingFrameId::GTOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "ITRF", make_descriptor(t_BodyRotatingFrameId::wrap_Object(*BodyRotatingFrameId::ITRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "ITRF_EQUINOX", make_descriptor(t_BodyRotatingFrameId::wrap_Object(*BodyRotatingFrameId::ITRF_EQUINOX)));
        }

        static PyObject *t_BodyRotatingFrameId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BodyRotatingFrameId::initializeClass, 1)))
            return NULL;
          return t_BodyRotatingFrameId::wrap_Object(BodyRotatingFrameId(((t_BodyRotatingFrameId *) arg)->object.this$));
        }
        static PyObject *t_BodyRotatingFrameId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BodyRotatingFrameId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BodyRotatingFrameId_of_(t_BodyRotatingFrameId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BodyRotatingFrameId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          BodyRotatingFrameId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::BodyRotatingFrameId::valueOf(a0));
            return t_BodyRotatingFrameId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_BodyRotatingFrameId_values(PyTypeObject *type)
        {
          JArray< BodyRotatingFrameId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::BodyRotatingFrameId::values());
          return JArray<jobject>(result.this$).wrap(t_BodyRotatingFrameId::wrap_jobject);
        }
        static PyObject *t_BodyRotatingFrameId_get__parameters_(t_BodyRotatingFrameId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldPoleCorrection.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldPoleCorrection::class$ = NULL;
      jmethodID *FieldPoleCorrection::mids$ = NULL;
      bool FieldPoleCorrection::live$ = false;

      jclass FieldPoleCorrection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldPoleCorrection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_46c20bc1304e9cc4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getXp_e6d4d3215c30992a] = env->getMethodID(cls, "getXp", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getYp_e6d4d3215c30992a] = env->getMethodID(cls, "getYp", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldPoleCorrection::FieldPoleCorrection(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_46c20bc1304e9cc4, a0.this$, a1.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldPoleCorrection::getXp() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXp_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldPoleCorrection::getYp() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getYp_e6d4d3215c30992a]));
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
      static PyObject *t_FieldPoleCorrection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPoleCorrection_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPoleCorrection_of_(t_FieldPoleCorrection *self, PyObject *args);
      static int t_FieldPoleCorrection_init_(t_FieldPoleCorrection *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldPoleCorrection_getXp(t_FieldPoleCorrection *self);
      static PyObject *t_FieldPoleCorrection_getYp(t_FieldPoleCorrection *self);
      static PyObject *t_FieldPoleCorrection_get__xp(t_FieldPoleCorrection *self, void *data);
      static PyObject *t_FieldPoleCorrection_get__yp(t_FieldPoleCorrection *self, void *data);
      static PyObject *t_FieldPoleCorrection_get__parameters_(t_FieldPoleCorrection *self, void *data);
      static PyGetSetDef t_FieldPoleCorrection__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPoleCorrection, xp),
        DECLARE_GET_FIELD(t_FieldPoleCorrection, yp),
        DECLARE_GET_FIELD(t_FieldPoleCorrection, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPoleCorrection__methods_[] = {
        DECLARE_METHOD(t_FieldPoleCorrection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPoleCorrection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPoleCorrection, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPoleCorrection, getXp, METH_NOARGS),
        DECLARE_METHOD(t_FieldPoleCorrection, getYp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPoleCorrection)[] = {
        { Py_tp_methods, t_FieldPoleCorrection__methods_ },
        { Py_tp_init, (void *) t_FieldPoleCorrection_init_ },
        { Py_tp_getset, t_FieldPoleCorrection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPoleCorrection)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldPoleCorrection, t_FieldPoleCorrection, FieldPoleCorrection);
      PyObject *t_FieldPoleCorrection::wrap_Object(const FieldPoleCorrection& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPoleCorrection::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPoleCorrection *self = (t_FieldPoleCorrection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPoleCorrection::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPoleCorrection::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPoleCorrection *self = (t_FieldPoleCorrection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPoleCorrection::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPoleCorrection), &PY_TYPE_DEF(FieldPoleCorrection), module, "FieldPoleCorrection", 0);
      }

      void t_FieldPoleCorrection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPoleCorrection), "class_", make_descriptor(FieldPoleCorrection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPoleCorrection), "wrapfn_", make_descriptor(t_FieldPoleCorrection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPoleCorrection), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldPoleCorrection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPoleCorrection::initializeClass, 1)))
          return NULL;
        return t_FieldPoleCorrection::wrap_Object(FieldPoleCorrection(((t_FieldPoleCorrection *) arg)->object.this$));
      }
      static PyObject *t_FieldPoleCorrection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPoleCorrection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPoleCorrection_of_(t_FieldPoleCorrection *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldPoleCorrection_init_(t_FieldPoleCorrection *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        FieldPoleCorrection object((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldPoleCorrection(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldPoleCorrection_getXp(t_FieldPoleCorrection *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getXp());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldPoleCorrection_getYp(t_FieldPoleCorrection *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getYp());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldPoleCorrection_get__parameters_(t_FieldPoleCorrection *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldPoleCorrection_get__xp(t_FieldPoleCorrection *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getXp());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldPoleCorrection_get__yp(t_FieldPoleCorrection *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getYp());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
