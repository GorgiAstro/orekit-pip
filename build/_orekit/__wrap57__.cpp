#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmData.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmData::class$ = NULL;
              jmethodID *OcmData::mids$ = NULL;
              bool OcmData::live$ = false;

              jclass OcmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_848c9d9cb3987024] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties;Ljava/util/List;Ljava/util/List;Lorg/orekit/files/ccsds/ndm/odm/ocm/Perturbations;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                  mids$[mid_getCovarianceBlocks_d751c1a57012b438] = env->getMethodID(cls, "getCovarianceBlocks", "()Ljava/util/List;");
                  mids$[mid_getManeuverBlocks_d751c1a57012b438] = env->getMethodID(cls, "getManeuverBlocks", "()Ljava/util/List;");
                  mids$[mid_getOrbitDeterminationBlock_c1813a8ece841355] = env->getMethodID(cls, "getOrbitDeterminationBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination;");
                  mids$[mid_getPerturbationsBlock_32d1943f819a5774] = env->getMethodID(cls, "getPerturbationsBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/Perturbations;");
                  mids$[mid_getPhysicBlock_b46da399f97e484d] = env->getMethodID(cls, "getPhysicBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties;");
                  mids$[mid_getTrajectoryBlocks_d751c1a57012b438] = env->getMethodID(cls, "getTrajectoryBlocks", "()Ljava/util/List;");
                  mids$[mid_getUserDefinedBlock_b8dba07746e1b089] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmData::OcmData(const ::java::util::List & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties & a1, const ::java::util::List & a2, const ::java::util::List & a3, const ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations & a4, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination & a5, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_848c9d9cb3987024, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

              ::java::util::List OcmData::getCovarianceBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceBlocks_d751c1a57012b438]));
              }

              ::java::util::List OcmData::getManeuverBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuverBlocks_d751c1a57012b438]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination OcmData::getOrbitDeterminationBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination(env->callObjectMethod(this$, mids$[mid_getOrbitDeterminationBlock_c1813a8ece841355]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations OcmData::getPerturbationsBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations(env->callObjectMethod(this$, mids$[mid_getPerturbationsBlock_32d1943f819a5774]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties OcmData::getPhysicBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties(env->callObjectMethod(this$, mids$[mid_getPhysicBlock_b46da399f97e484d]));
              }

              ::java::util::List OcmData::getTrajectoryBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTrajectoryBlocks_d751c1a57012b438]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined OcmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_b8dba07746e1b089]));
              }

              void OcmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
              static PyObject *t_OcmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OcmData_init_(t_OcmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmData_getCovarianceBlocks(t_OcmData *self);
              static PyObject *t_OcmData_getManeuverBlocks(t_OcmData *self);
              static PyObject *t_OcmData_getOrbitDeterminationBlock(t_OcmData *self);
              static PyObject *t_OcmData_getPerturbationsBlock(t_OcmData *self);
              static PyObject *t_OcmData_getPhysicBlock(t_OcmData *self);
              static PyObject *t_OcmData_getTrajectoryBlocks(t_OcmData *self);
              static PyObject *t_OcmData_getUserDefinedBlock(t_OcmData *self);
              static PyObject *t_OcmData_validate(t_OcmData *self, PyObject *arg);
              static PyObject *t_OcmData_get__covarianceBlocks(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__maneuverBlocks(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__orbitDeterminationBlock(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__perturbationsBlock(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__physicBlock(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__trajectoryBlocks(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__userDefinedBlock(t_OcmData *self, void *data);
              static PyGetSetDef t_OcmData__fields_[] = {
                DECLARE_GET_FIELD(t_OcmData, covarianceBlocks),
                DECLARE_GET_FIELD(t_OcmData, maneuverBlocks),
                DECLARE_GET_FIELD(t_OcmData, orbitDeterminationBlock),
                DECLARE_GET_FIELD(t_OcmData, perturbationsBlock),
                DECLARE_GET_FIELD(t_OcmData, physicBlock),
                DECLARE_GET_FIELD(t_OcmData, trajectoryBlocks),
                DECLARE_GET_FIELD(t_OcmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmData__methods_[] = {
                DECLARE_METHOD(t_OcmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmData, getCovarianceBlocks, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getManeuverBlocks, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getOrbitDeterminationBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getPerturbationsBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getPhysicBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getTrajectoryBlocks, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmData)[] = {
                { Py_tp_methods, t_OcmData__methods_ },
                { Py_tp_init, (void *) t_OcmData_init_ },
                { Py_tp_getset, t_OcmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OcmData, t_OcmData, OcmData);

              void t_OcmData::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmData), &PY_TYPE_DEF(OcmData), module, "OcmData", 0);
              }

              void t_OcmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmData), "class_", make_descriptor(OcmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmData), "wrapfn_", make_descriptor(t_OcmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OcmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmData::initializeClass, 1)))
                  return NULL;
                return t_OcmData::wrap_Object(OcmData(((t_OcmData *) arg)->object.this$));
              }
              static PyObject *t_OcmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OcmData_init_(t_OcmData *self, PyObject *args, PyObject *kwds)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations a4((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination a5((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a6((jobject) NULL);
                OcmData object((jobject) NULL);

                if (!parseArgs(args, "KkKKkkk", ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::java::util::t_List::parameters_, &a4, &a5, &a6))
                {
                  INT_CALL(object = OcmData(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmData_getCovarianceBlocks(t_OcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitCovarianceHistory));
              }

              static PyObject *t_OcmData_getManeuverBlocks(t_OcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitManeuverHistory));
              }

              static PyObject *t_OcmData_getOrbitDeterminationBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitDetermination::wrap_Object(result);
              }

              static PyObject *t_OcmData_getPerturbationsBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations result((jobject) NULL);
                OBJ_CALL(result = self->object.getPerturbationsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Perturbations::wrap_Object(result);
              }

              static PyObject *t_OcmData_getPhysicBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties result((jobject) NULL);
                OBJ_CALL(result = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitPhysicalProperties::wrap_Object(result);
              }

              static PyObject *t_OcmData_getTrajectoryBlocks(t_OcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajectoryBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(TrajectoryStateHistory));
              }

              static PyObject *t_OcmData_getUserDefinedBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_OcmData_validate(t_OcmData *self, PyObject *arg)
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

              static PyObject *t_OcmData_get__covarianceBlocks(t_OcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__maneuverBlocks(t_OcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__orbitDeterminationBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitDetermination::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__perturbationsBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations value((jobject) NULL);
                OBJ_CALL(value = self->object.getPerturbationsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Perturbations::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__physicBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties value((jobject) NULL);
                OBJ_CALL(value = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitPhysicalProperties::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__trajectoryBlocks(t_OcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajectoryBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__userDefinedBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                OBJ_CALL(value = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
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
#include "org/hipparchus/ode/ComplexODEConverter.h"
#include "org/hipparchus/ode/ComplexOrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/SecondaryODE.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/ComplexODEStateAndDerivative.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ComplexSecondaryODE.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/ComplexODEState.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexODEConverter::class$ = NULL;
      jmethodID *ComplexODEConverter::mids$ = NULL;
      bool ComplexODEConverter::live$ = false;

      jclass ComplexODEConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexODEConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_convertEquations_f991af10bff06b96] = env->getMethodID(cls, "convertEquations", "(Lorg/hipparchus/ode/ComplexOrdinaryDifferentialEquation;)Lorg/hipparchus/ode/OrdinaryDifferentialEquation;");
          mids$[mid_convertSecondaryEquations_2418bdf1aee3e01a] = env->getMethodID(cls, "convertSecondaryEquations", "(Lorg/hipparchus/ode/ComplexSecondaryODE;)Lorg/hipparchus/ode/SecondaryODE;");
          mids$[mid_convertState_9c54d5abc8f7f3b9] = env->getMethodID(cls, "convertState", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/ComplexODEStateAndDerivative;");
          mids$[mid_convertState_c146c780eecfbbbb] = env->getMethodID(cls, "convertState", "(Lorg/hipparchus/ode/ComplexODEState;)Lorg/hipparchus/ode/ODEState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexODEConverter::ComplexODEConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ::org::hipparchus::ode::OrdinaryDifferentialEquation ComplexODEConverter::convertEquations(const ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation & a0) const
      {
        return ::org::hipparchus::ode::OrdinaryDifferentialEquation(env->callObjectMethod(this$, mids$[mid_convertEquations_f991af10bff06b96], a0.this$));
      }

      ::org::hipparchus::ode::SecondaryODE ComplexODEConverter::convertSecondaryEquations(const ::org::hipparchus::ode::ComplexSecondaryODE & a0) const
      {
        return ::org::hipparchus::ode::SecondaryODE(env->callObjectMethod(this$, mids$[mid_convertSecondaryEquations_2418bdf1aee3e01a], a0.this$));
      }

      ::org::hipparchus::ode::ComplexODEStateAndDerivative ComplexODEConverter::convertState(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
      {
        return ::org::hipparchus::ode::ComplexODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_convertState_9c54d5abc8f7f3b9], a0.this$));
      }

      ::org::hipparchus::ode::ODEState ComplexODEConverter::convertState(const ::org::hipparchus::ode::ComplexODEState & a0) const
      {
        return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_convertState_c146c780eecfbbbb], a0.this$));
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
      static PyObject *t_ComplexODEConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexODEConverter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexODEConverter_init_(t_ComplexODEConverter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexODEConverter_convertEquations(t_ComplexODEConverter *self, PyObject *arg);
      static PyObject *t_ComplexODEConverter_convertSecondaryEquations(t_ComplexODEConverter *self, PyObject *arg);
      static PyObject *t_ComplexODEConverter_convertState(t_ComplexODEConverter *self, PyObject *args);

      static PyMethodDef t_ComplexODEConverter__methods_[] = {
        DECLARE_METHOD(t_ComplexODEConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEConverter, convertEquations, METH_O),
        DECLARE_METHOD(t_ComplexODEConverter, convertSecondaryEquations, METH_O),
        DECLARE_METHOD(t_ComplexODEConverter, convertState, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexODEConverter)[] = {
        { Py_tp_methods, t_ComplexODEConverter__methods_ },
        { Py_tp_init, (void *) t_ComplexODEConverter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexODEConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexODEConverter, t_ComplexODEConverter, ComplexODEConverter);

      void t_ComplexODEConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexODEConverter), &PY_TYPE_DEF(ComplexODEConverter), module, "ComplexODEConverter", 0);
      }

      void t_ComplexODEConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEConverter), "class_", make_descriptor(ComplexODEConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEConverter), "wrapfn_", make_descriptor(t_ComplexODEConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexODEConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexODEConverter::initializeClass, 1)))
          return NULL;
        return t_ComplexODEConverter::wrap_Object(ComplexODEConverter(((t_ComplexODEConverter *) arg)->object.this$));
      }
      static PyObject *t_ComplexODEConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexODEConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexODEConverter_init_(t_ComplexODEConverter *self, PyObject *args, PyObject *kwds)
      {
        ComplexODEConverter object((jobject) NULL);

        INT_CALL(object = ComplexODEConverter());
        self->object = object;

        return 0;
      }

      static PyObject *t_ComplexODEConverter_convertEquations(t_ComplexODEConverter *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation a0((jobject) NULL);
        ::org::hipparchus::ode::OrdinaryDifferentialEquation result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.convertEquations(a0));
          return ::org::hipparchus::ode::t_OrdinaryDifferentialEquation::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convertEquations", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEConverter_convertSecondaryEquations(t_ComplexODEConverter *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ComplexSecondaryODE a0((jobject) NULL);
        ::org::hipparchus::ode::SecondaryODE result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ComplexSecondaryODE::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.convertSecondaryEquations(a0));
          return ::org::hipparchus::ode::t_SecondaryODE::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convertSecondaryEquations", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEConverter_convertState(t_ComplexODEConverter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
            ::org::hipparchus::ode::ComplexODEStateAndDerivative result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.convertState(a0));
              return ::org::hipparchus::ode::t_ComplexODEStateAndDerivative::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::ode::ComplexODEState a0((jobject) NULL);
            ::org::hipparchus::ode::ODEState result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::ode::ComplexODEState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.convertState(a0));
              return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "convertState", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GLONASSDate.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GLONASSDate::class$ = NULL;
      jmethodID *GLONASSDate::mids$ = NULL;
      bool GLONASSDate::live$ = false;

      jclass GLONASSDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GLONASSDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8497861b879c83f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init$_9fe8d849aef9a85f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_e98d7b3e971b6087] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_init$_751ae7c5bf954915] = env->getMethodID(cls, "<init>", "(IIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getDayNumber_d6ab429752e7c267] = env->getMethodID(cls, "getDayNumber", "()I");
          mids$[mid_getGMST_9981f74b2d109da6] = env->getMethodID(cls, "getGMST", "()D");
          mids$[mid_getIntervalNumber_d6ab429752e7c267] = env->getMethodID(cls, "getIntervalNumber", "()I");
          mids$[mid_getJD0_9981f74b2d109da6] = env->getMethodID(cls, "getJD0", "()D");
          mids$[mid_getSecInDay_9981f74b2d109da6] = env->getMethodID(cls, "getSecInDay", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GLONASSDate::GLONASSDate(const ::org::orekit::time::AbsoluteDate & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8497861b879c83f7, a0.this$)) {}

      GLONASSDate::GLONASSDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9fe8d849aef9a85f, a0.this$, a1.this$)) {}

      GLONASSDate::GLONASSDate(jint a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e98d7b3e971b6087, a0, a1, a2)) {}

      GLONASSDate::GLONASSDate(jint a0, jint a1, jdouble a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_751ae7c5bf954915, a0, a1, a2, a3.this$)) {}

      ::org::orekit::time::AbsoluteDate GLONASSDate::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      jint GLONASSDate::getDayNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getDayNumber_d6ab429752e7c267]);
      }

      jdouble GLONASSDate::getGMST() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGMST_9981f74b2d109da6]);
      }

      jint GLONASSDate::getIntervalNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getIntervalNumber_d6ab429752e7c267]);
      }

      jdouble GLONASSDate::getJD0() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getJD0_9981f74b2d109da6]);
      }

      jdouble GLONASSDate::getSecInDay() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecInDay_9981f74b2d109da6]);
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
      static PyObject *t_GLONASSDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GLONASSDate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GLONASSDate_init_(t_GLONASSDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GLONASSDate_getDate(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getDayNumber(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getGMST(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getIntervalNumber(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getJD0(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getSecInDay(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_get__date(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__dayNumber(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__gMST(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__intervalNumber(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__jD0(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__secInDay(t_GLONASSDate *self, void *data);
      static PyGetSetDef t_GLONASSDate__fields_[] = {
        DECLARE_GET_FIELD(t_GLONASSDate, date),
        DECLARE_GET_FIELD(t_GLONASSDate, dayNumber),
        DECLARE_GET_FIELD(t_GLONASSDate, gMST),
        DECLARE_GET_FIELD(t_GLONASSDate, intervalNumber),
        DECLARE_GET_FIELD(t_GLONASSDate, jD0),
        DECLARE_GET_FIELD(t_GLONASSDate, secInDay),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GLONASSDate__methods_[] = {
        DECLARE_METHOD(t_GLONASSDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getDayNumber, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getGMST, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getIntervalNumber, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getJD0, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getSecInDay, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GLONASSDate)[] = {
        { Py_tp_methods, t_GLONASSDate__methods_ },
        { Py_tp_init, (void *) t_GLONASSDate_init_ },
        { Py_tp_getset, t_GLONASSDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GLONASSDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GLONASSDate, t_GLONASSDate, GLONASSDate);

      void t_GLONASSDate::install(PyObject *module)
      {
        installType(&PY_TYPE(GLONASSDate), &PY_TYPE_DEF(GLONASSDate), module, "GLONASSDate", 0);
      }

      void t_GLONASSDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSDate), "class_", make_descriptor(GLONASSDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSDate), "wrapfn_", make_descriptor(t_GLONASSDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSDate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GLONASSDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GLONASSDate::initializeClass, 1)))
          return NULL;
        return t_GLONASSDate::wrap_Object(GLONASSDate(((t_GLONASSDate *) arg)->object.this$));
      }
      static PyObject *t_GLONASSDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GLONASSDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GLONASSDate_init_(t_GLONASSDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              INT_CALL(object = GLONASSDate(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = GLONASSDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jint a1;
            jdouble a2;
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "IID", &a0, &a1, &a2))
            {
              INT_CALL(object = GLONASSDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            jdouble a2;
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "IIDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = GLONASSDate(a0, a1, a2, a3));
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

      static PyObject *t_GLONASSDate_getDate(t_GLONASSDate *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_GLONASSDate_getDayNumber(t_GLONASSDate *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDayNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GLONASSDate_getGMST(t_GLONASSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGMST());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GLONASSDate_getIntervalNumber(t_GLONASSDate *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIntervalNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GLONASSDate_getJD0(t_GLONASSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getJD0());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GLONASSDate_getSecInDay(t_GLONASSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecInDay());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GLONASSDate_get__date(t_GLONASSDate *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_GLONASSDate_get__dayNumber(t_GLONASSDate *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDayNumber());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GLONASSDate_get__gMST(t_GLONASSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGMST());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GLONASSDate_get__intervalNumber(t_GLONASSDate *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIntervalNumber());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GLONASSDate_get__jD0(t_GLONASSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getJD0());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GLONASSDate_get__secInDay(t_GLONASSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecInDay());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/StepNormalizer.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "org/hipparchus/ode/sampling/ODEFixedStepHandler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *StepNormalizer::class$ = NULL;
        jmethodID *StepNormalizer::mids$ = NULL;
        bool StepNormalizer::live$ = false;

        jclass StepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/StepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3ce0a51a49512640] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;)V");
            mids$[mid_init$_bcd163af3757bc17] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_init$_cc1ad3d091b10555] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;)V");
            mids$[mid_init$_941806f817f4c285] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_finish_6bfc236263cc281c] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
            mids$[mid_handleStep_4f79f5048423f318] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
            mids$[mid_init_25005604bcb94d07] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3ce0a51a49512640, a0, a1.this$)) {}

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bcd163af3757bc17, a0, a1.this$, a2.this$)) {}

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc1ad3d091b10555, a0, a1.this$, a2.this$)) {}

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_941806f817f4c285, a0, a1.this$, a2.this$, a3.this$)) {}

        void StepNormalizer::finish(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_6bfc236263cc281c], a0.this$);
        }

        void StepNormalizer::handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_4f79f5048423f318], a0.this$);
        }

        void StepNormalizer::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_25005604bcb94d07], a0.this$, a1);
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
      namespace sampling {
        static PyObject *t_StepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepNormalizer_init_(t_StepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepNormalizer_finish(t_StepNormalizer *self, PyObject *arg);
        static PyObject *t_StepNormalizer_handleStep(t_StepNormalizer *self, PyObject *arg);
        static PyObject *t_StepNormalizer_init(t_StepNormalizer *self, PyObject *args);

        static PyMethodDef t_StepNormalizer__methods_[] = {
          DECLARE_METHOD(t_StepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_StepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_StepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepNormalizer)[] = {
          { Py_tp_methods, t_StepNormalizer__methods_ },
          { Py_tp_init, (void *) t_StepNormalizer_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepNormalizer, t_StepNormalizer, StepNormalizer);

        void t_StepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(StepNormalizer), &PY_TYPE_DEF(StepNormalizer), module, "StepNormalizer", 0);
        }

        void t_StepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizer), "class_", make_descriptor(StepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizer), "wrapfn_", make_descriptor(t_StepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepNormalizer::initializeClass, 1)))
            return NULL;
          return t_StepNormalizer::wrap_Object(StepNormalizer(((t_StepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_StepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepNormalizer_init_(t_StepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, &a0, &a1))
              {
                INT_CALL(object = StepNormalizer(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a2((jobject) NULL);
              PyTypeObject **p2;
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DkK", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = StepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DkK", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_))
              {
                INT_CALL(object = StepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a3((jobject) NULL);
              PyTypeObject **p3;
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DkKK", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_, &a3, &p3, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = StepNormalizer(a0, a1, a2, a3));
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

        static PyObject *t_StepNormalizer_finish(t_StepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_StepNormalizer_handleStep(t_StepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_StepNormalizer_init(t_StepNormalizer *self, PyObject *args)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/EventSlopeFilter.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *EventSlopeFilter::class$ = NULL;
        jmethodID *EventSlopeFilter::mids$ = NULL;
        bool EventSlopeFilter::live$ = false;

        jclass EventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/EventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_680da09f037488f6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/ODEEventDetector;Lorg/hipparchus/ode/events/FilterType;)V");
            mids$[mid_g_c9c83b182b4bb0ba] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_getDetector_da847cbf3fa2cbbf] = env->getMethodID(cls, "getDetector", "()Lorg/hipparchus/ode/events/ODEEventDetector;");
            mids$[mid_init_25005604bcb94d07] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_create_deadf5ed6b743e1b] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/AdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;Lorg/hipparchus/ode/events/ODEEventHandler;)Lorg/hipparchus/ode/events/EventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventSlopeFilter::EventSlopeFilter(const ::org::hipparchus::ode::events::ODEEventDetector & a0, const ::org::hipparchus::ode::events::FilterType & a1) : ::org::hipparchus::ode::events::AbstractODEDetector(env->newObject(initializeClass, &mids$, mid_init$_680da09f037488f6, a0.this$, a1.this$)) {}

        jdouble EventSlopeFilter::g(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_c9c83b182b4bb0ba], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventDetector EventSlopeFilter::getDetector() const
        {
          return ::org::hipparchus::ode::events::ODEEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_da847cbf3fa2cbbf]));
        }

        void EventSlopeFilter::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_25005604bcb94d07], a0.this$, a1);
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
        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args);
        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self);
        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data);
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data);
        static PyGetSetDef t_EventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_EventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_EventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_EventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventSlopeFilter)[] = {
          { Py_tp_methods, t_EventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_EventSlopeFilter_init_ },
          { Py_tp_getset, t_EventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::events::AbstractODEDetector),
          NULL
        };

        DEFINE_TYPE(EventSlopeFilter, t_EventSlopeFilter, EventSlopeFilter);
        PyObject *t_EventSlopeFilter::wrap_Object(const EventSlopeFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventSlopeFilter), &PY_TYPE_DEF(EventSlopeFilter), module, "EventSlopeFilter", 0);
        }

        void t_EventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "class_", make_descriptor(EventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "wrapfn_", make_descriptor(t_EventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_EventSlopeFilter::wrap_Object(EventSlopeFilter(((t_EventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);
          ::org::hipparchus::ode::events::FilterType a1((jobject) NULL);
          PyTypeObject **p1;
          EventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, ::org::hipparchus::ode::events::FilterType::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::events::t_FilterType::parameters_))
          {
            INT_CALL(object = EventSlopeFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self)
        {
          ::org::hipparchus::ode::events::ODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(result);
        }

        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/SubCircle.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *SubCircle::class$ = NULL;
          jmethodID *SubCircle::mids$ = NULL;
          bool SubCircle::live$ = false;

          jclass SubCircle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/SubCircle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5428b0a00a62bde3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_split_b587049e19682418] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_35b28ef87fdef21f] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubCircle::SubCircle(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_5428b0a00a62bde3, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubCircle::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_b587049e19682418], a0.this$));
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
          static PyObject *t_SubCircle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubCircle_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubCircle_of_(t_SubCircle *self, PyObject *args);
          static int t_SubCircle_init_(t_SubCircle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubCircle_split(t_SubCircle *self, PyObject *args);
          static PyObject *t_SubCircle_get__parameters_(t_SubCircle *self, void *data);
          static PyGetSetDef t_SubCircle__fields_[] = {
            DECLARE_GET_FIELD(t_SubCircle, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubCircle__methods_[] = {
            DECLARE_METHOD(t_SubCircle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubCircle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubCircle, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubCircle, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubCircle)[] = {
            { Py_tp_methods, t_SubCircle__methods_ },
            { Py_tp_init, (void *) t_SubCircle_init_ },
            { Py_tp_getset, t_SubCircle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubCircle)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubCircle, t_SubCircle, SubCircle);
          PyObject *t_SubCircle::wrap_Object(const SubCircle& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubCircle::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubCircle *self = (t_SubCircle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubCircle::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubCircle::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubCircle *self = (t_SubCircle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubCircle::install(PyObject *module)
          {
            installType(&PY_TYPE(SubCircle), &PY_TYPE_DEF(SubCircle), module, "SubCircle", 0);
          }

          void t_SubCircle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubCircle), "class_", make_descriptor(SubCircle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubCircle), "wrapfn_", make_descriptor(t_SubCircle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubCircle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubCircle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubCircle::initializeClass, 1)))
              return NULL;
            return t_SubCircle::wrap_Object(SubCircle(((t_SubCircle *) arg)->object.this$));
          }
          static PyObject *t_SubCircle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubCircle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubCircle_of_(t_SubCircle *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubCircle_init_(t_SubCircle *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubCircle object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubCircle(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
              self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubCircle_split(t_SubCircle *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D));
            }

            return callSuper(PY_TYPE(SubCircle), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubCircle_get__parameters_(t_SubCircle *self, void *data)
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
#include "org/hipparchus/analysis/function/Pow.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Pow::class$ = NULL;
        jmethodID *Pow::mids$ = NULL;
        bool Pow::live$ = false;

        jclass Pow::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Pow");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Pow::Pow() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Pow::value(jdouble a0, jdouble a1) const
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
        static PyObject *t_Pow_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Pow_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Pow_init_(t_Pow *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Pow_value(t_Pow *self, PyObject *args);

        static PyMethodDef t_Pow__methods_[] = {
          DECLARE_METHOD(t_Pow, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Pow, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Pow, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Pow)[] = {
          { Py_tp_methods, t_Pow__methods_ },
          { Py_tp_init, (void *) t_Pow_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Pow)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Pow, t_Pow, Pow);

        void t_Pow::install(PyObject *module)
        {
          installType(&PY_TYPE(Pow), &PY_TYPE_DEF(Pow), module, "Pow", 0);
        }

        void t_Pow::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Pow), "class_", make_descriptor(Pow::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Pow), "wrapfn_", make_descriptor(t_Pow::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Pow), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Pow_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Pow::initializeClass, 1)))
            return NULL;
          return t_Pow::wrap_Object(Pow(((t_Pow *) arg)->object.this$));
        }
        static PyObject *t_Pow_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Pow::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Pow_init_(t_Pow *self, PyObject *args, PyObject *kwds)
        {
          Pow object((jobject) NULL);

          INT_CALL(object = Pow());
          self->object = object;

          return 0;
        }

        static PyObject *t_Pow_value(t_Pow *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *RangeMode::class$ = NULL;
            jmethodID *RangeMode::mids$ = NULL;
            bool RangeMode::live$ = false;
            RangeMode *RangeMode::COHERENT = NULL;
            RangeMode *RangeMode::CONSTANT = NULL;
            RangeMode *RangeMode::ONE_WAY = NULL;

            jclass RangeMode::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/RangeMode");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_10ff933d7a73fe0d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;");
                mids$[mid_values_d9b2978c77c12a19] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COHERENT = new RangeMode(env->getStaticObjectField(cls, "COHERENT", "Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;"));
                CONSTANT = new RangeMode(env->getStaticObjectField(cls, "CONSTANT", "Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;"));
                ONE_WAY = new RangeMode(env->getStaticObjectField(cls, "ONE_WAY", "Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RangeMode RangeMode::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return RangeMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_10ff933d7a73fe0d], a0.this$));
            }

            JArray< RangeMode > RangeMode::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< RangeMode >(env->callStaticObjectMethod(cls, mids$[mid_values_d9b2978c77c12a19]));
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
            static PyObject *t_RangeMode_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeMode_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeMode_of_(t_RangeMode *self, PyObject *args);
            static PyObject *t_RangeMode_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_RangeMode_values(PyTypeObject *type);
            static PyObject *t_RangeMode_get__parameters_(t_RangeMode *self, void *data);
            static PyGetSetDef t_RangeMode__fields_[] = {
              DECLARE_GET_FIELD(t_RangeMode, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RangeMode__methods_[] = {
              DECLARE_METHOD(t_RangeMode, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeMode, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeMode, of_, METH_VARARGS),
              DECLARE_METHOD(t_RangeMode, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RangeMode, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RangeMode)[] = {
              { Py_tp_methods, t_RangeMode__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_RangeMode__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RangeMode)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(RangeMode, t_RangeMode, RangeMode);
            PyObject *t_RangeMode::wrap_Object(const RangeMode& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeMode::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeMode *self = (t_RangeMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RangeMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeMode::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeMode *self = (t_RangeMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RangeMode::install(PyObject *module)
            {
              installType(&PY_TYPE(RangeMode), &PY_TYPE_DEF(RangeMode), module, "RangeMode", 0);
            }

            void t_RangeMode::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "class_", make_descriptor(RangeMode::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "wrapfn_", make_descriptor(t_RangeMode::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "boxfn_", make_descriptor(boxObject));
              env->getClass(RangeMode::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "COHERENT", make_descriptor(t_RangeMode::wrap_Object(*RangeMode::COHERENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "CONSTANT", make_descriptor(t_RangeMode::wrap_Object(*RangeMode::CONSTANT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "ONE_WAY", make_descriptor(t_RangeMode::wrap_Object(*RangeMode::ONE_WAY)));
            }

            static PyObject *t_RangeMode_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RangeMode::initializeClass, 1)))
                return NULL;
              return t_RangeMode::wrap_Object(RangeMode(((t_RangeMode *) arg)->object.this$));
            }
            static PyObject *t_RangeMode_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RangeMode::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RangeMode_of_(t_RangeMode *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_RangeMode_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              RangeMode result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeMode::valueOf(a0));
                return t_RangeMode::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_RangeMode_values(PyTypeObject *type)
            {
              JArray< RangeMode > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeMode::values());
              return JArray<jobject>(result.this$).wrap(t_RangeMode::wrap_jobject);
            }
            static PyObject *t_RangeMode_get__parameters_(t_RangeMode *self, void *data)
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
#include "org/hipparchus/optim/linear/Relationship.h"
#include "org/hipparchus/optim/linear/Relationship.h"
#include "java/lang/String.h"
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
            mids$[mid_oppositeRelationship_e6c81e0fe5424903] = env->getMethodID(cls, "oppositeRelationship", "()Lorg/hipparchus/optim/linear/Relationship;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
            mids$[mid_valueOf_8a91a3dd974244cd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/linear/Relationship;");
            mids$[mid_values_557e6aca8d38d54f] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/linear/Relationship;");

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
          return Relationship(env->callObjectMethod(this$, mids$[mid_oppositeRelationship_e6c81e0fe5424903]));
        }

        ::java::lang::String Relationship::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
        }

        Relationship Relationship::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Relationship(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8a91a3dd974244cd], a0.this$));
        }

        JArray< Relationship > Relationship::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Relationship >(env->callStaticObjectMethod(cls, mids$[mid_values_557e6aca8d38d54f]));
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
#include "org/hipparchus/distribution/discrete/PoissonDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *PoissonDistribution::class$ = NULL;
        jmethodID *PoissonDistribution::mids$ = NULL;
        bool PoissonDistribution::live$ = false;
        jdouble PoissonDistribution::DEFAULT_EPSILON = (jdouble) 0;
        jint PoissonDistribution::DEFAULT_MAX_ITERATIONS = (jint) 0;

        jclass PoissonDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/PoissonDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_0fd8efd9eecb8663] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_905e65280a4e6722] = env->getMethodID(cls, "<init>", "(DDI)V");
            mids$[mid_cumulativeProbability_ce4c02d583456bc9] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getMean_9981f74b2d109da6] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_ce4c02d583456bc9] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_normalApproximateProbability_ce4c02d583456bc9] = env->getMethodID(cls, "normalApproximateProbability", "(I)D");
            mids$[mid_probability_ce4c02d583456bc9] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
            DEFAULT_MAX_ITERATIONS = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PoissonDistribution::PoissonDistribution(jdouble a0) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        PoissonDistribution::PoissonDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        PoissonDistribution::PoissonDistribution(jdouble a0, jint a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_0fd8efd9eecb8663, a0, a1)) {}

        PoissonDistribution::PoissonDistribution(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_905e65280a4e6722, a0, a1, a2)) {}

        jdouble PoissonDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_ce4c02d583456bc9], a0);
        }

        jdouble PoissonDistribution::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_9981f74b2d109da6]);
        }

        jdouble PoissonDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble PoissonDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jint PoissonDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_d6ab429752e7c267]);
        }

        jint PoissonDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_d6ab429752e7c267]);
        }

        jboolean PoissonDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble PoissonDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_ce4c02d583456bc9], a0);
        }

        jdouble PoissonDistribution::normalApproximateProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_normalApproximateProbability_ce4c02d583456bc9], a0);
        }

        jdouble PoissonDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_ce4c02d583456bc9], a0);
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
        static PyObject *t_PoissonDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PoissonDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PoissonDistribution_init_(t_PoissonDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PoissonDistribution_cumulativeProbability(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getMean(t_PoissonDistribution *self);
        static PyObject *t_PoissonDistribution_getNumericalMean(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getNumericalVariance(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getSupportLowerBound(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getSupportUpperBound(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_isSupportConnected(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_logProbability(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_normalApproximateProbability(t_PoissonDistribution *self, PyObject *arg);
        static PyObject *t_PoissonDistribution_probability(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_get__mean(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__numericalMean(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__numericalVariance(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__supportConnected(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__supportLowerBound(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__supportUpperBound(t_PoissonDistribution *self, void *data);
        static PyGetSetDef t_PoissonDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_PoissonDistribution, mean),
          DECLARE_GET_FIELD(t_PoissonDistribution, numericalMean),
          DECLARE_GET_FIELD(t_PoissonDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_PoissonDistribution, supportConnected),
          DECLARE_GET_FIELD(t_PoissonDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_PoissonDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PoissonDistribution__methods_[] = {
          DECLARE_METHOD(t_PoissonDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PoissonDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PoissonDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getMean, METH_NOARGS),
          DECLARE_METHOD(t_PoissonDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, normalApproximateProbability, METH_O),
          DECLARE_METHOD(t_PoissonDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PoissonDistribution)[] = {
          { Py_tp_methods, t_PoissonDistribution__methods_ },
          { Py_tp_init, (void *) t_PoissonDistribution_init_ },
          { Py_tp_getset, t_PoissonDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PoissonDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(PoissonDistribution, t_PoissonDistribution, PoissonDistribution);

        void t_PoissonDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(PoissonDistribution), &PY_TYPE_DEF(PoissonDistribution), module, "PoissonDistribution", 0);
        }

        void t_PoissonDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "class_", make_descriptor(PoissonDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "wrapfn_", make_descriptor(t_PoissonDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "boxfn_", make_descriptor(boxObject));
          env->getClass(PoissonDistribution::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "DEFAULT_EPSILON", make_descriptor(PoissonDistribution::DEFAULT_EPSILON));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "DEFAULT_MAX_ITERATIONS", make_descriptor(PoissonDistribution::DEFAULT_MAX_ITERATIONS));
        }

        static PyObject *t_PoissonDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PoissonDistribution::initializeClass, 1)))
            return NULL;
          return t_PoissonDistribution::wrap_Object(PoissonDistribution(((t_PoissonDistribution *) arg)->object.this$));
        }
        static PyObject *t_PoissonDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PoissonDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PoissonDistribution_init_(t_PoissonDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = PoissonDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = PoissonDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jint a1;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = PoissonDistribution(a0, a1));
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
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = PoissonDistribution(a0, a1, a2));
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

        static PyObject *t_PoissonDistribution_cumulativeProbability(t_PoissonDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_PoissonDistribution_getMean(t_PoissonDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PoissonDistribution_getNumericalMean(t_PoissonDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_PoissonDistribution_getNumericalVariance(t_PoissonDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_PoissonDistribution_getSupportLowerBound(t_PoissonDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_PoissonDistribution_getSupportUpperBound(t_PoissonDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_PoissonDistribution_isSupportConnected(t_PoissonDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_PoissonDistribution_logProbability(t_PoissonDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_PoissonDistribution_normalApproximateProbability(t_PoissonDistribution *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.normalApproximateProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "normalApproximateProbability", arg);
          return NULL;
        }

        static PyObject *t_PoissonDistribution_probability(t_PoissonDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_PoissonDistribution_get__mean(t_PoissonDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PoissonDistribution_get__numericalMean(t_PoissonDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PoissonDistribution_get__numericalVariance(t_PoissonDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PoissonDistribution_get__supportConnected(t_PoissonDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PoissonDistribution_get__supportLowerBound(t_PoissonDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PoissonDistribution_get__supportUpperBound(t_PoissonDistribution *self, void *data)
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
#include "org/orekit/propagation/PythonFieldPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "java/util/Collection.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldPropagator::class$ = NULL;
      jmethodID *PythonFieldPropagator::mids$ = NULL;
      bool PythonFieldPropagator::live$ = false;

      jclass PythonFieldPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_546488029ed6e282] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_addEventDetector_bb8991c4a46cf56d] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_d751c1a57012b438] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_96c2c30a0b0ad9e4] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_3bfef5c77ceb081a] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_a74be2e38786f3b6] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_f81c0644d57ae495] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_8da2e06aa361bf03] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_1b1a4229447f7bf7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_fb689a9c0f30b938] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_propagate_bcf793a6168805e3] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_8062511934471166] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldPropagator::PythonFieldPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonFieldPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonFieldPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonFieldPropagator::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonFieldPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPropagator_of_(t_PythonFieldPropagator *self, PyObject *args);
      static int t_PythonFieldPropagator_init_(t_PythonFieldPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldPropagator_finalize(t_PythonFieldPropagator *self);
      static PyObject *t_PythonFieldPropagator_pythonExtension(t_PythonFieldPropagator *self, PyObject *args);
      static void JNICALL t_PythonFieldPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonFieldPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldPropagator_get__self(t_PythonFieldPropagator *self, void *data);
      static PyObject *t_PythonFieldPropagator_get__parameters_(t_PythonFieldPropagator *self, void *data);
      static PyGetSetDef t_PythonFieldPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldPropagator, self),
        DECLARE_GET_FIELD(t_PythonFieldPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldPropagator)[] = {
        { Py_tp_methods, t_PythonFieldPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldPropagator_init_ },
        { Py_tp_getset, t_PythonFieldPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldPropagator, t_PythonFieldPropagator, PythonFieldPropagator);
      PyObject *t_PythonFieldPropagator::wrap_Object(const PythonFieldPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPropagator *self = (t_PythonFieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPropagator *self = (t_PythonFieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldPropagator), &PY_TYPE_DEF(PythonFieldPropagator), module, "PythonFieldPropagator", 1);
      }

      void t_PythonFieldPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPropagator), "class_", make_descriptor(PythonFieldPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPropagator), "wrapfn_", make_descriptor(t_PythonFieldPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V", (void *) t_PythonFieldPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonFieldPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonFieldPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonFieldPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;", (void *) t_PythonFieldPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonFieldPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFieldPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonFieldPropagator_getManagedAdditionalStates9 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;", (void *) t_PythonFieldPropagator_getMultiplexer10 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonFieldPropagator_getPVCoordinates11 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonFieldPropagator_isAdditionalStateManaged12 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldPropagator_propagate13 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldPropagator_propagate14 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldPropagator_pythonDecRef15 },
          { "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldPropagator_resetInitialState16 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonFieldPropagator_setAttitudeProvider17 },
        };
        env->registerNatives(cls, methods, 18);
      }

      static PyObject *t_PythonFieldPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldPropagator::wrap_Object(PythonFieldPropagator(((t_PythonFieldPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldPropagator_of_(t_PythonFieldPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldPropagator_init_(t_PythonFieldPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldPropagator object((jobject) NULL);

        INT_CALL(object = PythonFieldPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldPropagator_finalize(t_PythonFieldPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldPropagator_pythonExtension(t_PythonFieldPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonFieldPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldAdditionalStateProvider::wrap_Object(::org::orekit::propagation::FieldAdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonFieldPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonFieldPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonFieldPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldEphemerisGenerator::initializeClass, &value))
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

      static jobject JNICALL t_PythonFieldPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonFieldPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonFieldPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
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

      static jobject JNICALL t_PythonFieldPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonFieldPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer::initializeClass, &value))
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

      static jobject JNICALL t_PythonFieldPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
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

      static jboolean JNICALL t_PythonFieldPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonFieldPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
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

      static jobject JNICALL t_PythonFieldPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
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

      static void JNICALL t_PythonFieldPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonFieldPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static PyObject *t_PythonFieldPropagator_get__self(t_PythonFieldPropagator *self, void *data)
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
      static PyObject *t_PythonFieldPropagator_get__parameters_(t_PythonFieldPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/section/Metadata.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Segment::class$ = NULL;
          jmethodID *Segment::mids$ = NULL;
          bool Segment::live$ = false;

          jclass Segment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Segment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6c1a2ee615847bb0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/Metadata;Lorg/orekit/files/ccsds/section/Data;)V");
              mids$[mid_getData_22e854ccc3ba3151] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/section/Data;");
              mids$[mid_getMetadata_3af04d0d4d9a14d0] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/section/Metadata;");
              mids$[mid_setMetadata_c117834a0067c87c] = env->getMethodID(cls, "setMetadata", "(Lorg/orekit/files/ccsds/section/Metadata;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Segment::Segment(const ::org::orekit::files::ccsds::section::Metadata & a0, const ::org::orekit::files::ccsds::section::Data & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6c1a2ee615847bb0, a0.this$, a1.this$)) {}

          ::org::orekit::files::ccsds::section::Data Segment::getData() const
          {
            return ::org::orekit::files::ccsds::section::Data(env->callObjectMethod(this$, mids$[mid_getData_22e854ccc3ba3151]));
          }

          ::org::orekit::files::ccsds::section::Metadata Segment::getMetadata() const
          {
            return ::org::orekit::files::ccsds::section::Metadata(env->callObjectMethod(this$, mids$[mid_getMetadata_3af04d0d4d9a14d0]));
          }

          void Segment::setMetadata(const ::org::orekit::files::ccsds::section::Metadata & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMetadata_c117834a0067c87c], a0.this$);
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
          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_of_(t_Segment *self, PyObject *args);
          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Segment_getData(t_Segment *self);
          static PyObject *t_Segment_getMetadata(t_Segment *self);
          static PyObject *t_Segment_setMetadata(t_Segment *self, PyObject *arg);
          static PyObject *t_Segment_get__data(t_Segment *self, void *data);
          static PyObject *t_Segment_get__metadata(t_Segment *self, void *data);
          static int t_Segment_set__metadata(t_Segment *self, PyObject *arg, void *data);
          static PyObject *t_Segment_get__parameters_(t_Segment *self, void *data);
          static PyGetSetDef t_Segment__fields_[] = {
            DECLARE_GET_FIELD(t_Segment, data),
            DECLARE_GETSET_FIELD(t_Segment, metadata),
            DECLARE_GET_FIELD(t_Segment, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Segment__methods_[] = {
            DECLARE_METHOD(t_Segment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, of_, METH_VARARGS),
            DECLARE_METHOD(t_Segment, getData, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getMetadata, METH_NOARGS),
            DECLARE_METHOD(t_Segment, setMetadata, METH_O),
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
          PyObject *t_Segment::wrap_Object(const Segment& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Segment::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Segment *self = (t_Segment *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Segment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Segment::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Segment *self = (t_Segment *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

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

          static PyObject *t_Segment_of_(t_Segment *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::section::Metadata a0((jobject) NULL);
            ::org::orekit::files::ccsds::section::Data a1((jobject) NULL);
            Segment object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::section::Metadata::initializeClass, ::org::orekit::files::ccsds::section::Data::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Segment(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Segment_getData(t_Segment *self)
          {
            ::org::orekit::files::ccsds::section::Data result((jobject) NULL);
            OBJ_CALL(result = self->object.getData());
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::files::ccsds::section::t_Data::wrap_Object(result);
          }

          static PyObject *t_Segment_getMetadata(t_Segment *self)
          {
            ::org::orekit::files::ccsds::section::Metadata result((jobject) NULL);
            OBJ_CALL(result = self->object.getMetadata());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Metadata::wrap_Object(result);
          }

          static PyObject *t_Segment_setMetadata(t_Segment *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::section::Metadata a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Metadata::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setMetadata(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMetadata", arg);
            return NULL;
          }
          static PyObject *t_Segment_get__parameters_(t_Segment *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Segment_get__data(t_Segment *self, void *data)
          {
            ::org::orekit::files::ccsds::section::Data value((jobject) NULL);
            OBJ_CALL(value = self->object.getData());
            return ::org::orekit::files::ccsds::section::t_Data::wrap_Object(value);
          }

          static PyObject *t_Segment_get__metadata(t_Segment *self, void *data)
          {
            ::org::orekit::files::ccsds::section::Metadata value((jobject) NULL);
            OBJ_CALL(value = self->object.getMetadata());
            return ::org::orekit::files::ccsds::section::t_Metadata::wrap_Object(value);
          }
          static int t_Segment_set__metadata(t_Segment *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::section::Metadata value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Metadata::initializeClass, &value))
              {
                INT_CALL(self->object.setMetadata(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "metadata", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonAbstractMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonAbstractMeasurement::class$ = NULL;
        jmethodID *PythonAbstractMeasurement::mids$ = NULL;
        bool PythonAbstractMeasurement::live$ = false;

        jclass PythonAbstractMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonAbstractMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1960ea2732bb7cd6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLjava/util/List;)V");
            mids$[mid_addParameterDriver_680e005705d5f0aa] = env->getMethodID(cls, "addParameterDriver", "(Lorg/orekit/utils/ParameterDriver;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractMeasurement::PythonAbstractMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::java::util::List & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_1960ea2732bb7cd6, a0.this$, a1, a2, a3, a4.this$)) {}

        void PythonAbstractMeasurement::addParameterDriver(const ::org::orekit::utils::ParameterDriver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addParameterDriver_680e005705d5f0aa], a0.this$);
        }

        void PythonAbstractMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAbstractMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAbstractMeasurement::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        static PyObject *t_PythonAbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractMeasurement_of_(t_PythonAbstractMeasurement *self, PyObject *args);
        static int t_PythonAbstractMeasurement_init_(t_PythonAbstractMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractMeasurement_addParameterDriver(t_PythonAbstractMeasurement *self, PyObject *arg);
        static PyObject *t_PythonAbstractMeasurement_finalize(t_PythonAbstractMeasurement *self);
        static PyObject *t_PythonAbstractMeasurement_pythonExtension(t_PythonAbstractMeasurement *self, PyObject *args);
        static void JNICALL t_PythonAbstractMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static PyObject *t_PythonAbstractMeasurement_get__self(t_PythonAbstractMeasurement *self, void *data);
        static PyObject *t_PythonAbstractMeasurement_get__parameters_(t_PythonAbstractMeasurement *self, void *data);
        static PyGetSetDef t_PythonAbstractMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractMeasurement, self),
          DECLARE_GET_FIELD(t_PythonAbstractMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, addParameterDriver, METH_O),
          DECLARE_METHOD(t_PythonAbstractMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMeasurement)[] = {
          { Py_tp_methods, t_PythonAbstractMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractMeasurement_init_ },
          { Py_tp_getset, t_PythonAbstractMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(PythonAbstractMeasurement, t_PythonAbstractMeasurement, PythonAbstractMeasurement);
        PyObject *t_PythonAbstractMeasurement::wrap_Object(const PythonAbstractMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractMeasurement *self = (t_PythonAbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonAbstractMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractMeasurement *self = (t_PythonAbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonAbstractMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractMeasurement), &PY_TYPE_DEF(PythonAbstractMeasurement), module, "PythonAbstractMeasurement", 1);
        }

        void t_PythonAbstractMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurement), "class_", make_descriptor(PythonAbstractMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurement), "wrapfn_", make_descriptor(t_PythonAbstractMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonAbstractMeasurement_pythonDecRef0 },
            { "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonAbstractMeasurement_theoreticalEvaluation1 },
            { "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;", (void *) t_PythonAbstractMeasurement_theoreticalEvaluationWithoutDerivatives2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractMeasurement::wrap_Object(PythonAbstractMeasurement(((t_PythonAbstractMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonAbstractMeasurement_of_(t_PythonAbstractMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonAbstractMeasurement_init_(t_PythonAbstractMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jdouble a3;
          ::java::util::List a4((jobject) NULL);
          PyTypeObject **p4;
          PythonAbstractMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kDDDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = PythonAbstractMeasurement(a0, a1, a2, a3, a4));
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

        static PyObject *t_PythonAbstractMeasurement_addParameterDriver(t_PythonAbstractMeasurement *self, PyObject *arg)
        {
          ::org::orekit::utils::ParameterDriver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addParameterDriver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addParameterDriver", arg);
          return NULL;
        }

        static PyObject *t_PythonAbstractMeasurement_finalize(t_PythonAbstractMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractMeasurement_pythonExtension(t_PythonAbstractMeasurement *self, PyObject *args)
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

        static void JNICALL t_PythonAbstractMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluation", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluation", result);
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

        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluationWithoutDerivatives", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluationWithoutDerivatives", result);
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

        static PyObject *t_PythonAbstractMeasurement_get__self(t_PythonAbstractMeasurement *self, void *data)
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
        static PyObject *t_PythonAbstractMeasurement_get__parameters_(t_PythonAbstractMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/MaxIter.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/MaxIter.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *MaxIter::class$ = NULL;
      jmethodID *MaxIter::mids$ = NULL;
      bool MaxIter::live$ = false;

      jclass MaxIter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/MaxIter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_getMaxIter_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIter", "()I");
          mids$[mid_unlimited_2e9af20eca3f586d] = env->getStaticMethodID(cls, "unlimited", "()Lorg/hipparchus/optim/MaxIter;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MaxIter::MaxIter(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      jint MaxIter::getMaxIter() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIter_d6ab429752e7c267]);
      }

      MaxIter MaxIter::unlimited()
      {
        jclass cls = env->getClass(initializeClass);
        return MaxIter(env->callStaticObjectMethod(cls, mids$[mid_unlimited_2e9af20eca3f586d]));
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
      static PyObject *t_MaxIter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MaxIter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MaxIter_init_(t_MaxIter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MaxIter_getMaxIter(t_MaxIter *self);
      static PyObject *t_MaxIter_unlimited(PyTypeObject *type);
      static PyObject *t_MaxIter_get__maxIter(t_MaxIter *self, void *data);
      static PyGetSetDef t_MaxIter__fields_[] = {
        DECLARE_GET_FIELD(t_MaxIter, maxIter),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MaxIter__methods_[] = {
        DECLARE_METHOD(t_MaxIter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxIter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxIter, getMaxIter, METH_NOARGS),
        DECLARE_METHOD(t_MaxIter, unlimited, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MaxIter)[] = {
        { Py_tp_methods, t_MaxIter__methods_ },
        { Py_tp_init, (void *) t_MaxIter_init_ },
        { Py_tp_getset, t_MaxIter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MaxIter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MaxIter, t_MaxIter, MaxIter);

      void t_MaxIter::install(PyObject *module)
      {
        installType(&PY_TYPE(MaxIter), &PY_TYPE_DEF(MaxIter), module, "MaxIter", 0);
      }

      void t_MaxIter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxIter), "class_", make_descriptor(MaxIter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxIter), "wrapfn_", make_descriptor(t_MaxIter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxIter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MaxIter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MaxIter::initializeClass, 1)))
          return NULL;
        return t_MaxIter::wrap_Object(MaxIter(((t_MaxIter *) arg)->object.this$));
      }
      static PyObject *t_MaxIter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MaxIter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MaxIter_init_(t_MaxIter *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        MaxIter object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = MaxIter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MaxIter_getMaxIter(t_MaxIter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIter());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MaxIter_unlimited(PyTypeObject *type)
      {
        MaxIter result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::optim::MaxIter::unlimited());
        return t_MaxIter::wrap_Object(result);
      }

      static PyObject *t_MaxIter_get__maxIter(t_MaxIter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIter());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/AstronomicalAmplitudeReader.h"
#include "java/util/Map.h"
#include "java/io/IOException.h"
#include "java/lang/Integer.h"
#include "java/io/InputStream.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *AstronomicalAmplitudeReader::class$ = NULL;
          jmethodID *AstronomicalAmplitudeReader::mids$ = NULL;
          bool AstronomicalAmplitudeReader::live$ = false;

          jclass AstronomicalAmplitudeReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/AstronomicalAmplitudeReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1acfd732a1e09736] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;IIID)V");
              mids$[mid_getAstronomicalAmplitudesMap_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getAstronomicalAmplitudesMap", "()Ljava/util/Map;");
              mids$[mid_getSupportedNames_d2c8eb4129821f0e] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_stillAcceptsData_eee3de00fe971136] = env->getMethodID(cls, "stillAcceptsData", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AstronomicalAmplitudeReader::AstronomicalAmplitudeReader(const ::java::lang::String & a0, jint a1, jint a2, jint a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1acfd732a1e09736, a0.this$, a1, a2, a3, a4)) {}

          ::java::util::Map AstronomicalAmplitudeReader::getAstronomicalAmplitudesMap() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getAstronomicalAmplitudesMap_dbcb8bbac6b35e0d]));
          }

          ::java::lang::String AstronomicalAmplitudeReader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_d2c8eb4129821f0e]));
          }

          void AstronomicalAmplitudeReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
          }

          jboolean AstronomicalAmplitudeReader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_eee3de00fe971136]);
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
          static PyObject *t_AstronomicalAmplitudeReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AstronomicalAmplitudeReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AstronomicalAmplitudeReader_init_(t_AstronomicalAmplitudeReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AstronomicalAmplitudeReader_getAstronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self);
          static PyObject *t_AstronomicalAmplitudeReader_getSupportedNames(t_AstronomicalAmplitudeReader *self);
          static PyObject *t_AstronomicalAmplitudeReader_loadData(t_AstronomicalAmplitudeReader *self, PyObject *args);
          static PyObject *t_AstronomicalAmplitudeReader_stillAcceptsData(t_AstronomicalAmplitudeReader *self);
          static PyObject *t_AstronomicalAmplitudeReader_get__astronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self, void *data);
          static PyObject *t_AstronomicalAmplitudeReader_get__supportedNames(t_AstronomicalAmplitudeReader *self, void *data);
          static PyGetSetDef t_AstronomicalAmplitudeReader__fields_[] = {
            DECLARE_GET_FIELD(t_AstronomicalAmplitudeReader, astronomicalAmplitudesMap),
            DECLARE_GET_FIELD(t_AstronomicalAmplitudeReader, supportedNames),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AstronomicalAmplitudeReader__methods_[] = {
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, getAstronomicalAmplitudesMap, METH_NOARGS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AstronomicalAmplitudeReader)[] = {
            { Py_tp_methods, t_AstronomicalAmplitudeReader__methods_ },
            { Py_tp_init, (void *) t_AstronomicalAmplitudeReader_init_ },
            { Py_tp_getset, t_AstronomicalAmplitudeReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AstronomicalAmplitudeReader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AstronomicalAmplitudeReader, t_AstronomicalAmplitudeReader, AstronomicalAmplitudeReader);

          void t_AstronomicalAmplitudeReader::install(PyObject *module)
          {
            installType(&PY_TYPE(AstronomicalAmplitudeReader), &PY_TYPE_DEF(AstronomicalAmplitudeReader), module, "AstronomicalAmplitudeReader", 0);
          }

          void t_AstronomicalAmplitudeReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AstronomicalAmplitudeReader), "class_", make_descriptor(AstronomicalAmplitudeReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AstronomicalAmplitudeReader), "wrapfn_", make_descriptor(t_AstronomicalAmplitudeReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AstronomicalAmplitudeReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AstronomicalAmplitudeReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AstronomicalAmplitudeReader::initializeClass, 1)))
              return NULL;
            return t_AstronomicalAmplitudeReader::wrap_Object(AstronomicalAmplitudeReader(((t_AstronomicalAmplitudeReader *) arg)->object.this$));
          }
          static PyObject *t_AstronomicalAmplitudeReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AstronomicalAmplitudeReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AstronomicalAmplitudeReader_init_(t_AstronomicalAmplitudeReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jdouble a4;
            AstronomicalAmplitudeReader object((jobject) NULL);

            if (!parseArgs(args, "sIIID", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AstronomicalAmplitudeReader(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AstronomicalAmplitudeReader_getAstronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getAstronomicalAmplitudesMap());
            return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_AstronomicalAmplitudeReader_getSupportedNames(t_AstronomicalAmplitudeReader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_AstronomicalAmplitudeReader_loadData(t_AstronomicalAmplitudeReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "loadData", args);
            return NULL;
          }

          static PyObject *t_AstronomicalAmplitudeReader_stillAcceptsData(t_AstronomicalAmplitudeReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_AstronomicalAmplitudeReader_get__astronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getAstronomicalAmplitudesMap());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_AstronomicalAmplitudeReader_get__supportedNames(t_AstronomicalAmplitudeReader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$StringConsumer::class$ = NULL;
            jmethodID *ParseToken$StringConsumer::mids$ = NULL;
            bool ParseToken$StringConsumer::live$ = false;

            jclass ParseToken$StringConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_105e1eadb709d9ac] = env->getMethodID(cls, "accept", "(Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$StringConsumer::accept(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_105e1eadb709d9ac], a0.this$);
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
            static PyObject *t_ParseToken$StringConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringConsumer_accept(t_ParseToken$StringConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$StringConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$StringConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$StringConsumer)[] = {
              { Py_tp_methods, t_ParseToken$StringConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$StringConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$StringConsumer, t_ParseToken$StringConsumer, ParseToken$StringConsumer);

            void t_ParseToken$StringConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$StringConsumer), &PY_TYPE_DEF(ParseToken$StringConsumer), module, "ParseToken$StringConsumer", 0);
            }

            void t_ParseToken$StringConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringConsumer), "class_", make_descriptor(ParseToken$StringConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringConsumer), "wrapfn_", make_descriptor(t_ParseToken$StringConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$StringConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$StringConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$StringConsumer::wrap_Object(ParseToken$StringConsumer(((t_ParseToken$StringConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$StringConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$StringConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$StringConsumer_accept(t_ParseToken$StringConsumer *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ManeuverKey::class$ = NULL;
              jmethodID *ManeuverKey::mids$ = NULL;
              bool ManeuverKey::live$ = false;
              ManeuverKey *ManeuverKey::COMMENT = NULL;
              ManeuverKey *ManeuverKey::MAN_DELTA_MASS = NULL;
              ManeuverKey *ManeuverKey::MAN_DURATION = NULL;
              ManeuverKey *ManeuverKey::MAN_EPOCH_START = NULL;
              ManeuverKey *ManeuverKey::MAN_REF_FRAME = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_1 = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_2 = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_3 = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_X = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_Y = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_Z = NULL;

              jclass ManeuverKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_def825f4e8dc66b1] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/Maneuver;)Z");
                  mids$[mid_valueOf_09947752224ae663] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;");
                  mids$[mid_values_8f45acb52cc32df9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new ManeuverKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_DELTA_MASS = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DELTA_MASS", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_DURATION = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DURATION", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_EPOCH_START = new ManeuverKey(env->getStaticObjectField(cls, "MAN_EPOCH_START", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_REF_FRAME = new ManeuverKey(env->getStaticObjectField(cls, "MAN_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_1 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_1", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_2 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_2", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_3 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_3", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_X = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_X", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_Y = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_Y", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_Z = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_Z", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean ManeuverKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_def825f4e8dc66b1], a0.this$, a1.this$, a2.this$);
              }

              ManeuverKey ManeuverKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManeuverKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_09947752224ae663], a0.this$));
              }

              JArray< ManeuverKey > ManeuverKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManeuverKey >(env->callStaticObjectMethod(cls, mids$[mid_values_8f45acb52cc32df9]));
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
            namespace apm {
              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManeuverKey_values(PyTypeObject *type);
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data);
              static PyGetSetDef t_ManeuverKey__fields_[] = {
                DECLARE_GET_FIELD(t_ManeuverKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManeuverKey__methods_[] = {
                DECLARE_METHOD(t_ManeuverKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, process, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManeuverKey)[] = {
                { Py_tp_methods, t_ManeuverKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManeuverKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManeuverKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManeuverKey, t_ManeuverKey, ManeuverKey);
              PyObject *t_ManeuverKey::wrap_Object(const ManeuverKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManeuverKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManeuverKey::install(PyObject *module)
              {
                installType(&PY_TYPE(ManeuverKey), &PY_TYPE_DEF(ManeuverKey), module, "ManeuverKey", 0);
              }

              void t_ManeuverKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "class_", make_descriptor(ManeuverKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "wrapfn_", make_descriptor(t_ManeuverKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManeuverKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "COMMENT", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DELTA_MASS", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DELTA_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DURATION", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_EPOCH_START", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_EPOCH_START)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_REF_FRAME", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_1", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_2", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_3", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_X", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_Y", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_Z", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_Z)));
              }

              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManeuverKey::initializeClass, 1)))
                  return NULL;
                return t_ManeuverKey::wrap_Object(ManeuverKey(((t_ManeuverKey *) arg)->object.this$));
              }
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManeuverKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManeuverKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ManeuverKey::valueOf(a0));
                  return t_ManeuverKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManeuverKey_values(PyTypeObject *type)
              {
                JArray< ManeuverKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ManeuverKey::values());
                return JArray<jobject>(result.this$).wrap(t_ManeuverKey::wrap_jobject);
              }
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data)
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
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/orekit/models/earth/GeoMagneticElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticField::class$ = NULL;
        jmethodID *GeoMagneticField::mids$ = NULL;
        bool GeoMagneticField::live$ = false;

        jclass GeoMagneticField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_calculateField_7b281ab1819631ec] = env->getMethodID(cls, "calculateField", "(DDD)Lorg/orekit/models/earth/GeoMagneticElements;");
            mids$[mid_getDecimalYear_d692aeb156453fed] = env->getStaticMethodID(cls, "getDecimalYear", "(III)D");
            mids$[mid_getEpoch_9981f74b2d109da6] = env->getMethodID(cls, "getEpoch", "()D");
            mids$[mid_getModelName_d2c8eb4129821f0e] = env->getMethodID(cls, "getModelName", "()Ljava/lang/String;");
            mids$[mid_supportsTimeTransform_eee3de00fe971136] = env->getMethodID(cls, "supportsTimeTransform", "()Z");
            mids$[mid_transformModel_5fbf1330f033ba72] = env->getMethodID(cls, "transformModel", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_transformModel_5b65d0d05bf28ecf] = env->getMethodID(cls, "transformModel", "(Lorg/orekit/models/earth/GeoMagneticField;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_validFrom_9981f74b2d109da6] = env->getMethodID(cls, "validFrom", "()D");
            mids$[mid_validTo_9981f74b2d109da6] = env->getMethodID(cls, "validTo", "()D");
            mids$[mid_setMainFieldCoefficients_c65d45c928e07977] = env->getMethodID(cls, "setMainFieldCoefficients", "(IIDD)V");
            mids$[mid_setSecularVariationCoefficients_c65d45c928e07977] = env->getMethodID(cls, "setSecularVariationCoefficients", "(IIDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::GeoMagneticElements GeoMagneticField::calculateField(jdouble a0, jdouble a1, jdouble a2) const
        {
          return ::org::orekit::models::earth::GeoMagneticElements(env->callObjectMethod(this$, mids$[mid_calculateField_7b281ab1819631ec], a0, a1, a2));
        }

        jdouble GeoMagneticField::getDecimalYear(jint a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_getDecimalYear_d692aeb156453fed], a0, a1, a2);
        }

        jdouble GeoMagneticField::getEpoch() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEpoch_9981f74b2d109da6]);
        }

        ::java::lang::String GeoMagneticField::getModelName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getModelName_d2c8eb4129821f0e]));
        }

        jboolean GeoMagneticField::supportsTimeTransform() const
        {
          return env->callBooleanMethod(this$, mids$[mid_supportsTimeTransform_eee3de00fe971136]);
        }

        GeoMagneticField GeoMagneticField::transformModel(jdouble a0) const
        {
          return GeoMagneticField(env->callObjectMethod(this$, mids$[mid_transformModel_5fbf1330f033ba72], a0));
        }

        GeoMagneticField GeoMagneticField::transformModel(const GeoMagneticField & a0, jdouble a1) const
        {
          return GeoMagneticField(env->callObjectMethod(this$, mids$[mid_transformModel_5b65d0d05bf28ecf], a0.this$, a1));
        }

        jdouble GeoMagneticField::validFrom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_validFrom_9981f74b2d109da6]);
        }

        jdouble GeoMagneticField::validTo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_validTo_9981f74b2d109da6]);
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
        static PyObject *t_GeoMagneticField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticField_calculateField(t_GeoMagneticField *self, PyObject *args);
        static PyObject *t_GeoMagneticField_getDecimalYear(PyTypeObject *type, PyObject *args);
        static PyObject *t_GeoMagneticField_getEpoch(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_getModelName(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_supportsTimeTransform(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_transformModel(t_GeoMagneticField *self, PyObject *args);
        static PyObject *t_GeoMagneticField_validFrom(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_validTo(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_get__epoch(t_GeoMagneticField *self, void *data);
        static PyObject *t_GeoMagneticField_get__modelName(t_GeoMagneticField *self, void *data);
        static PyGetSetDef t_GeoMagneticField__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticField, epoch),
          DECLARE_GET_FIELD(t_GeoMagneticField, modelName),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticField__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticField, calculateField, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticField, getDecimalYear, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticField, getEpoch, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, getModelName, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, supportsTimeTransform, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, transformModel, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticField, validFrom, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, validTo, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticField)[] = {
          { Py_tp_methods, t_GeoMagneticField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GeoMagneticField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticField, t_GeoMagneticField, GeoMagneticField);

        void t_GeoMagneticField::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticField), &PY_TYPE_DEF(GeoMagneticField), module, "GeoMagneticField", 0);
        }

        void t_GeoMagneticField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticField), "class_", make_descriptor(GeoMagneticField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticField), "wrapfn_", make_descriptor(t_GeoMagneticField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticField::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticField::wrap_Object(GeoMagneticField(((t_GeoMagneticField *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticField_calculateField(t_GeoMagneticField *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          ::org::orekit::models::earth::GeoMagneticElements result((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.calculateField(a0, a1, a2));
            return ::org::orekit::models::earth::t_GeoMagneticElements::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "calculateField", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticField_getDecimalYear(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticField::getDecimalYear(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "getDecimalYear", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticField_getEpoch(t_GeoMagneticField *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEpoch());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticField_getModelName(t_GeoMagneticField *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getModelName());
          return j2p(result);
        }

        static PyObject *t_GeoMagneticField_supportsTimeTransform(t_GeoMagneticField *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.supportsTimeTransform());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_GeoMagneticField_transformModel(t_GeoMagneticField *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              GeoMagneticField result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.transformModel(a0));
                return t_GeoMagneticField::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              GeoMagneticField a0((jobject) NULL);
              jdouble a1;
              GeoMagneticField result((jobject) NULL);

              if (!parseArgs(args, "kD", GeoMagneticField::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformModel(a0, a1));
                return t_GeoMagneticField::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformModel", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticField_validFrom(t_GeoMagneticField *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.validFrom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticField_validTo(t_GeoMagneticField *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.validTo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticField_get__epoch(t_GeoMagneticField *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEpoch());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticField_get__modelName(t_GeoMagneticField *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getModelName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *SBASPropagator::class$ = NULL;
          jmethodID *SBASPropagator::mids$ = NULL;
          bool SBASPropagator::live$ = false;

          jclass SBASPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/SBASPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getECEF_cb151471db4570f0] = env->getMethodID(cls, "getECEF", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getECI_cb151471db4570f0] = env->getMethodID(cls, "getECI", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_9981f74b2d109da6] = env->getMethodID(cls, "getMU", "()D");
              mids$[mid_getSBASOrbitalElements_70bd4317478750a1] = env->getMethodID(cls, "getSBASOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/SBASOrbitalElements;");
              mids$[mid_propagateInEcef_37ec40ec795d4b0a] = env->getMethodID(cls, "propagateInEcef", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_getMass_209f08246d708042] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_propagateOrbit_776cca2e85dfe61d] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
              mids$[mid_resetIntermediateState_b69b5541e48d21c0] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame SBASPropagator::getECEF() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECEF_cb151471db4570f0]));
          }

          ::org::orekit::frames::Frame SBASPropagator::getECI() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECI_cb151471db4570f0]));
          }

          ::org::orekit::frames::Frame SBASPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
          }

          jdouble SBASPropagator::getMU() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMU_9981f74b2d109da6]);
          }

          ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements SBASPropagator::getSBASOrbitalElements() const
          {
            return ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements(env->callObjectMethod(this$, mids$[mid_getSBASOrbitalElements_70bd4317478750a1]));
          }

          ::org::orekit::utils::PVCoordinates SBASPropagator::propagateInEcef(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_propagateInEcef_37ec40ec795d4b0a], a0.this$));
          }

          void SBASPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_72b846eb87f3af9a], a0.this$);
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
          static PyObject *t_SBASPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SBASPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SBASPropagator_getECEF(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_getECI(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_getFrame(t_SBASPropagator *self, PyObject *args);
          static PyObject *t_SBASPropagator_getMU(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_getSBASOrbitalElements(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_propagateInEcef(t_SBASPropagator *self, PyObject *arg);
          static PyObject *t_SBASPropagator_resetInitialState(t_SBASPropagator *self, PyObject *args);
          static PyObject *t_SBASPropagator_get__eCEF(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__eCI(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__frame(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__mU(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__sBASOrbitalElements(t_SBASPropagator *self, void *data);
          static PyGetSetDef t_SBASPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_SBASPropagator, eCEF),
            DECLARE_GET_FIELD(t_SBASPropagator, eCI),
            DECLARE_GET_FIELD(t_SBASPropagator, frame),
            DECLARE_GET_FIELD(t_SBASPropagator, mU),
            DECLARE_GET_FIELD(t_SBASPropagator, sBASOrbitalElements),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SBASPropagator__methods_[] = {
            DECLARE_METHOD(t_SBASPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagator, getECEF, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, getECI, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_SBASPropagator, getMU, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, getSBASOrbitalElements, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, propagateInEcef, METH_O),
            DECLARE_METHOD(t_SBASPropagator, resetInitialState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SBASPropagator)[] = {
            { Py_tp_methods, t_SBASPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SBASPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SBASPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(SBASPropagator, t_SBASPropagator, SBASPropagator);

          void t_SBASPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(SBASPropagator), &PY_TYPE_DEF(SBASPropagator), module, "SBASPropagator", 0);
          }

          void t_SBASPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagator), "class_", make_descriptor(SBASPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagator), "wrapfn_", make_descriptor(t_SBASPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SBASPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SBASPropagator::initializeClass, 1)))
              return NULL;
            return t_SBASPropagator::wrap_Object(SBASPropagator(((t_SBASPropagator *) arg)->object.this$));
          }
          static PyObject *t_SBASPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SBASPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SBASPropagator_getECEF(t_SBASPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_SBASPropagator_getECI(t_SBASPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_SBASPropagator_getFrame(t_SBASPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SBASPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_SBASPropagator_getMU(t_SBASPropagator *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SBASPropagator_getSBASOrbitalElements(t_SBASPropagator *self)
          {
            ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements result((jobject) NULL);
            OBJ_CALL(result = self->object.getSBASOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_SBASOrbitalElements::wrap_Object(result);
          }

          static PyObject *t_SBASPropagator_propagateInEcef(t_SBASPropagator *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagateInEcef(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateInEcef", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagator_resetInitialState(t_SBASPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SBASPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_SBASPropagator_get__eCEF(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_SBASPropagator_get__eCI(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_SBASPropagator_get__frame(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_SBASPropagator_get__mU(t_SBASPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SBASPropagator_get__sBASOrbitalElements(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements value((jobject) NULL);
            OBJ_CALL(value = self->object.getSBASOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_SBASOrbitalElements::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventState.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventState$EventOccurrence.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventState::class$ = NULL;
        jmethodID *FieldEventState::mids$ = NULL;
        bool FieldEventState::live$ = false;

        jclass FieldEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bb8991c4a46cf56d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_doEvent_51a1afdc630db44c] = env->getMethodID(cls, "doEvent", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/events/FieldEventState$EventOccurrence;");
            mids$[mid_evaluateStep_321a11228d45c3a6] = env->getMethodID(cls, "evaluateStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)Z");
            mids$[mid_getEventDate_1fea28374011eef5] = env->getMethodID(cls, "getEventDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getEventDetector_3146cd1129cf853c] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_getPendingEvent_eee3de00fe971136] = env->getMethodID(cls, "getPendingEvent", "()Z");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_reinitializeBegin_33c76379cdb8499a] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_tryAdvance_af3e718ba412502f] = env->getMethodID(cls, "tryAdvance", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventState::FieldEventState(const ::org::orekit::propagation::events::FieldEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb8991c4a46cf56d, a0.this$)) {}

        ::org::orekit::propagation::events::FieldEventState$EventOccurrence FieldEventState::doEvent(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::orekit::propagation::events::FieldEventState$EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_51a1afdc630db44c], a0.this$));
        }

        jboolean FieldEventState::evaluateStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_321a11228d45c3a6], a0.this$);
        }

        ::org::orekit::time::FieldAbsoluteDate FieldEventState::getEventDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEventDate_1fea28374011eef5]));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventState::getEventDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_3146cd1129cf853c]));
        }

        jboolean FieldEventState::getPendingEvent() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getPendingEvent_eee3de00fe971136]);
        }

        void FieldEventState::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
        }

        void FieldEventState::reinitializeBegin(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_33c76379cdb8499a], a0.this$);
        }

        jboolean FieldEventState::tryAdvance(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_af3e718ba412502f], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args);
        static int t_FieldEventState_init_(t_FieldEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_getEventDate(t_FieldEventState *self);
        static PyObject *t_FieldEventState_getEventDetector(t_FieldEventState *self);
        static PyObject *t_FieldEventState_getPendingEvent(t_FieldEventState *self);
        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_reinitializeBegin(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_tryAdvance(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_get__eventDate(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__eventDetector(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__pendingEvent(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data);
        static PyGetSetDef t_FieldEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventState, eventDate),
          DECLARE_GET_FIELD(t_FieldEventState, eventDetector),
          DECLARE_GET_FIELD(t_FieldEventState, pendingEvent),
          DECLARE_GET_FIELD(t_FieldEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventState__methods_[] = {
          DECLARE_METHOD(t_FieldEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldEventState, getEventDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, getPendingEvent, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_FieldEventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventState)[] = {
          { Py_tp_methods, t_FieldEventState__methods_ },
          { Py_tp_init, (void *) t_FieldEventState_init_ },
          { Py_tp_getset, t_FieldEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventState, t_FieldEventState, FieldEventState);
        PyObject *t_FieldEventState::wrap_Object(const FieldEventState& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldEventState::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventState), &PY_TYPE_DEF(FieldEventState), module, "FieldEventState", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "EventOccurrence", make_descriptor(&PY_TYPE_DEF(FieldEventState$EventOccurrence)));
        }

        void t_FieldEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "class_", make_descriptor(FieldEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "wrapfn_", make_descriptor(t_FieldEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventState::initializeClass, 1)))
            return NULL;
          return t_FieldEventState::wrap_Object(FieldEventState(((t_FieldEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventState_init_(t_FieldEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldEventState object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            INT_CALL(object = FieldEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldEventState$EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::orekit::propagation::events::t_FieldEventState$EventOccurrence::wrap_Object(result, self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_getEventDate(t_FieldEventState *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldEventState_getEventDetector(t_FieldEventState *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result);
        }

        static PyObject *t_FieldEventState_getPendingEvent(t_FieldEventState *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getPendingEvent());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args)
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

        static PyObject *t_FieldEventState_reinitializeBegin(t_FieldEventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_tryAdvance(t_FieldEventState *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventState_get__eventDate(t_FieldEventState *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldEventState_get__eventDetector(t_FieldEventState *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldEventState_get__pendingEvent(t_FieldEventState *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getPendingEvent());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *SigmaEigenvectorsCovariance::class$ = NULL;
            jmethodID *SigmaEigenvectorsCovariance::mids$ = NULL;
            bool SigmaEigenvectorsCovariance::live$ = false;

            jclass SigmaEigenvectorsCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b35db77cae58639e] = env->getMethodID(cls, "<init>", "(Z)V");
                mids$[mid_getCsig3eigvec3_be783177b060994b] = env->getMethodID(cls, "getCsig3eigvec3", "()[D");
                mids$[mid_isAltCovFlagSet_eee3de00fe971136] = env->getMethodID(cls, "isAltCovFlagSet", "()Z");
                mids$[mid_setCsig3eigvec3_a71c45509eaf92d1] = env->getMethodID(cls, "setCsig3eigvec3", "([D)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SigmaEigenvectorsCovariance::SigmaEigenvectorsCovariance(jboolean a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_b35db77cae58639e, a0)) {}

            JArray< jdouble > SigmaEigenvectorsCovariance::getCsig3eigvec3() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCsig3eigvec3_be783177b060994b]));
            }

            jboolean SigmaEigenvectorsCovariance::isAltCovFlagSet() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isAltCovFlagSet_eee3de00fe971136]);
            }

            void SigmaEigenvectorsCovariance::setCsig3eigvec3(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsig3eigvec3_a71c45509eaf92d1], a0.this$);
            }

            void SigmaEigenvectorsCovariance::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_SigmaEigenvectorsCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SigmaEigenvectorsCovariance_init_(t_SigmaEigenvectorsCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SigmaEigenvectorsCovariance_getCsig3eigvec3(t_SigmaEigenvectorsCovariance *self);
            static PyObject *t_SigmaEigenvectorsCovariance_isAltCovFlagSet(t_SigmaEigenvectorsCovariance *self);
            static PyObject *t_SigmaEigenvectorsCovariance_setCsig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovariance_validate(t_SigmaEigenvectorsCovariance *self, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovariance_get__altCovFlagSet(t_SigmaEigenvectorsCovariance *self, void *data);
            static PyObject *t_SigmaEigenvectorsCovariance_get__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, void *data);
            static int t_SigmaEigenvectorsCovariance_set__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg, void *data);
            static PyGetSetDef t_SigmaEigenvectorsCovariance__fields_[] = {
              DECLARE_GET_FIELD(t_SigmaEigenvectorsCovariance, altCovFlagSet),
              DECLARE_GETSET_FIELD(t_SigmaEigenvectorsCovariance, csig3eigvec3),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SigmaEigenvectorsCovariance__methods_[] = {
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, getCsig3eigvec3, METH_NOARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, isAltCovFlagSet, METH_NOARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, setCsig3eigvec3, METH_O),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SigmaEigenvectorsCovariance)[] = {
              { Py_tp_methods, t_SigmaEigenvectorsCovariance__methods_ },
              { Py_tp_init, (void *) t_SigmaEigenvectorsCovariance_init_ },
              { Py_tp_getset, t_SigmaEigenvectorsCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SigmaEigenvectorsCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(SigmaEigenvectorsCovariance, t_SigmaEigenvectorsCovariance, SigmaEigenvectorsCovariance);

            void t_SigmaEigenvectorsCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(SigmaEigenvectorsCovariance), &PY_TYPE_DEF(SigmaEigenvectorsCovariance), module, "SigmaEigenvectorsCovariance", 0);
            }

            void t_SigmaEigenvectorsCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovariance), "class_", make_descriptor(SigmaEigenvectorsCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovariance), "wrapfn_", make_descriptor(t_SigmaEigenvectorsCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SigmaEigenvectorsCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SigmaEigenvectorsCovariance::initializeClass, 1)))
                return NULL;
              return t_SigmaEigenvectorsCovariance::wrap_Object(SigmaEigenvectorsCovariance(((t_SigmaEigenvectorsCovariance *) arg)->object.this$));
            }
            static PyObject *t_SigmaEigenvectorsCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SigmaEigenvectorsCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SigmaEigenvectorsCovariance_init_(t_SigmaEigenvectorsCovariance *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              SigmaEigenvectorsCovariance object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = SigmaEigenvectorsCovariance(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SigmaEigenvectorsCovariance_getCsig3eigvec3(t_SigmaEigenvectorsCovariance *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getCsig3eigvec3());
              return result.wrap();
            }

            static PyObject *t_SigmaEigenvectorsCovariance_isAltCovFlagSet(t_SigmaEigenvectorsCovariance *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isAltCovFlagSet());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_SigmaEigenvectorsCovariance_setCsig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.setCsig3eigvec3(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsig3eigvec3", arg);
              return NULL;
            }

            static PyObject *t_SigmaEigenvectorsCovariance_validate(t_SigmaEigenvectorsCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(SigmaEigenvectorsCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_SigmaEigenvectorsCovariance_get__altCovFlagSet(t_SigmaEigenvectorsCovariance *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isAltCovFlagSet());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_SigmaEigenvectorsCovariance_get__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getCsig3eigvec3());
              return value.wrap();
            }
            static int t_SigmaEigenvectorsCovariance_set__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg, void *data)
            {
              {
                JArray< jdouble > value((jobject) NULL);
                if (!parseArg(arg, "[D", &value))
                {
                  INT_CALL(self->object.setCsig3eigvec3(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csig3eigvec3", arg);
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
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "java/util/Map.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmParser::class$ = NULL;
              jmethodID *OmmParser::mids$ = NULL;
              bool OmmParser::live$ = false;

              jclass OmmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_dab175145706e14f] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/omm/Omm;");
                  mids$[mid_finalizeData_eee3de00fe971136] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_eee3de00fe971136] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_eee3de00fe971136] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_662984e7008bcc88] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_eee3de00fe971136] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_eee3de00fe971136] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_eee3de00fe971136] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_prepareData_eee3de00fe971136] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_eee3de00fe971136] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_eee3de00fe971136] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::Omm OmmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::Omm(env->callObjectMethod(this$, mids$[mid_build_dab175145706e14f]));
              }

              jboolean OmmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_eee3de00fe971136]);
              }

              jboolean OmmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_eee3de00fe971136]);
              }

              jboolean OmmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_eee3de00fe971136]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OmmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_662984e7008bcc88]));
              }

              ::java::util::Map OmmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d]));
              }

              jboolean OmmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_eee3de00fe971136]);
              }

              jboolean OmmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_eee3de00fe971136]);
              }

              jboolean OmmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_eee3de00fe971136]);
              }

              jboolean OmmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_eee3de00fe971136]);
              }

              jboolean OmmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_eee3de00fe971136]);
              }

              jboolean OmmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_eee3de00fe971136]);
              }

              void OmmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_a23f5f7531d9b583], a0.this$);
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
              static PyObject *t_OmmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmParser_of_(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_build(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_finalizeData(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_finalizeHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_finalizeMetadata(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_getHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_getSpecialXmlElementsBuilders(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_inData(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_inHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_inMetadata(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_prepareData(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_prepareHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_prepareMetadata(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_reset(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_get__header(t_OmmParser *self, void *data);
              static PyObject *t_OmmParser_get__specialXmlElementsBuilders(t_OmmParser *self, void *data);
              static PyObject *t_OmmParser_get__parameters_(t_OmmParser *self, void *data);
              static PyGetSetDef t_OmmParser__fields_[] = {
                DECLARE_GET_FIELD(t_OmmParser, header),
                DECLARE_GET_FIELD(t_OmmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_OmmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmParser__methods_[] = {
                DECLARE_METHOD(t_OmmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmParser)[] = {
                { Py_tp_methods, t_OmmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OmmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OmmParser, t_OmmParser, OmmParser);
              PyObject *t_OmmParser::wrap_Object(const OmmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OmmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmParser *self = (t_OmmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OmmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OmmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmParser *self = (t_OmmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OmmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmParser), &PY_TYPE_DEF(OmmParser), module, "OmmParser", 0);
              }

              void t_OmmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmParser), "class_", make_descriptor(OmmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmParser), "wrapfn_", make_descriptor(t_OmmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OmmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmParser::initializeClass, 1)))
                  return NULL;
                return t_OmmParser::wrap_Object(OmmParser(((t_OmmParser *) arg)->object.this$));
              }
              static PyObject *t_OmmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmParser_of_(t_OmmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OmmParser_build(t_OmmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::Omm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::omm::t_Omm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OmmParser_finalizeData(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OmmParser_finalizeHeader(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OmmParser_finalizeMetadata(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OmmParser_getHeader(t_OmmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OmmParser_getSpecialXmlElementsBuilders(t_OmmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_OmmParser_inData(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OmmParser_inHeader(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OmmParser_inMetadata(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OmmParser_prepareData(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OmmParser_prepareHeader(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OmmParser_prepareMetadata(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OmmParser_reset(t_OmmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OmmParser_get__parameters_(t_OmmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OmmParser_get__header(t_OmmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
              }

              static PyObject *t_OmmParser_get__specialXmlElementsBuilders(t_OmmParser *self, void *data)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeSpanMap$Transition::class$ = NULL;
      jmethodID *TimeSpanMap$Transition::mids$ = NULL;
      bool TimeSpanMap$Transition::live$ = false;

      jclass TimeSpanMap$Transition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeSpanMap$Transition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAfter_704a5bee58538972] = env->getMethodID(cls, "getAfter", "()Ljava/lang/Object;");
          mids$[mid_getBefore_704a5bee58538972] = env->getMethodID(cls, "getBefore", "()Ljava/lang/Object;");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getSpanAfter_ea49fa2ad441b95d] = env->getMethodID(cls, "getSpanAfter", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getSpanBefore_ea49fa2ad441b95d] = env->getMethodID(cls, "getSpanBefore", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_next_1026700a6787ef22] = env->getMethodID(cls, "next", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_previous_1026700a6787ef22] = env->getMethodID(cls, "previous", "()Lorg/orekit/utils/TimeSpanMap$Transition;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object TimeSpanMap$Transition::getAfter() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAfter_704a5bee58538972]));
      }

      ::java::lang::Object TimeSpanMap$Transition::getBefore() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getBefore_704a5bee58538972]));
      }

      ::org::orekit::time::AbsoluteDate TimeSpanMap$Transition::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap$Transition::getSpanAfter() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getSpanAfter_ea49fa2ad441b95d]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap$Transition::getSpanBefore() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getSpanBefore_ea49fa2ad441b95d]));
      }

      TimeSpanMap$Transition TimeSpanMap$Transition::next() const
      {
        return TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_next_1026700a6787ef22]));
      }

      TimeSpanMap$Transition TimeSpanMap$Transition::previous() const
      {
        return TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_previous_1026700a6787ef22]));
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
      static PyObject *t_TimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Transition_of_(t_TimeSpanMap$Transition *self, PyObject *args);
      static PyObject *t_TimeSpanMap$Transition_getAfter(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getBefore(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getDate(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getSpanAfter(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getSpanBefore(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_next(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_previous(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_get__after(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__before(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__date(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__spanAfter(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__spanBefore(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__parameters_(t_TimeSpanMap$Transition *self, void *data);
      static PyGetSetDef t_TimeSpanMap$Transition__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, after),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, before),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, date),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, spanAfter),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, spanBefore),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSpanMap$Transition__methods_[] = {
        DECLARE_METHOD(t_TimeSpanMap$Transition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getAfter, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getBefore, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getSpanAfter, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getSpanBefore, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, next, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, previous, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSpanMap$Transition)[] = {
        { Py_tp_methods, t_TimeSpanMap$Transition__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeSpanMap$Transition__fields_ },
        { Py_tp_iter, (void *) PyObject_SelfIter },
        { Py_tp_iternext, (void *) ((PyObject *(*)(t_TimeSpanMap$Transition *)) get_generic_next< t_TimeSpanMap$Transition,t_TimeSpanMap$Transition,TimeSpanMap$Transition >) },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSpanMap$Transition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeSpanMap$Transition, t_TimeSpanMap$Transition, TimeSpanMap$Transition);
      PyObject *t_TimeSpanMap$Transition::wrap_Object(const TimeSpanMap$Transition& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Transition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Transition *self = (t_TimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSpanMap$Transition::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Transition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Transition *self = (t_TimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSpanMap$Transition::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSpanMap$Transition), &PY_TYPE_DEF(TimeSpanMap$Transition), module, "TimeSpanMap$Transition", 0);
      }

      void t_TimeSpanMap$Transition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Transition), "class_", make_descriptor(TimeSpanMap$Transition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Transition), "wrapfn_", make_descriptor(t_TimeSpanMap$Transition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Transition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSpanMap$Transition::initializeClass, 1)))
          return NULL;
        return t_TimeSpanMap$Transition::wrap_Object(TimeSpanMap$Transition(((t_TimeSpanMap$Transition *) arg)->object.this$));
      }
      static PyObject *t_TimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSpanMap$Transition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSpanMap$Transition_of_(t_TimeSpanMap$Transition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeSpanMap$Transition_getAfter(t_TimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getAfter());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Transition_getBefore(t_TimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getBefore());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Transition_getDate(t_TimeSpanMap$Transition *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Transition_getSpanAfter(t_TimeSpanMap$Transition *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpanAfter());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Transition_getSpanBefore(t_TimeSpanMap$Transition *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpanBefore());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Transition_next(t_TimeSpanMap$Transition *self)
      {
        TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.next());
        return t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Transition_previous(t_TimeSpanMap$Transition *self)
      {
        TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.previous());
        return t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_TimeSpanMap$Transition_get__parameters_(t_TimeSpanMap$Transition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSpanMap$Transition_get__after(t_TimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getAfter());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__before(t_TimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getBefore());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__date(t_TimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__spanAfter(t_TimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpanAfter());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__spanBefore(t_TimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpanBefore());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/ReceiverAntenna.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *ReceiverAntenna::class$ = NULL;
        jmethodID *ReceiverAntenna::mids$ = NULL;
        bool ReceiverAntenna::live$ = false;

        jclass ReceiverAntenna::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/ReceiverAntenna");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2a5ab322b81321ef] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V");
            mids$[mid_getSerialNumber_d2c8eb4129821f0e] = env->getMethodID(cls, "getSerialNumber", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ReceiverAntenna::ReceiverAntenna(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::util::Map & a2, const ::java::lang::String & a3) : ::org::orekit::gnss::antenna::Antenna(env->newObject(initializeClass, &mids$, mid_init$_2a5ab322b81321ef, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::java::lang::String ReceiverAntenna::getSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSerialNumber_d2c8eb4129821f0e]));
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
        static PyObject *t_ReceiverAntenna_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReceiverAntenna_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ReceiverAntenna_init_(t_ReceiverAntenna *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ReceiverAntenna_getSerialNumber(t_ReceiverAntenna *self);
        static PyObject *t_ReceiverAntenna_get__serialNumber(t_ReceiverAntenna *self, void *data);
        static PyGetSetDef t_ReceiverAntenna__fields_[] = {
          DECLARE_GET_FIELD(t_ReceiverAntenna, serialNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ReceiverAntenna__methods_[] = {
          DECLARE_METHOD(t_ReceiverAntenna, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReceiverAntenna, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReceiverAntenna, getSerialNumber, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ReceiverAntenna)[] = {
          { Py_tp_methods, t_ReceiverAntenna__methods_ },
          { Py_tp_init, (void *) t_ReceiverAntenna_init_ },
          { Py_tp_getset, t_ReceiverAntenna__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ReceiverAntenna)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::antenna::Antenna),
          NULL
        };

        DEFINE_TYPE(ReceiverAntenna, t_ReceiverAntenna, ReceiverAntenna);

        void t_ReceiverAntenna::install(PyObject *module)
        {
          installType(&PY_TYPE(ReceiverAntenna), &PY_TYPE_DEF(ReceiverAntenna), module, "ReceiverAntenna", 0);
        }

        void t_ReceiverAntenna::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReceiverAntenna), "class_", make_descriptor(ReceiverAntenna::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReceiverAntenna), "wrapfn_", make_descriptor(t_ReceiverAntenna::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReceiverAntenna), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ReceiverAntenna_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ReceiverAntenna::initializeClass, 1)))
            return NULL;
          return t_ReceiverAntenna::wrap_Object(ReceiverAntenna(((t_ReceiverAntenna *) arg)->object.this$));
        }
        static PyObject *t_ReceiverAntenna_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ReceiverAntenna::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ReceiverAntenna_init_(t_ReceiverAntenna *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::util::Map a2((jobject) NULL);
          PyTypeObject **p2;
          ::java::lang::String a3((jobject) NULL);
          ReceiverAntenna object((jobject) NULL);

          if (!parseArgs(args, "ssKs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Map::parameters_, &a3))
          {
            INT_CALL(object = ReceiverAntenna(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ReceiverAntenna_getSerialNumber(t_ReceiverAntenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSerialNumber());
          return j2p(result);
        }

        static PyObject *t_ReceiverAntenna_get__serialNumber(t_ReceiverAntenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSerialNumber());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanModel.h"
#include "java/util/List.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanModel::class$ = NULL;
        jmethodID *KalmanModel::mids$ = NULL;
        bool KalmanModel::live$ = false;

        jclass KalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e11d08be4ae4cfc9] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)V");
            mids$[mid_finalizeEstimation_32b51ab222e72e59] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_getBuilders_d751c1a57012b438] = env->getMethodID(cls, "getBuilders", "()Ljava/util/List;");
            mids$[mid_getCorrectedMeasurement_b4478e72a44f53a7] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_598bcd058df23e79] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_80e11148db499dda] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_d6ab429752e7c267] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_270f067ba2ecffc6] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagators_af093bf37101b796] = env->getMethodID(cls, "getEstimatedPropagators", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvolution_aa993dea45064d8a] = env->getMethodID(cls, "getEvolution", "(DLorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;");
            mids$[mid_getInnovation_2ceaf1d4d86d5f30] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_b4478e72a44f53a7] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_598bcd058df23e79] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getReferenceTrajectories_af093bf37101b796] = env->getMethodID(cls, "getReferenceTrajectories", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_setReferenceTrajectories_3691a77cbfa1617b] = env->getMethodID(cls, "setReferenceTrajectories", "([Lorg/orekit/propagation/Propagator;)V");
            mids$[mid_updateReferenceTrajectories_3691a77cbfa1617b] = env->getMethodID(cls, "updateReferenceTrajectories", "([Lorg/orekit/propagation/Propagator;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KalmanModel::KalmanModel(const ::java::util::List & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e11d08be4ae4cfc9, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void KalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_32b51ab222e72e59], a0.this$, a1.this$);
        }

        ::java::util::List KalmanModel::getBuilders() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBuilders_d751c1a57012b438]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_b4478e72a44f53a7]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_598bcd058df23e79]));
        }

        ::org::orekit::time::AbsoluteDate KalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_80e11148db499dda]));
        }

        jint KalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_d6ab429752e7c267]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_270f067ba2ecffc6]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_7c5a416c83e442be]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_7c5a416c83e442be]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_7c5a416c83e442be]));
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanModel::getEstimatedPropagators() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagators_af093bf37101b796]));
        }

        ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution KalmanModel::getEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_aa993dea45064d8a], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector KalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_2ceaf1d4d86d5f30], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealVector KalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_b2eebabce70526d8]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_b4478e72a44f53a7]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_598bcd058df23e79]));
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanModel::getReferenceTrajectories() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_getReferenceTrajectories_af093bf37101b796]));
        }

        void KalmanModel::setReferenceTrajectories(const JArray< ::org::orekit::propagation::Propagator > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setReferenceTrajectories_3691a77cbfa1617b], a0.this$);
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
      namespace sequential {
        static PyObject *t_KalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KalmanModel_init_(t_KalmanModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KalmanModel_finalizeEstimation(t_KalmanModel *self, PyObject *args);
        static PyObject *t_KalmanModel_getBuilders(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCorrectedMeasurement(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCorrectedSpacecraftStates(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCurrentDate(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCurrentMeasurementNumber(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimate(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedMeasurementsParameters(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedOrbitalParameters(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedPropagationParameters(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedPropagators(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEvolution(t_KalmanModel *self, PyObject *args);
        static PyObject *t_KalmanModel_getInnovation(t_KalmanModel *self, PyObject *args);
        static PyObject *t_KalmanModel_getPhysicalEstimatedCovarianceMatrix(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalEstimatedState(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalInnovationCovarianceMatrix(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalKalmanGain(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalMeasurementJacobian(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalStateTransitionMatrix(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPredictedMeasurement(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPredictedSpacecraftStates(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getReferenceTrajectories(t_KalmanModel *self);
        static PyObject *t_KalmanModel_setReferenceTrajectories(t_KalmanModel *self, PyObject *arg);
        static PyObject *t_KalmanModel_get__builders(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__correctedMeasurement(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__correctedSpacecraftStates(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__currentDate(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__currentMeasurementNumber(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimate(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedMeasurementsParameters(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedOrbitalParameters(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedPropagationParameters(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedPropagators(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalEstimatedCovarianceMatrix(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalEstimatedState(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalInnovationCovarianceMatrix(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalKalmanGain(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalMeasurementJacobian(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalStateTransitionMatrix(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__predictedMeasurement(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__predictedSpacecraftStates(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__referenceTrajectories(t_KalmanModel *self, void *data);
        static int t_KalmanModel_set__referenceTrajectories(t_KalmanModel *self, PyObject *arg, void *data);
        static PyGetSetDef t_KalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_KalmanModel, builders),
          DECLARE_GET_FIELD(t_KalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_KalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_KalmanModel, currentDate),
          DECLARE_GET_FIELD(t_KalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_KalmanModel, estimate),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedPropagators),
          DECLARE_GET_FIELD(t_KalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_KalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_KalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_KalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_KalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_KalmanModel, predictedSpacecraftStates),
          DECLARE_GETSET_FIELD(t_KalmanModel, referenceTrajectories),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanModel__methods_[] = {
          DECLARE_METHOD(t_KalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_KalmanModel, getBuilders, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedPropagators, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_KalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getReferenceTrajectories, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, setReferenceTrajectories, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanModel)[] = {
          { Py_tp_methods, t_KalmanModel__methods_ },
          { Py_tp_init, (void *) t_KalmanModel_init_ },
          { Py_tp_getset, t_KalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanModel, t_KalmanModel, KalmanModel);

        void t_KalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanModel), &PY_TYPE_DEF(KalmanModel), module, "KalmanModel", 0);
        }

        void t_KalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanModel), "class_", make_descriptor(KalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanModel), "wrapfn_", make_descriptor(t_KalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanModel::initializeClass, 1)))
            return NULL;
          return t_KalmanModel::wrap_Object(KalmanModel(((t_KalmanModel *) arg)->object.this$));
        }
        static PyObject *t_KalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KalmanModel_init_(t_KalmanModel *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a3((jobject) NULL);
          KalmanModel object((jobject) NULL);

          if (!parseArgs(args, "KKkk", ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = KalmanModel(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_KalmanModel_finalizeEstimation(t_KalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_KalmanModel_getBuilders(t_KalmanModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getBuilders());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::conversion::PY_TYPE(PropagatorBuilder));
        }

        static PyObject *t_KalmanModel_getCorrectedMeasurement(t_KalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getCorrectedSpacecraftStates(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_getCurrentDate(t_KalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getCurrentMeasurementNumber(t_KalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_KalmanModel_getEstimate(t_KalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedMeasurementsParameters(t_KalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedOrbitalParameters(t_KalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedPropagationParameters(t_KalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedPropagators(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagators());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_KalmanModel_getEvolution(t_KalmanModel *self, PyObject *args)
        {
          jdouble a0;
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::extended::t_NonLinearEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_KalmanModel_getInnovation(t_KalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_KalmanModel_getPhysicalEstimatedCovarianceMatrix(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalEstimatedState(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalInnovationCovarianceMatrix(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalKalmanGain(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalMeasurementJacobian(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalStateTransitionMatrix(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPredictedMeasurement(t_KalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPredictedSpacecraftStates(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_getReferenceTrajectories(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceTrajectories());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_KalmanModel_setReferenceTrajectories(t_KalmanModel *self, PyObject *arg)
        {
          JArray< ::org::orekit::propagation::Propagator > a0((jobject) NULL);

          if (!parseArg(arg, "[k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setReferenceTrajectories(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setReferenceTrajectories", arg);
          return NULL;
        }

        static PyObject *t_KalmanModel_get__builders(t_KalmanModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getBuilders());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__correctedMeasurement(t_KalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__correctedSpacecraftStates(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_get__currentDate(t_KalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__currentMeasurementNumber(t_KalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_KalmanModel_get__estimate(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedMeasurementsParameters(t_KalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedOrbitalParameters(t_KalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedPropagationParameters(t_KalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedPropagators(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagators());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_KalmanModel_get__physicalEstimatedCovarianceMatrix(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalEstimatedState(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalInnovationCovarianceMatrix(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalKalmanGain(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalMeasurementJacobian(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalStateTransitionMatrix(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__predictedMeasurement(t_KalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__predictedSpacecraftStates(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_get__referenceTrajectories(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceTrajectories());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }
        static int t_KalmanModel_set__referenceTrajectories(t_KalmanModel *self, PyObject *arg, void *data)
        {
          {
            JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
            if (!parseArg(arg, "[k", ::org::orekit::propagation::Propagator::initializeClass, &value))
            {
              INT_CALL(self->object.setReferenceTrajectories(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "referenceTrajectories", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CR3BPSystem::class$ = NULL;
      jmethodID *CR3BPSystem::mids$ = NULL;
      bool CR3BPSystem::live$ = false;

      jclass CR3BPSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CR3BPSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1c5fc8f848b2359d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;D)V");
          mids$[mid_init$_9638af7be3d21a0e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;DD)V");
          mids$[mid_getDdim_9981f74b2d109da6] = env->getMethodID(cls, "getDdim", "()D");
          mids$[mid_getGamma_c86407606b360bbd] = env->getMethodID(cls, "getGamma", "(Lorg/orekit/utils/LagrangianPoints;)D");
          mids$[mid_getLPosition_859a3c975ebcfbb7] = env->getMethodID(cls, "getLPosition", "(Lorg/orekit/utils/LagrangianPoints;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getMassRatio_9981f74b2d109da6] = env->getMethodID(cls, "getMassRatio", "()D");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getPrimary_a1474f5cfab89b5e] = env->getMethodID(cls, "getPrimary", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getRealAPV_10818cec4200efce] = env->getMethodID(cls, "getRealAPV", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_getRotatingFrame_cb151471db4570f0] = env->getMethodID(cls, "getRotatingFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getSecondary_a1474f5cfab89b5e] = env->getMethodID(cls, "getSecondary", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getTdim_9981f74b2d109da6] = env->getMethodID(cls, "getTdim", "()D");
          mids$[mid_getVdim_9981f74b2d109da6] = env->getMethodID(cls, "getVdim", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CR3BPSystem::CR3BPSystem(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1c5fc8f848b2359d, a0.this$, a1.this$, a2)) {}

      CR3BPSystem::CR3BPSystem(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9638af7be3d21a0e, a0.this$, a1.this$, a2, a3)) {}

      jdouble CR3BPSystem::getDdim() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDdim_9981f74b2d109da6]);
      }

      jdouble CR3BPSystem::getGamma(const ::org::orekit::utils::LagrangianPoints & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGamma_c86407606b360bbd], a0.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D CR3BPSystem::getLPosition(const ::org::orekit::utils::LagrangianPoints & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLPosition_859a3c975ebcfbb7], a0.this$));
      }

      jdouble CR3BPSystem::getMassRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMassRatio_9981f74b2d109da6]);
      }

      ::java::lang::String CR3BPSystem::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      ::org::orekit::bodies::CelestialBody CR3BPSystem::getPrimary() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getPrimary_a1474f5cfab89b5e]));
      }

      ::org::orekit::utils::AbsolutePVCoordinates CR3BPSystem::getRealAPV(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_getRealAPV_10818cec4200efce], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Frame CR3BPSystem::getRotatingFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getRotatingFrame_cb151471db4570f0]));
      }

      ::org::orekit::bodies::CelestialBody CR3BPSystem::getSecondary() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSecondary_a1474f5cfab89b5e]));
      }

      jdouble CR3BPSystem::getTdim() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTdim_9981f74b2d109da6]);
      }

      jdouble CR3BPSystem::getVdim() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getVdim_9981f74b2d109da6]);
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
      static PyObject *t_CR3BPSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPSystem_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CR3BPSystem_init_(t_CR3BPSystem *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CR3BPSystem_getDdim(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getGamma(t_CR3BPSystem *self, PyObject *arg);
      static PyObject *t_CR3BPSystem_getLPosition(t_CR3BPSystem *self, PyObject *arg);
      static PyObject *t_CR3BPSystem_getMassRatio(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getName(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getPrimary(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getRealAPV(t_CR3BPSystem *self, PyObject *args);
      static PyObject *t_CR3BPSystem_getRotatingFrame(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getSecondary(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getTdim(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getVdim(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_get__ddim(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__massRatio(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__name(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__primary(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__rotatingFrame(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__secondary(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__tdim(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__vdim(t_CR3BPSystem *self, void *data);
      static PyGetSetDef t_CR3BPSystem__fields_[] = {
        DECLARE_GET_FIELD(t_CR3BPSystem, ddim),
        DECLARE_GET_FIELD(t_CR3BPSystem, massRatio),
        DECLARE_GET_FIELD(t_CR3BPSystem, name),
        DECLARE_GET_FIELD(t_CR3BPSystem, primary),
        DECLARE_GET_FIELD(t_CR3BPSystem, rotatingFrame),
        DECLARE_GET_FIELD(t_CR3BPSystem, secondary),
        DECLARE_GET_FIELD(t_CR3BPSystem, tdim),
        DECLARE_GET_FIELD(t_CR3BPSystem, vdim),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CR3BPSystem__methods_[] = {
        DECLARE_METHOD(t_CR3BPSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPSystem, getDdim, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getGamma, METH_O),
        DECLARE_METHOD(t_CR3BPSystem, getLPosition, METH_O),
        DECLARE_METHOD(t_CR3BPSystem, getMassRatio, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getName, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getPrimary, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getRealAPV, METH_VARARGS),
        DECLARE_METHOD(t_CR3BPSystem, getRotatingFrame, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getSecondary, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getTdim, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getVdim, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPSystem)[] = {
        { Py_tp_methods, t_CR3BPSystem__methods_ },
        { Py_tp_init, (void *) t_CR3BPSystem_init_ },
        { Py_tp_getset, t_CR3BPSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CR3BPSystem, t_CR3BPSystem, CR3BPSystem);

      void t_CR3BPSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPSystem), &PY_TYPE_DEF(CR3BPSystem), module, "CR3BPSystem", 0);
      }

      void t_CR3BPSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPSystem), "class_", make_descriptor(CR3BPSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPSystem), "wrapfn_", make_descriptor(t_CR3BPSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPSystem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPSystem::initializeClass, 1)))
          return NULL;
        return t_CR3BPSystem::wrap_Object(CR3BPSystem(((t_CR3BPSystem *) arg)->object.this$));
      }
      static PyObject *t_CR3BPSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CR3BPSystem_init_(t_CR3BPSystem *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
            jdouble a2;
            CR3BPSystem object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CR3BPSystem(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            CR3BPSystem object((jobject) NULL);

            if (!parseArgs(args, "kkDD", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CR3BPSystem(a0, a1, a2, a3));
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

      static PyObject *t_CR3BPSystem_getDdim(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDdim());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_getGamma(t_CR3BPSystem *self, PyObject *arg)
      {
        ::org::orekit::utils::LagrangianPoints a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::utils::LagrangianPoints::initializeClass, &a0, &p0, ::org::orekit::utils::t_LagrangianPoints::parameters_))
        {
          OBJ_CALL(result = self->object.getGamma(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getGamma", arg);
        return NULL;
      }

      static PyObject *t_CR3BPSystem_getLPosition(t_CR3BPSystem *self, PyObject *arg)
      {
        ::org::orekit::utils::LagrangianPoints a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::LagrangianPoints::initializeClass, &a0, &p0, ::org::orekit::utils::t_LagrangianPoints::parameters_))
        {
          OBJ_CALL(result = self->object.getLPosition(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLPosition", arg);
        return NULL;
      }

      static PyObject *t_CR3BPSystem_getMassRatio(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMassRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_getName(t_CR3BPSystem *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_CR3BPSystem_getPrimary(t_CR3BPSystem *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CR3BPSystem_getRealAPV(t_CR3BPSystem *self, PyObject *args)
      {
        ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::orekit::frames::Frame a2((jobject) NULL);
        ::org::orekit::utils::AbsolutePVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.getRealAPV(a0, a1, a2));
          return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRealAPV", args);
        return NULL;
      }

      static PyObject *t_CR3BPSystem_getRotatingFrame(t_CR3BPSystem *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotatingFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_CR3BPSystem_getSecondary(t_CR3BPSystem *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecondary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CR3BPSystem_getTdim(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTdim());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_getVdim(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getVdim());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_get__ddim(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDdim());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CR3BPSystem_get__massRatio(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMassRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CR3BPSystem_get__name(t_CR3BPSystem *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_CR3BPSystem_get__primary(t_CR3BPSystem *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CR3BPSystem_get__rotatingFrame(t_CR3BPSystem *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotatingFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_CR3BPSystem_get__secondary(t_CR3BPSystem *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecondary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CR3BPSystem_get__tdim(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTdim());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CR3BPSystem_get__vdim(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getVdim());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerLeastSquareSolution::class$ = NULL;
          jmethodID *IntegerLeastSquareSolution::mids$ = NULL;
          bool IntegerLeastSquareSolution::live$ = false;

          jclass IntegerLeastSquareSolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0119d689bc5a4d60] = env->getMethodID(cls, "<init>", "([JD)V");
              mids$[mid_getSolution_f2be043b61565d55] = env->getMethodID(cls, "getSolution", "()[J");
              mids$[mid_getSquaredDistance_9981f74b2d109da6] = env->getMethodID(cls, "getSquaredDistance", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntegerLeastSquareSolution::IntegerLeastSquareSolution(const JArray< jlong > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0119d689bc5a4d60, a0.this$, a1)) {}

          JArray< jlong > IntegerLeastSquareSolution::getSolution() const
          {
            return JArray< jlong >(env->callObjectMethod(this$, mids$[mid_getSolution_f2be043b61565d55]));
          }

          jdouble IntegerLeastSquareSolution::getSquaredDistance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSquaredDistance_9981f74b2d109da6]);
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
          static PyObject *t_IntegerLeastSquareSolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareSolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IntegerLeastSquareSolution_init_(t_IntegerLeastSquareSolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntegerLeastSquareSolution_getSolution(t_IntegerLeastSquareSolution *self);
          static PyObject *t_IntegerLeastSquareSolution_getSquaredDistance(t_IntegerLeastSquareSolution *self);
          static PyObject *t_IntegerLeastSquareSolution_get__solution(t_IntegerLeastSquareSolution *self, void *data);
          static PyObject *t_IntegerLeastSquareSolution_get__squaredDistance(t_IntegerLeastSquareSolution *self, void *data);
          static PyGetSetDef t_IntegerLeastSquareSolution__fields_[] = {
            DECLARE_GET_FIELD(t_IntegerLeastSquareSolution, solution),
            DECLARE_GET_FIELD(t_IntegerLeastSquareSolution, squaredDistance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IntegerLeastSquareSolution__methods_[] = {
            DECLARE_METHOD(t_IntegerLeastSquareSolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolution, getSolution, METH_NOARGS),
            DECLARE_METHOD(t_IntegerLeastSquareSolution, getSquaredDistance, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerLeastSquareSolution)[] = {
            { Py_tp_methods, t_IntegerLeastSquareSolution__methods_ },
            { Py_tp_init, (void *) t_IntegerLeastSquareSolution_init_ },
            { Py_tp_getset, t_IntegerLeastSquareSolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerLeastSquareSolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IntegerLeastSquareSolution, t_IntegerLeastSquareSolution, IntegerLeastSquareSolution);

          void t_IntegerLeastSquareSolution::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerLeastSquareSolution), &PY_TYPE_DEF(IntegerLeastSquareSolution), module, "IntegerLeastSquareSolution", 0);
          }

          void t_IntegerLeastSquareSolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolution), "class_", make_descriptor(IntegerLeastSquareSolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolution), "wrapfn_", make_descriptor(t_IntegerLeastSquareSolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerLeastSquareSolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerLeastSquareSolution::initializeClass, 1)))
              return NULL;
            return t_IntegerLeastSquareSolution::wrap_Object(IntegerLeastSquareSolution(((t_IntegerLeastSquareSolution *) arg)->object.this$));
          }
          static PyObject *t_IntegerLeastSquareSolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerLeastSquareSolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IntegerLeastSquareSolution_init_(t_IntegerLeastSquareSolution *self, PyObject *args, PyObject *kwds)
          {
            JArray< jlong > a0((jobject) NULL);
            jdouble a1;
            IntegerLeastSquareSolution object((jobject) NULL);

            if (!parseArgs(args, "[JD", &a0, &a1))
            {
              INT_CALL(object = IntegerLeastSquareSolution(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IntegerLeastSquareSolution_getSolution(t_IntegerLeastSquareSolution *self)
          {
            JArray< jlong > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSolution());
            return result.wrap();
          }

          static PyObject *t_IntegerLeastSquareSolution_getSquaredDistance(t_IntegerLeastSquareSolution *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSquaredDistance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IntegerLeastSquareSolution_get__solution(t_IntegerLeastSquareSolution *self, void *data)
          {
            JArray< jlong > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSolution());
            return value.wrap();
          }

          static PyObject *t_IntegerLeastSquareSolution_get__squaredDistance(t_IntegerLeastSquareSolution *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSquaredDistance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedStringConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedStringConsumer::mids$ = NULL;
            bool ParseToken$IndexedStringConsumer::live$ = false;

            jclass ParseToken$IndexedStringConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_a3e920ca64bbfb6f] = env->getMethodID(cls, "accept", "(ILjava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedStringConsumer::accept(jint a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_a3e920ca64bbfb6f], a0, a1.this$);
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
            static PyObject *t_ParseToken$IndexedStringConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedStringConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedStringConsumer_accept(t_ParseToken$IndexedStringConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedStringConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedStringConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedStringConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedStringConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedStringConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedStringConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedStringConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedStringConsumer, t_ParseToken$IndexedStringConsumer, ParseToken$IndexedStringConsumer);

            void t_ParseToken$IndexedStringConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedStringConsumer), &PY_TYPE_DEF(ParseToken$IndexedStringConsumer), module, "ParseToken$IndexedStringConsumer", 0);
            }

            void t_ParseToken$IndexedStringConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedStringConsumer), "class_", make_descriptor(ParseToken$IndexedStringConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedStringConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedStringConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedStringConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedStringConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedStringConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedStringConsumer::wrap_Object(ParseToken$IndexedStringConsumer(((t_ParseToken$IndexedStringConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedStringConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedStringConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedStringConsumer_accept(t_ParseToken$IndexedStringConsumer *self, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "Is", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/orekit/propagation/numerical/PythonFieldTimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *PythonFieldTimeDerivativesEquations::class$ = NULL;
        jmethodID *PythonFieldTimeDerivativesEquations::mids$ = NULL;
        bool PythonFieldTimeDerivativesEquations::live$ = false;

        jclass PythonFieldTimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/PythonFieldTimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addKeplerContribution_f63ca9e3185c722e] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addMassDerivative_f63ca9e3185c722e] = env->getMethodID(cls, "addMassDerivative", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addNonKeplerianAcceleration_1344cdbf3f0498af] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldTimeDerivativesEquations::PythonFieldTimeDerivativesEquations() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonFieldTimeDerivativesEquations::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonFieldTimeDerivativesEquations::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonFieldTimeDerivativesEquations::pythonExtension(jlong a0) const
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
      namespace numerical {
        static PyObject *t_PythonFieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldTimeDerivativesEquations_of_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args);
        static int t_PythonFieldTimeDerivativesEquations_init_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldTimeDerivativesEquations_finalize(t_PythonFieldTimeDerivativesEquations *self);
        static PyObject *t_PythonFieldTimeDerivativesEquations_pythonExtension(t_PythonFieldTimeDerivativesEquations *self, PyObject *args);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldTimeDerivativesEquations_get__self(t_PythonFieldTimeDerivativesEquations *self, void *data);
        static PyObject *t_PythonFieldTimeDerivativesEquations_get__parameters_(t_PythonFieldTimeDerivativesEquations *self, void *data);
        static PyGetSetDef t_PythonFieldTimeDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldTimeDerivativesEquations, self),
          DECLARE_GET_FIELD(t_PythonFieldTimeDerivativesEquations, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldTimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeDerivativesEquations)[] = {
          { Py_tp_methods, t_PythonFieldTimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) t_PythonFieldTimeDerivativesEquations_init_ },
          { Py_tp_getset, t_PythonFieldTimeDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldTimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldTimeDerivativesEquations, t_PythonFieldTimeDerivativesEquations, PythonFieldTimeDerivativesEquations);
        PyObject *t_PythonFieldTimeDerivativesEquations::wrap_Object(const PythonFieldTimeDerivativesEquations& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldTimeDerivativesEquations::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldTimeDerivativesEquations *self = (t_PythonFieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldTimeDerivativesEquations::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldTimeDerivativesEquations::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldTimeDerivativesEquations *self = (t_PythonFieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldTimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldTimeDerivativesEquations), &PY_TYPE_DEF(PythonFieldTimeDerivativesEquations), module, "PythonFieldTimeDerivativesEquations", 1);
        }

        void t_PythonFieldTimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeDerivativesEquations), "class_", make_descriptor(PythonFieldTimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeDerivativesEquations), "wrapfn_", make_descriptor(t_PythonFieldTimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldTimeDerivativesEquations::initializeClass);
          JNINativeMethod methods[] = {
            { "addKeplerContribution", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldTimeDerivativesEquations_addKeplerContribution0 },
            { "addMassDerivative", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldTimeDerivativesEquations_addMassDerivative1 },
            { "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V", (void *) t_PythonFieldTimeDerivativesEquations_addNonKeplerianAcceleration2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldTimeDerivativesEquations_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldTimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_PythonFieldTimeDerivativesEquations::wrap_Object(PythonFieldTimeDerivativesEquations(((t_PythonFieldTimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldTimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_of_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldTimeDerivativesEquations_init_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldTimeDerivativesEquations object((jobject) NULL);

          INT_CALL(object = PythonFieldTimeDerivativesEquations());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_finalize(t_PythonFieldTimeDerivativesEquations *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_pythonExtension(t_PythonFieldTimeDerivativesEquations *self, PyObject *args)
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

        static void JNICALL t_PythonFieldTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
          PyObject *result = PyObject_CallMethod(obj, "addKeplerContribution", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
          PyObject *result = PyObject_CallMethod(obj, "addMassDerivative", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "addNonKeplerianAcceleration", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_get__self(t_PythonFieldTimeDerivativesEquations *self, void *data)
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
        static PyObject *t_PythonFieldTimeDerivativesEquations_get__parameters_(t_PythonFieldTimeDerivativesEquations *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultFieldMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultFieldMatrixPreservingVisitor::class$ = NULL;
      jmethodID *DefaultFieldMatrixPreservingVisitor::mids$ = NULL;
      bool DefaultFieldMatrixPreservingVisitor::live$ = false;

      jclass DefaultFieldMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultFieldMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d6f1e197c99df44f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_end_f6328613456309a1] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_ee5da648d666a7a9] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_8de38856a6ebea36] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultFieldMatrixPreservingVisitor::DefaultFieldMatrixPreservingVisitor(const ::org::hipparchus::FieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d6f1e197c99df44f, a0.this$)) {}

      ::org::hipparchus::FieldElement DefaultFieldMatrixPreservingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_f6328613456309a1]));
      }

      void DefaultFieldMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ee5da648d666a7a9], a0, a1, a2, a3, a4, a5);
      }

      void DefaultFieldMatrixPreservingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_8de38856a6ebea36], a0, a1, a2.this$);
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
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_of_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args);
      static int t_DefaultFieldMatrixPreservingVisitor_init_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_end(t_DefaultFieldMatrixPreservingVisitor *self);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_start(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_visit(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_get__parameters_(t_DefaultFieldMatrixPreservingVisitor *self, void *data);
      static PyGetSetDef t_DefaultFieldMatrixPreservingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_DefaultFieldMatrixPreservingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DefaultFieldMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultFieldMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_DefaultFieldMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultFieldMatrixPreservingVisitor_init_ },
        { Py_tp_getset, t_DefaultFieldMatrixPreservingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultFieldMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultFieldMatrixPreservingVisitor, t_DefaultFieldMatrixPreservingVisitor, DefaultFieldMatrixPreservingVisitor);
      PyObject *t_DefaultFieldMatrixPreservingVisitor::wrap_Object(const DefaultFieldMatrixPreservingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixPreservingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixPreservingVisitor *self = (t_DefaultFieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DefaultFieldMatrixPreservingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixPreservingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixPreservingVisitor *self = (t_DefaultFieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DefaultFieldMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultFieldMatrixPreservingVisitor), &PY_TYPE_DEF(DefaultFieldMatrixPreservingVisitor), module, "DefaultFieldMatrixPreservingVisitor", 0);
      }

      void t_DefaultFieldMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixPreservingVisitor), "class_", make_descriptor(DefaultFieldMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_DefaultFieldMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultFieldMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultFieldMatrixPreservingVisitor::wrap_Object(DefaultFieldMatrixPreservingVisitor(((t_DefaultFieldMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultFieldMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_of_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_DefaultFieldMatrixPreservingVisitor_init_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        DefaultFieldMatrixPreservingVisitor object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          INT_CALL(object = DefaultFieldMatrixPreservingVisitor(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_end(t_DefaultFieldMatrixPreservingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_start(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_visit(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_get__parameters_(t_DefaultFieldMatrixPreservingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/IntervalEventTrigger.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *IntervalEventTrigger::class$ = NULL;
          jmethodID *IntervalEventTrigger::mids$ = NULL;
          bool IntervalEventTrigger::live$ = false;

          jclass IntervalEventTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/IntervalEventTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a38fc05f525605c3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/AbstractDetector;)V");
              mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getFiringIntervalDetector_adbfb38205dfa1c9] = env->getMethodID(cls, "getFiringIntervalDetector", "()Lorg/orekit/propagation/events/AbstractDetector;");
              mids$[mid_isFiringOnInitialState_145801f71fbbc869] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");
              mids$[mid_convertIntervalDetector_2778b7032ad3e419] = env->getMethodID(cls, "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntervalEventTrigger::IntervalEventTrigger(const ::org::orekit::propagation::events::AbstractDetector & a0) : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(env->newObject(initializeClass, &mids$, mid_init$_a38fc05f525605c3, a0.this$)) {}

          ::java::util::stream::Stream IntervalEventTrigger::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_11e4ca8182c1933d]));
          }

          ::java::util::stream::Stream IntervalEventTrigger::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_d3db121d9deb0312], a0.this$));
          }

          ::org::orekit::propagation::events::AbstractDetector IntervalEventTrigger::getFiringIntervalDetector() const
          {
            return ::org::orekit::propagation::events::AbstractDetector(env->callObjectMethod(this$, mids$[mid_getFiringIntervalDetector_adbfb38205dfa1c9]));
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
        namespace trigger {
          static PyObject *t_IntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalEventTrigger_of_(t_IntervalEventTrigger *self, PyObject *args);
          static int t_IntervalEventTrigger_init_(t_IntervalEventTrigger *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntervalEventTrigger_getEventDetectors(t_IntervalEventTrigger *self, PyObject *args);
          static PyObject *t_IntervalEventTrigger_getFieldEventDetectors(t_IntervalEventTrigger *self, PyObject *args);
          static PyObject *t_IntervalEventTrigger_getFiringIntervalDetector(t_IntervalEventTrigger *self);
          static PyObject *t_IntervalEventTrigger_get__eventDetectors(t_IntervalEventTrigger *self, void *data);
          static PyObject *t_IntervalEventTrigger_get__firingIntervalDetector(t_IntervalEventTrigger *self, void *data);
          static PyObject *t_IntervalEventTrigger_get__parameters_(t_IntervalEventTrigger *self, void *data);
          static PyGetSetDef t_IntervalEventTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_IntervalEventTrigger, eventDetectors),
            DECLARE_GET_FIELD(t_IntervalEventTrigger, firingIntervalDetector),
            DECLARE_GET_FIELD(t_IntervalEventTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IntervalEventTrigger__methods_[] = {
            DECLARE_METHOD(t_IntervalEventTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalEventTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalEventTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_IntervalEventTrigger, getEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_IntervalEventTrigger, getFieldEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_IntervalEventTrigger, getFiringIntervalDetector, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntervalEventTrigger)[] = {
            { Py_tp_methods, t_IntervalEventTrigger__methods_ },
            { Py_tp_init, (void *) t_IntervalEventTrigger_init_ },
            { Py_tp_getset, t_IntervalEventTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntervalEventTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers),
            NULL
          };

          DEFINE_TYPE(IntervalEventTrigger, t_IntervalEventTrigger, IntervalEventTrigger);
          PyObject *t_IntervalEventTrigger::wrap_Object(const IntervalEventTrigger& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IntervalEventTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalEventTrigger *self = (t_IntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IntervalEventTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IntervalEventTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalEventTrigger *self = (t_IntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IntervalEventTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(IntervalEventTrigger), &PY_TYPE_DEF(IntervalEventTrigger), module, "IntervalEventTrigger", 0);
          }

          void t_IntervalEventTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalEventTrigger), "class_", make_descriptor(IntervalEventTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalEventTrigger), "wrapfn_", make_descriptor(t_IntervalEventTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalEventTrigger), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntervalEventTrigger::initializeClass, 1)))
              return NULL;
            return t_IntervalEventTrigger::wrap_Object(IntervalEventTrigger(((t_IntervalEventTrigger *) arg)->object.this$));
          }
          static PyObject *t_IntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntervalEventTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IntervalEventTrigger_of_(t_IntervalEventTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_IntervalEventTrigger_init_(t_IntervalEventTrigger *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::events::AbstractDetector a0((jobject) NULL);
            PyTypeObject **p0;
            IntervalEventTrigger object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::events::AbstractDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_AbstractDetector::parameters_))
            {
              INT_CALL(object = IntervalEventTrigger(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IntervalEventTrigger_getEventDetectors(t_IntervalEventTrigger *self, PyObject *args)
          {
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }

            return callSuper(PY_TYPE(IntervalEventTrigger), (PyObject *) self, "getEventDetectors", args, 2);
          }

          static PyObject *t_IntervalEventTrigger_getFieldEventDetectors(t_IntervalEventTrigger *self, PyObject *args)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            return callSuper(PY_TYPE(IntervalEventTrigger), (PyObject *) self, "getFieldEventDetectors", args, 2);
          }

          static PyObject *t_IntervalEventTrigger_getFiringIntervalDetector(t_IntervalEventTrigger *self)
          {
            ::org::orekit::propagation::events::AbstractDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getFiringIntervalDetector());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(result);
          }
          static PyObject *t_IntervalEventTrigger_get__parameters_(t_IntervalEventTrigger *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_IntervalEventTrigger_get__eventDetectors(t_IntervalEventTrigger *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_IntervalEventTrigger_get__firingIntervalDetector(t_IntervalEventTrigger *self, void *data)
          {
            ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getFiringIntervalDetector());
            return ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter.h"
#include "java/io/IOException.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *StreamingAemWriter::class$ = NULL;
              jmethodID *StreamingAemWriter::mids$ = NULL;
              bool StreamingAemWriter::live$ = false;

              jclass StreamingAemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_16a519a09c18f681] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/adm/aem/AemWriter;Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;)V");
                  mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
                  mids$[mid_newSegment_8dfcb5535346dc64] = env->getMethodID(cls, "newSegment", "()Lorg/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingAemWriter::StreamingAemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter & a1, const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a2, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_16a519a09c18f681, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              void StreamingAemWriter::close() const
              {
                env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
              }

              ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter StreamingAemWriter::newSegment() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter(env->callObjectMethod(this$, mids$[mid_newSegment_8dfcb5535346dc64]));
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
              static PyObject *t_StreamingAemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingAemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingAemWriter_init_(t_StreamingAemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingAemWriter_close(t_StreamingAemWriter *self);
              static PyObject *t_StreamingAemWriter_newSegment(t_StreamingAemWriter *self);

              static PyMethodDef t_StreamingAemWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingAemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter, close, METH_NOARGS),
                DECLARE_METHOD(t_StreamingAemWriter, newSegment, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingAemWriter)[] = {
                { Py_tp_methods, t_StreamingAemWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingAemWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingAemWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingAemWriter, t_StreamingAemWriter, StreamingAemWriter);

              void t_StreamingAemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingAemWriter), &PY_TYPE_DEF(StreamingAemWriter), module, "StreamingAemWriter", 0);
              }

              void t_StreamingAemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter), "class_", make_descriptor(StreamingAemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter), "wrapfn_", make_descriptor(t_StreamingAemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingAemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingAemWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingAemWriter::wrap_Object(StreamingAemWriter(((t_StreamingAemWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingAemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingAemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingAemWriter_init_(t_StreamingAemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a3((jobject) NULL);
                StreamingAemWriter object((jobject) NULL);

                if (!parseArgs(args, "kKkk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::aem::t_AemWriter::parameters_, &a2, &a3))
                {
                  INT_CALL(object = StreamingAemWriter(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingAemWriter_close(t_StreamingAemWriter *self)
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              static PyObject *t_StreamingAemWriter_newSegment(t_StreamingAemWriter *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter result((jobject) NULL);
                OBJ_CALL(result = self->object.newSegment());
                return ::org::orekit::files::ccsds::ndm::adm::aem::t_StreamingAemWriter$SegmentWriter::wrap_Object(result);
              }
            }
          }
        }
      }
    }
  }
}
