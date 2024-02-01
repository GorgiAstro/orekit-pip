#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *ForceModelContext::class$ = NULL;
            jmethodID *ForceModelContext::mids$ = NULL;
            bool ForceModelContext::live$ = false;

            jclass ForceModelContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAuxiliaryElements_cb6ec8282f1342d0] = env->getMethodID(cls, "getAuxiliaryElements", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements ForceModelContext::getAuxiliaryElements() const
            {
              return ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(env->callObjectMethod(this$, mids$[mid_getAuxiliaryElements_cb6ec8282f1342d0]));
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
            static PyObject *t_ForceModelContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ForceModelContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ForceModelContext_getAuxiliaryElements(t_ForceModelContext *self);
            static PyObject *t_ForceModelContext_get__auxiliaryElements(t_ForceModelContext *self, void *data);
            static PyGetSetDef t_ForceModelContext__fields_[] = {
              DECLARE_GET_FIELD(t_ForceModelContext, auxiliaryElements),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ForceModelContext__methods_[] = {
              DECLARE_METHOD(t_ForceModelContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ForceModelContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ForceModelContext, getAuxiliaryElements, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ForceModelContext)[] = {
              { Py_tp_methods, t_ForceModelContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ForceModelContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ForceModelContext)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ForceModelContext, t_ForceModelContext, ForceModelContext);

            void t_ForceModelContext::install(PyObject *module)
            {
              installType(&PY_TYPE(ForceModelContext), &PY_TYPE_DEF(ForceModelContext), module, "ForceModelContext", 0);
            }

            void t_ForceModelContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModelContext), "class_", make_descriptor(ForceModelContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModelContext), "wrapfn_", make_descriptor(t_ForceModelContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModelContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ForceModelContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ForceModelContext::initializeClass, 1)))
                return NULL;
              return t_ForceModelContext::wrap_Object(ForceModelContext(((t_ForceModelContext *) arg)->object.this$));
            }
            static PyObject *t_ForceModelContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ForceModelContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ForceModelContext_getAuxiliaryElements(t_ForceModelContext *self)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements result((jobject) NULL);
              OBJ_CALL(result = self->object.getAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(result);
            }

            static PyObject *t_ForceModelContext_get__auxiliaryElements(t_ForceModelContext *self, void *data)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements value((jobject) NULL);
              OBJ_CALL(value = self->object.getAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitPhysicalProperties::class$ = NULL;
              jmethodID *OrbitPhysicalProperties::mids$ = NULL;
              bool OrbitPhysicalProperties::live$ = false;

              jclass OrbitPhysicalProperties::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8497861b879c83f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getAttitudeActuatorType_d2c8eb4129821f0e] = env->getMethodID(cls, "getAttitudeActuatorType", "()Ljava/lang/String;");
                  mids$[mid_getAttitudeControlAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getAttitudeControlAccuracy", "()D");
                  mids$[mid_getAttitudeControlMode_d2c8eb4129821f0e] = env->getMethodID(cls, "getAttitudeControlMode", "()Ljava/lang/String;");
                  mids$[mid_getAttitudeKnowledgeAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getAttitudeKnowledgeAccuracy", "()D");
                  mids$[mid_getAttitudePointingAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getAttitudePointingAccuracy", "()D");
                  mids$[mid_getBolDv_9981f74b2d109da6] = env->getMethodID(cls, "getBolDv", "()D");
                  mids$[mid_getBusModel_d2c8eb4129821f0e] = env->getMethodID(cls, "getBusModel", "()Ljava/lang/String;");
                  mids$[mid_getDockedWith_d751c1a57012b438] = env->getMethodID(cls, "getDockedWith", "()Ljava/util/List;");
                  mids$[mid_getDragCoefficient_9981f74b2d109da6] = env->getMethodID(cls, "getDragCoefficient", "()D");
                  mids$[mid_getDragConstantArea_9981f74b2d109da6] = env->getMethodID(cls, "getDragConstantArea", "()D");
                  mids$[mid_getDragUncertainty_9981f74b2d109da6] = env->getMethodID(cls, "getDragUncertainty", "()D");
                  mids$[mid_getDryMass_9981f74b2d109da6] = env->getMethodID(cls, "getDryMass", "()D");
                  mids$[mid_getInertiaMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getInertiaMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_getInitialWetMass_9981f74b2d109da6] = env->getMethodID(cls, "getInitialWetMass", "()D");
                  mids$[mid_getManeuversFrequency_9981f74b2d109da6] = env->getMethodID(cls, "getManeuversFrequency", "()D");
                  mids$[mid_getManeuversPerYear_9981f74b2d109da6] = env->getMethodID(cls, "getManeuversPerYear", "()D");
                  mids$[mid_getManufacturer_d2c8eb4129821f0e] = env->getMethodID(cls, "getManufacturer", "()Ljava/lang/String;");
                  mids$[mid_getMaxAreaForCollisionProbability_9981f74b2d109da6] = env->getMethodID(cls, "getMaxAreaForCollisionProbability", "()D");
                  mids$[mid_getMaxThrust_9981f74b2d109da6] = env->getMethodID(cls, "getMaxThrust", "()D");
                  mids$[mid_getMinAreaForCollisionProbability_9981f74b2d109da6] = env->getMethodID(cls, "getMinAreaForCollisionProbability", "()D");
                  mids$[mid_getRemainingDv_9981f74b2d109da6] = env->getMethodID(cls, "getRemainingDv", "()D");
                  mids$[mid_getSrpCoefficient_9981f74b2d109da6] = env->getMethodID(cls, "getSrpCoefficient", "()D");
                  mids$[mid_getSrpConstantArea_9981f74b2d109da6] = env->getMethodID(cls, "getSrpConstantArea", "()D");
                  mids$[mid_getSrpUncertainty_9981f74b2d109da6] = env->getMethodID(cls, "getSrpUncertainty", "()D");
                  mids$[mid_getTypAreaForCollisionProbability_9981f74b2d109da6] = env->getMethodID(cls, "getTypAreaForCollisionProbability", "()D");
                  mids$[mid_getWetMass_9981f74b2d109da6] = env->getMethodID(cls, "getWetMass", "()D");
                  mids$[mid_setAttitudeActuatorType_105e1eadb709d9ac] = env->getMethodID(cls, "setAttitudeActuatorType", "(Ljava/lang/String;)V");
                  mids$[mid_setAttitudeControlAccuracy_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAttitudeControlAccuracy", "(D)V");
                  mids$[mid_setAttitudeControlMode_105e1eadb709d9ac] = env->getMethodID(cls, "setAttitudeControlMode", "(Ljava/lang/String;)V");
                  mids$[mid_setAttitudeKnowledgeAccuracy_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAttitudeKnowledgeAccuracy", "(D)V");
                  mids$[mid_setAttitudePointingAccuracy_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAttitudePointingAccuracy", "(D)V");
                  mids$[mid_setBolDv_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setBolDv", "(D)V");
                  mids$[mid_setBusModel_105e1eadb709d9ac] = env->getMethodID(cls, "setBusModel", "(Ljava/lang/String;)V");
                  mids$[mid_setDockedWith_aa335fea495d60e0] = env->getMethodID(cls, "setDockedWith", "(Ljava/util/List;)V");
                  mids$[mid_setDragCoefficient_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDragCoefficient", "(D)V");
                  mids$[mid_setDragConstantArea_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDragConstantArea", "(D)V");
                  mids$[mid_setDragUncertainty_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDragUncertainty", "(D)V");
                  mids$[mid_setDryMass_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDryMass", "(D)V");
                  mids$[mid_setInertiaMatrixEntry_e98d7b3e971b6087] = env->getMethodID(cls, "setInertiaMatrixEntry", "(IID)V");
                  mids$[mid_setInitialWetMass_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setInitialWetMass", "(D)V");
                  mids$[mid_setManeuversFrequency_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setManeuversFrequency", "(D)V");
                  mids$[mid_setManufacturer_105e1eadb709d9ac] = env->getMethodID(cls, "setManufacturer", "(Ljava/lang/String;)V");
                  mids$[mid_setMaxAreaForCollisionProbability_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMaxAreaForCollisionProbability", "(D)V");
                  mids$[mid_setMaxThrust_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMaxThrust", "(D)V");
                  mids$[mid_setMinAreaForCollisionProbability_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMinAreaForCollisionProbability", "(D)V");
                  mids$[mid_setRemainingDv_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setRemainingDv", "(D)V");
                  mids$[mid_setSrpCoefficient_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSrpCoefficient", "(D)V");
                  mids$[mid_setSrpConstantArea_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSrpConstantArea", "(D)V");
                  mids$[mid_setSrpUncertainty_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSrpUncertainty", "(D)V");
                  mids$[mid_setTypAreaForCollisionProbability_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTypAreaForCollisionProbability", "(D)V");
                  mids$[mid_setWetMass_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setWetMass", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitPhysicalProperties::OrbitPhysicalProperties(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(env->newObject(initializeClass, &mids$, mid_init$_8497861b879c83f7, a0.this$)) {}

              ::java::lang::String OrbitPhysicalProperties::getAttitudeActuatorType() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttitudeActuatorType_d2c8eb4129821f0e]));
              }

              jdouble OrbitPhysicalProperties::getAttitudeControlAccuracy() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAttitudeControlAccuracy_9981f74b2d109da6]);
              }

              ::java::lang::String OrbitPhysicalProperties::getAttitudeControlMode() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttitudeControlMode_d2c8eb4129821f0e]));
              }

              jdouble OrbitPhysicalProperties::getAttitudeKnowledgeAccuracy() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAttitudeKnowledgeAccuracy_9981f74b2d109da6]);
              }

              jdouble OrbitPhysicalProperties::getAttitudePointingAccuracy() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAttitudePointingAccuracy_9981f74b2d109da6]);
              }

              jdouble OrbitPhysicalProperties::getBolDv() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBolDv_9981f74b2d109da6]);
              }

              ::java::lang::String OrbitPhysicalProperties::getBusModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getBusModel_d2c8eb4129821f0e]));
              }

              ::java::util::List OrbitPhysicalProperties::getDockedWith() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDockedWith_d751c1a57012b438]));
              }

              jdouble OrbitPhysicalProperties::getDragCoefficient() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragCoefficient_9981f74b2d109da6]);
              }

              jdouble OrbitPhysicalProperties::getDragConstantArea() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragConstantArea_9981f74b2d109da6]);
              }

              jdouble OrbitPhysicalProperties::getDragUncertainty() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragUncertainty_9981f74b2d109da6]);
              }

              jdouble OrbitPhysicalProperties::getDryMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDryMass_9981f74b2d109da6]);
              }

              ::org::hipparchus::linear::RealMatrix OrbitPhysicalProperties::getInertiaMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInertiaMatrix_b2eebabce70526d8]));
              }

              jdouble OrbitPhysicalProperties::getInitialWetMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getInitialWetMass_9981f74b2d109da6]);
              }

              jdouble OrbitPhysicalProperties::getManeuversFrequency() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getManeuversFrequency_9981f74b2d109da6]);
              }

              jdouble OrbitPhysicalProperties::getManeuversPerYear() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getManeuversPerYear_9981f74b2d109da6]);
              }

              ::java::lang::String OrbitPhysicalProperties::getManufacturer() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManufacturer_d2c8eb4129821f0e]));
              }

              jdouble OrbitPhysicalProperties::getMaxAreaForCollisionProbability() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaxAreaForCollisionProbability_9981f74b2d109da6]);
              }

              jdouble OrbitPhysicalProperties::getMaxThrust() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaxThrust_9981f74b2d109da6]);
              }

              jdouble OrbitPhysicalProperties::getMinAreaForCollisionProbability() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMinAreaForCollisionProbability_9981f74b2d109da6]);
              }

              jdouble OrbitPhysicalProperties::getRemainingDv() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getRemainingDv_9981f74b2d109da6]);
              }

              jdouble OrbitPhysicalProperties::getSrpCoefficient() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSrpCoefficient_9981f74b2d109da6]);
              }

              jdouble OrbitPhysicalProperties::getSrpConstantArea() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSrpConstantArea_9981f74b2d109da6]);
              }

              jdouble OrbitPhysicalProperties::getSrpUncertainty() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSrpUncertainty_9981f74b2d109da6]);
              }

              jdouble OrbitPhysicalProperties::getTypAreaForCollisionProbability() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTypAreaForCollisionProbability_9981f74b2d109da6]);
              }

              jdouble OrbitPhysicalProperties::getWetMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getWetMass_9981f74b2d109da6]);
              }

              void OrbitPhysicalProperties::setAttitudeActuatorType(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeActuatorType_105e1eadb709d9ac], a0.this$);
              }

              void OrbitPhysicalProperties::setAttitudeControlAccuracy(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeControlAccuracy_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setAttitudeControlMode(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeControlMode_105e1eadb709d9ac], a0.this$);
              }

              void OrbitPhysicalProperties::setAttitudeKnowledgeAccuracy(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeKnowledgeAccuracy_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setAttitudePointingAccuracy(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudePointingAccuracy_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setBolDv(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBolDv_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setBusModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBusModel_105e1eadb709d9ac], a0.this$);
              }

              void OrbitPhysicalProperties::setDockedWith(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDockedWith_aa335fea495d60e0], a0.this$);
              }

              void OrbitPhysicalProperties::setDragCoefficient(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragCoefficient_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setDragConstantArea(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragConstantArea_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setDragUncertainty(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragUncertainty_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setDryMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDryMass_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setInertiaMatrixEntry(jint a0, jint a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaMatrixEntry_e98d7b3e971b6087], a0, a1, a2);
              }

              void OrbitPhysicalProperties::setInitialWetMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInitialWetMass_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setManeuversFrequency(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManeuversFrequency_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setManufacturer(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManufacturer_105e1eadb709d9ac], a0.this$);
              }

              void OrbitPhysicalProperties::setMaxAreaForCollisionProbability(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaxAreaForCollisionProbability_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setMaxThrust(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaxThrust_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setMinAreaForCollisionProbability(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMinAreaForCollisionProbability_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setRemainingDv(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRemainingDv_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setSrpCoefficient(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpCoefficient_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setSrpConstantArea(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpConstantArea_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setSrpUncertainty(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpUncertainty_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setTypAreaForCollisionProbability(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTypAreaForCollisionProbability_1ad26e8c8c0cd65b], a0);
              }

              void OrbitPhysicalProperties::setWetMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setWetMass_1ad26e8c8c0cd65b], a0);
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
              static PyObject *t_OrbitPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitPhysicalProperties_init_(t_OrbitPhysicalProperties *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeActuatorType(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlAccuracy(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlMode(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudePointingAccuracy(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getBolDv(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getBusModel(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDockedWith(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDragCoefficient(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDragConstantArea(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDragUncertainty(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDryMass(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getInertiaMatrix(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getInitialWetMass(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getManeuversFrequency(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getManeuversPerYear(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getManufacturer(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getMaxThrust(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getRemainingDv(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getSrpCoefficient(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getSrpConstantArea(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getSrpUncertainty(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getWetMass(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setBolDv(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setBusModel(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDockedWith(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDryMass(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setInertiaMatrixEntry(t_OrbitPhysicalProperties *self, PyObject *args);
              static PyObject *t_OrbitPhysicalProperties_setInitialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setManeuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setManufacturer(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setMaxThrust(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setRemainingDv(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setSrpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setSrpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setSrpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setWetMass(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeActuatorType(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlMode(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__bolDv(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__bolDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__busModel(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__busModel(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dockedWith(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dockedWith(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dragCoefficient(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dragConstantArea(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dragUncertainty(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dryMass(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dryMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__inertiaMatrix(t_OrbitPhysicalProperties *self, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__initialWetMass(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__initialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maneuversFrequency(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__maneuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maneuversPerYear(t_OrbitPhysicalProperties *self, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__manufacturer(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__manufacturer(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maxThrust(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__maxThrust(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__remainingDv(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__remainingDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__srpCoefficient(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__srpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__srpConstantArea(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__srpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__srpUncertainty(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__srpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__wetMass(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__wetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitPhysicalProperties__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeActuatorType),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeControlAccuracy),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeControlMode),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeKnowledgeAccuracy),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudePointingAccuracy),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, bolDv),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, busModel),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dockedWith),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dragCoefficient),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dragConstantArea),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dragUncertainty),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dryMass),
                DECLARE_GET_FIELD(t_OrbitPhysicalProperties, inertiaMatrix),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, initialWetMass),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, maneuversFrequency),
                DECLARE_GET_FIELD(t_OrbitPhysicalProperties, maneuversPerYear),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, manufacturer),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, maxAreaForCollisionProbability),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, maxThrust),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, minAreaForCollisionProbability),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, remainingDv),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, srpCoefficient),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, srpConstantArea),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, srpUncertainty),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, typAreaForCollisionProbability),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, wetMass),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitPhysicalProperties__methods_[] = {
                DECLARE_METHOD(t_OrbitPhysicalProperties, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeActuatorType, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeControlAccuracy, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeControlMode, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeKnowledgeAccuracy, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudePointingAccuracy, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getBolDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getBusModel, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDockedWith, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDragCoefficient, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDragConstantArea, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDragUncertainty, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDryMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getInertiaMatrix, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getInitialWetMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getManeuversFrequency, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getManeuversPerYear, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getManufacturer, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getMaxAreaForCollisionProbability, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getMaxThrust, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getMinAreaForCollisionProbability, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getRemainingDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getSrpCoefficient, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getSrpConstantArea, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getSrpUncertainty, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getTypAreaForCollisionProbability, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getWetMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeActuatorType, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeControlAccuracy, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeControlMode, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeKnowledgeAccuracy, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudePointingAccuracy, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setBolDv, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setBusModel, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDockedWith, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDragCoefficient, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDragConstantArea, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDragUncertainty, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDryMass, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setInertiaMatrixEntry, METH_VARARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setInitialWetMass, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setManeuversFrequency, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setManufacturer, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setMaxAreaForCollisionProbability, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setMaxThrust, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setMinAreaForCollisionProbability, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setRemainingDv, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setSrpCoefficient, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setSrpConstantArea, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setSrpUncertainty, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setTypAreaForCollisionProbability, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setWetMass, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitPhysicalProperties)[] = {
                { Py_tp_methods, t_OrbitPhysicalProperties__methods_ },
                { Py_tp_init, (void *) t_OrbitPhysicalProperties_init_ },
                { Py_tp_getset, t_OrbitPhysicalProperties__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitPhysicalProperties)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::CommonPhysicalProperties),
                NULL
              };

              DEFINE_TYPE(OrbitPhysicalProperties, t_OrbitPhysicalProperties, OrbitPhysicalProperties);

              void t_OrbitPhysicalProperties::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitPhysicalProperties), &PY_TYPE_DEF(OrbitPhysicalProperties), module, "OrbitPhysicalProperties", 0);
              }

              void t_OrbitPhysicalProperties::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalProperties), "class_", make_descriptor(OrbitPhysicalProperties::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalProperties), "wrapfn_", make_descriptor(t_OrbitPhysicalProperties::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalProperties), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitPhysicalProperties::initializeClass, 1)))
                  return NULL;
                return t_OrbitPhysicalProperties::wrap_Object(OrbitPhysicalProperties(((t_OrbitPhysicalProperties *) arg)->object.this$));
              }
              static PyObject *t_OrbitPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitPhysicalProperties::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitPhysicalProperties_init_(t_OrbitPhysicalProperties *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                OrbitPhysicalProperties object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = OrbitPhysicalProperties(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeActuatorType(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeActuatorType());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlAccuracy(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAttitudeControlAccuracy());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlMode(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeControlMode());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAttitudeKnowledgeAccuracy());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudePointingAccuracy(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAttitudePointingAccuracy());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getBolDv(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBolDv());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getBusModel(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getBusModel());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDockedWith(t_OrbitPhysicalProperties *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getDockedWith());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitPhysicalProperties_getDragCoefficient(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDragConstantArea(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragConstantArea());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDragUncertainty(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragUncertainty());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDryMass(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDryMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getInertiaMatrix(t_OrbitPhysicalProperties *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getInitialWetMass(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getInitialWetMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getManeuversFrequency(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getManeuversFrequency());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getManeuversPerYear(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getManeuversPerYear());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getManufacturer(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManufacturer());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaxAreaForCollisionProbability());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getMaxThrust(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaxThrust());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMinAreaForCollisionProbability());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getRemainingDv(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getRemainingDv());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getSrpCoefficient(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSrpCoefficient());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getSrpConstantArea(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSrpConstantArea());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getSrpUncertainty(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSrpUncertainty());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTypAreaForCollisionProbability());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getWetMass(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getWetMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeActuatorType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeActuatorType", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeControlAccuracy(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeControlAccuracy", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeControlMode(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeControlMode", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeKnowledgeAccuracy(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeKnowledgeAccuracy", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAttitudePointingAccuracy(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudePointingAccuracy", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setBolDv(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBolDv(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBolDv", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setBusModel(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setBusModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBusModel", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDockedWith(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setDockedWith(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDockedWith", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragCoefficient(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragCoefficient", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragConstantArea(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragConstantArea", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragUncertainty(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragUncertainty", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDryMass(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDryMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDryMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setInertiaMatrixEntry(t_OrbitPhysicalProperties *self, PyObject *args)
              {
                jint a0;
                jint a1;
                jdouble a2;

                if (!parseArgs(args, "IID", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setInertiaMatrixEntry(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaMatrixEntry", args);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setInitialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setInitialWetMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInitialWetMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setManeuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setManeuversFrequency(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManeuversFrequency", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setManufacturer(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManufacturer(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManufacturer", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaxAreaForCollisionProbability(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaxAreaForCollisionProbability", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setMaxThrust(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaxThrust(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaxThrust", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMinAreaForCollisionProbability(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMinAreaForCollisionProbability", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setRemainingDv(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setRemainingDv(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRemainingDv", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setSrpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSrpCoefficient(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpCoefficient", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setSrpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSrpConstantArea(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpConstantArea", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setSrpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSrpUncertainty(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpUncertainty", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTypAreaForCollisionProbability(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTypAreaForCollisionProbability", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setWetMass(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setWetMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setWetMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeActuatorType(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeActuatorType());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttitudeActuatorType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeActuatorType", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAttitudeControlAccuracy());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAttitudeControlAccuracy(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeControlAccuracy", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlMode(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeControlMode());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttitudeControlMode(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeControlMode", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAttitudeKnowledgeAccuracy());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAttitudeKnowledgeAccuracy(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeKnowledgeAccuracy", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAttitudePointingAccuracy());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAttitudePointingAccuracy(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudePointingAccuracy", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__bolDv(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBolDv());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__bolDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBolDv(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bolDv", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__busModel(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getBusModel());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__busModel(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setBusModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "busModel", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dockedWith(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getDockedWith());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitPhysicalProperties_set__dockedWith(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDockedWith(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dockedWith", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dragCoefficient(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragCoefficient(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragCoefficient", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dragConstantArea(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragConstantArea());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragConstantArea(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragConstantArea", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dragUncertainty(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragUncertainty());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragUncertainty(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragUncertainty", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dryMass(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDryMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dryMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDryMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dryMass", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__inertiaMatrix(t_OrbitPhysicalProperties *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
              }

              static PyObject *t_OrbitPhysicalProperties_get__initialWetMass(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getInitialWetMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__initialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setInitialWetMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "initialWetMass", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maneuversFrequency(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getManeuversFrequency());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__maneuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setManeuversFrequency(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maneuversFrequency", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maneuversPerYear(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getManeuversPerYear());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OrbitPhysicalProperties_get__manufacturer(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManufacturer());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__manufacturer(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManufacturer(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manufacturer", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaxAreaForCollisionProbability());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaxAreaForCollisionProbability(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maxAreaForCollisionProbability", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maxThrust(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaxThrust());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__maxThrust(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaxThrust(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maxThrust", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMinAreaForCollisionProbability());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMinAreaForCollisionProbability(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "minAreaForCollisionProbability", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__remainingDv(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getRemainingDv());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__remainingDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setRemainingDv(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "remainingDv", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__srpCoefficient(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSrpCoefficient());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__srpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSrpCoefficient(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpCoefficient", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__srpConstantArea(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSrpConstantArea());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__srpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSrpConstantArea(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpConstantArea", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__srpUncertainty(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSrpUncertainty());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__srpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSrpUncertainty(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpUncertainty", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTypAreaForCollisionProbability());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTypAreaForCollisionProbability(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "typAreaForCollisionProbability", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__wetMass(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getWetMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__wetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setWetMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "wetMass", arg);
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
#include "org/orekit/propagation/numerical/cr3bp/CR3BPMultipleShooter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/numerical/cr3bp/STMEquations.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *CR3BPMultipleShooter::class$ = NULL;
          jmethodID *CR3BPMultipleShooter::mids$ = NULL;
          bool CR3BPMultipleShooter::live$ = false;

          jclass CR3BPMultipleShooter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/CR3BPMultipleShooter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fa2b46dfabd6cf44] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;DI)V");
              mids$[mid_setClosedOrbitConstraint_b35db77cae58639e] = env->getMethodID(cls, "setClosedOrbitConstraint", "(Z)V");
              mids$[mid_setEpochFreedom_06c90d8be18d8afa] = env->getMethodID(cls, "setEpochFreedom", "(IZ)V");
              mids$[mid_setScaleLength_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setScaleLength", "(D)V");
              mids$[mid_setScaleTime_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setScaleTime", "(D)V");
              mids$[mid_computeAdditionalConstraints_f7899d4480f6af2b] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
              mids$[mid_computeAdditionalJacobianMatrix_f1fb8031f2a01da7] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
              mids$[mid_getAugmentedInitialState_bc8abbf0245ce660] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_getNumberOfConstraints_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfConstraints", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CR3BPMultipleShooter::CR3BPMultipleShooter(const ::java::util::List & a0, const ::java::util::List & a1, const ::java::util::List & a2, jdouble a3, jint a4) : ::org::orekit::utils::AbstractMultipleShooting(env->newObject(initializeClass, &mids$, mid_init$_fa2b46dfabd6cf44, a0.this$, a1.this$, a2.this$, a3, a4)) {}

          void CR3BPMultipleShooter::setClosedOrbitConstraint(jboolean a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setClosedOrbitConstraint_b35db77cae58639e], a0);
          }

          void CR3BPMultipleShooter::setEpochFreedom(jint a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setEpochFreedom_06c90d8be18d8afa], a0, a1);
          }

          void CR3BPMultipleShooter::setScaleLength(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setScaleLength_1ad26e8c8c0cd65b], a0);
          }

          void CR3BPMultipleShooter::setScaleTime(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setScaleTime_1ad26e8c8c0cd65b], a0);
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
      namespace numerical {
        namespace cr3bp {
          static PyObject *t_CR3BPMultipleShooter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPMultipleShooter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CR3BPMultipleShooter_init_(t_CR3BPMultipleShooter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CR3BPMultipleShooter_setClosedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg);
          static PyObject *t_CR3BPMultipleShooter_setEpochFreedom(t_CR3BPMultipleShooter *self, PyObject *args);
          static PyObject *t_CR3BPMultipleShooter_setScaleLength(t_CR3BPMultipleShooter *self, PyObject *args);
          static PyObject *t_CR3BPMultipleShooter_setScaleTime(t_CR3BPMultipleShooter *self, PyObject *args);
          static int t_CR3BPMultipleShooter_set__closedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg, void *data);
          static int t_CR3BPMultipleShooter_set__scaleLength(t_CR3BPMultipleShooter *self, PyObject *arg, void *data);
          static int t_CR3BPMultipleShooter_set__scaleTime(t_CR3BPMultipleShooter *self, PyObject *arg, void *data);
          static PyGetSetDef t_CR3BPMultipleShooter__fields_[] = {
            DECLARE_SET_FIELD(t_CR3BPMultipleShooter, closedOrbitConstraint),
            DECLARE_SET_FIELD(t_CR3BPMultipleShooter, scaleLength),
            DECLARE_SET_FIELD(t_CR3BPMultipleShooter, scaleTime),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CR3BPMultipleShooter__methods_[] = {
            DECLARE_METHOD(t_CR3BPMultipleShooter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setClosedOrbitConstraint, METH_O),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setEpochFreedom, METH_VARARGS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setScaleLength, METH_VARARGS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setScaleTime, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CR3BPMultipleShooter)[] = {
            { Py_tp_methods, t_CR3BPMultipleShooter__methods_ },
            { Py_tp_init, (void *) t_CR3BPMultipleShooter_init_ },
            { Py_tp_getset, t_CR3BPMultipleShooter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CR3BPMultipleShooter)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::AbstractMultipleShooting),
            NULL
          };

          DEFINE_TYPE(CR3BPMultipleShooter, t_CR3BPMultipleShooter, CR3BPMultipleShooter);

          void t_CR3BPMultipleShooter::install(PyObject *module)
          {
            installType(&PY_TYPE(CR3BPMultipleShooter), &PY_TYPE_DEF(CR3BPMultipleShooter), module, "CR3BPMultipleShooter", 0);
          }

          void t_CR3BPMultipleShooter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPMultipleShooter), "class_", make_descriptor(CR3BPMultipleShooter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPMultipleShooter), "wrapfn_", make_descriptor(t_CR3BPMultipleShooter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPMultipleShooter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CR3BPMultipleShooter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CR3BPMultipleShooter::initializeClass, 1)))
              return NULL;
            return t_CR3BPMultipleShooter::wrap_Object(CR3BPMultipleShooter(((t_CR3BPMultipleShooter *) arg)->object.this$));
          }
          static PyObject *t_CR3BPMultipleShooter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CR3BPMultipleShooter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CR3BPMultipleShooter_init_(t_CR3BPMultipleShooter *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jint a4;
            CR3BPMultipleShooter object((jobject) NULL);

            if (!parseArgs(args, "KKKDI", ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4))
            {
              INT_CALL(object = CR3BPMultipleShooter(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CR3BPMultipleShooter_setClosedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg)
          {
            jboolean a0;

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(self->object.setClosedOrbitConstraint(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setClosedOrbitConstraint", arg);
            return NULL;
          }

          static PyObject *t_CR3BPMultipleShooter_setEpochFreedom(t_CR3BPMultipleShooter *self, PyObject *args)
          {
            jint a0;
            jboolean a1;

            if (!parseArgs(args, "IZ", &a0, &a1))
            {
              OBJ_CALL(self->object.setEpochFreedom(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CR3BPMultipleShooter), (PyObject *) self, "setEpochFreedom", args, 2);
          }

          static PyObject *t_CR3BPMultipleShooter_setScaleLength(t_CR3BPMultipleShooter *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setScaleLength(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CR3BPMultipleShooter), (PyObject *) self, "setScaleLength", args, 2);
          }

          static PyObject *t_CR3BPMultipleShooter_setScaleTime(t_CR3BPMultipleShooter *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setScaleTime(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CR3BPMultipleShooter), (PyObject *) self, "setScaleTime", args, 2);
          }

          static int t_CR3BPMultipleShooter_set__closedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg, void *data)
          {
            {
              jboolean value;
              if (!parseArg(arg, "Z", &value))
              {
                INT_CALL(self->object.setClosedOrbitConstraint(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "closedOrbitConstraint", arg);
            return -1;
          }

          static int t_CR3BPMultipleShooter_set__scaleLength(t_CR3BPMultipleShooter *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setScaleLength(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "scaleLength", arg);
            return -1;
          }

          static int t_CR3BPMultipleShooter_set__scaleTime(t_CR3BPMultipleShooter *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setScaleTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "scaleTime", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$FrameConsumer::class$ = NULL;
            jmethodID *ParseToken$FrameConsumer::mids$ = NULL;
            bool ParseToken$FrameConsumer::live$ = false;

            jclass ParseToken$FrameConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_2c8b859a72c0094e] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$FrameConsumer::accept(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_2c8b859a72c0094e], a0.this$);
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
            static PyObject *t_ParseToken$FrameConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$FrameConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$FrameConsumer_accept(t_ParseToken$FrameConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$FrameConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$FrameConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$FrameConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$FrameConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$FrameConsumer)[] = {
              { Py_tp_methods, t_ParseToken$FrameConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$FrameConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$FrameConsumer, t_ParseToken$FrameConsumer, ParseToken$FrameConsumer);

            void t_ParseToken$FrameConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$FrameConsumer), &PY_TYPE_DEF(ParseToken$FrameConsumer), module, "ParseToken$FrameConsumer", 0);
            }

            void t_ParseToken$FrameConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$FrameConsumer), "class_", make_descriptor(ParseToken$FrameConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$FrameConsumer), "wrapfn_", make_descriptor(t_ParseToken$FrameConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$FrameConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$FrameConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$FrameConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$FrameConsumer::wrap_Object(ParseToken$FrameConsumer(((t_ParseToken$FrameConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$FrameConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$FrameConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$FrameConsumer_accept(t_ParseToken$FrameConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
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
#include "org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$BaseConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$BaseConfiguration::mids$ = NULL;
        bool CRDConfiguration$BaseConfiguration::live$ = false;

        jclass CRDConfiguration$BaseConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getConfigurationId_d2c8eb4129821f0e] = env->getMethodID(cls, "getConfigurationId", "()Ljava/lang/String;");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_setConfigurationId_105e1eadb709d9ac] = env->getMethodID(cls, "setConfigurationId", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$BaseConfiguration::CRDConfiguration$BaseConfiguration() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jboolean CRDConfiguration$BaseConfiguration::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        ::java::lang::String CRDConfiguration$BaseConfiguration::getConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getConfigurationId_d2c8eb4129821f0e]));
        }

        jint CRDConfiguration$BaseConfiguration::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        void CRDConfiguration$BaseConfiguration::setConfigurationId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setConfigurationId_105e1eadb709d9ac], a0.this$);
        }

        ::java::lang::String CRDConfiguration$BaseConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
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
        static PyObject *t_CRDConfiguration$BaseConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$BaseConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$BaseConfiguration_init_(t_CRDConfiguration$BaseConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$BaseConfiguration_equals(t_CRDConfiguration$BaseConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$BaseConfiguration_getConfigurationId(t_CRDConfiguration$BaseConfiguration *self);
        static PyObject *t_CRDConfiguration$BaseConfiguration_hashCode(t_CRDConfiguration$BaseConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$BaseConfiguration_setConfigurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$BaseConfiguration_toCrdString(t_CRDConfiguration$BaseConfiguration *self);
        static PyObject *t_CRDConfiguration$BaseConfiguration_get__configurationId(t_CRDConfiguration$BaseConfiguration *self, void *data);
        static int t_CRDConfiguration$BaseConfiguration_set__configurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$BaseConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$BaseConfiguration, configurationId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$BaseConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, equals, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, getConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, setConfigurationId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, toCrdString, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$BaseConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$BaseConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$BaseConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$BaseConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$BaseConfiguration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$BaseConfiguration, t_CRDConfiguration$BaseConfiguration, CRDConfiguration$BaseConfiguration);

        void t_CRDConfiguration$BaseConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$BaseConfiguration), &PY_TYPE_DEF(CRDConfiguration$BaseConfiguration), module, "CRDConfiguration$BaseConfiguration", 0);
        }

        void t_CRDConfiguration$BaseConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$BaseConfiguration), "class_", make_descriptor(CRDConfiguration$BaseConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$BaseConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$BaseConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$BaseConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$BaseConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$BaseConfiguration::wrap_Object(CRDConfiguration$BaseConfiguration(((t_CRDConfiguration$BaseConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$BaseConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$BaseConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$BaseConfiguration_init_(t_CRDConfiguration$BaseConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$BaseConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$BaseConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_equals(t_CRDConfiguration$BaseConfiguration *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$BaseConfiguration), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_getConfigurationId(t_CRDConfiguration$BaseConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_hashCode(t_CRDConfiguration$BaseConfiguration *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$BaseConfiguration), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_setConfigurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setConfigurationId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setConfigurationId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_toCrdString(t_CRDConfiguration$BaseConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_get__configurationId(t_CRDConfiguration$BaseConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getConfigurationId());
          return j2p(value);
        }
        static int t_CRDConfiguration$BaseConfiguration_set__configurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setConfigurationId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "configurationId", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *BistaticRange::class$ = NULL;
        jmethodID *BistaticRange::mids$ = NULL;
        bool BistaticRange::live$ = false;
        ::java::lang::String *BistaticRange::MEASUREMENT_TYPE = NULL;

        jclass BistaticRange::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/BistaticRange");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e4f5e0763746f291] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getEmitterStation_f8d3ef5d49da0d87] = env->getMethodID(cls, "getEmitterStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getReceiverStation_f8d3ef5d49da0d87] = env->getMethodID(cls, "getReceiverStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BistaticRange::BistaticRange(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_e4f5e0763746f291, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation BistaticRange::getEmitterStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getEmitterStation_f8d3ef5d49da0d87]));
        }

        ::org::orekit::estimation::measurements::GroundStation BistaticRange::getReceiverStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getReceiverStation_f8d3ef5d49da0d87]));
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
        static PyObject *t_BistaticRange_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRange_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRange_of_(t_BistaticRange *self, PyObject *args);
        static int t_BistaticRange_init_(t_BistaticRange *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BistaticRange_getEmitterStation(t_BistaticRange *self);
        static PyObject *t_BistaticRange_getReceiverStation(t_BistaticRange *self);
        static PyObject *t_BistaticRange_get__emitterStation(t_BistaticRange *self, void *data);
        static PyObject *t_BistaticRange_get__receiverStation(t_BistaticRange *self, void *data);
        static PyObject *t_BistaticRange_get__parameters_(t_BistaticRange *self, void *data);
        static PyGetSetDef t_BistaticRange__fields_[] = {
          DECLARE_GET_FIELD(t_BistaticRange, emitterStation),
          DECLARE_GET_FIELD(t_BistaticRange, receiverStation),
          DECLARE_GET_FIELD(t_BistaticRange, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BistaticRange__methods_[] = {
          DECLARE_METHOD(t_BistaticRange, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRange, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRange, of_, METH_VARARGS),
          DECLARE_METHOD(t_BistaticRange, getEmitterStation, METH_NOARGS),
          DECLARE_METHOD(t_BistaticRange, getReceiverStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BistaticRange)[] = {
          { Py_tp_methods, t_BistaticRange__methods_ },
          { Py_tp_init, (void *) t_BistaticRange_init_ },
          { Py_tp_getset, t_BistaticRange__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BistaticRange)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(BistaticRange, t_BistaticRange, BistaticRange);
        PyObject *t_BistaticRange::wrap_Object(const BistaticRange& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRange::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRange *self = (t_BistaticRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BistaticRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRange::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRange *self = (t_BistaticRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BistaticRange::install(PyObject *module)
        {
          installType(&PY_TYPE(BistaticRange), &PY_TYPE_DEF(BistaticRange), module, "BistaticRange", 0);
        }

        void t_BistaticRange::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "class_", make_descriptor(BistaticRange::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "wrapfn_", make_descriptor(t_BistaticRange::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "boxfn_", make_descriptor(boxObject));
          env->getClass(BistaticRange::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*BistaticRange::MEASUREMENT_TYPE)));
        }

        static PyObject *t_BistaticRange_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BistaticRange::initializeClass, 1)))
            return NULL;
          return t_BistaticRange::wrap_Object(BistaticRange(((t_BistaticRange *) arg)->object.this$));
        }
        static PyObject *t_BistaticRange_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BistaticRange::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BistaticRange_of_(t_BistaticRange *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BistaticRange_init_(t_BistaticRange *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          BistaticRange object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = BistaticRange(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRange);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BistaticRange_getEmitterStation(t_BistaticRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_BistaticRange_getReceiverStation(t_BistaticRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_BistaticRange_get__parameters_(t_BistaticRange *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BistaticRange_get__emitterStation(t_BistaticRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_BistaticRange_get__receiverStation(t_BistaticRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *InertialFrameId::class$ = NULL;
        jmethodID *InertialFrameId::mids$ = NULL;
        bool InertialFrameId::live$ = false;
        InertialFrameId *InertialFrameId::EME2000 = NULL;
        InertialFrameId *InertialFrameId::GCRF = NULL;
        InertialFrameId *InertialFrameId::MOD = NULL;
        InertialFrameId *InertialFrameId::TOD = NULL;
        InertialFrameId *InertialFrameId::VEIS1950 = NULL;

        jclass InertialFrameId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/InertialFrameId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_a234814e97fcaa4c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/InertialFrameId;");
            mids$[mid_values_2ee22dc185f29a13] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/InertialFrameId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EME2000 = new InertialFrameId(env->getStaticObjectField(cls, "EME2000", "Lorg/orekit/rugged/api/InertialFrameId;"));
            GCRF = new InertialFrameId(env->getStaticObjectField(cls, "GCRF", "Lorg/orekit/rugged/api/InertialFrameId;"));
            MOD = new InertialFrameId(env->getStaticObjectField(cls, "MOD", "Lorg/orekit/rugged/api/InertialFrameId;"));
            TOD = new InertialFrameId(env->getStaticObjectField(cls, "TOD", "Lorg/orekit/rugged/api/InertialFrameId;"));
            VEIS1950 = new InertialFrameId(env->getStaticObjectField(cls, "VEIS1950", "Lorg/orekit/rugged/api/InertialFrameId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InertialFrameId InertialFrameId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return InertialFrameId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a234814e97fcaa4c], a0.this$));
        }

        JArray< InertialFrameId > InertialFrameId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< InertialFrameId >(env->callStaticObjectMethod(cls, mids$[mid_values_2ee22dc185f29a13]));
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
        static PyObject *t_InertialFrameId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InertialFrameId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InertialFrameId_of_(t_InertialFrameId *self, PyObject *args);
        static PyObject *t_InertialFrameId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_InertialFrameId_values(PyTypeObject *type);
        static PyObject *t_InertialFrameId_get__parameters_(t_InertialFrameId *self, void *data);
        static PyGetSetDef t_InertialFrameId__fields_[] = {
          DECLARE_GET_FIELD(t_InertialFrameId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InertialFrameId__methods_[] = {
          DECLARE_METHOD(t_InertialFrameId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialFrameId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialFrameId, of_, METH_VARARGS),
          DECLARE_METHOD(t_InertialFrameId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InertialFrameId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InertialFrameId)[] = {
          { Py_tp_methods, t_InertialFrameId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_InertialFrameId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InertialFrameId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(InertialFrameId, t_InertialFrameId, InertialFrameId);
        PyObject *t_InertialFrameId::wrap_Object(const InertialFrameId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InertialFrameId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InertialFrameId *self = (t_InertialFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_InertialFrameId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InertialFrameId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InertialFrameId *self = (t_InertialFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_InertialFrameId::install(PyObject *module)
        {
          installType(&PY_TYPE(InertialFrameId), &PY_TYPE_DEF(InertialFrameId), module, "InertialFrameId", 0);
        }

        void t_InertialFrameId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "class_", make_descriptor(InertialFrameId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "wrapfn_", make_descriptor(t_InertialFrameId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "boxfn_", make_descriptor(boxObject));
          env->getClass(InertialFrameId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "EME2000", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::EME2000)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "GCRF", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::GCRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "MOD", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::MOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "TOD", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::TOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "VEIS1950", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::VEIS1950)));
        }

        static PyObject *t_InertialFrameId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InertialFrameId::initializeClass, 1)))
            return NULL;
          return t_InertialFrameId::wrap_Object(InertialFrameId(((t_InertialFrameId *) arg)->object.this$));
        }
        static PyObject *t_InertialFrameId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InertialFrameId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InertialFrameId_of_(t_InertialFrameId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_InertialFrameId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          InertialFrameId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::InertialFrameId::valueOf(a0));
            return t_InertialFrameId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_InertialFrameId_values(PyTypeObject *type)
        {
          JArray< InertialFrameId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::InertialFrameId::values());
          return JArray<jobject>(result.this$).wrap(t_InertialFrameId::wrap_jobject);
        }
        static PyObject *t_InertialFrameId_get__parameters_(t_InertialFrameId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/PythonLOSTransformI.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *PythonLOSTransformI::class$ = NULL;
        jmethodID *PythonLOSTransformI::mids$ = NULL;
        bool PythonLOSTransformI::live$ = false;

        jclass PythonLOSTransformI::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/PythonLOSTransformI");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_11e4ca8182c1933d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_transformLOS_21cc615301704d02] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_41d9b45a2778847c] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonLOSTransformI::PythonLOSTransformI() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonLOSTransformI::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonLOSTransformI::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonLOSTransformI::pythonExtension(jlong a0) const
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
    namespace rugged {
      namespace los {
        static PyObject *t_PythonLOSTransformI_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonLOSTransformI_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonLOSTransformI_init_(t_PythonLOSTransformI *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonLOSTransformI_finalize(t_PythonLOSTransformI *self);
        static PyObject *t_PythonLOSTransformI_pythonExtension(t_PythonLOSTransformI *self, PyObject *args);
        static jobject JNICALL t_PythonLOSTransformI_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonLOSTransformI_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonLOSTransformI_transformLOS2(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonLOSTransformI_transformLOS3(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2, jobject a3);
        static PyObject *t_PythonLOSTransformI_get__self(t_PythonLOSTransformI *self, void *data);
        static PyGetSetDef t_PythonLOSTransformI__fields_[] = {
          DECLARE_GET_FIELD(t_PythonLOSTransformI, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonLOSTransformI__methods_[] = {
          DECLARE_METHOD(t_PythonLOSTransformI, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonLOSTransformI, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonLOSTransformI, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonLOSTransformI, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonLOSTransformI)[] = {
          { Py_tp_methods, t_PythonLOSTransformI__methods_ },
          { Py_tp_init, (void *) t_PythonLOSTransformI_init_ },
          { Py_tp_getset, t_PythonLOSTransformI__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonLOSTransformI)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonLOSTransformI, t_PythonLOSTransformI, PythonLOSTransformI);

        void t_PythonLOSTransformI::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonLOSTransformI), &PY_TYPE_DEF(PythonLOSTransformI), module, "PythonLOSTransformI", 1);
        }

        void t_PythonLOSTransformI::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOSTransformI), "class_", make_descriptor(PythonLOSTransformI::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOSTransformI), "wrapfn_", make_descriptor(t_PythonLOSTransformI::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOSTransformI), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonLOSTransformI::initializeClass);
          JNINativeMethod methods[] = {
            { "getParametersDrivers", "()Ljava/util/stream/Stream;", (void *) t_PythonLOSTransformI_getParametersDrivers0 },
            { "pythonDecRef", "()V", (void *) t_PythonLOSTransformI_pythonDecRef1 },
            { "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonLOSTransformI_transformLOS2 },
            { "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonLOSTransformI_transformLOS3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonLOSTransformI_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonLOSTransformI::initializeClass, 1)))
            return NULL;
          return t_PythonLOSTransformI::wrap_Object(PythonLOSTransformI(((t_PythonLOSTransformI *) arg)->object.this$));
        }
        static PyObject *t_PythonLOSTransformI_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonLOSTransformI::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonLOSTransformI_init_(t_PythonLOSTransformI *self, PyObject *args, PyObject *kwds)
        {
          PythonLOSTransformI object((jobject) NULL);

          INT_CALL(object = PythonLOSTransformI());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonLOSTransformI_finalize(t_PythonLOSTransformI *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonLOSTransformI_pythonExtension(t_PythonLOSTransformI *self, PyObject *args)
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

        static jobject JNICALL t_PythonLOSTransformI_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonLOSTransformI::mids$[PythonLOSTransformI::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::stream::Stream value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
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

        static void JNICALL t_PythonLOSTransformI_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonLOSTransformI::mids$[PythonLOSTransformI::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonLOSTransformI::mids$[PythonLOSTransformI::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonLOSTransformI_transformLOS2(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonLOSTransformI::mids$[PythonLOSTransformI::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
          PyObject *result = PyObject_CallMethod(obj, "transformLOS", "iOO", (int) a0, o1, o2);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("transformLOS", result);
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

        static jobject JNICALL t_PythonLOSTransformI_transformLOS3(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonLOSTransformI::mids$[PythonLOSTransformI::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
          PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
          PyObject *o3 = ::org::orekit::rugged::utils::t_DerivativeGenerator::wrap_Object(::org::orekit::rugged::utils::DerivativeGenerator(a3));
          PyObject *result = PyObject_CallMethod(obj, "transformLOS", "iOOO", (int) a0, o1, o2, o3);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("transformLOS", result);
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

        static PyObject *t_PythonLOSTransformI_get__self(t_PythonLOSTransformI *self, void *data)
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
#include "org/hipparchus/optim/linear/LinearOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
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
            mids$[mid_optimize_1912ae5ec9cd8a6c] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_parseOptimizationData_df324e640da2eeec] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
            mids$[mid_isRestrictedToNonNegative_eee3de00fe971136] = env->getMethodID(cls, "isRestrictedToNonNegative", "()Z");
            mids$[mid_getConstraints_3bfef5c77ceb081a] = env->getMethodID(cls, "getConstraints", "()Ljava/util/Collection;");
            mids$[mid_getFunction_6ea55c35a04ead0a] = env->getMethodID(cls, "getFunction", "()Lorg/hipparchus/optim/linear/LinearObjectiveFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::optim::PointValuePair LinearOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_1912ae5ec9cd8a6c], a0.this$));
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
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *Range::class$ = NULL;
        jmethodID *Range::mids$ = NULL;
        bool Range::live$ = false;
        ::java::lang::String *Range::MEASUREMENT_TYPE = NULL;

        jclass Range::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/Range");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c2b759d1b43bb582] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Range::Range(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_c2b759d1b43bb582, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}
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
        static PyObject *t_Range_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Range_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Range_of_(t_Range *self, PyObject *args);
        static int t_Range_init_(t_Range *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Range_get__parameters_(t_Range *self, void *data);
        static PyGetSetDef t_Range__fields_[] = {
          DECLARE_GET_FIELD(t_Range, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Range__methods_[] = {
          DECLARE_METHOD(t_Range, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Range, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Range, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Range)[] = {
          { Py_tp_methods, t_Range__methods_ },
          { Py_tp_init, (void *) t_Range_init_ },
          { Py_tp_getset, t_Range__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Range)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(Range, t_Range, Range);
        PyObject *t_Range::wrap_Object(const Range& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Range::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Range *self = (t_Range *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Range::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Range::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Range *self = (t_Range *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Range::install(PyObject *module)
        {
          installType(&PY_TYPE(Range), &PY_TYPE_DEF(Range), module, "Range", 0);
        }

        void t_Range::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "class_", make_descriptor(Range::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "wrapfn_", make_descriptor(t_Range::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "boxfn_", make_descriptor(boxObject));
          env->getClass(Range::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Range), "MEASUREMENT_TYPE", make_descriptor(j2p(*Range::MEASUREMENT_TYPE)));
        }

        static PyObject *t_Range_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Range::initializeClass, 1)))
            return NULL;
          return t_Range::wrap_Object(Range(((t_Range *) arg)->object.this$));
        }
        static PyObject *t_Range_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Range::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Range_of_(t_Range *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_Range_init_(t_Range *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          jboolean a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          Range object((jobject) NULL);

          if (!parseArgs(args, "kZkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = Range(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Range);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_Range_get__parameters_(t_Range *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldOrbitBlender.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldOrbitBlender::class$ = NULL;
      jmethodID *FieldOrbitBlender::mids$ = NULL;
      bool FieldOrbitBlender::live$ = false;

      jclass FieldOrbitBlender::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldOrbitBlender");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f54c9e97b1f263c1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;Lorg/orekit/frames/Frame;)V");
          mids$[mid_interpolate_cb3bc2d787cce5ef] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/FieldOrbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldOrbitBlender::FieldOrbitBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction & a0, const ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_f54c9e97b1f263c1, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::orbits::FieldOrbit FieldOrbitBlender::interpolate(const ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData & a0) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_interpolate_cb3bc2d787cce5ef], a0.this$));
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
      static PyObject *t_FieldOrbitBlender_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitBlender_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitBlender_of_(t_FieldOrbitBlender *self, PyObject *args);
      static int t_FieldOrbitBlender_init_(t_FieldOrbitBlender *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldOrbitBlender_interpolate(t_FieldOrbitBlender *self, PyObject *args);
      static PyObject *t_FieldOrbitBlender_get__parameters_(t_FieldOrbitBlender *self, void *data);
      static PyGetSetDef t_FieldOrbitBlender__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrbitBlender, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrbitBlender__methods_[] = {
        DECLARE_METHOD(t_FieldOrbitBlender, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitBlender, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitBlender, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbitBlender, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrbitBlender)[] = {
        { Py_tp_methods, t_FieldOrbitBlender__methods_ },
        { Py_tp_init, (void *) t_FieldOrbitBlender_init_ },
        { Py_tp_getset, t_FieldOrbitBlender__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrbitBlender)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractFieldOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldOrbitBlender, t_FieldOrbitBlender, FieldOrbitBlender);
      PyObject *t_FieldOrbitBlender::wrap_Object(const FieldOrbitBlender& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitBlender::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitBlender *self = (t_FieldOrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrbitBlender::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitBlender::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitBlender *self = (t_FieldOrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrbitBlender::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrbitBlender), &PY_TYPE_DEF(FieldOrbitBlender), module, "FieldOrbitBlender", 0);
      }

      void t_FieldOrbitBlender::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitBlender), "class_", make_descriptor(FieldOrbitBlender::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitBlender), "wrapfn_", make_descriptor(t_FieldOrbitBlender::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitBlender), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrbitBlender_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrbitBlender::initializeClass, 1)))
          return NULL;
        return t_FieldOrbitBlender::wrap_Object(FieldOrbitBlender(((t_FieldOrbitBlender *) arg)->object.this$));
      }
      static PyObject *t_FieldOrbitBlender_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrbitBlender::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrbitBlender_of_(t_FieldOrbitBlender *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldOrbitBlender_init_(t_FieldOrbitBlender *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        FieldOrbitBlender object((jobject) NULL);

        if (!parseArgs(args, "KKk", ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction::initializeClass, ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::t_FieldAbstractAnalyticalPropagator::parameters_, &a2))
        {
          INT_CALL(object = FieldOrbitBlender(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldOrbitBlender_interpolate(t_FieldOrbitBlender *self, PyObject *args)
      {
        ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData::initializeClass, &a0, &p0, ::org::orekit::time::t_AbstractFieldTimeInterpolator$InterpolationData::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0));
          return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(FieldOrbitBlender), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_FieldOrbitBlender_get__parameters_(t_FieldOrbitBlender *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/MedianDate.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *MedianDate::class$ = NULL;
          jmethodID *MedianDate::mids$ = NULL;
          bool MedianDate::live$ = false;

          jclass MedianDate::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/MedianDate");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_56b987237c71cdbb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_getAdditionalState_e8a4ac02afc72623] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_yields_34f098c1d43e614c] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MedianDate::MedianDate(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_56b987237c71cdbb, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > MedianDate::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_e8a4ac02afc72623], a0.this$));
          }

          ::java::lang::String MedianDate::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          jboolean MedianDate::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_yields_34f098c1d43e614c], a0.this$);
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
        namespace jacobians {
          static PyObject *t_MedianDate_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MedianDate_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MedianDate_init_(t_MedianDate *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MedianDate_getAdditionalState(t_MedianDate *self, PyObject *arg);
          static PyObject *t_MedianDate_getName(t_MedianDate *self);
          static PyObject *t_MedianDate_yields(t_MedianDate *self, PyObject *arg);
          static PyObject *t_MedianDate_get__name(t_MedianDate *self, void *data);
          static PyGetSetDef t_MedianDate__fields_[] = {
            DECLARE_GET_FIELD(t_MedianDate, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MedianDate__methods_[] = {
            DECLARE_METHOD(t_MedianDate, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MedianDate, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MedianDate, getAdditionalState, METH_O),
            DECLARE_METHOD(t_MedianDate, getName, METH_NOARGS),
            DECLARE_METHOD(t_MedianDate, yields, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MedianDate)[] = {
            { Py_tp_methods, t_MedianDate__methods_ },
            { Py_tp_init, (void *) t_MedianDate_init_ },
            { Py_tp_getset, t_MedianDate__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MedianDate)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MedianDate, t_MedianDate, MedianDate);

          void t_MedianDate::install(PyObject *module)
          {
            installType(&PY_TYPE(MedianDate), &PY_TYPE_DEF(MedianDate), module, "MedianDate", 0);
          }

          void t_MedianDate::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MedianDate), "class_", make_descriptor(MedianDate::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MedianDate), "wrapfn_", make_descriptor(t_MedianDate::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MedianDate), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MedianDate_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MedianDate::initializeClass, 1)))
              return NULL;
            return t_MedianDate::wrap_Object(MedianDate(((t_MedianDate *) arg)->object.this$));
          }
          static PyObject *t_MedianDate_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MedianDate::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MedianDate_init_(t_MedianDate *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            MedianDate object((jobject) NULL);

            if (!parseArgs(args, "sss", &a0, &a1, &a2))
            {
              INT_CALL(object = MedianDate(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MedianDate_getAdditionalState(t_MedianDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAdditionalState(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
            return NULL;
          }

          static PyObject *t_MedianDate_getName(t_MedianDate *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MedianDate_yields(t_MedianDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.yields(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "yields", arg);
            return NULL;
          }

          static PyObject *t_MedianDate_get__name(t_MedianDate *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonShortTermEncounter2DPOCMethod.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "java/lang/Throwable.h"
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

              ::java::lang::Class *PythonShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *PythonShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool PythonShortTermEncounter2DPOCMethod::live$ = false;

              jclass PythonShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_compute_387945137ebab778] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0110eb01e8b95b31] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_d71c9b0a2a1fa7ea] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_fabda52a93cfd27a] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_7eae8d8112e983e4] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8edb355cf7d54cf6] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_95dcab374babccc7] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_426d335df18e2f21] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                  mids$[mid_getType_592990a91429410c] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_eee3de00fe971136] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");
                  mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonShortTermEncounter2DPOCMethod::PythonShortTermEncounter2DPOCMethod() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              void PythonShortTermEncounter2DPOCMethod::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
              }

              jlong PythonShortTermEncounter2DPOCMethod::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
              }

              void PythonShortTermEncounter2DPOCMethod::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonShortTermEncounter2DPOCMethod_init_(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_finalize(t_PythonShortTermEncounter2DPOCMethod *self);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_pythonExtension(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute4(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jdouble a5);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jdouble a4, jdouble a5);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getName8(JNIEnv *jenv, jobject jobj);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getType9(JNIEnv *jenv, jobject jobj);
              static jboolean JNICALL t_PythonShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod10(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonShortTermEncounter2DPOCMethod_pythonDecRef11(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_get__self(t_PythonShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_PythonShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_PythonShortTermEncounter2DPOCMethod, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_PythonShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) t_PythonShortTermEncounter2DPOCMethod_init_ },
                { Py_tp_getset, t_PythonShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(PythonShortTermEncounter2DPOCMethod, t_PythonShortTermEncounter2DPOCMethod, PythonShortTermEncounter2DPOCMethod);

              void t_PythonShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(PythonShortTermEncounter2DPOCMethod), module, "PythonShortTermEncounter2DPOCMethod", 1);
              }

              void t_PythonShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortTermEncounter2DPOCMethod), "class_", make_descriptor(PythonShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_PythonShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonShortTermEncounter2DPOCMethod::initializeClass);
                JNINativeMethod methods[] = {
                  { "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute0 },
                  { "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute1 },
                  { "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute2 },
                  { "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute3 },
                  { "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute4 },
                  { "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute5 },
                  { "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute6 },
                  { "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute7 },
                  { "getName", "()Ljava/lang/String;", (void *) t_PythonShortTermEncounter2DPOCMethod_getName8 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonShortTermEncounter2DPOCMethod_getType9 },
                  { "isAMaximumProbabilityOfCollisionMethod", "()Z", (void *) t_PythonShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod10 },
                  { "pythonDecRef", "()V", (void *) t_PythonShortTermEncounter2DPOCMethod_pythonDecRef11 },
                };
                env->registerNatives(cls, methods, 12);
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_PythonShortTermEncounter2DPOCMethod::wrap_Object(PythonShortTermEncounter2DPOCMethod(((t_PythonShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonShortTermEncounter2DPOCMethod_init_(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds)
              {
                PythonShortTermEncounter2DPOCMethod object((jobject) NULL);

                INT_CALL(object = PythonShortTermEncounter2DPOCMethod());
                self->object = object;

                Py_INCREF((PyObject *) self);
                self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

                return 0;
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_finalize(t_PythonShortTermEncounter2DPOCMethod *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_pythonExtension(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args)
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::wrap_Object(::org::orekit::files::ccsds::ndm::cdm::Cdm(a0));
                PyObject *result = PyObject_CallMethod(obj, "compute", "Od", o0, (double) a1);
                Py_DECREF(o0);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::wrap_Object(::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition(a0));
                PyObject *result = PyObject_CallMethod(obj, "compute", "Od", o0, (double) a1);
                Py_DECREF(o0);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DDefinition::wrap_Object(::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition(a0));
                PyObject *result = PyObject_CallMethod(obj, "compute", "Od", o0, (double) a1);
                Py_DECREF(o0);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::wrap_Object(::org::orekit::files::ccsds::ndm::cdm::Cdm(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOd", o0, o1, (double) a2);
                Py_DECREF(o0);
                Py_DECREF(o1);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute4(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jdouble a5)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a0));
                PyObject *o1 = ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(::org::orekit::propagation::FieldStateCovariance(a1));
                PyObject *o2 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a2));
                PyObject *o3 = ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(::org::orekit::propagation::FieldStateCovariance(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOOd", o0, o1, o2, o3, o4, (double) a5);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jdouble a4, jdouble a5)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
                PyObject *o1 = ::org::orekit::propagation::t_StateCovariance::wrap_Object(::org::orekit::propagation::StateCovariance(a1));
                PyObject *o2 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a2));
                PyObject *o3 = ::org::orekit::propagation::t_StateCovariance::wrap_Object(::org::orekit::propagation::StateCovariance(a3));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOdd", o0, o1, o2, o3, (double) a4, (double) a5);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getName8(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getType9(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
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

              static jboolean JNICALL t_PythonShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod10(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                jboolean value;
                PyObject *result = PyObject_CallMethod(obj, "isAMaximumProbabilityOfCollisionMethod", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "Z", &value))
                {
                  throwTypeError("isAMaximumProbabilityOfCollisionMethod", result);
                  Py_DECREF(result);
                }
                else
                {
                  Py_DECREF(result);
                  return value;
                }

                return (jboolean) 0;
              }

              static void JNICALL t_PythonShortTermEncounter2DPOCMethod_pythonDecRef11(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_42c72b98e3c2e08a]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_get__self(t_PythonShortTermEncounter2DPOCMethod *self, void *data)
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
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldRecordAndContinue$Event::class$ = NULL;
          jmethodID *FieldRecordAndContinue$Event::mids$ = NULL;
          bool FieldRecordAndContinue$Event::live$ = false;

          jclass FieldRecordAndContinue$Event::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDetector_3146cd1129cf853c] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
              mids$[mid_getState_a74be2e38786f3b6] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_isIncreasing_eee3de00fe971136] = env->getMethodID(cls, "isIncreasing", "()Z");
              mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::propagation::events::FieldEventDetector FieldRecordAndContinue$Event::getDetector() const
          {
            return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_3146cd1129cf853c]));
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldRecordAndContinue$Event::getState() const
          {
            return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_a74be2e38786f3b6]));
          }

          jboolean FieldRecordAndContinue$Event::isIncreasing() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isIncreasing_eee3de00fe971136]);
          }

          ::java::lang::String FieldRecordAndContinue$Event::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
          static PyObject *t_FieldRecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue$Event_of_(t_FieldRecordAndContinue$Event *self, PyObject *args);
          static PyObject *t_FieldRecordAndContinue$Event_getDetector(t_FieldRecordAndContinue$Event *self);
          static PyObject *t_FieldRecordAndContinue$Event_getState(t_FieldRecordAndContinue$Event *self);
          static PyObject *t_FieldRecordAndContinue$Event_isIncreasing(t_FieldRecordAndContinue$Event *self);
          static PyObject *t_FieldRecordAndContinue$Event_toString(t_FieldRecordAndContinue$Event *self, PyObject *args);
          static PyObject *t_FieldRecordAndContinue$Event_get__detector(t_FieldRecordAndContinue$Event *self, void *data);
          static PyObject *t_FieldRecordAndContinue$Event_get__increasing(t_FieldRecordAndContinue$Event *self, void *data);
          static PyObject *t_FieldRecordAndContinue$Event_get__state(t_FieldRecordAndContinue$Event *self, void *data);
          static PyObject *t_FieldRecordAndContinue$Event_get__parameters_(t_FieldRecordAndContinue$Event *self, void *data);
          static PyGetSetDef t_FieldRecordAndContinue$Event__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, detector),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, increasing),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, state),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue$Event, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRecordAndContinue$Event__methods_[] = {
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, getDetector, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, getState, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, isIncreasing, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue$Event, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRecordAndContinue$Event)[] = {
            { Py_tp_methods, t_FieldRecordAndContinue$Event__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldRecordAndContinue$Event__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRecordAndContinue$Event)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRecordAndContinue$Event, t_FieldRecordAndContinue$Event, FieldRecordAndContinue$Event);
          PyObject *t_FieldRecordAndContinue$Event::wrap_Object(const FieldRecordAndContinue$Event& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue$Event::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue$Event *self = (t_FieldRecordAndContinue$Event *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRecordAndContinue$Event::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue$Event::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue$Event *self = (t_FieldRecordAndContinue$Event *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRecordAndContinue$Event::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRecordAndContinue$Event), &PY_TYPE_DEF(FieldRecordAndContinue$Event), module, "FieldRecordAndContinue$Event", 0);
          }

          void t_FieldRecordAndContinue$Event::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue$Event), "class_", make_descriptor(FieldRecordAndContinue$Event::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue$Event), "wrapfn_", make_descriptor(t_FieldRecordAndContinue$Event::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue$Event), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRecordAndContinue$Event::initializeClass, 1)))
              return NULL;
            return t_FieldRecordAndContinue$Event::wrap_Object(FieldRecordAndContinue$Event(((t_FieldRecordAndContinue$Event *) arg)->object.this$));
          }
          static PyObject *t_FieldRecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRecordAndContinue$Event::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRecordAndContinue$Event_of_(t_FieldRecordAndContinue$Event *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldRecordAndContinue$Event_getDetector(t_FieldRecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getDetector());
            return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldRecordAndContinue$Event_getState(t_FieldRecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
            OBJ_CALL(result = self->object.getState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldRecordAndContinue$Event_isIncreasing(t_FieldRecordAndContinue$Event *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isIncreasing());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldRecordAndContinue$Event_toString(t_FieldRecordAndContinue$Event *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(FieldRecordAndContinue$Event), (PyObject *) self, "toString", args, 2);
          }
          static PyObject *t_FieldRecordAndContinue$Event_get__parameters_(t_FieldRecordAndContinue$Event *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldRecordAndContinue$Event_get__detector(t_FieldRecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getDetector());
            return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
          }

          static PyObject *t_FieldRecordAndContinue$Event_get__increasing(t_FieldRecordAndContinue$Event *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isIncreasing());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldRecordAndContinue$Event_get__state(t_FieldRecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            OBJ_CALL(value = self->object.getState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunction$Parametric::class$ = NULL;
        jmethodID *PolynomialFunction$Parametric::mids$ = NULL;
        bool PolynomialFunction$Parametric::live$ = false;

        jclass PolynomialFunction$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunction$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_bfc955188bf36f2c] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_4f42c7a8793320e4] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunction$Parametric::PolynomialFunction$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        JArray< jdouble > PolynomialFunction$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_bfc955188bf36f2c], a0, a1.this$));
        }

        jdouble PolynomialFunction$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_4f42c7a8793320e4], a0, a1.this$);
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
        static PyObject *t_PolynomialFunction$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunction$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunction$Parametric_init_(t_PolynomialFunction$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunction$Parametric_gradient(t_PolynomialFunction$Parametric *self, PyObject *args);
        static PyObject *t_PolynomialFunction$Parametric_value(t_PolynomialFunction$Parametric *self, PyObject *args);

        static PyMethodDef t_PolynomialFunction$Parametric__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunction$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunction$Parametric)[] = {
          { Py_tp_methods, t_PolynomialFunction$Parametric__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunction$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunction$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunction$Parametric, t_PolynomialFunction$Parametric, PolynomialFunction$Parametric);

        void t_PolynomialFunction$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunction$Parametric), &PY_TYPE_DEF(PolynomialFunction$Parametric), module, "PolynomialFunction$Parametric", 0);
        }

        void t_PolynomialFunction$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction$Parametric), "class_", make_descriptor(PolynomialFunction$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction$Parametric), "wrapfn_", make_descriptor(t_PolynomialFunction$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunction$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunction$Parametric::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunction$Parametric::wrap_Object(PolynomialFunction$Parametric(((t_PolynomialFunction$Parametric *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunction$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunction$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunction$Parametric_init_(t_PolynomialFunction$Parametric *self, PyObject *args, PyObject *kwds)
        {
          PolynomialFunction$Parametric object((jobject) NULL);

          INT_CALL(object = PolynomialFunction$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_PolynomialFunction$Parametric_gradient(t_PolynomialFunction$Parametric *self, PyObject *args)
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

        static PyObject *t_PolynomialFunction$Parametric_value(t_PolynomialFunction$Parametric *self, PyObject *args)
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
#include "org/hipparchus/analysis/function/Divide.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Divide::class$ = NULL;
        jmethodID *Divide::mids$ = NULL;
        bool Divide::live$ = false;

        jclass Divide::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Divide");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Divide::Divide() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Divide::value(jdouble a0, jdouble a1) const
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
        static PyObject *t_Divide_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Divide_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Divide_init_(t_Divide *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Divide_value(t_Divide *self, PyObject *args);

        static PyMethodDef t_Divide__methods_[] = {
          DECLARE_METHOD(t_Divide, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Divide, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Divide, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Divide)[] = {
          { Py_tp_methods, t_Divide__methods_ },
          { Py_tp_init, (void *) t_Divide_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Divide)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Divide, t_Divide, Divide);

        void t_Divide::install(PyObject *module)
        {
          installType(&PY_TYPE(Divide), &PY_TYPE_DEF(Divide), module, "Divide", 0);
        }

        void t_Divide::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Divide), "class_", make_descriptor(Divide::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Divide), "wrapfn_", make_descriptor(t_Divide::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Divide), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Divide_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Divide::initializeClass, 1)))
            return NULL;
          return t_Divide::wrap_Object(Divide(((t_Divide *) arg)->object.this$));
        }
        static PyObject *t_Divide_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Divide::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Divide_init_(t_Divide *self, PyObject *args, PyObject *kwds)
        {
          Divide object((jobject) NULL);

          INT_CALL(object = Divide());
          self->object = object;

          return 0;
        }

        static PyObject *t_Divide_value(t_Divide *self, PyObject *args)
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
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldRecordAndContinue::class$ = NULL;
          jmethodID *FieldRecordAndContinue::mids$ = NULL;
          bool FieldRecordAndContinue::live$ = false;

          jclass FieldRecordAndContinue::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldRecordAndContinue");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_aa335fea495d60e0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_eventOccurred_094737664b369b83] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_getEvents_d751c1a57012b438] = env->getMethodID(cls, "getEvents", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldRecordAndContinue::FieldRecordAndContinue() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          FieldRecordAndContinue::FieldRecordAndContinue(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa335fea495d60e0, a0.this$)) {}

          void FieldRecordAndContinue::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          ::org::hipparchus::ode::events::Action FieldRecordAndContinue::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_094737664b369b83], a0.this$, a1.this$, a2));
          }

          ::java::util::List FieldRecordAndContinue::getEvents() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEvents_d751c1a57012b438]));
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
          static PyObject *t_FieldRecordAndContinue_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue_of_(t_FieldRecordAndContinue *self, PyObject *args);
          static int t_FieldRecordAndContinue_init_(t_FieldRecordAndContinue *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldRecordAndContinue_clear(t_FieldRecordAndContinue *self);
          static PyObject *t_FieldRecordAndContinue_eventOccurred(t_FieldRecordAndContinue *self, PyObject *args);
          static PyObject *t_FieldRecordAndContinue_getEvents(t_FieldRecordAndContinue *self);
          static PyObject *t_FieldRecordAndContinue_get__events(t_FieldRecordAndContinue *self, void *data);
          static PyObject *t_FieldRecordAndContinue_get__parameters_(t_FieldRecordAndContinue *self, void *data);
          static PyGetSetDef t_FieldRecordAndContinue__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRecordAndContinue, events),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRecordAndContinue__methods_[] = {
            DECLARE_METHOD(t_FieldRecordAndContinue, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue, clear, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue, getEvents, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRecordAndContinue)[] = {
            { Py_tp_methods, t_FieldRecordAndContinue__methods_ },
            { Py_tp_init, (void *) t_FieldRecordAndContinue_init_ },
            { Py_tp_getset, t_FieldRecordAndContinue__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRecordAndContinue)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRecordAndContinue, t_FieldRecordAndContinue, FieldRecordAndContinue);
          PyObject *t_FieldRecordAndContinue::wrap_Object(const FieldRecordAndContinue& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue *self = (t_FieldRecordAndContinue *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRecordAndContinue::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue *self = (t_FieldRecordAndContinue *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRecordAndContinue::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRecordAndContinue), &PY_TYPE_DEF(FieldRecordAndContinue), module, "FieldRecordAndContinue", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "Event", make_descriptor(&PY_TYPE_DEF(FieldRecordAndContinue$Event)));
          }

          void t_FieldRecordAndContinue::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "class_", make_descriptor(FieldRecordAndContinue::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "wrapfn_", make_descriptor(t_FieldRecordAndContinue::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRecordAndContinue_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRecordAndContinue::initializeClass, 1)))
              return NULL;
            return t_FieldRecordAndContinue::wrap_Object(FieldRecordAndContinue(((t_FieldRecordAndContinue *) arg)->object.this$));
          }
          static PyObject *t_FieldRecordAndContinue_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRecordAndContinue::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRecordAndContinue_of_(t_FieldRecordAndContinue *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldRecordAndContinue_init_(t_FieldRecordAndContinue *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                FieldRecordAndContinue object((jobject) NULL);

                INT_CALL(object = FieldRecordAndContinue());
                self->object = object;
                break;
              }
             case 1:
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                FieldRecordAndContinue object((jobject) NULL);

                if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = FieldRecordAndContinue(a0));
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

          static PyObject *t_FieldRecordAndContinue_clear(t_FieldRecordAndContinue *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_FieldRecordAndContinue_eventOccurred(t_FieldRecordAndContinue *self, PyObject *args)
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

          static PyObject *t_FieldRecordAndContinue_getEvents(t_FieldRecordAndContinue *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(result);
          }
          static PyObject *t_FieldRecordAndContinue_get__parameters_(t_FieldRecordAndContinue *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldRecordAndContinue_get__events(t_FieldRecordAndContinue *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *LazyLoadedCelestialBodies::class$ = NULL;
      jmethodID *LazyLoadedCelestialBodies::mids$ = NULL;
      bool LazyLoadedCelestialBodies::live$ = false;

      jclass LazyLoadedCelestialBodies::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/LazyLoadedCelestialBodies");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_186d3bb1917abfa9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;Lorg/orekit/frames/Frame;)V");
          mids$[mid_addCelestialBodyLoader_dcd989e3e2312275] = env->getMethodID(cls, "addCelestialBodyLoader", "(Ljava/lang/String;Lorg/orekit/bodies/CelestialBodyLoader;)V");
          mids$[mid_addDefaultCelestialBodyLoader_105e1eadb709d9ac] = env->getMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;)V");
          mids$[mid_addDefaultCelestialBodyLoader_771aee6c143cc92a] = env->getMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyCache_ff7cb6c242604316] = env->getMethodID(cls, "clearCelestialBodyCache", "()V");
          mids$[mid_clearCelestialBodyCache_105e1eadb709d9ac] = env->getMethodID(cls, "clearCelestialBodyCache", "(Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyLoaders_ff7cb6c242604316] = env->getMethodID(cls, "clearCelestialBodyLoaders", "()V");
          mids$[mid_clearCelestialBodyLoaders_105e1eadb709d9ac] = env->getMethodID(cls, "clearCelestialBodyLoaders", "(Ljava/lang/String;)V");
          mids$[mid_getBody_0ed99bba3e5bd60c] = env->getMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarth_a1474f5cfab89b5e] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_a1474f5cfab89b5e] = env->getMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_a1474f5cfab89b5e] = env->getMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_a1474f5cfab89b5e] = env->getMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_a1474f5cfab89b5e] = env->getMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_a1474f5cfab89b5e] = env->getMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_a1474f5cfab89b5e] = env->getMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_a1474f5cfab89b5e] = env->getMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_a1474f5cfab89b5e] = env->getMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_a1474f5cfab89b5e] = env->getMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_a1474f5cfab89b5e] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_a1474f5cfab89b5e] = env->getMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_a1474f5cfab89b5e] = env->getMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedCelestialBodies::LazyLoadedCelestialBodies(const ::org::orekit::data::DataProvidersManager & a0, const ::org::orekit::time::TimeScales & a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_186d3bb1917abfa9, a0.this$, a1.this$, a2.this$)) {}

      void LazyLoadedCelestialBodies::addCelestialBodyLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::CelestialBodyLoader & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addCelestialBodyLoader_dcd989e3e2312275], a0.this$, a1.this$);
      }

      void LazyLoadedCelestialBodies::addDefaultCelestialBodyLoader(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultCelestialBodyLoader_105e1eadb709d9ac], a0.this$);
      }

      void LazyLoadedCelestialBodies::addDefaultCelestialBodyLoader(const ::java::lang::String & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultCelestialBodyLoader_771aee6c143cc92a], a0.this$, a1.this$);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyCache() const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyCache_ff7cb6c242604316]);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyCache(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyCache_105e1eadb709d9ac], a0.this$);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyLoaders_ff7cb6c242604316]);
      }

      void LazyLoadedCelestialBodies::clearCelestialBodyLoaders(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_clearCelestialBodyLoaders_105e1eadb709d9ac], a0.this$);
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_0ed99bba3e5bd60c], a0.this$));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getEarth() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarth_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getEarthMoonBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarthMoonBarycenter_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getJupiter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getJupiter_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getMars() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMars_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getMercury() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMercury_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getMoon() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMoon_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getNeptune() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getNeptune_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getPluto() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getPluto_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getSaturn() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSaturn_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getSolarSystemBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSolarSystemBarycenter_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getSun() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSun_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getUranus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getUranus_a1474f5cfab89b5e]));
      }

      ::org::orekit::bodies::CelestialBody LazyLoadedCelestialBodies::getVenus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getVenus_a1474f5cfab89b5e]));
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
      static PyObject *t_LazyLoadedCelestialBodies_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedCelestialBodies_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedCelestialBodies_init_(t_LazyLoadedCelestialBodies *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedCelestialBodies_addCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_addDefaultCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyCache(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyLoaders(t_LazyLoadedCelestialBodies *self, PyObject *args);
      static PyObject *t_LazyLoadedCelestialBodies_getBody(t_LazyLoadedCelestialBodies *self, PyObject *arg);
      static PyObject *t_LazyLoadedCelestialBodies_getEarth(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getEarthMoonBarycenter(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getJupiter(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getMars(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getMercury(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getMoon(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getNeptune(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getPluto(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getSaturn(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getSolarSystemBarycenter(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getSun(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getUranus(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_getVenus(t_LazyLoadedCelestialBodies *self);
      static PyObject *t_LazyLoadedCelestialBodies_get__earth(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__earthMoonBarycenter(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__jupiter(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__mars(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__mercury(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__moon(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__neptune(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__pluto(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__saturn(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__solarSystemBarycenter(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__sun(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__uranus(t_LazyLoadedCelestialBodies *self, void *data);
      static PyObject *t_LazyLoadedCelestialBodies_get__venus(t_LazyLoadedCelestialBodies *self, void *data);
      static PyGetSetDef t_LazyLoadedCelestialBodies__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, earth),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, earthMoonBarycenter),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, jupiter),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, mars),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, mercury),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, moon),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, neptune),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, pluto),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, saturn),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, solarSystemBarycenter),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, sun),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, uranus),
        DECLARE_GET_FIELD(t_LazyLoadedCelestialBodies, venus),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedCelestialBodies__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, addCelestialBodyLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, addDefaultCelestialBodyLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, clearCelestialBodyCache, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, clearCelestialBodyLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getBody, METH_O),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getEarth, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getEarthMoonBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getJupiter, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getMars, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getMercury, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getMoon, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getNeptune, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getPluto, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getSaturn, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getSolarSystemBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getSun, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getUranus, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedCelestialBodies, getVenus, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedCelestialBodies)[] = {
        { Py_tp_methods, t_LazyLoadedCelestialBodies__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedCelestialBodies_init_ },
        { Py_tp_getset, t_LazyLoadedCelestialBodies__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedCelestialBodies)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LazyLoadedCelestialBodies, t_LazyLoadedCelestialBodies, LazyLoadedCelestialBodies);

      void t_LazyLoadedCelestialBodies::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedCelestialBodies), &PY_TYPE_DEF(LazyLoadedCelestialBodies), module, "LazyLoadedCelestialBodies", 0);
      }

      void t_LazyLoadedCelestialBodies::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedCelestialBodies), "class_", make_descriptor(LazyLoadedCelestialBodies::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedCelestialBodies), "wrapfn_", make_descriptor(t_LazyLoadedCelestialBodies::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedCelestialBodies), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedCelestialBodies_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedCelestialBodies::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedCelestialBodies::wrap_Object(LazyLoadedCelestialBodies(((t_LazyLoadedCelestialBodies *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedCelestialBodies_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedCelestialBodies::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedCelestialBodies_init_(t_LazyLoadedCelestialBodies *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
        ::org::orekit::time::TimeScales a1((jobject) NULL);
        ::org::orekit::frames::Frame a2((jobject) NULL);
        LazyLoadedCelestialBodies object((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = LazyLoadedCelestialBodies(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedCelestialBodies_addCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBodyLoader a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::bodies::CelestialBodyLoader::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.addCelestialBodyLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_addDefaultCelestialBodyLoader(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(self->object.addDefaultCelestialBodyLoader(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(self->object.addDefaultCelestialBodyLoader(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyCache(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.clearCelestialBodyCache());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(self->object.clearCelestialBodyCache(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "clearCelestialBodyCache", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_clearCelestialBodyLoaders(t_LazyLoadedCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.clearCelestialBodyLoaders());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(self->object.clearCelestialBodyLoaders(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "clearCelestialBodyLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_getBody(t_LazyLoadedCelestialBodies *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getBody", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedCelestialBodies_getEarth(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getEarthMoonBarycenter(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getJupiter(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getMars(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getMercury(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getMoon(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getNeptune(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getPluto(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getSaturn(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getSolarSystemBarycenter(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getSun(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getUranus(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_getVenus(t_LazyLoadedCelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__earth(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__earthMoonBarycenter(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__jupiter(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__mars(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__mercury(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__moon(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__neptune(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__pluto(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__saturn(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__solarSystemBarycenter(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__sun(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__uranus(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedCelestialBodies_get__venus(t_LazyLoadedCelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticFields::class$ = NULL;
        jmethodID *GeoMagneticFields::mids$ = NULL;
        bool GeoMagneticFields::live$ = false;

        jclass GeoMagneticFields::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticFields");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getField_7ee697680d30d1e8] = env->getMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getIGRF_5fbf1330f033ba72] = env->getMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_5fbf1330f033ba72] = env->getMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFields::getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a0, jdouble a1) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getField_7ee697680d30d1e8], a0.this$, a1));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFields::getIGRF(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getIGRF_5fbf1330f033ba72], a0));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFields::getWMM(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getWMM_5fbf1330f033ba72], a0));
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
        static PyObject *t_GeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFields_getField(t_GeoMagneticFields *self, PyObject *args);
        static PyObject *t_GeoMagneticFields_getIGRF(t_GeoMagneticFields *self, PyObject *arg);
        static PyObject *t_GeoMagneticFields_getWMM(t_GeoMagneticFields *self, PyObject *arg);

        static PyMethodDef t_GeoMagneticFields__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticFields, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFields, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFields, getField, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticFields, getIGRF, METH_O),
          DECLARE_METHOD(t_GeoMagneticFields, getWMM, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticFields)[] = {
          { Py_tp_methods, t_GeoMagneticFields__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticFields)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticFields, t_GeoMagneticFields, GeoMagneticFields);

        void t_GeoMagneticFields::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticFields), &PY_TYPE_DEF(GeoMagneticFields), module, "GeoMagneticFields", 0);
        }

        void t_GeoMagneticFields::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFields), "class_", make_descriptor(GeoMagneticFields::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFields), "wrapfn_", make_descriptor(t_GeoMagneticFields::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFields), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticFields::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticFields::wrap_Object(GeoMagneticFields(((t_GeoMagneticFields *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticFields::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticFields_getField(t_GeoMagneticFields *self, PyObject *args)
        {
          ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, &a0, &p0, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getField(a0, a1));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getField", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticFields_getIGRF(t_GeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getIGRF(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getIGRF", arg);
          return NULL;
        }

        static PyObject *t_GeoMagneticFields_getWMM(t_GeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getWMM(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getWMM", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *RTNCovarianceKey::class$ = NULL;
            jmethodID *RTNCovarianceKey::mids$ = NULL;
            bool RTNCovarianceKey::live$ = false;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_DRG = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CN_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CN_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CN_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::COMMENT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CR_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_DRG = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_SRP = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_DRG = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_SRP = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_THR = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CT_T = NULL;

            jclass RTNCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_913f15eaa3772383] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;)Z");
                mids$[mid_valueOf_475fe4b49fc7a392] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;");
                mids$[mid_values_5a7f4ccb8c7ea5f0] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CDRG_DRG = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CN_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CN_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CN_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CN_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CN_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CN_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                COMMENT = new RTNCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CR_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CR_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_DRG = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_SRP = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_DRG = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_SRP = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_THR = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_THR", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean RTNCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_913f15eaa3772383], a0.this$, a1.this$, a2.this$);
            }

            RTNCovarianceKey RTNCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return RTNCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_475fe4b49fc7a392], a0.this$));
            }

            JArray< RTNCovarianceKey > RTNCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< RTNCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_5a7f4ccb8c7ea5f0]));
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
            static PyObject *t_RTNCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovarianceKey_of_(t_RTNCovarianceKey *self, PyObject *args);
            static PyObject *t_RTNCovarianceKey_process(t_RTNCovarianceKey *self, PyObject *args);
            static PyObject *t_RTNCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_RTNCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_RTNCovarianceKey_get__parameters_(t_RTNCovarianceKey *self, void *data);
            static PyGetSetDef t_RTNCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_RTNCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RTNCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_RTNCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_RTNCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_RTNCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RTNCovarianceKey)[] = {
              { Py_tp_methods, t_RTNCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_RTNCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RTNCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(RTNCovarianceKey, t_RTNCovarianceKey, RTNCovarianceKey);
            PyObject *t_RTNCovarianceKey::wrap_Object(const RTNCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RTNCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RTNCovarianceKey *self = (t_RTNCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RTNCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RTNCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RTNCovarianceKey *self = (t_RTNCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RTNCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(RTNCovarianceKey), &PY_TYPE_DEF(RTNCovarianceKey), module, "RTNCovarianceKey", 0);
            }

            void t_RTNCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "class_", make_descriptor(RTNCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "wrapfn_", make_descriptor(t_RTNCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(RTNCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_DRG", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CN_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CN_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CN_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CN_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CN_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CN_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "COMMENT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CR_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CR_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_DRG", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_SRP", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_DRG", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_SRP", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_THR", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_THR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CT_T)));
            }

            static PyObject *t_RTNCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RTNCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_RTNCovarianceKey::wrap_Object(RTNCovarianceKey(((t_RTNCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_RTNCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RTNCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RTNCovarianceKey_of_(t_RTNCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_RTNCovarianceKey_process(t_RTNCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_RTNCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              RTNCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::RTNCovarianceKey::valueOf(a0));
                return t_RTNCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_RTNCovarianceKey_values(PyTypeObject *type)
            {
              JArray< RTNCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::RTNCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_RTNCovarianceKey::wrap_jobject);
            }
            static PyObject *t_RTNCovarianceKey_get__parameters_(t_RTNCovarianceKey *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RangeRateIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeRateIonosphericDelayModifier::class$ = NULL;
          jmethodID *RangeRateIonosphericDelayModifier::mids$ = NULL;
          bool RangeRateIonosphericDelayModifier::live$ = false;

          jclass RangeRateIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeRateIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_512394ca5b2ba8c6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;DZ)V");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_rangeRateErrorIonosphericModel_e648598eaaa5f94d] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rangeRateErrorIonosphericModel_29b53a0d2fc3b115] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeRateIonosphericDelayModifier::RangeRateIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1, jboolean a2) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_512394ca5b2ba8c6, a0.this$, a1, a2)) {}

          void RangeRateIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void RangeRateIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeRateIonosphericDelayModifier_init_(t_RangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeRateIonosphericDelayModifier_modify(t_RangeRateIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeRateIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_RangeRateIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeRateIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeRateIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeRateIonosphericDelayModifier, t_RangeRateIonosphericDelayModifier, RangeRateIonosphericDelayModifier);

          void t_RangeRateIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateIonosphericDelayModifier), &PY_TYPE_DEF(RangeRateIonosphericDelayModifier), module, "RangeRateIonosphericDelayModifier", 0);
          }

          void t_RangeRateIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateIonosphericDelayModifier), "class_", make_descriptor(RangeRateIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateIonosphericDelayModifier), "wrapfn_", make_descriptor(t_RangeRateIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeRateIonosphericDelayModifier::wrap_Object(RangeRateIonosphericDelayModifier(((t_RangeRateIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeRateIonosphericDelayModifier_init_(t_RangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            RangeRateIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = RangeRateIonosphericDelayModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeRateIonosphericDelayModifier_modify(t_RangeRateIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeRateIonosphericDelayModifier *self, PyObject *arg)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/PythonTimeIndependentLOSTransform.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *PythonTimeIndependentLOSTransform::class$ = NULL;
        jmethodID *PythonTimeIndependentLOSTransform::mids$ = NULL;
        bool PythonTimeIndependentLOSTransform::live$ = false;

        jclass PythonTimeIndependentLOSTransform::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/PythonTimeIndependentLOSTransform");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_11e4ca8182c1933d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_transformLOS_228f1c415ce966c1] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_abcb5ae819a3f86b] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonTimeIndependentLOSTransform::PythonTimeIndependentLOSTransform() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonTimeIndependentLOSTransform::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonTimeIndependentLOSTransform::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonTimeIndependentLOSTransform::pythonExtension(jlong a0) const
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
    namespace rugged {
      namespace los {
        static PyObject *t_PythonTimeIndependentLOSTransform_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonTimeIndependentLOSTransform_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonTimeIndependentLOSTransform_init_(t_PythonTimeIndependentLOSTransform *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonTimeIndependentLOSTransform_finalize(t_PythonTimeIndependentLOSTransform *self);
        static PyObject *t_PythonTimeIndependentLOSTransform_pythonExtension(t_PythonTimeIndependentLOSTransform *self, PyObject *args);
        static jobject JNICALL t_PythonTimeIndependentLOSTransform_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonTimeIndependentLOSTransform_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonTimeIndependentLOSTransform_transformLOS2(JNIEnv *jenv, jobject jobj, jint a0, jobject a1);
        static jobject JNICALL t_PythonTimeIndependentLOSTransform_transformLOS3(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2);
        static PyObject *t_PythonTimeIndependentLOSTransform_get__self(t_PythonTimeIndependentLOSTransform *self, void *data);
        static PyGetSetDef t_PythonTimeIndependentLOSTransform__fields_[] = {
          DECLARE_GET_FIELD(t_PythonTimeIndependentLOSTransform, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonTimeIndependentLOSTransform__methods_[] = {
          DECLARE_METHOD(t_PythonTimeIndependentLOSTransform, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTimeIndependentLOSTransform, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTimeIndependentLOSTransform, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonTimeIndependentLOSTransform, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonTimeIndependentLOSTransform)[] = {
          { Py_tp_methods, t_PythonTimeIndependentLOSTransform__methods_ },
          { Py_tp_init, (void *) t_PythonTimeIndependentLOSTransform_init_ },
          { Py_tp_getset, t_PythonTimeIndependentLOSTransform__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonTimeIndependentLOSTransform)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonTimeIndependentLOSTransform, t_PythonTimeIndependentLOSTransform, PythonTimeIndependentLOSTransform);

        void t_PythonTimeIndependentLOSTransform::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonTimeIndependentLOSTransform), &PY_TYPE_DEF(PythonTimeIndependentLOSTransform), module, "PythonTimeIndependentLOSTransform", 1);
        }

        void t_PythonTimeIndependentLOSTransform::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeIndependentLOSTransform), "class_", make_descriptor(PythonTimeIndependentLOSTransform::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeIndependentLOSTransform), "wrapfn_", make_descriptor(t_PythonTimeIndependentLOSTransform::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeIndependentLOSTransform), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonTimeIndependentLOSTransform::initializeClass);
          JNINativeMethod methods[] = {
            { "getParametersDrivers", "()Ljava/util/stream/Stream;", (void *) t_PythonTimeIndependentLOSTransform_getParametersDrivers0 },
            { "pythonDecRef", "()V", (void *) t_PythonTimeIndependentLOSTransform_pythonDecRef1 },
            { "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonTimeIndependentLOSTransform_transformLOS2 },
            { "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonTimeIndependentLOSTransform_transformLOS3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonTimeIndependentLOSTransform_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonTimeIndependentLOSTransform::initializeClass, 1)))
            return NULL;
          return t_PythonTimeIndependentLOSTransform::wrap_Object(PythonTimeIndependentLOSTransform(((t_PythonTimeIndependentLOSTransform *) arg)->object.this$));
        }
        static PyObject *t_PythonTimeIndependentLOSTransform_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonTimeIndependentLOSTransform::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonTimeIndependentLOSTransform_init_(t_PythonTimeIndependentLOSTransform *self, PyObject *args, PyObject *kwds)
        {
          PythonTimeIndependentLOSTransform object((jobject) NULL);

          INT_CALL(object = PythonTimeIndependentLOSTransform());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonTimeIndependentLOSTransform_finalize(t_PythonTimeIndependentLOSTransform *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonTimeIndependentLOSTransform_pythonExtension(t_PythonTimeIndependentLOSTransform *self, PyObject *args)
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

        static jobject JNICALL t_PythonTimeIndependentLOSTransform_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeIndependentLOSTransform::mids$[PythonTimeIndependentLOSTransform::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::stream::Stream value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
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

        static void JNICALL t_PythonTimeIndependentLOSTransform_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeIndependentLOSTransform::mids$[PythonTimeIndependentLOSTransform::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonTimeIndependentLOSTransform::mids$[PythonTimeIndependentLOSTransform::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonTimeIndependentLOSTransform_transformLOS2(JNIEnv *jenv, jobject jobj, jint a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeIndependentLOSTransform::mids$[PythonTimeIndependentLOSTransform::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *result = PyObject_CallMethod(obj, "transformLOS", "iO", (int) a0, o1);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("transformLOS", result);
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

        static jobject JNICALL t_PythonTimeIndependentLOSTransform_transformLOS3(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeIndependentLOSTransform::mids$[PythonTimeIndependentLOSTransform::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
          PyObject *o2 = ::org::orekit::rugged::utils::t_DerivativeGenerator::wrap_Object(::org::orekit::rugged::utils::DerivativeGenerator(a2));
          PyObject *result = PyObject_CallMethod(obj, "transformLOS", "iOO", (int) a0, o1, o2);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("transformLOS", result);
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

        static PyObject *t_PythonTimeIndependentLOSTransform_get__self(t_PythonTimeIndependentLOSTransform *self, void *data)
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
#include "org/orekit/gnss/metric/parser/RtcmMessagesParser.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *RtcmMessagesParser::class$ = NULL;
          jmethodID *RtcmMessagesParser::mids$ = NULL;
          bool RtcmMessagesParser::live$ = false;

          jclass RtcmMessagesParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/RtcmMessagesParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_aa335fea495d60e0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_getMessageType_40b3eb4c621c5237] = env->getMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/MessageType;");
              mids$[mid_parseMessageNumber_997e1716ef46e2d3] = env->getMethodID(cls, "parseMessageNumber", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RtcmMessagesParser::RtcmMessagesParser(const ::java::util::List & a0) : ::org::orekit::gnss::metric::parser::MessagesParser(env->newObject(initializeClass, &mids$, mid_init$_aa335fea495d60e0, a0.this$)) {}
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
          static PyObject *t_RtcmMessagesParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessagesParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RtcmMessagesParser_init_(t_RtcmMessagesParser *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_RtcmMessagesParser__methods_[] = {
            DECLARE_METHOD(t_RtcmMessagesParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessagesParser, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RtcmMessagesParser)[] = {
            { Py_tp_methods, t_RtcmMessagesParser__methods_ },
            { Py_tp_init, (void *) t_RtcmMessagesParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RtcmMessagesParser)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::MessagesParser),
            NULL
          };

          DEFINE_TYPE(RtcmMessagesParser, t_RtcmMessagesParser, RtcmMessagesParser);

          void t_RtcmMessagesParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RtcmMessagesParser), &PY_TYPE_DEF(RtcmMessagesParser), module, "RtcmMessagesParser", 0);
          }

          void t_RtcmMessagesParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessagesParser), "class_", make_descriptor(RtcmMessagesParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessagesParser), "wrapfn_", make_descriptor(t_RtcmMessagesParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessagesParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RtcmMessagesParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RtcmMessagesParser::initializeClass, 1)))
              return NULL;
            return t_RtcmMessagesParser::wrap_Object(RtcmMessagesParser(((t_RtcmMessagesParser *) arg)->object.this$));
          }
          static PyObject *t_RtcmMessagesParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RtcmMessagesParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RtcmMessagesParser_init_(t_RtcmMessagesParser *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            RtcmMessagesParser object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = RtcmMessagesParser(a0));
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
#include "org/orekit/data/UnixCompressFilter.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataFilter.h"
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
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_filter_4edc3983a04dd819] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UnixCompressFilter::UnixCompressFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ::org::orekit::data::DataSource UnixCompressFilter::filter(const ::org::orekit::data::DataSource & a0) const
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
#include "org/orekit/forces/gravity/potential/CachedNormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *CachedNormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *CachedNormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool CachedNormalizedSphericalHarmonicsProvider::live$ = false;

          jclass CachedNormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/CachedNormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ce34ee8e438d90f5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;DIIDD)V");
              mids$[mid_getAe_9981f74b2d109da6] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_d6ab429752e7c267] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_d6ab429752e7c267] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_80e11148db499dda] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_1e0f912623cd4841] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_eb84deac0f960db9] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CachedNormalizedSphericalHarmonicsProvider::CachedNormalizedSphericalHarmonicsProvider(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a0, jdouble a1, jint a2, jint a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ce34ee8e438d90f5, a0.this$, a1, a2, a3, a4, a5)) {}

          jdouble CachedNormalizedSphericalHarmonicsProvider::getAe() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAe_9981f74b2d109da6]);
          }

          jint CachedNormalizedSphericalHarmonicsProvider::getMaxDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxDegree_d6ab429752e7c267]);
          }

          jint CachedNormalizedSphericalHarmonicsProvider::getMaxOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxOrder_d6ab429752e7c267]);
          }

          jdouble CachedNormalizedSphericalHarmonicsProvider::getMu() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
          }

          ::org::orekit::time::AbsoluteDate CachedNormalizedSphericalHarmonicsProvider::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_80e11148db499dda]));
          }

          ::org::orekit::forces::gravity::potential::TideSystem CachedNormalizedSphericalHarmonicsProvider::getTideSystem() const
          {
            return ::org::orekit::forces::gravity::potential::TideSystem(env->callObjectMethod(this$, mids$[mid_getTideSystem_1e0f912623cd4841]));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics CachedNormalizedSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_eb84deac0f960db9], a0.this$));
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
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CachedNormalizedSphericalHarmonicsProvider_init_(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getAe(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMu(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getReferenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getTideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_onDate(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *arg);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__ae(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__mu(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__referenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__tideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_CachedNormalizedSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, ae),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, maxDegree),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, maxOrder),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, mu),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, referenceDate),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, tideSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CachedNormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getAe, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getMaxDegree, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getMaxOrder, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getMu, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getTideSystem, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CachedNormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_CachedNormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_CachedNormalizedSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_CachedNormalizedSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CachedNormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CachedNormalizedSphericalHarmonicsProvider, t_CachedNormalizedSphericalHarmonicsProvider, CachedNormalizedSphericalHarmonicsProvider);

          void t_CachedNormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(CachedNormalizedSphericalHarmonicsProvider), module, "CachedNormalizedSphericalHarmonicsProvider", 0);
          }

          void t_CachedNormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), "class_", make_descriptor(CachedNormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_CachedNormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CachedNormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_CachedNormalizedSphericalHarmonicsProvider::wrap_Object(CachedNormalizedSphericalHarmonicsProvider(((t_CachedNormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CachedNormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CachedNormalizedSphericalHarmonicsProvider_init_(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a0((jobject) NULL);
            jdouble a1;
            jint a2;
            jint a3;
            jdouble a4;
            jdouble a5;
            CachedNormalizedSphericalHarmonicsProvider object((jobject) NULL);

            if (!parseArgs(args, "kDIIDD", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = CachedNormalizedSphericalHarmonicsProvider(a0, a1, a2, a3, a4, a5));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getAe(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAe());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMu(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMu());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getReferenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getTideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            ::org::orekit::forces::gravity::potential::TideSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_onDate(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "onDate", arg);
            return NULL;
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__ae(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAe());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxOrder());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__mu(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMu());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__referenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__tideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *KeplerianElementsKey::class$ = NULL;
            jmethodID *KeplerianElementsKey::mids$ = NULL;
            bool KeplerianElementsKey::live$ = false;
            KeplerianElementsKey *KeplerianElementsKey::ARG_OF_PERICENTER = NULL;
            KeplerianElementsKey *KeplerianElementsKey::COMMENT = NULL;
            KeplerianElementsKey *KeplerianElementsKey::ECCENTRICITY = NULL;
            KeplerianElementsKey *KeplerianElementsKey::EPOCH = NULL;
            KeplerianElementsKey *KeplerianElementsKey::GM = NULL;
            KeplerianElementsKey *KeplerianElementsKey::INCLINATION = NULL;
            KeplerianElementsKey *KeplerianElementsKey::MEAN_ANOMALY = NULL;
            KeplerianElementsKey *KeplerianElementsKey::MEAN_MOTION = NULL;
            KeplerianElementsKey *KeplerianElementsKey::RA_OF_ASC_NODE = NULL;
            KeplerianElementsKey *KeplerianElementsKey::SEMI_MAJOR_AXIS = NULL;
            KeplerianElementsKey *KeplerianElementsKey::TRUE_ANOMALY = NULL;

            jclass KeplerianElementsKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_dd99ccac3ff62527] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;)Z");
                mids$[mid_valueOf_f84841fb5f6ba9d9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;");
                mids$[mid_values_f3d922bc49c09955] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ARG_OF_PERICENTER = new KeplerianElementsKey(env->getStaticObjectField(cls, "ARG_OF_PERICENTER", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                COMMENT = new KeplerianElementsKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                ECCENTRICITY = new KeplerianElementsKey(env->getStaticObjectField(cls, "ECCENTRICITY", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                EPOCH = new KeplerianElementsKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                GM = new KeplerianElementsKey(env->getStaticObjectField(cls, "GM", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                INCLINATION = new KeplerianElementsKey(env->getStaticObjectField(cls, "INCLINATION", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                MEAN_ANOMALY = new KeplerianElementsKey(env->getStaticObjectField(cls, "MEAN_ANOMALY", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                MEAN_MOTION = new KeplerianElementsKey(env->getStaticObjectField(cls, "MEAN_MOTION", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                RA_OF_ASC_NODE = new KeplerianElementsKey(env->getStaticObjectField(cls, "RA_OF_ASC_NODE", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                SEMI_MAJOR_AXIS = new KeplerianElementsKey(env->getStaticObjectField(cls, "SEMI_MAJOR_AXIS", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                TRUE_ANOMALY = new KeplerianElementsKey(env->getStaticObjectField(cls, "TRUE_ANOMALY", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean KeplerianElementsKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_dd99ccac3ff62527], a0.this$, a1.this$, a2.this$);
            }

            KeplerianElementsKey KeplerianElementsKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return KeplerianElementsKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f84841fb5f6ba9d9], a0.this$));
            }

            JArray< KeplerianElementsKey > KeplerianElementsKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< KeplerianElementsKey >(env->callStaticObjectMethod(cls, mids$[mid_values_f3d922bc49c09955]));
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
            static PyObject *t_KeplerianElementsKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KeplerianElementsKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KeplerianElementsKey_of_(t_KeplerianElementsKey *self, PyObject *args);
            static PyObject *t_KeplerianElementsKey_process(t_KeplerianElementsKey *self, PyObject *args);
            static PyObject *t_KeplerianElementsKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_KeplerianElementsKey_values(PyTypeObject *type);
            static PyObject *t_KeplerianElementsKey_get__parameters_(t_KeplerianElementsKey *self, void *data);
            static PyGetSetDef t_KeplerianElementsKey__fields_[] = {
              DECLARE_GET_FIELD(t_KeplerianElementsKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_KeplerianElementsKey__methods_[] = {
              DECLARE_METHOD(t_KeplerianElementsKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElementsKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElementsKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_KeplerianElementsKey, process, METH_VARARGS),
              DECLARE_METHOD(t_KeplerianElementsKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElementsKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KeplerianElementsKey)[] = {
              { Py_tp_methods, t_KeplerianElementsKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_KeplerianElementsKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KeplerianElementsKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(KeplerianElementsKey, t_KeplerianElementsKey, KeplerianElementsKey);
            PyObject *t_KeplerianElementsKey::wrap_Object(const KeplerianElementsKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_KeplerianElementsKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_KeplerianElementsKey *self = (t_KeplerianElementsKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_KeplerianElementsKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_KeplerianElementsKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_KeplerianElementsKey *self = (t_KeplerianElementsKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_KeplerianElementsKey::install(PyObject *module)
            {
              installType(&PY_TYPE(KeplerianElementsKey), &PY_TYPE_DEF(KeplerianElementsKey), module, "KeplerianElementsKey", 0);
            }

            void t_KeplerianElementsKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "class_", make_descriptor(KeplerianElementsKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "wrapfn_", make_descriptor(t_KeplerianElementsKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(KeplerianElementsKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "ARG_OF_PERICENTER", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::ARG_OF_PERICENTER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "COMMENT", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "ECCENTRICITY", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::ECCENTRICITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "EPOCH", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "GM", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::GM)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "INCLINATION", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::INCLINATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "MEAN_ANOMALY", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::MEAN_ANOMALY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "MEAN_MOTION", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::MEAN_MOTION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "RA_OF_ASC_NODE", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::RA_OF_ASC_NODE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "SEMI_MAJOR_AXIS", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::SEMI_MAJOR_AXIS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "TRUE_ANOMALY", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::TRUE_ANOMALY)));
            }

            static PyObject *t_KeplerianElementsKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KeplerianElementsKey::initializeClass, 1)))
                return NULL;
              return t_KeplerianElementsKey::wrap_Object(KeplerianElementsKey(((t_KeplerianElementsKey *) arg)->object.this$));
            }
            static PyObject *t_KeplerianElementsKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KeplerianElementsKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_KeplerianElementsKey_of_(t_KeplerianElementsKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_KeplerianElementsKey_process(t_KeplerianElementsKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::KeplerianElements a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::KeplerianElements::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_KeplerianElementsKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              KeplerianElementsKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::KeplerianElementsKey::valueOf(a0));
                return t_KeplerianElementsKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_KeplerianElementsKey_values(PyTypeObject *type)
            {
              JArray< KeplerianElementsKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::KeplerianElementsKey::values());
              return JArray<jobject>(result.this$).wrap(t_KeplerianElementsKey::wrap_jobject);
            }
            static PyObject *t_KeplerianElementsKey_get__parameters_(t_KeplerianElementsKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmData.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *Omm::class$ = NULL;
              jmethodID *Omm::mids$ = NULL;
              bool Omm::live$ = false;
              ::java::lang::String *Omm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Omm::ROOT = NULL;

              jclass Omm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/Omm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_1acfa5add18c9e6e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_generateKeplerianOrbit_05c9859fe4d10dff] = env->getMethodID(cls, "generateKeplerianOrbit", "()Lorg/orekit/orbits/KeplerianOrbit;");
                  mids$[mid_generateSpacecraftState_8fbfa58855031235] = env->getMethodID(cls, "generateSpacecraftState", "()Lorg/orekit/propagation/SpacecraftState;");
                  mids$[mid_generateTLE_dacb215ad36dee42] = env->getMethodID(cls, "generateTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");
                  mids$[mid_getData_bdbed63b525fae15] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmData;");
                  mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getMetadata_75f0d75e3f76f793] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Omm::Omm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_1acfa5add18c9e6e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::orbits::KeplerianOrbit Omm::generateKeplerianOrbit() const
              {
                return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_generateKeplerianOrbit_05c9859fe4d10dff]));
              }

              ::org::orekit::propagation::SpacecraftState Omm::generateSpacecraftState() const
              {
                return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_generateSpacecraftState_8fbfa58855031235]));
              }

              ::org::orekit::propagation::analytical::tle::TLE Omm::generateTLE() const
              {
                return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generateTLE_dacb215ad36dee42]));
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::OmmData Omm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::OmmData(env->callObjectMethod(this$, mids$[mid_getData_bdbed63b525fae15]));
              }

              ::org::orekit::time::AbsoluteDate Omm::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata Omm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_75f0d75e3f76f793]));
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
            namespace omm {
              static PyObject *t_Omm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Omm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Omm_of_(t_Omm *self, PyObject *args);
              static int t_Omm_init_(t_Omm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Omm_generateKeplerianOrbit(t_Omm *self);
              static PyObject *t_Omm_generateSpacecraftState(t_Omm *self);
              static PyObject *t_Omm_generateTLE(t_Omm *self);
              static PyObject *t_Omm_getData(t_Omm *self);
              static PyObject *t_Omm_getDate(t_Omm *self);
              static PyObject *t_Omm_getMetadata(t_Omm *self);
              static PyObject *t_Omm_get__data(t_Omm *self, void *data);
              static PyObject *t_Omm_get__date(t_Omm *self, void *data);
              static PyObject *t_Omm_get__metadata(t_Omm *self, void *data);
              static PyObject *t_Omm_get__parameters_(t_Omm *self, void *data);
              static PyGetSetDef t_Omm__fields_[] = {
                DECLARE_GET_FIELD(t_Omm, data),
                DECLARE_GET_FIELD(t_Omm, date),
                DECLARE_GET_FIELD(t_Omm, metadata),
                DECLARE_GET_FIELD(t_Omm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Omm__methods_[] = {
                DECLARE_METHOD(t_Omm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Omm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Omm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Omm, generateKeplerianOrbit, METH_NOARGS),
                DECLARE_METHOD(t_Omm, generateSpacecraftState, METH_NOARGS),
                DECLARE_METHOD(t_Omm, generateTLE, METH_NOARGS),
                DECLARE_METHOD(t_Omm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Omm, getDate, METH_NOARGS),
                DECLARE_METHOD(t_Omm, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Omm)[] = {
                { Py_tp_methods, t_Omm__methods_ },
                { Py_tp_init, (void *) t_Omm_init_ },
                { Py_tp_getset, t_Omm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Omm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Omm, t_Omm, Omm);
              PyObject *t_Omm::wrap_Object(const Omm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Omm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Omm *self = (t_Omm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Omm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Omm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Omm *self = (t_Omm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Omm::install(PyObject *module)
              {
                installType(&PY_TYPE(Omm), &PY_TYPE_DEF(Omm), module, "Omm", 0);
              }

              void t_Omm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "class_", make_descriptor(Omm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "wrapfn_", make_descriptor(t_Omm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Omm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Omm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "ROOT", make_descriptor(j2p(*Omm::ROOT)));
              }

              static PyObject *t_Omm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Omm::initializeClass, 1)))
                  return NULL;
                return t_Omm::wrap_Object(Omm(((t_Omm *) arg)->object.this$));
              }
              static PyObject *t_Omm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Omm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Omm_of_(t_Omm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Omm_init_(t_Omm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Omm object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Omm(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Omm_generateKeplerianOrbit(t_Omm *self)
              {
                ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.generateKeplerianOrbit());
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }

              static PyObject *t_Omm_generateSpacecraftState(t_Omm *self)
              {
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
                OBJ_CALL(result = self->object.generateSpacecraftState());
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }

              static PyObject *t_Omm_generateTLE(t_Omm *self)
              {
                ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
                OBJ_CALL(result = self->object.generateTLE());
                return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
              }

              static PyObject *t_Omm_getData(t_Omm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmData::wrap_Object(result);
              }

              static PyObject *t_Omm_getDate(t_Omm *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Omm_getMetadata(t_Omm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmMetadata::wrap_Object(result);
              }
              static PyObject *t_Omm_get__parameters_(t_Omm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Omm_get__data(t_Omm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmData::wrap_Object(value);
              }

              static PyObject *t_Omm_get__date(t_Omm *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_Omm_get__metadata(t_Omm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmMetadata::wrap_Object(value);
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
#include "org/orekit/propagation/events/AltitudeDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AltitudeDetector.h"
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
            mids$[mid_init$_2247a31cd26b38fe] = env->getMethodID(cls, "<init>", "(DLorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_1fa3531d15a85c84] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_86ba5ff452ee7e6f] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/bodies/BodyShape;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAltitude_9981f74b2d109da6] = env->getMethodID(cls, "getAltitude", "()D");
            mids$[mid_getBodyShape_6f2d25f6f71d01ca] = env->getMethodID(cls, "getBodyShape", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_b295424f86f6d84b] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AltitudeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AltitudeDetector::AltitudeDetector(jdouble a0, const ::org::orekit::bodies::BodyShape & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2247a31cd26b38fe, a0, a1.this$)) {}

        AltitudeDetector::AltitudeDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::BodyShape & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_1fa3531d15a85c84, a0, a1, a2.this$)) {}

        AltitudeDetector::AltitudeDetector(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::bodies::BodyShape & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_86ba5ff452ee7e6f, a0, a1, a2, a3.this$)) {}

        jdouble AltitudeDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        jdouble AltitudeDetector::getAltitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAltitude_9981f74b2d109da6]);
        }

        ::org::orekit::bodies::BodyShape AltitudeDetector::getBodyShape() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBodyShape_6f2d25f6f71d01ca]));
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttraction.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTNewtonianAttraction::class$ = NULL;
            jmethodID *DSSTNewtonianAttraction::mids$ = NULL;
            bool DSSTNewtonianAttraction::live$ = false;
            ::java::lang::String *DSSTNewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT = NULL;

            jclass DSSTNewtonianAttraction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttraction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
                mids$[mid_getMeanElementRate_43ba9f5eaba95dbb] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_3eb9526d5d611f82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMu_209f08246d708042] = env->getMethodID(cls, "getMu", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_1d563346dd4410fc] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_29410e2fe048cdd6] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_61d4f27408b30d56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_49390f5c28b648db] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CENTRAL_ATTRACTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "CENTRAL_ATTRACTION_COEFFICIENT", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTNewtonianAttraction::DSSTNewtonianAttraction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

            JArray< jdouble > DSSTNewtonianAttraction::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_43ba9f5eaba95dbb], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTNewtonianAttraction::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3eb9526d5d611f82], a0.this$, a1.this$, a2.this$));
            }

            jdouble DSSTNewtonianAttraction::getMu(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_209f08246d708042], a0.this$);
            }

            ::java::util::List DSSTNewtonianAttraction::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
            }

            ::java::util::List DSSTNewtonianAttraction::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_1d563346dd4410fc], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTNewtonianAttraction::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_29410e2fe048cdd6], a0.this$, a1.this$, a2.this$));
            }

            void DSSTNewtonianAttraction::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
            }

            void DSSTNewtonianAttraction::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_61d4f27408b30d56], a0.this$, a1.this$);
            }

            void DSSTNewtonianAttraction::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_49390f5c28b648db], a0.this$, a1.this$);
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
            static PyObject *t_DSSTNewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTNewtonianAttraction_init_(t_DSSTNewtonianAttraction *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTNewtonianAttraction_getMeanElementRate(t_DSSTNewtonianAttraction *self, PyObject *args);
            static PyObject *t_DSSTNewtonianAttraction_getMu(t_DSSTNewtonianAttraction *self, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttraction_getParametersDrivers(t_DSSTNewtonianAttraction *self);
            static PyObject *t_DSSTNewtonianAttraction_initializeShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args);
            static PyObject *t_DSSTNewtonianAttraction_registerAttitudeProvider(t_DSSTNewtonianAttraction *self, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttraction_updateShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args);
            static PyObject *t_DSSTNewtonianAttraction_get__parametersDrivers(t_DSSTNewtonianAttraction *self, void *data);
            static PyGetSetDef t_DSSTNewtonianAttraction__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTNewtonianAttraction, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTNewtonianAttraction__methods_[] = {
              DECLARE_METHOD(t_DSSTNewtonianAttraction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, getMu, METH_O),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTNewtonianAttraction)[] = {
              { Py_tp_methods, t_DSSTNewtonianAttraction__methods_ },
              { Py_tp_init, (void *) t_DSSTNewtonianAttraction_init_ },
              { Py_tp_getset, t_DSSTNewtonianAttraction__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTNewtonianAttraction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTNewtonianAttraction, t_DSSTNewtonianAttraction, DSSTNewtonianAttraction);

            void t_DSSTNewtonianAttraction::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTNewtonianAttraction), &PY_TYPE_DEF(DSSTNewtonianAttraction), module, "DSSTNewtonianAttraction", 0);
            }

            void t_DSSTNewtonianAttraction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "class_", make_descriptor(DSSTNewtonianAttraction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "wrapfn_", make_descriptor(t_DSSTNewtonianAttraction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTNewtonianAttraction::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "CENTRAL_ATTRACTION_COEFFICIENT", make_descriptor(j2p(*DSSTNewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT)));
            }

            static PyObject *t_DSSTNewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTNewtonianAttraction::initializeClass, 1)))
                return NULL;
              return t_DSSTNewtonianAttraction::wrap_Object(DSSTNewtonianAttraction(((t_DSSTNewtonianAttraction *) arg)->object.this$));
            }
            static PyObject *t_DSSTNewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTNewtonianAttraction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTNewtonianAttraction_init_(t_DSSTNewtonianAttraction *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              DSSTNewtonianAttraction object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = DSSTNewtonianAttraction(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTNewtonianAttraction_getMeanElementRate(t_DSSTNewtonianAttraction *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_getMu(t_DSSTNewtonianAttraction *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMu(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getMu", arg);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_getParametersDrivers(t_DSSTNewtonianAttraction *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTNewtonianAttraction_initializeShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_registerAttitudeProvider(t_DSSTNewtonianAttraction *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_updateShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_get__parametersDrivers(t_DSSTNewtonianAttraction *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/Glonass.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *Glonass::class$ = NULL;
        jmethodID *Glonass::mids$ = NULL;
        bool Glonass::live$ = false;
        jdouble Glonass::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass Glonass::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/Glonass");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ced6c23b11632898] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_7e83c4f910737b79] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
            mids$[mid_correctedYaw_3bb932fc0c863341] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Glonass::Glonass(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_ced6c23b11632898, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
        static PyObject *t_Glonass_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Glonass_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Glonass_init_(t_Glonass *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_Glonass__methods_[] = {
          DECLARE_METHOD(t_Glonass, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Glonass, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Glonass)[] = {
          { Py_tp_methods, t_Glonass__methods_ },
          { Py_tp_init, (void *) t_Glonass_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Glonass)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(Glonass, t_Glonass, Glonass);

        void t_Glonass::install(PyObject *module)
        {
          installType(&PY_TYPE(Glonass), &PY_TYPE_DEF(Glonass), module, "Glonass", 0);
        }

        void t_Glonass::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "class_", make_descriptor(Glonass::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "wrapfn_", make_descriptor(t_Glonass::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "boxfn_", make_descriptor(boxObject));
          env->getClass(Glonass::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "DEFAULT_YAW_RATE", make_descriptor(Glonass::DEFAULT_YAW_RATE));
        }

        static PyObject *t_Glonass_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Glonass::initializeClass, 1)))
            return NULL;
          return t_Glonass::wrap_Object(Glonass(((t_Glonass *) arg)->object.this$));
        }
        static PyObject *t_Glonass_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Glonass::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Glonass_init_(t_Glonass *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          ::org::orekit::frames::Frame a4((jobject) NULL);
          Glonass object((jobject) NULL);

          if (!parseArgs(args, "Dkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Glonass(a0, a1, a2, a3, a4));
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
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DSCompiler::class$ = NULL;
        jmethodID *DSCompiler::mids$ = NULL;
        bool DSCompiler::live$ = false;

        jclass DSCompiler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DSCompiler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_acos_9049ad07c45009b1] = env->getMethodID(cls, "acos", "([DI[DI)V");
            mids$[mid_acos_8a8f308763a86362] = env->getMethodID(cls, "acos", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_acosh_9049ad07c45009b1] = env->getMethodID(cls, "acosh", "([DI[DI)V");
            mids$[mid_acosh_8a8f308763a86362] = env->getMethodID(cls, "acosh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_add_0e8ef7e6f3533636] = env->getMethodID(cls, "add", "([DI[DI[DI)V");
            mids$[mid_add_681eb8d628904b4e] = env->getMethodID(cls, "add", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_asin_9049ad07c45009b1] = env->getMethodID(cls, "asin", "([DI[DI)V");
            mids$[mid_asin_8a8f308763a86362] = env->getMethodID(cls, "asin", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_asinh_9049ad07c45009b1] = env->getMethodID(cls, "asinh", "([DI[DI)V");
            mids$[mid_asinh_8a8f308763a86362] = env->getMethodID(cls, "asinh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_atan_9049ad07c45009b1] = env->getMethodID(cls, "atan", "([DI[DI)V");
            mids$[mid_atan_8a8f308763a86362] = env->getMethodID(cls, "atan", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_atan2_0e8ef7e6f3533636] = env->getMethodID(cls, "atan2", "([DI[DI[DI)V");
            mids$[mid_atan2_681eb8d628904b4e] = env->getMethodID(cls, "atan2", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_atanh_9049ad07c45009b1] = env->getMethodID(cls, "atanh", "([DI[DI)V");
            mids$[mid_atanh_8a8f308763a86362] = env->getMethodID(cls, "atanh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_checkCompatibility_9cf1f5ad4b184c5c] = env->getMethodID(cls, "checkCompatibility", "(Lorg/hipparchus/analysis/differentiation/DSCompiler;)V");
            mids$[mid_compose_100a3aff8efcebef] = env->getMethodID(cls, "compose", "([DI[D[DI)V");
            mids$[mid_compose_f73ba8fac41614c2] = env->getMethodID(cls, "compose", "([Lorg/hipparchus/CalculusFieldElement;I[D[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_compose_f9bc348db1810cf8] = env->getMethodID(cls, "compose", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_cos_9049ad07c45009b1] = env->getMethodID(cls, "cos", "([DI[DI)V");
            mids$[mid_cos_8a8f308763a86362] = env->getMethodID(cls, "cos", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_cosh_9049ad07c45009b1] = env->getMethodID(cls, "cosh", "([DI[DI)V");
            mids$[mid_cosh_8a8f308763a86362] = env->getMethodID(cls, "cosh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_divide_0e8ef7e6f3533636] = env->getMethodID(cls, "divide", "([DI[DI[DI)V");
            mids$[mid_divide_681eb8d628904b4e] = env->getMethodID(cls, "divide", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_exp_9049ad07c45009b1] = env->getMethodID(cls, "exp", "([DI[DI)V");
            mids$[mid_exp_8a8f308763a86362] = env->getMethodID(cls, "exp", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_expm1_9049ad07c45009b1] = env->getMethodID(cls, "expm1", "([DI[DI)V");
            mids$[mid_expm1_8a8f308763a86362] = env->getMethodID(cls, "expm1", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_getCompiler_04a9da16722f0f41] = env->getStaticMethodID(cls, "getCompiler", "(II)Lorg/hipparchus/analysis/differentiation/DSCompiler;");
            mids$[mid_getFreeParameters_d6ab429752e7c267] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivativeIndex_4c6a473f00540fd2] = env->getMethodID(cls, "getPartialDerivativeIndex", "([I)I");
            mids$[mid_getPartialDerivativeOrders_adb0f0485f08dbd0] = env->getMethodID(cls, "getPartialDerivativeOrders", "(I)[I");
            mids$[mid_getPartialDerivativeOrdersSum_d938fc64e8c6df2d] = env->getMethodID(cls, "getPartialDerivativeOrdersSum", "(I)I");
            mids$[mid_getSize_d6ab429752e7c267] = env->getMethodID(cls, "getSize", "()I");
            mids$[mid_linearCombination_4a11abba9da6d1a8] = env->getMethodID(cls, "linearCombination", "(D[DID[DI[DI)V");
            mids$[mid_linearCombination_2ff2a4b152bb43e6] = env->getMethodID(cls, "linearCombination", "(D[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_7c3545035a9e2422] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_635ee2baf089aeb2] = env->getMethodID(cls, "linearCombination", "(D[DID[DID[DI[DI)V");
            mids$[mid_linearCombination_16e822ac9fe106ff] = env->getMethodID(cls, "linearCombination", "(D[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_317f4820dc430e38] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_c44f34fdb6edd5bb] = env->getMethodID(cls, "linearCombination", "(D[DID[DID[DID[DI[DI)V");
            mids$[mid_linearCombination_ef86823ce8b711cd] = env->getMethodID(cls, "linearCombination", "(D[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_38046764062aceb0] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_log_9049ad07c45009b1] = env->getMethodID(cls, "log", "([DI[DI)V");
            mids$[mid_log_8a8f308763a86362] = env->getMethodID(cls, "log", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_log10_9049ad07c45009b1] = env->getMethodID(cls, "log10", "([DI[DI)V");
            mids$[mid_log10_8a8f308763a86362] = env->getMethodID(cls, "log10", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_log1p_9049ad07c45009b1] = env->getMethodID(cls, "log1p", "([DI[DI)V");
            mids$[mid_log1p_8a8f308763a86362] = env->getMethodID(cls, "log1p", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_multiply_0e8ef7e6f3533636] = env->getMethodID(cls, "multiply", "([DI[DI[DI)V");
            mids$[mid_multiply_681eb8d628904b4e] = env->getMethodID(cls, "multiply", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_9b86f421ba36d607] = env->getMethodID(cls, "pow", "([DII[DI)V");
            mids$[mid_pow_ebc5f80d3271bf9e] = env->getMethodID(cls, "pow", "(D[DI[DI)V");
            mids$[mid_pow_08025779ec6ae79b] = env->getMethodID(cls, "pow", "([DID[DI)V");
            mids$[mid_pow_3b3d5afa08fd4102] = env->getMethodID(cls, "pow", "(D[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_b60fbadf298fc1f3] = env->getMethodID(cls, "pow", "([Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_f0f09f6733470a33] = env->getMethodID(cls, "pow", "([Lorg/hipparchus/CalculusFieldElement;II[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_0e8ef7e6f3533636] = env->getMethodID(cls, "pow", "([DI[DI[DI)V");
            mids$[mid_pow_681eb8d628904b4e] = env->getMethodID(cls, "pow", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_rebase_9e5d830c5c63e8c2] = env->getMethodID(cls, "rebase", "([DILorg/hipparchus/analysis/differentiation/DSCompiler;[D[DI)V");
            mids$[mid_rebase_f2165047da55d9f2] = env->getMethodID(cls, "rebase", "([Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/analysis/differentiation/DSCompiler;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_reciprocal_9049ad07c45009b1] = env->getMethodID(cls, "reciprocal", "([DI[DI)V");
            mids$[mid_reciprocal_8a8f308763a86362] = env->getMethodID(cls, "reciprocal", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_remainder_0e8ef7e6f3533636] = env->getMethodID(cls, "remainder", "([DI[DI[DI)V");
            mids$[mid_remainder_681eb8d628904b4e] = env->getMethodID(cls, "remainder", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_rootN_9b86f421ba36d607] = env->getMethodID(cls, "rootN", "([DII[DI)V");
            mids$[mid_rootN_f0f09f6733470a33] = env->getMethodID(cls, "rootN", "([Lorg/hipparchus/CalculusFieldElement;II[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sin_9049ad07c45009b1] = env->getMethodID(cls, "sin", "([DI[DI)V");
            mids$[mid_sin_8a8f308763a86362] = env->getMethodID(cls, "sin", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sinCos_0e8ef7e6f3533636] = env->getMethodID(cls, "sinCos", "([DI[DI[DI)V");
            mids$[mid_sinCos_681eb8d628904b4e] = env->getMethodID(cls, "sinCos", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sinh_9049ad07c45009b1] = env->getMethodID(cls, "sinh", "([DI[DI)V");
            mids$[mid_sinh_8a8f308763a86362] = env->getMethodID(cls, "sinh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sinhCosh_0e8ef7e6f3533636] = env->getMethodID(cls, "sinhCosh", "([DI[DI[DI)V");
            mids$[mid_sinhCosh_681eb8d628904b4e] = env->getMethodID(cls, "sinhCosh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sqrt_9049ad07c45009b1] = env->getMethodID(cls, "sqrt", "([DI[DI)V");
            mids$[mid_sqrt_8a8f308763a86362] = env->getMethodID(cls, "sqrt", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_subtract_0e8ef7e6f3533636] = env->getMethodID(cls, "subtract", "([DI[DI[DI)V");
            mids$[mid_subtract_681eb8d628904b4e] = env->getMethodID(cls, "subtract", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_tan_9049ad07c45009b1] = env->getMethodID(cls, "tan", "([DI[DI)V");
            mids$[mid_tan_8a8f308763a86362] = env->getMethodID(cls, "tan", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_tanh_9049ad07c45009b1] = env->getMethodID(cls, "tanh", "([DI[DI)V");
            mids$[mid_tanh_8a8f308763a86362] = env->getMethodID(cls, "tanh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_taylor_224ca668f23b322e] = env->getMethodID(cls, "taylor", "([DI[D)D");
            mids$[mid_taylor_711d120e864e9429] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;I[D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_8a71c1d40ede5480] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void DSCompiler::acos(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acos_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::acos(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acos_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::acosh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acosh_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::acosh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acosh_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::add(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_add_0e8ef7e6f3533636], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::add(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_add_681eb8d628904b4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::asin(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asin_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::asin(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asin_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::asinh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asinh_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::asinh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asinh_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atan(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atan_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atan(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atan_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atan2(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_atan2_0e8ef7e6f3533636], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::atan2(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_atan2_681eb8d628904b4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::atanh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atanh_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atanh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atanh_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::checkCompatibility(const DSCompiler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_checkCompatibility_9cf1f5ad4b184c5c], a0.this$);
        }

        void DSCompiler::compose(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_compose_100a3aff8efcebef], a0.this$, a1, a2.this$, a3.this$, a4);
        }

        void DSCompiler::compose(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< jdouble > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_compose_f73ba8fac41614c2], a0.this$, a1, a2.this$, a3.this$, a4);
        }

        void DSCompiler::compose(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_compose_f9bc348db1810cf8], a0.this$, a1, a2.this$, a3.this$, a4);
        }

        void DSCompiler::cos(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cos_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::cos(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cos_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::cosh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cosh_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::cosh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cosh_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::divide(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_divide_0e8ef7e6f3533636], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::divide(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_divide_681eb8d628904b4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::exp(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_exp_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::exp(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_exp_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::expm1(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_expm1_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::expm1(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_expm1_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        DSCompiler DSCompiler::getCompiler(jint a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DSCompiler(env->callStaticObjectMethod(cls, mids$[mid_getCompiler_04a9da16722f0f41], a0, a1));
        }

        jint DSCompiler::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_d6ab429752e7c267]);
        }

        jint DSCompiler::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
        }

        jint DSCompiler::getPartialDerivativeIndex(const JArray< jint > & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getPartialDerivativeIndex_4c6a473f00540fd2], a0.this$);
        }

        JArray< jint > DSCompiler::getPartialDerivativeOrders(jint a0) const
        {
          return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPartialDerivativeOrders_adb0f0485f08dbd0], a0));
        }

        jint DSCompiler::getPartialDerivativeOrdersSum(jint a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getPartialDerivativeOrdersSum_d938fc64e8c6df2d], a0);
        }

        jint DSCompiler::getSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSize_d6ab429752e7c267]);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< jdouble > & a1, jint a2, jdouble a3, const JArray< jdouble > & a4, jint a5, const JArray< jdouble > & a6, jint a7) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_4a11abba9da6d1a8], a0, a1.this$, a2, a3, a4.this$, a5, a6.this$, a7);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, jdouble a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const JArray< ::org::hipparchus::CalculusFieldElement > & a6, jint a7) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_2ff2a4b152bb43e6], a0, a1.this$, a2, a3, a4.this$, a5, a6.this$, a7);
        }

        void DSCompiler::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const ::org::hipparchus::CalculusFieldElement & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const JArray< ::org::hipparchus::CalculusFieldElement > & a6, jint a7) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_7c3545035a9e2422], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< jdouble > & a1, jint a2, jdouble a3, const JArray< jdouble > & a4, jint a5, jdouble a6, const JArray< jdouble > & a7, jint a8, const JArray< jdouble > & a9, jint a10) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_635ee2baf089aeb2], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9.this$, a10);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, jdouble a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, jdouble a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, const JArray< ::org::hipparchus::CalculusFieldElement > & a9, jint a10) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_16e822ac9fe106ff], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9.this$, a10);
        }

        void DSCompiler::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const ::org::hipparchus::CalculusFieldElement & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const ::org::hipparchus::CalculusFieldElement & a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, const JArray< ::org::hipparchus::CalculusFieldElement > & a9, jint a10) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_317f4820dc430e38], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7.this$, a8, a9.this$, a10);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< jdouble > & a1, jint a2, jdouble a3, const JArray< jdouble > & a4, jint a5, jdouble a6, const JArray< jdouble > & a7, jint a8, jdouble a9, const JArray< jdouble > & a10, jint a11, const JArray< jdouble > & a12, jint a13) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_c44f34fdb6edd5bb], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10.this$, a11, a12.this$, a13);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, jdouble a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, jdouble a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, jdouble a9, const JArray< ::org::hipparchus::CalculusFieldElement > & a10, jint a11, const JArray< ::org::hipparchus::CalculusFieldElement > & a12, jint a13) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_ef86823ce8b711cd], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10.this$, a11, a12.this$, a13);
        }

        void DSCompiler::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const ::org::hipparchus::CalculusFieldElement & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const ::org::hipparchus::CalculusFieldElement & a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, const ::org::hipparchus::CalculusFieldElement & a9, const JArray< ::org::hipparchus::CalculusFieldElement > & a10, jint a11, const JArray< ::org::hipparchus::CalculusFieldElement > & a12, jint a13) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_38046764062aceb0], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7.this$, a8, a9.this$, a10.this$, a11, a12.this$, a13);
        }

        void DSCompiler::log(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log10(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log10_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log10(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log10_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log1p(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log1p_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log1p(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log1p_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::multiply(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_multiply_0e8ef7e6f3533636], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::multiply(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_multiply_681eb8d628904b4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::pow(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_9b86f421ba36d607], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(jdouble a0, const JArray< jdouble > & a1, jint a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_ebc5f80d3271bf9e], a0, a1.this$, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< jdouble > & a0, jint a1, jdouble a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_08025779ec6ae79b], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_3b3d5afa08fd4102], a0, a1.this$, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_b60fbadf298fc1f3], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, jint a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_f0f09f6733470a33], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_0e8ef7e6f3533636], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::pow(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_681eb8d628904b4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::rebase(const JArray< jdouble > & a0, jint a1, const DSCompiler & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_rebase_9e5d830c5c63e8c2], a0.this$, a1, a2.this$, a3.this$, a4.this$, a5);
        }

        void DSCompiler::rebase(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const DSCompiler & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_rebase_f2165047da55d9f2], a0.this$, a1, a2.this$, a3.this$, a4.this$, a5);
        }

        void DSCompiler::reciprocal(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_reciprocal_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::reciprocal(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_reciprocal_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::remainder(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_remainder_0e8ef7e6f3533636], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::remainder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_remainder_681eb8d628904b4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::rootN(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_rootN_9b86f421ba36d607], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::rootN(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, jint a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_rootN_f0f09f6733470a33], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::sin(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sin_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sin(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sin_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sinCos(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinCos_0e8ef7e6f3533636], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sinCos(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinCos_681eb8d628904b4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sinh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sinh_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sinh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sinh_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sinhCosh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinhCosh_0e8ef7e6f3533636], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sinhCosh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinhCosh_681eb8d628904b4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sqrt(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sqrt_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sqrt(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sqrt_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::subtract(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_subtract_0e8ef7e6f3533636], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::subtract(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_subtract_681eb8d628904b4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::tan(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tan_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::tan(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tan_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::tanh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tanh_9049ad07c45009b1], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::tanh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tanh_8a8f308763a86362], a0.this$, a1, a2.this$, a3);
        }

        jdouble DSCompiler::taylor(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_224ca668f23b322e], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::CalculusFieldElement DSCompiler::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_711d120e864e9429], a0.this$, a1, a2.this$));
        }

        ::org::hipparchus::CalculusFieldElement DSCompiler::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_8a71c1d40ede5480], a0.this$, a1, a2.this$));
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
        static PyObject *t_DSCompiler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSCompiler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSCompiler_acos(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_acosh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_add(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_asin(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_asinh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_atan(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_atan2(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_atanh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_checkCompatibility(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_compose(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_cos(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_cosh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_divide(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_exp(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_expm1(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_getCompiler(PyTypeObject *type, PyObject *args);
        static PyObject *t_DSCompiler_getFreeParameters(t_DSCompiler *self);
        static PyObject *t_DSCompiler_getOrder(t_DSCompiler *self);
        static PyObject *t_DSCompiler_getPartialDerivativeIndex(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_getPartialDerivativeOrders(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_getPartialDerivativeOrdersSum(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_getSize(t_DSCompiler *self);
        static PyObject *t_DSCompiler_linearCombination(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_log(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_log10(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_log1p(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_multiply(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_pow(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_rebase(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_reciprocal(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_remainder(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_rootN(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sin(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sinCos(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sinh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sinhCosh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sqrt(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_subtract(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_tan(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_tanh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_taylor(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_get__freeParameters(t_DSCompiler *self, void *data);
        static PyObject *t_DSCompiler_get__order(t_DSCompiler *self, void *data);
        static PyObject *t_DSCompiler_get__size(t_DSCompiler *self, void *data);
        static PyGetSetDef t_DSCompiler__fields_[] = {
          DECLARE_GET_FIELD(t_DSCompiler, freeParameters),
          DECLARE_GET_FIELD(t_DSCompiler, order),
          DECLARE_GET_FIELD(t_DSCompiler, size),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSCompiler__methods_[] = {
          DECLARE_METHOD(t_DSCompiler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSCompiler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSCompiler, acos, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, acosh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, add, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, asin, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, asinh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, atan, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, atan2, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, atanh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, checkCompatibility, METH_O),
          DECLARE_METHOD(t_DSCompiler, compose, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, cos, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, cosh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, divide, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, exp, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, expm1, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, getCompiler, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DSCompiler, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_DSCompiler, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_DSCompiler, getPartialDerivativeIndex, METH_O),
          DECLARE_METHOD(t_DSCompiler, getPartialDerivativeOrders, METH_O),
          DECLARE_METHOD(t_DSCompiler, getPartialDerivativeOrdersSum, METH_O),
          DECLARE_METHOD(t_DSCompiler, getSize, METH_NOARGS),
          DECLARE_METHOD(t_DSCompiler, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, log, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, log10, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, log1p, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, multiply, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, pow, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, rebase, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, remainder, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, rootN, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sin, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sinh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, subtract, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, tan, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, tanh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, taylor, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSCompiler)[] = {
          { Py_tp_methods, t_DSCompiler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DSCompiler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSCompiler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DSCompiler, t_DSCompiler, DSCompiler);

        void t_DSCompiler::install(PyObject *module)
        {
          installType(&PY_TYPE(DSCompiler), &PY_TYPE_DEF(DSCompiler), module, "DSCompiler", 0);
        }

        void t_DSCompiler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSCompiler), "class_", make_descriptor(DSCompiler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSCompiler), "wrapfn_", make_descriptor(t_DSCompiler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSCompiler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSCompiler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSCompiler::initializeClass, 1)))
            return NULL;
          return t_DSCompiler::wrap_Object(DSCompiler(((t_DSCompiler *) arg)->object.this$));
        }
        static PyObject *t_DSCompiler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSCompiler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DSCompiler_acos(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.acos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.acos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acos", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_acosh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.acosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.acosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acosh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_add(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.add(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.add(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_asin(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.asin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.asin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "asin", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_asinh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.asinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.asinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "asinh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_atan(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.atan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.atan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "atan", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_atan2(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.atan2(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.atan2(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_atanh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.atanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.atanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "atanh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_checkCompatibility(t_DSCompiler *self, PyObject *arg)
        {
          DSCompiler a0((jobject) NULL);

          if (!parseArg(arg, "k", DSCompiler::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkCompatibility(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "checkCompatibility", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_compose(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DI[D[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.compose(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KI[D[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.compose(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KI[K[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.compose(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_cos(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.cos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.cos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "cos", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_cosh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.cosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.cosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "cosh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_divide(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.divide(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.divide(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_exp(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.exp(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.exp(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "exp", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_expm1(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.expm1(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.expm1(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "expm1", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_getCompiler(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          DSCompiler result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DSCompiler::getCompiler(a0, a1));
            return t_DSCompiler::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getCompiler", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_getFreeParameters(t_DSCompiler *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DSCompiler_getOrder(t_DSCompiler *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DSCompiler_getPartialDerivativeIndex(t_DSCompiler *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jint result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivativeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivativeIndex", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_getPartialDerivativeOrders(t_DSCompiler *self, PyObject *arg)
        {
          jint a0;
          JArray< jint > result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivativeOrders(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivativeOrders", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_getPartialDerivativeOrdersSum(t_DSCompiler *self, PyObject *arg)
        {
          jint a0;
          jint result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivativeOrdersSum(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivativeOrdersSum", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_getSize(t_DSCompiler *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DSCompiler_linearCombination(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;
              JArray< jdouble > a6((jobject) NULL);
              jint a7;

              if (!parseArgs(args, "D[DID[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              jdouble a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              JArray< ::org::hipparchus::CalculusFieldElement > a6((jobject) NULL);
              PyTypeObject **p6;
              jint a7;

              if (!parseArgs(args, "D[KID[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              JArray< ::org::hipparchus::CalculusFieldElement > a6((jobject) NULL);
              PyTypeObject **p6;
              jint a7;

              if (!parseArgs(args, "K[KIK[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                Py_RETURN_NONE;
              }
            }
            break;
           case 11:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;
              jdouble a6;
              JArray< jdouble > a7((jobject) NULL);
              jint a8;
              JArray< jdouble > a9((jobject) NULL);
              jint a10;

              if (!parseArgs(args, "D[DID[DID[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              jdouble a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              jdouble a6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              JArray< ::org::hipparchus::CalculusFieldElement > a9((jobject) NULL);
              PyTypeObject **p9;
              jint a10;

              if (!parseArgs(args, "D[KID[KID[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
              PyTypeObject **p6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              JArray< ::org::hipparchus::CalculusFieldElement > a9((jobject) NULL);
              PyTypeObject **p9;
              jint a10;

              if (!parseArgs(args, "K[KIK[KIK[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                Py_RETURN_NONE;
              }
            }
            break;
           case 14:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;
              jdouble a6;
              JArray< jdouble > a7((jobject) NULL);
              jint a8;
              jdouble a9;
              JArray< jdouble > a10((jobject) NULL);
              jint a11;
              JArray< jdouble > a12((jobject) NULL);
              jint a13;

              if (!parseArgs(args, "D[DID[DID[DID[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              jdouble a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              jdouble a6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              jdouble a9;
              JArray< ::org::hipparchus::CalculusFieldElement > a10((jobject) NULL);
              PyTypeObject **p10;
              jint a11;
              JArray< ::org::hipparchus::CalculusFieldElement > a12((jobject) NULL);
              PyTypeObject **p12;
              jint a13;

              if (!parseArgs(args, "D[KID[KID[KID[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
              PyTypeObject **p6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
              PyTypeObject **p9;
              JArray< ::org::hipparchus::CalculusFieldElement > a10((jobject) NULL);
              PyTypeObject **p10;
              jint a11;
              JArray< ::org::hipparchus::CalculusFieldElement > a12((jobject) NULL);
              PyTypeObject **p12;
              jint a13;

              if (!parseArgs(args, "K[KIK[KIK[KIK[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_log(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.log(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.log(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "log", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_log10(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.log10(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.log10(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "log10", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_log1p(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.log1p(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.log1p(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "log1p", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_multiply(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.multiply(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.multiply(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_pow(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KID[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "D[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DID[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "D[DI[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DII[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KII[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            break;
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_rebase(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              DSCompiler a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DIk[D[DI", DSCompiler::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.rebase(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              DSCompiler a2((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KIk[K[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, DSCompiler::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.rebase(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "rebase", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_reciprocal(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.reciprocal(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.reciprocal(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "reciprocal", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_remainder(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.remainder(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.remainder(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_rootN(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DII[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.rootN(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KII[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.rootN(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sin(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.sin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.sin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sin", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sinCos(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.sinCos(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.sinCos(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sinCos", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sinh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.sinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.sinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sinh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sinhCosh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.sinhCosh(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.sinhCosh(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sinhCosh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sqrt(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.sqrt(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.sqrt(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sqrt", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_subtract(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.subtract(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.subtract(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_tan(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.tan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.tan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "tan", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_tanh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.tanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.tanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "tanh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_taylor(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[DI[D", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.taylor(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[KI[D", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.taylor(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[KI[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_get__freeParameters(t_DSCompiler *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DSCompiler_get__order(t_DSCompiler *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DSCompiler_get__size(t_DSCompiler *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *IRNSSNavigationMessage::class$ = NULL;
            jmethodID *IRNSSNavigationMessage::mids$ = NULL;
            bool IRNSSNavigationMessage::live$ = false;

            jclass IRNSSNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getIODEC_d6ab429752e7c267] = env->getMethodID(cls, "getIODEC", "()I");
                mids$[mid_getSvHealth_9981f74b2d109da6] = env->getMethodID(cls, "getSvHealth", "()D");
                mids$[mid_getTGD_9981f74b2d109da6] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getURA_9981f74b2d109da6] = env->getMethodID(cls, "getURA", "()D");
                mids$[mid_setIODEC_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setIODEC", "(D)V");
                mids$[mid_setSvHealth_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSvHealth", "(D)V");
                mids$[mid_setTGD_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTGD", "(D)V");
                mids$[mid_setURA_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setURA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IRNSSNavigationMessage::IRNSSNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jint IRNSSNavigationMessage::getIODEC() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODEC_d6ab429752e7c267]);
            }

            jdouble IRNSSNavigationMessage::getSvHealth() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvHealth_9981f74b2d109da6]);
            }

            jdouble IRNSSNavigationMessage::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_9981f74b2d109da6]);
            }

            jdouble IRNSSNavigationMessage::getURA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getURA_9981f74b2d109da6]);
            }

            void IRNSSNavigationMessage::setIODEC(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODEC_1ad26e8c8c0cd65b], a0);
            }

            void IRNSSNavigationMessage::setSvHealth(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_1ad26e8c8c0cd65b], a0);
            }

            void IRNSSNavigationMessage::setTGD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD_1ad26e8c8c0cd65b], a0);
            }

            void IRNSSNavigationMessage::setURA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_IRNSSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_IRNSSNavigationMessage_init_(t_IRNSSNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_IRNSSNavigationMessage_getIODEC(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_getSvHealth(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_getTGD(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_getURA(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_setIODEC(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_setSvHealth(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_setTGD(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_setURA(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_get__iODEC(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__iODEC(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_IRNSSNavigationMessage_get__svHealth(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__svHealth(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_IRNSSNavigationMessage_get__tGD(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__tGD(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_IRNSSNavigationMessage_get__uRA(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__uRA(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_IRNSSNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, iODEC),
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, svHealth),
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, tGD),
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, uRA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_IRNSSNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_IRNSSNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getIODEC, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getURA, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setIODEC, METH_O),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setSvHealth, METH_O),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setTGD, METH_O),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IRNSSNavigationMessage)[] = {
              { Py_tp_methods, t_IRNSSNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_IRNSSNavigationMessage_init_ },
              { Py_tp_getset, t_IRNSSNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IRNSSNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(IRNSSNavigationMessage, t_IRNSSNavigationMessage, IRNSSNavigationMessage);

            void t_IRNSSNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(IRNSSNavigationMessage), &PY_TYPE_DEF(IRNSSNavigationMessage), module, "IRNSSNavigationMessage", 0);
            }

            void t_IRNSSNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSNavigationMessage), "class_", make_descriptor(IRNSSNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSNavigationMessage), "wrapfn_", make_descriptor(t_IRNSSNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_IRNSSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IRNSSNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_IRNSSNavigationMessage::wrap_Object(IRNSSNavigationMessage(((t_IRNSSNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_IRNSSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IRNSSNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_IRNSSNavigationMessage_init_(t_IRNSSNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              IRNSSNavigationMessage object((jobject) NULL);

              INT_CALL(object = IRNSSNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_IRNSSNavigationMessage_getIODEC(t_IRNSSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODEC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_IRNSSNavigationMessage_getSvHealth(t_IRNSSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_IRNSSNavigationMessage_getTGD(t_IRNSSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_IRNSSNavigationMessage_getURA(t_IRNSSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getURA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_IRNSSNavigationMessage_setIODEC(t_IRNSSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIODEC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODEC", arg);
              return NULL;
            }

            static PyObject *t_IRNSSNavigationMessage_setSvHealth(t_IRNSSNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_IRNSSNavigationMessage_setTGD(t_IRNSSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD", arg);
              return NULL;
            }

            static PyObject *t_IRNSSNavigationMessage_setURA(t_IRNSSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setURA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setURA", arg);
              return NULL;
            }

            static PyObject *t_IRNSSNavigationMessage_get__iODEC(t_IRNSSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODEC());
              return PyLong_FromLong((long) value);
            }
            static int t_IRNSSNavigationMessage_set__iODEC(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIODEC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODEC", arg);
              return -1;
            }

            static PyObject *t_IRNSSNavigationMessage_get__svHealth(t_IRNSSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyFloat_FromDouble((double) value);
            }
            static int t_IRNSSNavigationMessage_set__svHealth(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_IRNSSNavigationMessage_get__tGD(t_IRNSSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_IRNSSNavigationMessage_set__tGD(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD", arg);
              return -1;
            }

            static PyObject *t_IRNSSNavigationMessage_get__uRA(t_IRNSSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getURA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_IRNSSNavigationMessage_set__uRA(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setURA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uRA", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
