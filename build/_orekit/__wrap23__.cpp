#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/DSSTBatchLSModel.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
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
            mids$[mid_init$_a27e0eacaf59d226] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_configureHarvester_1a5b9825e639ffce] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_88ee223eb65bb3ed] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DSSTBatchLSModel::DSSTBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->newObject(initializeClass, &mids$, mid_init$_a27e0eacaf59d226, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
#include "org/hipparchus/analysis/function/Atan.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Atan::class$ = NULL;
        jmethodID *Atan::mids$ = NULL;
        bool Atan::live$ = false;

        jclass Atan::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Atan");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Atan::Atan() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Atan::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Atan::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_Atan_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Atan_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Atan_init_(t_Atan *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Atan_value(t_Atan *self, PyObject *args);

        static PyMethodDef t_Atan__methods_[] = {
          DECLARE_METHOD(t_Atan, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Atan)[] = {
          { Py_tp_methods, t_Atan__methods_ },
          { Py_tp_init, (void *) t_Atan_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Atan)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Atan, t_Atan, Atan);

        void t_Atan::install(PyObject *module)
        {
          installType(&PY_TYPE(Atan), &PY_TYPE_DEF(Atan), module, "Atan", 0);
        }

        void t_Atan::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan), "class_", make_descriptor(Atan::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan), "wrapfn_", make_descriptor(t_Atan::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Atan_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Atan::initializeClass, 1)))
            return NULL;
          return t_Atan::wrap_Object(Atan(((t_Atan *) arg)->object.this$));
        }
        static PyObject *t_Atan_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Atan::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Atan_init_(t_Atan *self, PyObject *args, PyObject *kwds)
        {
          Atan object((jobject) NULL);

          INT_CALL(object = Atan());
          self->object = object;

          return 0;
        }

        static PyObject *t_Atan_value(t_Atan *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMetadata::class$ = NULL;
            jmethodID *CdmMetadata::mids$ = NULL;
            bool CdmMetadata::live$ = false;

            jclass CdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_e28302a82adb77ed] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
                mids$[mid_getAdmMsgLink_d2c8eb4129821f0e] = env->getMethodID(cls, "getAdmMsgLink", "()Ljava/lang/String;");
                mids$[mid_getAltCovRefFrame_0fc1562b68204151] = env->getMethodID(cls, "getAltCovRefFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getAltCovType_f2d35325ca2cf482] = env->getMethodID(cls, "getAltCovType", "()Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;");
                mids$[mid_getAtmosphericModel_d2c8eb4129821f0e] = env->getMethodID(cls, "getAtmosphericModel", "()Ljava/lang/String;");
                mids$[mid_getCatalogName_d2c8eb4129821f0e] = env->getMethodID(cls, "getCatalogName", "()Ljava/lang/String;");
                mids$[mid_getCovarianceMethod_aaad2a33cc8f1d7e] = env->getMethodID(cls, "getCovarianceMethod", "()Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;");
                mids$[mid_getCovarianceSource_d2c8eb4129821f0e] = env->getMethodID(cls, "getCovarianceSource", "()Ljava/lang/String;");
                mids$[mid_getEarthTides_112bc53c99d2ffea] = env->getMethodID(cls, "getEarthTides", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_getEphemName_d2c8eb4129821f0e] = env->getMethodID(cls, "getEphemName", "()Ljava/lang/String;");
                mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getGravityDegree_d6ab429752e7c267] = env->getMethodID(cls, "getGravityDegree", "()I");
                mids$[mid_getGravityModel_d2c8eb4129821f0e] = env->getMethodID(cls, "getGravityModel", "()Ljava/lang/String;");
                mids$[mid_getGravityOrder_d6ab429752e7c267] = env->getMethodID(cls, "getGravityOrder", "()I");
                mids$[mid_getInternationalDes_d2c8eb4129821f0e] = env->getMethodID(cls, "getInternationalDes", "()Ljava/lang/String;");
                mids$[mid_getIntrackThrust_112bc53c99d2ffea] = env->getMethodID(cls, "getIntrackThrust", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_getManeuverable_8f0cf64664312b19] = env->getMethodID(cls, "getManeuverable", "()Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");
                mids$[mid_getNBodyPerturbations_d751c1a57012b438] = env->getMethodID(cls, "getNBodyPerturbations", "()Ljava/util/List;");
                mids$[mid_getObject_d2c8eb4129821f0e] = env->getMethodID(cls, "getObject", "()Ljava/lang/String;");
                mids$[mid_getObjectDesignator_d2c8eb4129821f0e] = env->getMethodID(cls, "getObjectDesignator", "()Ljava/lang/String;");
                mids$[mid_getObjectName_d2c8eb4129821f0e] = env->getMethodID(cls, "getObjectName", "()Ljava/lang/String;");
                mids$[mid_getObjectType_4afc147acbd215f9] = env->getMethodID(cls, "getObjectType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");
                mids$[mid_getObsBeforeNextMessage_112bc53c99d2ffea] = env->getMethodID(cls, "getObsBeforeNextMessage", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_getOdmMsgLink_d2c8eb4129821f0e] = env->getMethodID(cls, "getOdmMsgLink", "()Ljava/lang/String;");
                mids$[mid_getOperatorContactPosition_d2c8eb4129821f0e] = env->getMethodID(cls, "getOperatorContactPosition", "()Ljava/lang/String;");
                mids$[mid_getOperatorEmail_d2c8eb4129821f0e] = env->getMethodID(cls, "getOperatorEmail", "()Ljava/lang/String;");
                mids$[mid_getOperatorOrganization_d2c8eb4129821f0e] = env->getMethodID(cls, "getOperatorOrganization", "()Ljava/lang/String;");
                mids$[mid_getOperatorPhone_d2c8eb4129821f0e] = env->getMethodID(cls, "getOperatorPhone", "()Ljava/lang/String;");
                mids$[mid_getOrbitCenter_540df4afb4ddb1b4] = env->getMethodID(cls, "getOrbitCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                mids$[mid_getRefFrame_0fc1562b68204151] = env->getMethodID(cls, "getRefFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getRelativeMetadata_e3058383361edffc] = env->getMethodID(cls, "getRelativeMetadata", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;");
                mids$[mid_getSolarRadiationPressure_112bc53c99d2ffea] = env->getMethodID(cls, "getSolarRadiationPressure", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_setAdmMsgLink_105e1eadb709d9ac] = env->getMethodID(cls, "setAdmMsgLink", "(Ljava/lang/String;)V");
                mids$[mid_setAltCovRefFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setAltCovRefFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setAltCovType_d0bc94278778c073] = env->getMethodID(cls, "setAltCovType", "(Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;)V");
                mids$[mid_setAtmosphericModel_105e1eadb709d9ac] = env->getMethodID(cls, "setAtmosphericModel", "(Ljava/lang/String;)V");
                mids$[mid_setCatalogName_105e1eadb709d9ac] = env->getMethodID(cls, "setCatalogName", "(Ljava/lang/String;)V");
                mids$[mid_setCovarianceMethod_7d2908a1da032851] = env->getMethodID(cls, "setCovarianceMethod", "(Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;)V");
                mids$[mid_setCovarianceSource_105e1eadb709d9ac] = env->getMethodID(cls, "setCovarianceSource", "(Ljava/lang/String;)V");
                mids$[mid_setEarthTides_24522ad136c36bb9] = env->getMethodID(cls, "setEarthTides", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_setEphemName_105e1eadb709d9ac] = env->getMethodID(cls, "setEphemName", "(Ljava/lang/String;)V");
                mids$[mid_setGravityModel_c9a77c84756b106b] = env->getMethodID(cls, "setGravityModel", "(Ljava/lang/String;II)V");
                mids$[mid_setInternationalDes_105e1eadb709d9ac] = env->getMethodID(cls, "setInternationalDes", "(Ljava/lang/String;)V");
                mids$[mid_setIntrackThrust_24522ad136c36bb9] = env->getMethodID(cls, "setIntrackThrust", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_setManeuverable_62776a7b9220fcf1] = env->getMethodID(cls, "setManeuverable", "(Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;)V");
                mids$[mid_setNBodyPerturbations_aa335fea495d60e0] = env->getMethodID(cls, "setNBodyPerturbations", "(Ljava/util/List;)V");
                mids$[mid_setObject_105e1eadb709d9ac] = env->getMethodID(cls, "setObject", "(Ljava/lang/String;)V");
                mids$[mid_setObjectDesignator_105e1eadb709d9ac] = env->getMethodID(cls, "setObjectDesignator", "(Ljava/lang/String;)V");
                mids$[mid_setObjectName_105e1eadb709d9ac] = env->getMethodID(cls, "setObjectName", "(Ljava/lang/String;)V");
                mids$[mid_setObjectType_f747a3e328e2d2f7] = env->getMethodID(cls, "setObjectType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;)V");
                mids$[mid_setObsBeforeNextMessage_24522ad136c36bb9] = env->getMethodID(cls, "setObsBeforeNextMessage", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_setOdmMsgLink_105e1eadb709d9ac] = env->getMethodID(cls, "setOdmMsgLink", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorContactPosition_105e1eadb709d9ac] = env->getMethodID(cls, "setOperatorContactPosition", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorEmail_105e1eadb709d9ac] = env->getMethodID(cls, "setOperatorEmail", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorOrganization_105e1eadb709d9ac] = env->getMethodID(cls, "setOperatorOrganization", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorPhone_105e1eadb709d9ac] = env->getMethodID(cls, "setOperatorPhone", "(Ljava/lang/String;)V");
                mids$[mid_setOrbitCenter_9fc8078d81282211] = env->getMethodID(cls, "setOrbitCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                mids$[mid_setRefFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setRefFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setRelativeMetadata_f459c57c0107f668] = env->getMethodID(cls, "setRelativeMetadata", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)V");
                mids$[mid_setSolarRadiationPressure_24522ad136c36bb9] = env->getMethodID(cls, "setSolarRadiationPressure", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmMetadata::CdmMetadata() : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            CdmMetadata::CdmMetadata(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_e28302a82adb77ed, a0.this$)) {}

            ::java::lang::String CdmMetadata::getAdmMsgLink() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAdmMsgLink_d2c8eb4129821f0e]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade CdmMetadata::getAltCovRefFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getAltCovRefFrame_0fc1562b68204151]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType CdmMetadata::getAltCovType() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType(env->callObjectMethod(this$, mids$[mid_getAltCovType_f2d35325ca2cf482]));
            }

            ::java::lang::String CdmMetadata::getAtmosphericModel() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAtmosphericModel_d2c8eb4129821f0e]));
            }

            ::java::lang::String CdmMetadata::getCatalogName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCatalogName_d2c8eb4129821f0e]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod CdmMetadata::getCovarianceMethod() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod(env->callObjectMethod(this$, mids$[mid_getCovarianceMethod_aaad2a33cc8f1d7e]));
            }

            ::java::lang::String CdmMetadata::getCovarianceSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovarianceSource_d2c8eb4129821f0e]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getEarthTides() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getEarthTides_112bc53c99d2ffea]));
            }

            ::java::lang::String CdmMetadata::getEphemName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getEphemName_d2c8eb4129821f0e]));
            }

            ::org::orekit::frames::Frame CdmMetadata::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
            }

            jint CdmMetadata::getGravityDegree() const
            {
              return env->callIntMethod(this$, mids$[mid_getGravityDegree_d6ab429752e7c267]);
            }

            ::java::lang::String CdmMetadata::getGravityModel() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getGravityModel_d2c8eb4129821f0e]));
            }

            jint CdmMetadata::getGravityOrder() const
            {
              return env->callIntMethod(this$, mids$[mid_getGravityOrder_d6ab429752e7c267]);
            }

            ::java::lang::String CdmMetadata::getInternationalDes() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalDes_d2c8eb4129821f0e]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getIntrackThrust() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getIntrackThrust_112bc53c99d2ffea]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable CdmMetadata::getManeuverable() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable(env->callObjectMethod(this$, mids$[mid_getManeuverable_8f0cf64664312b19]));
            }

            ::java::util::List CdmMetadata::getNBodyPerturbations() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNBodyPerturbations_d751c1a57012b438]));
            }

            ::java::lang::String CdmMetadata::getObject() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObject_d2c8eb4129821f0e]));
            }

            ::java::lang::String CdmMetadata::getObjectDesignator() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectDesignator_d2c8eb4129821f0e]));
            }

            ::java::lang::String CdmMetadata::getObjectName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectName_d2c8eb4129821f0e]));
            }

            ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType CdmMetadata::getObjectType() const
            {
              return ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType(env->callObjectMethod(this$, mids$[mid_getObjectType_4afc147acbd215f9]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getObsBeforeNextMessage() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getObsBeforeNextMessage_112bc53c99d2ffea]));
            }

            ::java::lang::String CdmMetadata::getOdmMsgLink() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOdmMsgLink_d2c8eb4129821f0e]));
            }

            ::java::lang::String CdmMetadata::getOperatorContactPosition() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorContactPosition_d2c8eb4129821f0e]));
            }

            ::java::lang::String CdmMetadata::getOperatorEmail() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorEmail_d2c8eb4129821f0e]));
            }

            ::java::lang::String CdmMetadata::getOperatorOrganization() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorOrganization_d2c8eb4129821f0e]));
            }

            ::java::lang::String CdmMetadata::getOperatorPhone() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorPhone_d2c8eb4129821f0e]));
            }

            ::org::orekit::files::ccsds::definitions::BodyFacade CdmMetadata::getOrbitCenter() const
            {
              return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getOrbitCenter_540df4afb4ddb1b4]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade CdmMetadata::getRefFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getRefFrame_0fc1562b68204151]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata CdmMetadata::getRelativeMetadata() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata(env->callObjectMethod(this$, mids$[mid_getRelativeMetadata_e3058383361edffc]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getSolarRadiationPressure() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getSolarRadiationPressure_112bc53c99d2ffea]));
            }

            void CdmMetadata::setAdmMsgLink(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAdmMsgLink_105e1eadb709d9ac], a0.this$);
            }

            void CdmMetadata::setAltCovRefFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAltCovRefFrame_2c8b859a72c0094e], a0.this$);
            }

            void CdmMetadata::setAltCovType(const ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAltCovType_d0bc94278778c073], a0.this$);
            }

            void CdmMetadata::setAtmosphericModel(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAtmosphericModel_105e1eadb709d9ac], a0.this$);
            }

            void CdmMetadata::setCatalogName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCatalogName_105e1eadb709d9ac], a0.this$);
            }

            void CdmMetadata::setCovarianceMethod(const ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMethod_7d2908a1da032851], a0.this$);
            }

            void CdmMetadata::setCovarianceSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceSource_105e1eadb709d9ac], a0.this$);
            }

            void CdmMetadata::setEarthTides(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEarthTides_24522ad136c36bb9], a0.this$);
            }

            void CdmMetadata::setEphemName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEphemName_105e1eadb709d9ac], a0.this$);
            }

            void CdmMetadata::setGravityModel(const ::java::lang::String & a0, jint a1, jint a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setGravityModel_c9a77c84756b106b], a0.this$, a1, a2);
            }

            void CdmMetadata::setInternationalDes(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInternationalDes_105e1eadb709d9ac], a0.this$);
            }

            void CdmMetadata::setIntrackThrust(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntrackThrust_24522ad136c36bb9], a0.this$);
            }

            void CdmMetadata::setManeuverable(const ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setManeuverable_62776a7b9220fcf1], a0.this$);
            }

            void CdmMetadata::setNBodyPerturbations(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setNBodyPerturbations_aa335fea495d60e0], a0.this$);
            }

            void CdmMetadata::setObject(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObject_105e1eadb709d9ac], a0.this$);
            }

            void CdmMetadata::setObjectDesignator(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectDesignator_105e1eadb709d9ac], a0.this$);
            }

            void CdmMetadata::setObjectName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectName_105e1eadb709d9ac], a0.this$);
            }

            void CdmMetadata::setObjectType(const ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectType_f747a3e328e2d2f7], a0.this$);
            }

            void CdmMetadata::setObsBeforeNextMessage(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObsBeforeNextMessage_24522ad136c36bb9], a0.this$);
            }

            void CdmMetadata::setOdmMsgLink(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOdmMsgLink_105e1eadb709d9ac], a0.this$);
            }

            void CdmMetadata::setOperatorContactPosition(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorContactPosition_105e1eadb709d9ac], a0.this$);
            }

            void CdmMetadata::setOperatorEmail(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorEmail_105e1eadb709d9ac], a0.this$);
            }

            void CdmMetadata::setOperatorOrganization(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorOrganization_105e1eadb709d9ac], a0.this$);
            }

            void CdmMetadata::setOperatorPhone(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorPhone_105e1eadb709d9ac], a0.this$);
            }

            void CdmMetadata::setOrbitCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOrbitCenter_9fc8078d81282211], a0.this$);
            }

            void CdmMetadata::setRefFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRefFrame_2c8b859a72c0094e], a0.this$);
            }

            void CdmMetadata::setRelativeMetadata(const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeMetadata_f459c57c0107f668], a0.this$);
            }

            void CdmMetadata::setSolarRadiationPressure(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSolarRadiationPressure_24522ad136c36bb9], a0.this$);
            }

            void CdmMetadata::validate(jdouble a0) const
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
            static PyObject *t_CdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmMetadata_init_(t_CdmMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmMetadata_getAdmMsgLink(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getAltCovRefFrame(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getAltCovType(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getAtmosphericModel(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getCatalogName(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getCovarianceMethod(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getCovarianceSource(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getEarthTides(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getEphemName(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getFrame(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getGravityDegree(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getGravityModel(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getGravityOrder(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getInternationalDes(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getIntrackThrust(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getManeuverable(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getNBodyPerturbations(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObject(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObjectDesignator(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObjectName(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObjectType(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObsBeforeNextMessage(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOdmMsgLink(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorContactPosition(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorEmail(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorOrganization(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorPhone(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOrbitCenter(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getRefFrame(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getRelativeMetadata(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getSolarRadiationPressure(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_setAdmMsgLink(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setAltCovRefFrame(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setAltCovType(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setAtmosphericModel(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setCatalogName(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setCovarianceMethod(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setCovarianceSource(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setEarthTides(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setEphemName(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setGravityModel(t_CdmMetadata *self, PyObject *args);
            static PyObject *t_CdmMetadata_setInternationalDes(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setIntrackThrust(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setManeuverable(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setNBodyPerturbations(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObject(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObjectDesignator(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObjectName(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObjectType(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOdmMsgLink(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorContactPosition(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorEmail(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorOrganization(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorPhone(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOrbitCenter(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setRefFrame(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setRelativeMetadata(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setSolarRadiationPressure(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_validate(t_CdmMetadata *self, PyObject *args);
            static PyObject *t_CdmMetadata_get__admMsgLink(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__admMsgLink(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__altCovRefFrame(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__altCovRefFrame(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__altCovType(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__altCovType(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__atmosphericModel(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__atmosphericModel(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__catalogName(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__catalogName(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__covarianceMethod(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__covarianceMethod(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__covarianceSource(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__covarianceSource(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__earthTides(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__earthTides(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__ephemName(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__ephemName(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__frame(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__gravityDegree(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__gravityModel(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__gravityOrder(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__internationalDes(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__internationalDes(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__intrackThrust(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__intrackThrust(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__maneuverable(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__maneuverable(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__nBodyPerturbations(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__nBodyPerturbations(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__object(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__object(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__objectDesignator(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__objectDesignator(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__objectName(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__objectName(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__objectType(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__objectType(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__obsBeforeNextMessage(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__obsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__odmMsgLink(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__odmMsgLink(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorContactPosition(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorContactPosition(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorEmail(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorEmail(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorOrganization(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorOrganization(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorPhone(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorPhone(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__orbitCenter(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__orbitCenter(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__refFrame(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__refFrame(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__relativeMetadata(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__relativeMetadata(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__solarRadiationPressure(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__solarRadiationPressure(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_CdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmMetadata, admMsgLink),
              DECLARE_GETSET_FIELD(t_CdmMetadata, altCovRefFrame),
              DECLARE_GETSET_FIELD(t_CdmMetadata, altCovType),
              DECLARE_GETSET_FIELD(t_CdmMetadata, atmosphericModel),
              DECLARE_GETSET_FIELD(t_CdmMetadata, catalogName),
              DECLARE_GETSET_FIELD(t_CdmMetadata, covarianceMethod),
              DECLARE_GETSET_FIELD(t_CdmMetadata, covarianceSource),
              DECLARE_GETSET_FIELD(t_CdmMetadata, earthTides),
              DECLARE_GETSET_FIELD(t_CdmMetadata, ephemName),
              DECLARE_GET_FIELD(t_CdmMetadata, frame),
              DECLARE_GET_FIELD(t_CdmMetadata, gravityDegree),
              DECLARE_GET_FIELD(t_CdmMetadata, gravityModel),
              DECLARE_GET_FIELD(t_CdmMetadata, gravityOrder),
              DECLARE_GETSET_FIELD(t_CdmMetadata, internationalDes),
              DECLARE_GETSET_FIELD(t_CdmMetadata, intrackThrust),
              DECLARE_GETSET_FIELD(t_CdmMetadata, maneuverable),
              DECLARE_GETSET_FIELD(t_CdmMetadata, nBodyPerturbations),
              DECLARE_GETSET_FIELD(t_CdmMetadata, object),
              DECLARE_GETSET_FIELD(t_CdmMetadata, objectDesignator),
              DECLARE_GETSET_FIELD(t_CdmMetadata, objectName),
              DECLARE_GETSET_FIELD(t_CdmMetadata, objectType),
              DECLARE_GETSET_FIELD(t_CdmMetadata, obsBeforeNextMessage),
              DECLARE_GETSET_FIELD(t_CdmMetadata, odmMsgLink),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorContactPosition),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorEmail),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorOrganization),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorPhone),
              DECLARE_GETSET_FIELD(t_CdmMetadata, orbitCenter),
              DECLARE_GETSET_FIELD(t_CdmMetadata, refFrame),
              DECLARE_GETSET_FIELD(t_CdmMetadata, relativeMetadata),
              DECLARE_GETSET_FIELD(t_CdmMetadata, solarRadiationPressure),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmMetadata__methods_[] = {
              DECLARE_METHOD(t_CdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadata, getAdmMsgLink, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getAltCovRefFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getAltCovType, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getAtmosphericModel, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getCatalogName, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getCovarianceMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getCovarianceSource, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getEarthTides, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getEphemName, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getGravityDegree, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getGravityModel, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getGravityOrder, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getInternationalDes, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getIntrackThrust, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getManeuverable, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getNBodyPerturbations, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObject, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObjectDesignator, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObjectName, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObjectType, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObsBeforeNextMessage, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOdmMsgLink, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorContactPosition, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorEmail, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorOrganization, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorPhone, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOrbitCenter, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getRefFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getRelativeMetadata, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getSolarRadiationPressure, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, setAdmMsgLink, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setAltCovRefFrame, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setAltCovType, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setAtmosphericModel, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setCatalogName, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setCovarianceMethod, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setCovarianceSource, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setEarthTides, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setEphemName, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setGravityModel, METH_VARARGS),
              DECLARE_METHOD(t_CdmMetadata, setInternationalDes, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setIntrackThrust, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setManeuverable, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setNBodyPerturbations, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObject, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObjectDesignator, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObjectName, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObjectType, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObsBeforeNextMessage, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOdmMsgLink, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorContactPosition, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorEmail, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorOrganization, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorPhone, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOrbitCenter, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setRefFrame, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setRelativeMetadata, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setSolarRadiationPressure, METH_O),
              DECLARE_METHOD(t_CdmMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMetadata)[] = {
              { Py_tp_methods, t_CdmMetadata__methods_ },
              { Py_tp_init, (void *) t_CdmMetadata_init_ },
              { Py_tp_getset, t_CdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(CdmMetadata, t_CdmMetadata, CdmMetadata);

            void t_CdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMetadata), &PY_TYPE_DEF(CdmMetadata), module, "CdmMetadata", 0);
            }

            void t_CdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadata), "class_", make_descriptor(CdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadata), "wrapfn_", make_descriptor(t_CdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMetadata::initializeClass, 1)))
                return NULL;
              return t_CdmMetadata::wrap_Object(CdmMetadata(((t_CdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_CdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmMetadata_init_(t_CdmMetadata *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  CdmMetadata object((jobject) NULL);

                  INT_CALL(object = CdmMetadata());
                  self->object = object;
                  break;
                }
               case 1:
                {
                  ::org::orekit::data::DataContext a0((jobject) NULL);
                  CdmMetadata object((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                  {
                    INT_CALL(object = CdmMetadata(a0));
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

            static PyObject *t_CdmMetadata_getAdmMsgLink(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getAdmMsgLink());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getAltCovRefFrame(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getAltCovRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getAltCovType(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType result((jobject) NULL);
              OBJ_CALL(result = self->object.getAltCovType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AltCovarianceType::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getAtmosphericModel(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getAtmosphericModel());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getCatalogName(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCatalogName());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getCovarianceMethod(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovarianceMethod());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CovarianceMethod::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getCovarianceSource(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovarianceSource());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getEarthTides(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getEarthTides());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getEphemName(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getEphemName());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getFrame(t_CdmMetadata *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getGravityDegree(t_CdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getGravityDegree());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CdmMetadata_getGravityModel(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getGravityModel());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getGravityOrder(t_CdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getGravityOrder());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CdmMetadata_getInternationalDes(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getInternationalDes());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getIntrackThrust(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getIntrackThrust());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getManeuverable(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable result((jobject) NULL);
              OBJ_CALL(result = self->object.getManeuverable());
              return ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getNBodyPerturbations(t_CdmMetadata *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getNBodyPerturbations());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::definitions::PY_TYPE(BodyFacade));
            }

            static PyObject *t_CdmMetadata_getObject(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObject());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getObjectDesignator(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectDesignator());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getObjectName(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectName());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getObjectType(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectType());
              return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getObsBeforeNextMessage(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getObsBeforeNextMessage());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getOdmMsgLink(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOdmMsgLink());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorContactPosition(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorContactPosition());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorEmail(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorEmail());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorOrganization(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorOrganization());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorPhone(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorPhone());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOrbitCenter(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbitCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getRefFrame(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getRelativeMetadata(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getSolarRadiationPressure(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getSolarRadiationPressure());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_setAdmMsgLink(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setAdmMsgLink(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAdmMsgLink", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setAltCovRefFrame(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setAltCovRefFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAltCovRefFrame", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setAltCovType(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_AltCovarianceType::parameters_))
              {
                OBJ_CALL(self->object.setAltCovType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAltCovType", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setAtmosphericModel(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setAtmosphericModel(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAtmosphericModel", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setCatalogName(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setCatalogName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCatalogName", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setCovarianceMethod(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_CovarianceMethod::parameters_))
              {
                OBJ_CALL(self->object.setCovarianceMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setCovarianceSource(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setCovarianceSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceSource", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setEarthTides(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setEarthTides(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEarthTides", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setEphemName(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setEphemName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEphemName", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setGravityModel(t_CdmMetadata *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setGravityModel(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setGravityModel", args);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setInternationalDes(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setInternationalDes(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInternationalDes", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setIntrackThrust(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setIntrackThrust(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntrackThrust", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setManeuverable(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::parameters_))
              {
                OBJ_CALL(self->object.setManeuverable(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setManeuverable", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setNBodyPerturbations(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.setNBodyPerturbations(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setNBodyPerturbations", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObject(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObject(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObject", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObjectDesignator(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectDesignator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectDesignator", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObjectName(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectName", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObjectType(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::parameters_))
              {
                OBJ_CALL(self->object.setObjectType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectType", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setObsBeforeNextMessage(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObsBeforeNextMessage", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOdmMsgLink(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOdmMsgLink(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOdmMsgLink", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorContactPosition(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorContactPosition(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorContactPosition", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorEmail(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorEmail(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorEmail", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorOrganization(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorOrganization(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorOrganization", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorPhone(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorPhone(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorPhone", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOrbitCenter(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setOrbitCenter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOrbitCenter", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setRefFrame(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setRefFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRefFrame", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setRelativeMetadata(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setRelativeMetadata(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeMetadata", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setSolarRadiationPressure(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setSolarRadiationPressure(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSolarRadiationPressure", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_validate(t_CdmMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_CdmMetadata_get__admMsgLink(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getAdmMsgLink());
              return j2p(value);
            }
            static int t_CdmMetadata_set__admMsgLink(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setAdmMsgLink(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "admMsgLink", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__altCovRefFrame(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getAltCovRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_CdmMetadata_set__altCovRefFrame(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setAltCovRefFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "altCovRefFrame", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__altCovType(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType value((jobject) NULL);
              OBJ_CALL(value = self->object.getAltCovType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AltCovarianceType::wrap_Object(value);
            }
            static int t_CdmMetadata_set__altCovType(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::initializeClass, &value))
                {
                  INT_CALL(self->object.setAltCovType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "altCovType", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__atmosphericModel(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getAtmosphericModel());
              return j2p(value);
            }
            static int t_CdmMetadata_set__atmosphericModel(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setAtmosphericModel(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "atmosphericModel", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__catalogName(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCatalogName());
              return j2p(value);
            }
            static int t_CdmMetadata_set__catalogName(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setCatalogName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "catalogName", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__covarianceMethod(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovarianceMethod());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CovarianceMethod::wrap_Object(value);
            }
            static int t_CdmMetadata_set__covarianceMethod(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::initializeClass, &value))
                {
                  INT_CALL(self->object.setCovarianceMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covarianceMethod", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__covarianceSource(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovarianceSource());
              return j2p(value);
            }
            static int t_CdmMetadata_set__covarianceSource(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setCovarianceSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covarianceSource", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__earthTides(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getEarthTides());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__earthTides(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setEarthTides(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "earthTides", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__ephemName(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getEphemName());
              return j2p(value);
            }
            static int t_CdmMetadata_set__ephemName(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setEphemName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ephemName", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__frame(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_CdmMetadata_get__gravityDegree(t_CdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getGravityDegree());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CdmMetadata_get__gravityModel(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getGravityModel());
              return j2p(value);
            }

            static PyObject *t_CdmMetadata_get__gravityOrder(t_CdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getGravityOrder());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CdmMetadata_get__internationalDes(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getInternationalDes());
              return j2p(value);
            }
            static int t_CdmMetadata_set__internationalDes(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setInternationalDes(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "internationalDes", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__intrackThrust(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getIntrackThrust());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__intrackThrust(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setIntrackThrust(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "intrackThrust", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__maneuverable(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable value((jobject) NULL);
              OBJ_CALL(value = self->object.getManeuverable());
              return ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::wrap_Object(value);
            }
            static int t_CdmMetadata_set__maneuverable(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::initializeClass, &value))
                {
                  INT_CALL(self->object.setManeuverable(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maneuverable", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__nBodyPerturbations(t_CdmMetadata *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getNBodyPerturbations());
              return ::java::util::t_List::wrap_Object(value);
            }
            static int t_CdmMetadata_set__nBodyPerturbations(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::List value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                {
                  INT_CALL(self->object.setNBodyPerturbations(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "nBodyPerturbations", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__object(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObject());
              return j2p(value);
            }
            static int t_CdmMetadata_set__object(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObject(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "object", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__objectDesignator(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectDesignator());
              return j2p(value);
            }
            static int t_CdmMetadata_set__objectDesignator(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectDesignator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectDesignator", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__objectName(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectName());
              return j2p(value);
            }
            static int t_CdmMetadata_set__objectName(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectName", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__objectType(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectType());
              return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(value);
            }
            static int t_CdmMetadata_set__objectType(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::initializeClass, &value))
                {
                  INT_CALL(self->object.setObjectType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectType", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__obsBeforeNextMessage(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getObsBeforeNextMessage());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__obsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setObsBeforeNextMessage(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "obsBeforeNextMessage", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__odmMsgLink(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOdmMsgLink());
              return j2p(value);
            }
            static int t_CdmMetadata_set__odmMsgLink(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOdmMsgLink(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "odmMsgLink", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorContactPosition(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorContactPosition());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorContactPosition(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorContactPosition(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorContactPosition", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorEmail(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorEmail());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorEmail(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorEmail(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorEmail", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorOrganization(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorOrganization());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorOrganization(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorOrganization(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorOrganization", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorPhone(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorPhone());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorPhone(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorPhone(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorPhone", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__orbitCenter(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbitCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
            }
            static int t_CdmMetadata_set__orbitCenter(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setOrbitCenter(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "orbitCenter", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__refFrame(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_CdmMetadata_set__refFrame(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setRefFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "refFrame", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__relativeMetadata(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(value);
            }
            static int t_CdmMetadata_set__relativeMetadata(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &value))
                {
                  INT_CALL(self->object.setRelativeMetadata(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeMetadata", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__solarRadiationPressure(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getSolarRadiationPressure());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__solarRadiationPressure(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setSolarRadiationPressure(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "solarRadiationPressure", arg);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/EphemerisOcmWriter.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *EphemerisOcmWriter::class$ = NULL;
              jmethodID *EphemerisOcmWriter::mids$ = NULL;
              bool EphemerisOcmWriter::live$ = false;

              jclass EphemerisOcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/EphemerisOcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_b841797e4355eabe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;Lorg/orekit/files/ccsds/utils/FileFormat;Ljava/lang/String;DI)V");
                  mids$[mid_write_12ce9ebfe43ac6e6] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              EphemerisOcmWriter::EphemerisOcmWriter(const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter & a0, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a2, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a3, const ::org::orekit::files::ccsds::utils::FileFormat & a4, const ::java::lang::String & a5, jdouble a6, jint a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b841797e4355eabe, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6, a7)) {}

              void EphemerisOcmWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_write_12ce9ebfe43ac6e6], a0.this$, a1.this$);
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
              static PyObject *t_EphemerisOcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EphemerisOcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_EphemerisOcmWriter_init_(t_EphemerisOcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_EphemerisOcmWriter_write(t_EphemerisOcmWriter *self, PyObject *args);

              static PyMethodDef t_EphemerisOcmWriter__methods_[] = {
                DECLARE_METHOD(t_EphemerisOcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOcmWriter, write, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(EphemerisOcmWriter)[] = {
                { Py_tp_methods, t_EphemerisOcmWriter__methods_ },
                { Py_tp_init, (void *) t_EphemerisOcmWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(EphemerisOcmWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(EphemerisOcmWriter, t_EphemerisOcmWriter, EphemerisOcmWriter);

              void t_EphemerisOcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(EphemerisOcmWriter), &PY_TYPE_DEF(EphemerisOcmWriter), module, "EphemerisOcmWriter", 0);
              }

              void t_EphemerisOcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOcmWriter), "class_", make_descriptor(EphemerisOcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOcmWriter), "wrapfn_", make_descriptor(t_EphemerisOcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOcmWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_EphemerisOcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, EphemerisOcmWriter::initializeClass, 1)))
                  return NULL;
                return t_EphemerisOcmWriter::wrap_Object(EphemerisOcmWriter(((t_EphemerisOcmWriter *) arg)->object.this$));
              }
              static PyObject *t_EphemerisOcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, EphemerisOcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_EphemerisOcmWriter_init_(t_EphemerisOcmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a3((jobject) NULL);
                ::org::orekit::files::ccsds::utils::FileFormat a4((jobject) NULL);
                PyTypeObject **p4;
                ::java::lang::String a5((jobject) NULL);
                jdouble a6;
                jint a7;
                EphemerisOcmWriter object((jobject) NULL);

                if (!parseArgs(args, "KkkkKsDI", ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::parameters_, &a1, &a2, &a3, &a4, &p4, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_, &a5, &a6, &a7))
                {
                  INT_CALL(object = EphemerisOcmWriter(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_EphemerisOcmWriter_write(t_EphemerisOcmWriter *self, PyObject *args)
              {
                ::java::lang::Appendable a0((jobject) NULL);
                ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
                {
                  OBJ_CALL(self->object.write(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "write", args);
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
#include "org/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage.h"
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouCivilianNavigationMessage::class$ = NULL;
            jmethodID *BeidouCivilianNavigationMessage::mids$ = NULL;
            bool BeidouCivilianNavigationMessage::live$ = false;
            ::java::lang::String *BeidouCivilianNavigationMessage::CNV1 = NULL;
            ::java::lang::String *BeidouCivilianNavigationMessage::CNV2 = NULL;
            ::java::lang::String *BeidouCivilianNavigationMessage::CNV3 = NULL;

            jclass BeidouCivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_236bbd4eecc1088c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/Frequency;)V");
                mids$[mid_getADot_9981f74b2d109da6] = env->getMethodID(cls, "getADot", "()D");
                mids$[mid_getDeltaN0Dot_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaN0Dot", "()D");
                mids$[mid_getHealth_d6ab429752e7c267] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getIODC_d6ab429752e7c267] = env->getMethodID(cls, "getIODC", "()I");
                mids$[mid_getIODE_d6ab429752e7c267] = env->getMethodID(cls, "getIODE", "()I");
                mids$[mid_getIntegrityFlags_d6ab429752e7c267] = env->getMethodID(cls, "getIntegrityFlags", "()I");
                mids$[mid_getIscB1CD_9981f74b2d109da6] = env->getMethodID(cls, "getIscB1CD", "()D");
                mids$[mid_getIscB1CP_9981f74b2d109da6] = env->getMethodID(cls, "getIscB1CP", "()D");
                mids$[mid_getIscB2AD_9981f74b2d109da6] = env->getMethodID(cls, "getIscB2AD", "()D");
                mids$[mid_getSatelliteType_9853a078183d2130] = env->getMethodID(cls, "getSatelliteType", "()Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;");
                mids$[mid_getSignal_fe669125d12cb4d2] = env->getMethodID(cls, "getSignal", "()Lorg/orekit/gnss/Frequency;");
                mids$[mid_getSisaiOc1_d6ab429752e7c267] = env->getMethodID(cls, "getSisaiOc1", "()I");
                mids$[mid_getSisaiOc2_d6ab429752e7c267] = env->getMethodID(cls, "getSisaiOc2", "()I");
                mids$[mid_getSisaiOcb_d6ab429752e7c267] = env->getMethodID(cls, "getSisaiOcb", "()I");
                mids$[mid_getSisaiOe_d6ab429752e7c267] = env->getMethodID(cls, "getSisaiOe", "()I");
                mids$[mid_getSismai_d6ab429752e7c267] = env->getMethodID(cls, "getSismai", "()I");
                mids$[mid_getTgdB1Cp_9981f74b2d109da6] = env->getMethodID(cls, "getTgdB1Cp", "()D");
                mids$[mid_getTgdB2ap_9981f74b2d109da6] = env->getMethodID(cls, "getTgdB2ap", "()D");
                mids$[mid_getTgdB2bI_9981f74b2d109da6] = env->getMethodID(cls, "getTgdB2bI", "()D");
                mids$[mid_setADot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setADot", "(D)V");
                mids$[mid_setDeltaN0Dot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDeltaN0Dot", "(D)V");
                mids$[mid_setHealth_8fd427ab23829bf5] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setIODC_8fd427ab23829bf5] = env->getMethodID(cls, "setIODC", "(I)V");
                mids$[mid_setIODE_8fd427ab23829bf5] = env->getMethodID(cls, "setIODE", "(I)V");
                mids$[mid_setIntegrityFlags_8fd427ab23829bf5] = env->getMethodID(cls, "setIntegrityFlags", "(I)V");
                mids$[mid_setIscB1CD_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setIscB1CD", "(D)V");
                mids$[mid_setIscB1CP_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setIscB1CP", "(D)V");
                mids$[mid_setIscB2AD_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setIscB2AD", "(D)V");
                mids$[mid_setSatelliteType_8e6b6f0b47c8521e] = env->getMethodID(cls, "setSatelliteType", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;)V");
                mids$[mid_setSisaiOc1_8fd427ab23829bf5] = env->getMethodID(cls, "setSisaiOc1", "(I)V");
                mids$[mid_setSisaiOc2_8fd427ab23829bf5] = env->getMethodID(cls, "setSisaiOc2", "(I)V");
                mids$[mid_setSisaiOcb_8fd427ab23829bf5] = env->getMethodID(cls, "setSisaiOcb", "(I)V");
                mids$[mid_setSisaiOe_8fd427ab23829bf5] = env->getMethodID(cls, "setSisaiOe", "(I)V");
                mids$[mid_setSismai_8fd427ab23829bf5] = env->getMethodID(cls, "setSismai", "(I)V");
                mids$[mid_setTgdB1Cp_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTgdB1Cp", "(D)V");
                mids$[mid_setTgdB2ap_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTgdB2ap", "(D)V");
                mids$[mid_setTgdB2bI_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTgdB2bI", "(D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CNV1 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV1", "Ljava/lang/String;"));
                CNV2 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV2", "Ljava/lang/String;"));
                CNV3 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV3", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouCivilianNavigationMessage::BeidouCivilianNavigationMessage(const ::org::orekit::gnss::Frequency & a0) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_236bbd4eecc1088c, a0.this$)) {}

            jdouble BeidouCivilianNavigationMessage::getADot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getADot_9981f74b2d109da6]);
            }

            jdouble BeidouCivilianNavigationMessage::getDeltaN0Dot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaN0Dot_9981f74b2d109da6]);
            }

            jint BeidouCivilianNavigationMessage::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_d6ab429752e7c267]);
            }

            jint BeidouCivilianNavigationMessage::getIODC() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODC_d6ab429752e7c267]);
            }

            jint BeidouCivilianNavigationMessage::getIODE() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODE_d6ab429752e7c267]);
            }

            jint BeidouCivilianNavigationMessage::getIntegrityFlags() const
            {
              return env->callIntMethod(this$, mids$[mid_getIntegrityFlags_d6ab429752e7c267]);
            }

            jdouble BeidouCivilianNavigationMessage::getIscB1CD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscB1CD_9981f74b2d109da6]);
            }

            jdouble BeidouCivilianNavigationMessage::getIscB1CP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscB1CP_9981f74b2d109da6]);
            }

            jdouble BeidouCivilianNavigationMessage::getIscB2AD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscB2AD_9981f74b2d109da6]);
            }

            ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType BeidouCivilianNavigationMessage::getSatelliteType() const
            {
              return ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType(env->callObjectMethod(this$, mids$[mid_getSatelliteType_9853a078183d2130]));
            }

            ::org::orekit::gnss::Frequency BeidouCivilianNavigationMessage::getSignal() const
            {
              return ::org::orekit::gnss::Frequency(env->callObjectMethod(this$, mids$[mid_getSignal_fe669125d12cb4d2]));
            }

            jint BeidouCivilianNavigationMessage::getSisaiOc1() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOc1_d6ab429752e7c267]);
            }

            jint BeidouCivilianNavigationMessage::getSisaiOc2() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOc2_d6ab429752e7c267]);
            }

            jint BeidouCivilianNavigationMessage::getSisaiOcb() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOcb_d6ab429752e7c267]);
            }

            jint BeidouCivilianNavigationMessage::getSisaiOe() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOe_d6ab429752e7c267]);
            }

            jint BeidouCivilianNavigationMessage::getSismai() const
            {
              return env->callIntMethod(this$, mids$[mid_getSismai_d6ab429752e7c267]);
            }

            jdouble BeidouCivilianNavigationMessage::getTgdB1Cp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTgdB1Cp_9981f74b2d109da6]);
            }

            jdouble BeidouCivilianNavigationMessage::getTgdB2ap() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTgdB2ap_9981f74b2d109da6]);
            }

            jdouble BeidouCivilianNavigationMessage::getTgdB2bI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTgdB2bI_9981f74b2d109da6]);
            }

            void BeidouCivilianNavigationMessage::setADot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setADot_1ad26e8c8c0cd65b], a0);
            }

            void BeidouCivilianNavigationMessage::setDeltaN0Dot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaN0Dot_1ad26e8c8c0cd65b], a0);
            }

            void BeidouCivilianNavigationMessage::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_8fd427ab23829bf5], a0);
            }

            void BeidouCivilianNavigationMessage::setIODC(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODC_8fd427ab23829bf5], a0);
            }

            void BeidouCivilianNavigationMessage::setIODE(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODE_8fd427ab23829bf5], a0);
            }

            void BeidouCivilianNavigationMessage::setIntegrityFlags(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntegrityFlags_8fd427ab23829bf5], a0);
            }

            void BeidouCivilianNavigationMessage::setIscB1CD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscB1CD_1ad26e8c8c0cd65b], a0);
            }

            void BeidouCivilianNavigationMessage::setIscB1CP(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscB1CP_1ad26e8c8c0cd65b], a0);
            }

            void BeidouCivilianNavigationMessage::setIscB2AD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscB2AD_1ad26e8c8c0cd65b], a0);
            }

            void BeidouCivilianNavigationMessage::setSatelliteType(const ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSatelliteType_8e6b6f0b47c8521e], a0.this$);
            }

            void BeidouCivilianNavigationMessage::setSisaiOc1(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOc1_8fd427ab23829bf5], a0);
            }

            void BeidouCivilianNavigationMessage::setSisaiOc2(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOc2_8fd427ab23829bf5], a0);
            }

            void BeidouCivilianNavigationMessage::setSisaiOcb(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOcb_8fd427ab23829bf5], a0);
            }

            void BeidouCivilianNavigationMessage::setSisaiOe(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOe_8fd427ab23829bf5], a0);
            }

            void BeidouCivilianNavigationMessage::setSismai(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSismai_8fd427ab23829bf5], a0);
            }

            void BeidouCivilianNavigationMessage::setTgdB1Cp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTgdB1Cp_1ad26e8c8c0cd65b], a0);
            }

            void BeidouCivilianNavigationMessage::setTgdB2ap(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTgdB2ap_1ad26e8c8c0cd65b], a0);
            }

            void BeidouCivilianNavigationMessage::setTgdB2bI(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTgdB2bI_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_BeidouCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_BeidouCivilianNavigationMessage_init_(t_BeidouCivilianNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BeidouCivilianNavigationMessage_getADot(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getDeltaN0Dot(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getHealth(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIODC(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIODE(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIntegrityFlags(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CD(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CP(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIscB2AD(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSatelliteType(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSignal(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc1(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc2(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOcb(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOe(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSismai(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB1Cp(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2ap(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2bI(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_setADot(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setDeltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setHealth(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIntegrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSatelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_get__aDot(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__aDot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__health(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__health(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iODC(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iODE(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__integrityFlags(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__integrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CD(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CP(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB2AD(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__satelliteType(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__satelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__signal(t_BeidouCivilianNavigationMessage *self, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc1(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc2(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOcb(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOe(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sismai(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2ap(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__tgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2bI(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__tgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_BeidouCivilianNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, aDot),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, deltaN0Dot),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, health),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iODC),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iODE),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, integrityFlags),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iscB1CD),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iscB1CP),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iscB2AD),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, satelliteType),
              DECLARE_GET_FIELD(t_BeidouCivilianNavigationMessage, signal),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOc1),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOc2),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOcb),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOe),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sismai),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, tgdB1Cp),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, tgdB2ap),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, tgdB2bI),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouCivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getADot, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getDeltaN0Dot, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIODC, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIODE, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIntegrityFlags, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIscB1CD, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIscB1CP, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIscB2AD, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSatelliteType, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSignal, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOc1, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOc2, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOcb, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOe, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSismai, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getTgdB1Cp, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getTgdB2ap, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getTgdB2bI, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setADot, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setDeltaN0Dot, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setHealth, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIODC, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIODE, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIntegrityFlags, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIscB1CD, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIscB1CP, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIscB2AD, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSatelliteType, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOc1, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOc2, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOcb, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOe, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSismai, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setTgdB1Cp, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setTgdB2ap, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setTgdB2bI, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouCivilianNavigationMessage)[] = {
              { Py_tp_methods, t_BeidouCivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_BeidouCivilianNavigationMessage_init_ },
              { Py_tp_getset, t_BeidouCivilianNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouCivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(BeidouCivilianNavigationMessage, t_BeidouCivilianNavigationMessage, BeidouCivilianNavigationMessage);

            void t_BeidouCivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouCivilianNavigationMessage), &PY_TYPE_DEF(BeidouCivilianNavigationMessage), module, "BeidouCivilianNavigationMessage", 0);
            }

            void t_BeidouCivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "class_", make_descriptor(BeidouCivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "wrapfn_", make_descriptor(t_BeidouCivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(BeidouCivilianNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "CNV1", make_descriptor(j2p(*BeidouCivilianNavigationMessage::CNV1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "CNV2", make_descriptor(j2p(*BeidouCivilianNavigationMessage::CNV2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "CNV3", make_descriptor(j2p(*BeidouCivilianNavigationMessage::CNV3)));
            }

            static PyObject *t_BeidouCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouCivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_BeidouCivilianNavigationMessage::wrap_Object(BeidouCivilianNavigationMessage(((t_BeidouCivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_BeidouCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouCivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_BeidouCivilianNavigationMessage_init_(t_BeidouCivilianNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::gnss::Frequency a0((jobject) NULL);
              PyTypeObject **p0;
              BeidouCivilianNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
              {
                INT_CALL(object = BeidouCivilianNavigationMessage(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getADot(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getADot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getDeltaN0Dot(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getHealth(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIODC(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIODE(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODE());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIntegrityFlags(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIntegrityFlags());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CD(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscB1CD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CP(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscB1CP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIscB2AD(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscB2AD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSatelliteType(t_BeidouCivilianNavigationMessage *self)
            {
              ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType result((jobject) NULL);
              OBJ_CALL(result = self->object.getSatelliteType());
              return ::org::orekit::propagation::analytical::gnss::data::t_BeidouSatelliteType::wrap_Object(result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSignal(t_BeidouCivilianNavigationMessage *self)
            {
              ::org::orekit::gnss::Frequency result((jobject) NULL);
              OBJ_CALL(result = self->object.getSignal());
              return ::org::orekit::gnss::t_Frequency::wrap_Object(result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc1(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOc1());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc2(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOc2());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOcb(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOcb());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOe(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOe());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSismai(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSismai());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB1Cp(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTgdB1Cp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2ap(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTgdB2ap());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2bI(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTgdB2bI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setADot(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setADot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setADot", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setDeltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaN0Dot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaN0Dot", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setHealth(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODC", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODE", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIntegrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIntegrityFlags(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntegrityFlags", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscB1CD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscB1CD", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscB1CP(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscB1CP", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscB2AD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscB2AD", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSatelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::gnss::data::t_BeidouSatelliteType::parameters_))
              {
                OBJ_CALL(self->object.setSatelliteType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSatelliteType", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOc1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOc1", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOc2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOc2", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOcb(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOcb", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOe(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOe", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSismai(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSismai", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTgdB1Cp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTgdB1Cp", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTgdB2ap(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTgdB2ap", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTgdB2bI(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTgdB2bI", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__aDot(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getADot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__aDot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setADot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aDot", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaN0Dot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaN0Dot", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__health(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__health(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iODC(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODC());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODC", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iODE(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODE());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODE", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__integrityFlags(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIntegrityFlags());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__integrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIntegrityFlags(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "integrityFlags", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CD(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscB1CD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscB1CD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscB1CD", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CP(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscB1CP());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscB1CP(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscB1CP", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB2AD(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscB2AD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscB2AD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscB2AD", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__satelliteType(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType value((jobject) NULL);
              OBJ_CALL(value = self->object.getSatelliteType());
              return ::org::orekit::propagation::analytical::gnss::data::t_BeidouSatelliteType::wrap_Object(value);
            }
            static int t_BeidouCivilianNavigationMessage_set__satelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::initializeClass, &value))
                {
                  INT_CALL(self->object.setSatelliteType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "satelliteType", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__signal(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              ::org::orekit::gnss::Frequency value((jobject) NULL);
              OBJ_CALL(value = self->object.getSignal());
              return ::org::orekit::gnss::t_Frequency::wrap_Object(value);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc1(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOc1());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOc1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOc1", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc2(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOc2());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOc2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOc2", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOcb(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOcb());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOcb(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOcb", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOe(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOe());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOe(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOe", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sismai(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSismai());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSismai(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sismai", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTgdB1Cp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTgdB1Cp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tgdB1Cp", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2ap(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTgdB2ap());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__tgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTgdB2ap(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tgdB2ap", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2bI(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTgdB2bI());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__tgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTgdB2bI(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tgdB2bI", arg);
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
#include "org/orekit/utils/OrekitConfiguration.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OrekitConfiguration::class$ = NULL;
      jmethodID *OrekitConfiguration::mids$ = NULL;
      bool OrekitConfiguration::live$ = false;

      jclass OrekitConfiguration::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OrekitConfiguration");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCacheSlotsNumber_d6ab429752e7c267] = env->getStaticMethodID(cls, "getCacheSlotsNumber", "()I");
          mids$[mid_setCacheSlotsNumber_8fd427ab23829bf5] = env->getStaticMethodID(cls, "setCacheSlotsNumber", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint OrekitConfiguration::getCacheSlotsNumber()
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_getCacheSlotsNumber_d6ab429752e7c267]);
      }

      void OrekitConfiguration::setCacheSlotsNumber(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setCacheSlotsNumber_8fd427ab23829bf5], a0);
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
      static PyObject *t_OrekitConfiguration_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitConfiguration_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitConfiguration_getCacheSlotsNumber(PyTypeObject *type);
      static PyObject *t_OrekitConfiguration_setCacheSlotsNumber(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitConfiguration_get__cacheSlotsNumber(t_OrekitConfiguration *self, void *data);
      static int t_OrekitConfiguration_set__cacheSlotsNumber(t_OrekitConfiguration *self, PyObject *arg, void *data);
      static PyGetSetDef t_OrekitConfiguration__fields_[] = {
        DECLARE_GETSET_FIELD(t_OrekitConfiguration, cacheSlotsNumber),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitConfiguration__methods_[] = {
        DECLARE_METHOD(t_OrekitConfiguration, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitConfiguration, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitConfiguration, getCacheSlotsNumber, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_OrekitConfiguration, setCacheSlotsNumber, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitConfiguration)[] = {
        { Py_tp_methods, t_OrekitConfiguration__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrekitConfiguration__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitConfiguration)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OrekitConfiguration, t_OrekitConfiguration, OrekitConfiguration);

      void t_OrekitConfiguration::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitConfiguration), &PY_TYPE_DEF(OrekitConfiguration), module, "OrekitConfiguration", 0);
      }

      void t_OrekitConfiguration::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitConfiguration), "class_", make_descriptor(OrekitConfiguration::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitConfiguration), "wrapfn_", make_descriptor(t_OrekitConfiguration::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitConfiguration), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitConfiguration_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitConfiguration::initializeClass, 1)))
          return NULL;
        return t_OrekitConfiguration::wrap_Object(OrekitConfiguration(((t_OrekitConfiguration *) arg)->object.this$));
      }
      static PyObject *t_OrekitConfiguration_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitConfiguration::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrekitConfiguration_getCacheSlotsNumber(PyTypeObject *type)
      {
        jint result;
        OBJ_CALL(result = ::org::orekit::utils::OrekitConfiguration::getCacheSlotsNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OrekitConfiguration_setCacheSlotsNumber(PyTypeObject *type, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(::org::orekit::utils::OrekitConfiguration::setCacheSlotsNumber(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setCacheSlotsNumber", arg);
        return NULL;
      }

      static PyObject *t_OrekitConfiguration_get__cacheSlotsNumber(t_OrekitConfiguration *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCacheSlotsNumber());
        return PyLong_FromLong((long) value);
      }
      static int t_OrekitConfiguration_set__cacheSlotsNumber(t_OrekitConfiguration *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setCacheSlotsNumber(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "cacheSlotsNumber", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/ResidualFilter.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *ResidualFilter::class$ = NULL;
          jmethodID *ResidualFilter::mids$ = NULL;
          bool ResidualFilter::live$ = false;

          jclass ResidualFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/ResidualFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_filter_2b2e233a7bb98272] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ResidualFilter::ResidualFilter(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          void ResidualFilter::filter(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_filter_2b2e233a7bb98272], a0.this$, a1.this$);
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
        namespace filtering {
          static PyObject *t_ResidualFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ResidualFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ResidualFilter_of_(t_ResidualFilter *self, PyObject *args);
          static int t_ResidualFilter_init_(t_ResidualFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ResidualFilter_filter(t_ResidualFilter *self, PyObject *args);
          static PyObject *t_ResidualFilter_get__parameters_(t_ResidualFilter *self, void *data);
          static PyGetSetDef t_ResidualFilter__fields_[] = {
            DECLARE_GET_FIELD(t_ResidualFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ResidualFilter__methods_[] = {
            DECLARE_METHOD(t_ResidualFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ResidualFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ResidualFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_ResidualFilter, filter, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ResidualFilter)[] = {
            { Py_tp_methods, t_ResidualFilter__methods_ },
            { Py_tp_init, (void *) t_ResidualFilter_init_ },
            { Py_tp_getset, t_ResidualFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ResidualFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ResidualFilter, t_ResidualFilter, ResidualFilter);
          PyObject *t_ResidualFilter::wrap_Object(const ResidualFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ResidualFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ResidualFilter *self = (t_ResidualFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ResidualFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ResidualFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ResidualFilter *self = (t_ResidualFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ResidualFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(ResidualFilter), &PY_TYPE_DEF(ResidualFilter), module, "ResidualFilter", 0);
          }

          void t_ResidualFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ResidualFilter), "class_", make_descriptor(ResidualFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ResidualFilter), "wrapfn_", make_descriptor(t_ResidualFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ResidualFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ResidualFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ResidualFilter::initializeClass, 1)))
              return NULL;
            return t_ResidualFilter::wrap_Object(ResidualFilter(((t_ResidualFilter *) arg)->object.this$));
          }
          static PyObject *t_ResidualFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ResidualFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ResidualFilter_of_(t_ResidualFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ResidualFilter_init_(t_ResidualFilter *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ResidualFilter object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ResidualFilter(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ResidualFilter_filter(t_ResidualFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
            {
              OBJ_CALL(self->object.filter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filter", args);
            return NULL;
          }
          static PyObject *t_ResidualFilter_get__parameters_(t_ResidualFilter *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldGaussIntegrator::class$ = NULL;
          jmethodID *FieldGaussIntegrator::mids$ = NULL;
          bool FieldGaussIntegrator::live$ = false;

          jclass FieldGaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldGaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b0e5b4ae04bc40a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_7709cb51638b2622] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_getNumberOfPoints_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfPoints", "()I");
              mids$[mid_getPoint_dfcf702144fd7bc1] = env->getMethodID(cls, "getPoint", "(I)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getWeight_dfcf702144fd7bc1] = env->getMethodID(cls, "getWeight", "(I)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_integrate_16aa2ca93d2ce662] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldGaussIntegrator::FieldGaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0e5b4ae04bc40a1, a0.this$)) {}

          FieldGaussIntegrator::FieldGaussIntegrator(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7709cb51638b2622, a0.this$, a1.this$)) {}

          jint FieldGaussIntegrator::getNumberOfPoints() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfPoints_d6ab429752e7c267]);
          }

          ::org::hipparchus::CalculusFieldElement FieldGaussIntegrator::getPoint(jint a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPoint_dfcf702144fd7bc1], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldGaussIntegrator::getWeight(jint a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getWeight_dfcf702144fd7bc1], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldGaussIntegrator::integrate(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_16aa2ca93d2ce662], a0.this$));
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
          static PyObject *t_FieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_of_(t_FieldGaussIntegrator *self, PyObject *args);
          static int t_FieldGaussIntegrator_init_(t_FieldGaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldGaussIntegrator_getNumberOfPoints(t_FieldGaussIntegrator *self);
          static PyObject *t_FieldGaussIntegrator_getPoint(t_FieldGaussIntegrator *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_getWeight(t_FieldGaussIntegrator *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_integrate(t_FieldGaussIntegrator *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_get__numberOfPoints(t_FieldGaussIntegrator *self, void *data);
          static PyObject *t_FieldGaussIntegrator_get__parameters_(t_FieldGaussIntegrator *self, void *data);
          static PyGetSetDef t_FieldGaussIntegrator__fields_[] = {
            DECLARE_GET_FIELD(t_FieldGaussIntegrator, numberOfPoints),
            DECLARE_GET_FIELD(t_FieldGaussIntegrator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldGaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_FieldGaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegrator, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldGaussIntegrator, getNumberOfPoints, METH_NOARGS),
            DECLARE_METHOD(t_FieldGaussIntegrator, getPoint, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegrator, getWeight, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegrator, integrate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldGaussIntegrator)[] = {
            { Py_tp_methods, t_FieldGaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_FieldGaussIntegrator_init_ },
            { Py_tp_getset, t_FieldGaussIntegrator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldGaussIntegrator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldGaussIntegrator, t_FieldGaussIntegrator, FieldGaussIntegrator);
          PyObject *t_FieldGaussIntegrator::wrap_Object(const FieldGaussIntegrator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegrator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegrator *self = (t_FieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldGaussIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegrator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegrator *self = (t_FieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldGaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldGaussIntegrator), &PY_TYPE_DEF(FieldGaussIntegrator), module, "FieldGaussIntegrator", 0);
          }

          void t_FieldGaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegrator), "class_", make_descriptor(FieldGaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegrator), "wrapfn_", make_descriptor(t_FieldGaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldGaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_FieldGaussIntegrator::wrap_Object(FieldGaussIntegrator(((t_FieldGaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_FieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldGaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldGaussIntegrator_of_(t_FieldGaussIntegrator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldGaussIntegrator_init_(t_FieldGaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                FieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = FieldGaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                FieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldGaussIntegrator(a0, a1));
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

          static PyObject *t_FieldGaussIntegrator_getNumberOfPoints(t_FieldGaussIntegrator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldGaussIntegrator_getPoint(t_FieldGaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getPoint(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPoint", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegrator_getWeight(t_FieldGaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getWeight(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWeight", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegrator_integrate(t_FieldGaussIntegrator *self, PyObject *arg)
          {
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "integrate", arg);
            return NULL;
          }
          static PyObject *t_FieldGaussIntegrator_get__parameters_(t_FieldGaussIntegrator *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldGaussIntegrator_get__numberOfPoints(t_FieldGaussIntegrator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IntegerArrayConsumer::class$ = NULL;
            jmethodID *ParseToken$IntegerArrayConsumer::mids$ = NULL;
            bool ParseToken$IntegerArrayConsumer::live$ = false;

            jclass ParseToken$IntegerArrayConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_d43202153dd284f7] = env->getMethodID(cls, "accept", "([I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IntegerArrayConsumer::accept(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_d43202153dd284f7], a0.this$);
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
            static PyObject *t_ParseToken$IntegerArrayConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntegerArrayConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntegerArrayConsumer_accept(t_ParseToken$IntegerArrayConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$IntegerArrayConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IntegerArrayConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntegerArrayConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntegerArrayConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IntegerArrayConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IntegerArrayConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IntegerArrayConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IntegerArrayConsumer, t_ParseToken$IntegerArrayConsumer, ParseToken$IntegerArrayConsumer);

            void t_ParseToken$IntegerArrayConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IntegerArrayConsumer), &PY_TYPE_DEF(ParseToken$IntegerArrayConsumer), module, "ParseToken$IntegerArrayConsumer", 0);
            }

            void t_ParseToken$IntegerArrayConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntegerArrayConsumer), "class_", make_descriptor(ParseToken$IntegerArrayConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntegerArrayConsumer), "wrapfn_", make_descriptor(t_ParseToken$IntegerArrayConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntegerArrayConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IntegerArrayConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IntegerArrayConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IntegerArrayConsumer::wrap_Object(ParseToken$IntegerArrayConsumer(((t_ParseToken$IntegerArrayConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IntegerArrayConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IntegerArrayConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IntegerArrayConsumer_accept(t_ParseToken$IntegerArrayConsumer *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
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
#include "org/orekit/files/rinex/observation/RinexObservationWriter.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservationWriter::class$ = NULL;
          jmethodID *RinexObservationWriter::mids$ = NULL;
          bool RinexObservationWriter::live$ = false;

          jclass RinexObservationWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservationWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8340f43d6268953f] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;)V");
              mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
              mids$[mid_prepareComments_aa335fea495d60e0] = env->getMethodID(cls, "prepareComments", "(Ljava/util/List;)V");
              mids$[mid_writeCompleteFile_2e16d500654da8ad] = env->getMethodID(cls, "writeCompleteFile", "(Lorg/orekit/files/rinex/observation/RinexObservation;)V");
              mids$[mid_writeHeader_f11a530af626ae4b] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/rinex/observation/RinexObservationHeader;)V");
              mids$[mid_writeObservationDataSet_d75e9b743ecf20cb] = env->getMethodID(cls, "writeObservationDataSet", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_writePendingRinex2Observations_ff7cb6c242604316] = env->getMethodID(cls, "writePendingRinex2Observations", "()V");
              mids$[mid_writePendingRinex34Observations_ff7cb6c242604316] = env->getMethodID(cls, "writePendingRinex34Observations", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservationWriter::RinexObservationWriter(const ::java::lang::Appendable & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8340f43d6268953f, a0.this$, a1.this$)) {}

          void RinexObservationWriter::close() const
          {
            env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
          }

          void RinexObservationWriter::prepareComments(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_prepareComments_aa335fea495d60e0], a0.this$);
          }

          void RinexObservationWriter::writeCompleteFile(const ::org::orekit::files::rinex::observation::RinexObservation & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_writeCompleteFile_2e16d500654da8ad], a0.this$);
          }

          void RinexObservationWriter::writeHeader(const ::org::orekit::files::rinex::observation::RinexObservationHeader & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_writeHeader_f11a530af626ae4b], a0.this$);
          }

          void RinexObservationWriter::writeObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_writeObservationDataSet_d75e9b743ecf20cb], a0.this$);
          }

          void RinexObservationWriter::writePendingRinex2Observations() const
          {
            env->callVoidMethod(this$, mids$[mid_writePendingRinex2Observations_ff7cb6c242604316]);
          }

          void RinexObservationWriter::writePendingRinex34Observations() const
          {
            env->callVoidMethod(this$, mids$[mid_writePendingRinex34Observations_ff7cb6c242604316]);
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
        namespace observation {
          static PyObject *t_RinexObservationWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservationWriter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexObservationWriter_init_(t_RinexObservationWriter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservationWriter_close(t_RinexObservationWriter *self);
          static PyObject *t_RinexObservationWriter_prepareComments(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writeCompleteFile(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writeHeader(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writeObservationDataSet(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writePendingRinex2Observations(t_RinexObservationWriter *self);
          static PyObject *t_RinexObservationWriter_writePendingRinex34Observations(t_RinexObservationWriter *self);

          static PyMethodDef t_RinexObservationWriter__methods_[] = {
            DECLARE_METHOD(t_RinexObservationWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationWriter, close, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationWriter, prepareComments, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writeCompleteFile, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writeHeader, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writeObservationDataSet, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writePendingRinex2Observations, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationWriter, writePendingRinex34Observations, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservationWriter)[] = {
            { Py_tp_methods, t_RinexObservationWriter__methods_ },
            { Py_tp_init, (void *) t_RinexObservationWriter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservationWriter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexObservationWriter, t_RinexObservationWriter, RinexObservationWriter);

          void t_RinexObservationWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservationWriter), &PY_TYPE_DEF(RinexObservationWriter), module, "RinexObservationWriter", 0);
          }

          void t_RinexObservationWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationWriter), "class_", make_descriptor(RinexObservationWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationWriter), "wrapfn_", make_descriptor(t_RinexObservationWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationWriter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexObservationWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservationWriter::initializeClass, 1)))
              return NULL;
            return t_RinexObservationWriter::wrap_Object(RinexObservationWriter(((t_RinexObservationWriter *) arg)->object.this$));
          }
          static PyObject *t_RinexObservationWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservationWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexObservationWriter_init_(t_RinexObservationWriter *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::Appendable a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            RinexObservationWriter object((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::lang::Appendable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RinexObservationWriter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexObservationWriter_close(t_RinexObservationWriter *self)
          {
            OBJ_CALL(self->object.close());
            Py_RETURN_NONE;
          }

          static PyObject *t_RinexObservationWriter_prepareComments(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.prepareComments(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "prepareComments", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writeCompleteFile(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::RinexObservation a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::observation::RinexObservation::initializeClass, &a0, &p0, ::org::orekit::files::rinex::observation::t_RinexObservation::parameters_))
            {
              OBJ_CALL(self->object.writeCompleteFile(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeCompleteFile", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writeHeader(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::RinexObservationHeader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::RinexObservationHeader::initializeClass, &a0))
            {
              OBJ_CALL(self->object.writeHeader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeHeader", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writeObservationDataSet(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(self->object.writeObservationDataSet(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeObservationDataSet", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writePendingRinex2Observations(t_RinexObservationWriter *self)
          {
            OBJ_CALL(self->object.writePendingRinex2Observations());
            Py_RETURN_NONE;
          }

          static PyObject *t_RinexObservationWriter_writePendingRinex34Observations(t_RinexObservationWriter *self)
          {
            OBJ_CALL(self->object.writePendingRinex34Observations());
            Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *SpacecraftBodyFrame::class$ = NULL;
          jmethodID *SpacecraftBodyFrame::mids$ = NULL;
          bool SpacecraftBodyFrame::live$ = false;

          jclass SpacecraftBodyFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/SpacecraftBodyFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f69b717b12fd8ff6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;Ljava/lang/String;)V");
              mids$[mid_getBaseEquipment_9dfad51eee66d075] = env->getMethodID(cls, "getBaseEquipment", "()Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;");
              mids$[mid_getLabel_d2c8eb4129821f0e] = env->getMethodID(cls, "getLabel", "()Ljava/lang/String;");
              mids$[mid_parse_e7a268bc991ab0c6] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;");
              mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SpacecraftBodyFrame::SpacecraftBodyFrame(const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f69b717b12fd8ff6, a0.this$, a1.this$)) {}

          ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment SpacecraftBodyFrame::getBaseEquipment() const
          {
            return ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment(env->callObjectMethod(this$, mids$[mid_getBaseEquipment_9dfad51eee66d075]));
          }

          ::java::lang::String SpacecraftBodyFrame::getLabel() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLabel_d2c8eb4129821f0e]));
          }

          SpacecraftBodyFrame SpacecraftBodyFrame::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SpacecraftBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_parse_e7a268bc991ab0c6], a0.this$));
          }

          ::java::lang::String SpacecraftBodyFrame::toString() const
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
    namespace files {
      namespace ccsds {
        namespace definitions {
          static PyObject *t_SpacecraftBodyFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SpacecraftBodyFrame_init_(t_SpacecraftBodyFrame *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SpacecraftBodyFrame_getBaseEquipment(t_SpacecraftBodyFrame *self);
          static PyObject *t_SpacecraftBodyFrame_getLabel(t_SpacecraftBodyFrame *self);
          static PyObject *t_SpacecraftBodyFrame_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame_toString(t_SpacecraftBodyFrame *self, PyObject *args);
          static PyObject *t_SpacecraftBodyFrame_get__baseEquipment(t_SpacecraftBodyFrame *self, void *data);
          static PyObject *t_SpacecraftBodyFrame_get__label(t_SpacecraftBodyFrame *self, void *data);
          static PyGetSetDef t_SpacecraftBodyFrame__fields_[] = {
            DECLARE_GET_FIELD(t_SpacecraftBodyFrame, baseEquipment),
            DECLARE_GET_FIELD(t_SpacecraftBodyFrame, label),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SpacecraftBodyFrame__methods_[] = {
            DECLARE_METHOD(t_SpacecraftBodyFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, getBaseEquipment, METH_NOARGS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, getLabel, METH_NOARGS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, parse, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SpacecraftBodyFrame)[] = {
            { Py_tp_methods, t_SpacecraftBodyFrame__methods_ },
            { Py_tp_init, (void *) t_SpacecraftBodyFrame_init_ },
            { Py_tp_getset, t_SpacecraftBodyFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SpacecraftBodyFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SpacecraftBodyFrame, t_SpacecraftBodyFrame, SpacecraftBodyFrame);

          void t_SpacecraftBodyFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(SpacecraftBodyFrame), &PY_TYPE_DEF(SpacecraftBodyFrame), module, "SpacecraftBodyFrame", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "BaseEquipment", make_descriptor(&PY_TYPE_DEF(SpacecraftBodyFrame$BaseEquipment)));
          }

          void t_SpacecraftBodyFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "class_", make_descriptor(SpacecraftBodyFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "wrapfn_", make_descriptor(t_SpacecraftBodyFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SpacecraftBodyFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SpacecraftBodyFrame::initializeClass, 1)))
              return NULL;
            return t_SpacecraftBodyFrame::wrap_Object(SpacecraftBodyFrame(((t_SpacecraftBodyFrame *) arg)->object.this$));
          }
          static PyObject *t_SpacecraftBodyFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SpacecraftBodyFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SpacecraftBodyFrame_init_(t_SpacecraftBodyFrame *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::String a1((jobject) NULL);
            SpacecraftBodyFrame object((jobject) NULL);

            if (!parseArgs(args, "Ks", ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame$BaseEquipment::parameters_, &a1))
            {
              INT_CALL(object = SpacecraftBodyFrame(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SpacecraftBodyFrame_getBaseEquipment(t_SpacecraftBodyFrame *self)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment result((jobject) NULL);
            OBJ_CALL(result = self->object.getBaseEquipment());
            return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(result);
          }

          static PyObject *t_SpacecraftBodyFrame_getLabel(t_SpacecraftBodyFrame *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLabel());
            return j2p(result);
          }

          static PyObject *t_SpacecraftBodyFrame_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            SpacecraftBodyFrame result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::parse(a0));
              return t_SpacecraftBodyFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_SpacecraftBodyFrame_toString(t_SpacecraftBodyFrame *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(SpacecraftBodyFrame), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_SpacecraftBodyFrame_get__baseEquipment(t_SpacecraftBodyFrame *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment value((jobject) NULL);
            OBJ_CALL(value = self->object.getBaseEquipment());
            return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(value);
          }

          static PyObject *t_SpacecraftBodyFrame_get__label(t_SpacecraftBodyFrame *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLabel());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser.h"
#include "java/util/Collection.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *HarmonicCurveFitter$ParameterGuesser::class$ = NULL;
      jmethodID *HarmonicCurveFitter$ParameterGuesser::mids$ = NULL;
      bool HarmonicCurveFitter$ParameterGuesser::live$ = false;

      jclass HarmonicCurveFitter$ParameterGuesser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_82af91bc8dfb5029] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
          mids$[mid_guess_be783177b060994b] = env->getMethodID(cls, "guess", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HarmonicCurveFitter$ParameterGuesser::HarmonicCurveFitter$ParameterGuesser(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_82af91bc8dfb5029, a0.this$)) {}

      JArray< jdouble > HarmonicCurveFitter$ParameterGuesser::guess() const
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
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HarmonicCurveFitter$ParameterGuesser_init_(t_HarmonicCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_guess(t_HarmonicCurveFitter$ParameterGuesser *self);

      static PyMethodDef t_HarmonicCurveFitter$ParameterGuesser__methods_[] = {
        DECLARE_METHOD(t_HarmonicCurveFitter$ParameterGuesser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter$ParameterGuesser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter$ParameterGuesser, guess, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HarmonicCurveFitter$ParameterGuesser)[] = {
        { Py_tp_methods, t_HarmonicCurveFitter$ParameterGuesser__methods_ },
        { Py_tp_init, (void *) t_HarmonicCurveFitter$ParameterGuesser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HarmonicCurveFitter$ParameterGuesser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HarmonicCurveFitter$ParameterGuesser, t_HarmonicCurveFitter$ParameterGuesser, HarmonicCurveFitter$ParameterGuesser);

      void t_HarmonicCurveFitter$ParameterGuesser::install(PyObject *module)
      {
        installType(&PY_TYPE(HarmonicCurveFitter$ParameterGuesser), &PY_TYPE_DEF(HarmonicCurveFitter$ParameterGuesser), module, "HarmonicCurveFitter$ParameterGuesser", 0);
      }

      void t_HarmonicCurveFitter$ParameterGuesser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter$ParameterGuesser), "class_", make_descriptor(HarmonicCurveFitter$ParameterGuesser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter$ParameterGuesser), "wrapfn_", make_descriptor(t_HarmonicCurveFitter$ParameterGuesser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter$ParameterGuesser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HarmonicCurveFitter$ParameterGuesser::initializeClass, 1)))
          return NULL;
        return t_HarmonicCurveFitter$ParameterGuesser::wrap_Object(HarmonicCurveFitter$ParameterGuesser(((t_HarmonicCurveFitter$ParameterGuesser *) arg)->object.this$));
      }
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HarmonicCurveFitter$ParameterGuesser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HarmonicCurveFitter$ParameterGuesser_init_(t_HarmonicCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        HarmonicCurveFitter$ParameterGuesser object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = HarmonicCurveFitter$ParameterGuesser(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_guess(t_HarmonicCurveFitter$ParameterGuesser *self)
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
#include "org/orekit/models/earth/displacement/Tide.h"
#include "org/orekit/models/earth/displacement/Tide.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *Tide::class$ = NULL;
          jmethodID *Tide::mids$ = NULL;
          bool Tide::live$ = false;
          Tide *Tide::K1 = NULL;
          Tide *Tide::K2 = NULL;
          Tide *Tide::M2 = NULL;
          Tide *Tide::MF = NULL;
          Tide *Tide::MM = NULL;
          Tide *Tide::N2 = NULL;
          Tide *Tide::O1 = NULL;
          Tide *Tide::P1 = NULL;
          Tide *Tide::Q1 = NULL;
          Tide *Tide::S2 = NULL;
          Tide *Tide::SSA = NULL;

          jclass Tide::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/Tide");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_init$_ee5da648d666a7a9] = env->getMethodID(cls, "<init>", "(IIIIII)V");
              mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getDelaunayMultipliers_d6f20bd740dd34cd] = env->getMethodID(cls, "getDelaunayMultipliers", "()[I");
              mids$[mid_getDoodsonMultipliers_d6f20bd740dd34cd] = env->getMethodID(cls, "getDoodsonMultipliers", "()[I");
              mids$[mid_getDoodsonNumber_d6ab429752e7c267] = env->getMethodID(cls, "getDoodsonNumber", "()I");
              mids$[mid_getPhase_7212d8ed403494a1] = env->getMethodID(cls, "getPhase", "(Lorg/orekit/data/BodiesElements;)D");
              mids$[mid_getRate_7212d8ed403494a1] = env->getMethodID(cls, "getRate", "(Lorg/orekit/data/BodiesElements;)D");
              mids$[mid_getTauMultiplier_d6ab429752e7c267] = env->getMethodID(cls, "getTauMultiplier", "()I");
              mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              K1 = new Tide(env->getStaticObjectField(cls, "K1", "Lorg/orekit/models/earth/displacement/Tide;"));
              K2 = new Tide(env->getStaticObjectField(cls, "K2", "Lorg/orekit/models/earth/displacement/Tide;"));
              M2 = new Tide(env->getStaticObjectField(cls, "M2", "Lorg/orekit/models/earth/displacement/Tide;"));
              MF = new Tide(env->getStaticObjectField(cls, "MF", "Lorg/orekit/models/earth/displacement/Tide;"));
              MM = new Tide(env->getStaticObjectField(cls, "MM", "Lorg/orekit/models/earth/displacement/Tide;"));
              N2 = new Tide(env->getStaticObjectField(cls, "N2", "Lorg/orekit/models/earth/displacement/Tide;"));
              O1 = new Tide(env->getStaticObjectField(cls, "O1", "Lorg/orekit/models/earth/displacement/Tide;"));
              P1 = new Tide(env->getStaticObjectField(cls, "P1", "Lorg/orekit/models/earth/displacement/Tide;"));
              Q1 = new Tide(env->getStaticObjectField(cls, "Q1", "Lorg/orekit/models/earth/displacement/Tide;"));
              S2 = new Tide(env->getStaticObjectField(cls, "S2", "Lorg/orekit/models/earth/displacement/Tide;"));
              SSA = new Tide(env->getStaticObjectField(cls, "SSA", "Lorg/orekit/models/earth/displacement/Tide;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Tide::Tide(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

          Tide::Tide(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ee5da648d666a7a9, a0, a1, a2, a3, a4, a5)) {}

          jboolean Tide::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
          }

          JArray< jint > Tide::getDelaunayMultipliers() const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getDelaunayMultipliers_d6f20bd740dd34cd]));
          }

          JArray< jint > Tide::getDoodsonMultipliers() const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getDoodsonMultipliers_d6f20bd740dd34cd]));
          }

          jint Tide::getDoodsonNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getDoodsonNumber_d6ab429752e7c267]);
          }

          jdouble Tide::getPhase(const ::org::orekit::data::BodiesElements & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhase_7212d8ed403494a1], a0.this$);
          }

          jdouble Tide::getRate(const ::org::orekit::data::BodiesElements & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRate_7212d8ed403494a1], a0.this$);
          }

          jint Tide::getTauMultiplier() const
          {
            return env->callIntMethod(this$, mids$[mid_getTauMultiplier_d6ab429752e7c267]);
          }

          jint Tide::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
        namespace displacement {
          static PyObject *t_Tide_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Tide_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Tide_init_(t_Tide *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Tide_equals(t_Tide *self, PyObject *args);
          static PyObject *t_Tide_getDelaunayMultipliers(t_Tide *self);
          static PyObject *t_Tide_getDoodsonMultipliers(t_Tide *self);
          static PyObject *t_Tide_getDoodsonNumber(t_Tide *self);
          static PyObject *t_Tide_getPhase(t_Tide *self, PyObject *arg);
          static PyObject *t_Tide_getRate(t_Tide *self, PyObject *arg);
          static PyObject *t_Tide_getTauMultiplier(t_Tide *self);
          static PyObject *t_Tide_hashCode(t_Tide *self, PyObject *args);
          static PyObject *t_Tide_get__delaunayMultipliers(t_Tide *self, void *data);
          static PyObject *t_Tide_get__doodsonMultipliers(t_Tide *self, void *data);
          static PyObject *t_Tide_get__doodsonNumber(t_Tide *self, void *data);
          static PyObject *t_Tide_get__tauMultiplier(t_Tide *self, void *data);
          static PyGetSetDef t_Tide__fields_[] = {
            DECLARE_GET_FIELD(t_Tide, delaunayMultipliers),
            DECLARE_GET_FIELD(t_Tide, doodsonMultipliers),
            DECLARE_GET_FIELD(t_Tide, doodsonNumber),
            DECLARE_GET_FIELD(t_Tide, tauMultiplier),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Tide__methods_[] = {
            DECLARE_METHOD(t_Tide, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tide, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tide, equals, METH_VARARGS),
            DECLARE_METHOD(t_Tide, getDelaunayMultipliers, METH_NOARGS),
            DECLARE_METHOD(t_Tide, getDoodsonMultipliers, METH_NOARGS),
            DECLARE_METHOD(t_Tide, getDoodsonNumber, METH_NOARGS),
            DECLARE_METHOD(t_Tide, getPhase, METH_O),
            DECLARE_METHOD(t_Tide, getRate, METH_O),
            DECLARE_METHOD(t_Tide, getTauMultiplier, METH_NOARGS),
            DECLARE_METHOD(t_Tide, hashCode, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Tide)[] = {
            { Py_tp_methods, t_Tide__methods_ },
            { Py_tp_init, (void *) t_Tide_init_ },
            { Py_tp_getset, t_Tide__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Tide)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Tide, t_Tide, Tide);

          void t_Tide::install(PyObject *module)
          {
            installType(&PY_TYPE(Tide), &PY_TYPE_DEF(Tide), module, "Tide", 0);
          }

          void t_Tide::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "class_", make_descriptor(Tide::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "wrapfn_", make_descriptor(t_Tide::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "boxfn_", make_descriptor(boxObject));
            env->getClass(Tide::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "K1", make_descriptor(t_Tide::wrap_Object(*Tide::K1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "K2", make_descriptor(t_Tide::wrap_Object(*Tide::K2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "M2", make_descriptor(t_Tide::wrap_Object(*Tide::M2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "MF", make_descriptor(t_Tide::wrap_Object(*Tide::MF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "MM", make_descriptor(t_Tide::wrap_Object(*Tide::MM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "N2", make_descriptor(t_Tide::wrap_Object(*Tide::N2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "O1", make_descriptor(t_Tide::wrap_Object(*Tide::O1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "P1", make_descriptor(t_Tide::wrap_Object(*Tide::P1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "Q1", make_descriptor(t_Tide::wrap_Object(*Tide::Q1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "S2", make_descriptor(t_Tide::wrap_Object(*Tide::S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "SSA", make_descriptor(t_Tide::wrap_Object(*Tide::SSA)));
          }

          static PyObject *t_Tide_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Tide::initializeClass, 1)))
              return NULL;
            return t_Tide::wrap_Object(Tide(((t_Tide *) arg)->object.this$));
          }
          static PyObject *t_Tide_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Tide::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Tide_init_(t_Tide *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                Tide object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = Tide(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jint a0;
                jint a1;
                jint a2;
                jint a3;
                jint a4;
                jint a5;
                Tide object((jobject) NULL);

                if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Tide(a0, a1, a2, a3, a4, a5));
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

          static PyObject *t_Tide_equals(t_Tide *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Tide), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Tide_getDelaunayMultipliers(t_Tide *self)
          {
            JArray< jint > result((jobject) NULL);
            OBJ_CALL(result = self->object.getDelaunayMultipliers());
            return result.wrap();
          }

          static PyObject *t_Tide_getDoodsonMultipliers(t_Tide *self)
          {
            JArray< jint > result((jobject) NULL);
            OBJ_CALL(result = self->object.getDoodsonMultipliers());
            return result.wrap();
          }

          static PyObject *t_Tide_getDoodsonNumber(t_Tide *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDoodsonNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Tide_getPhase(t_Tide *self, PyObject *arg)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPhase(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPhase", arg);
            return NULL;
          }

          static PyObject *t_Tide_getRate(t_Tide *self, PyObject *arg)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getRate(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRate", arg);
            return NULL;
          }

          static PyObject *t_Tide_getTauMultiplier(t_Tide *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTauMultiplier());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Tide_hashCode(t_Tide *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Tide), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Tide_get__delaunayMultipliers(t_Tide *self, void *data)
          {
            JArray< jint > value((jobject) NULL);
            OBJ_CALL(value = self->object.getDelaunayMultipliers());
            return value.wrap();
          }

          static PyObject *t_Tide_get__doodsonMultipliers(t_Tide *self, void *data)
          {
            JArray< jint > value((jobject) NULL);
            OBJ_CALL(value = self->object.getDoodsonMultipliers());
            return value.wrap();
          }

          static PyObject *t_Tide_get__doodsonNumber(t_Tide *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDoodsonNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Tide_get__tauMultiplier(t_Tide *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTauMultiplier());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/FiniteDifferencePropagatorConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *FiniteDifferencePropagatorConverter::class$ = NULL;
        jmethodID *FiniteDifferencePropagatorConverter::mids$ = NULL;
        bool FiniteDifferencePropagatorConverter::live$ = false;

        jclass FiniteDifferencePropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/FiniteDifferencePropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_11ca02e6564da71d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;DI)V");
            mids$[mid_getObjectiveFunction_0a4097997512db0b] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");
            mids$[mid_getModel_b9638c47db64ddc7] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FiniteDifferencePropagatorConverter::FiniteDifferencePropagatorConverter(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, jdouble a1, jint a2) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(env->newObject(initializeClass, &mids$, mid_init$_11ca02e6564da71d, a0.this$, a1, a2)) {}
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
        static PyObject *t_FiniteDifferencePropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FiniteDifferencePropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FiniteDifferencePropagatorConverter_init_(t_FiniteDifferencePropagatorConverter *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_FiniteDifferencePropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_FiniteDifferencePropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FiniteDifferencePropagatorConverter, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FiniteDifferencePropagatorConverter)[] = {
          { Py_tp_methods, t_FiniteDifferencePropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_FiniteDifferencePropagatorConverter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FiniteDifferencePropagatorConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorConverter),
          NULL
        };

        DEFINE_TYPE(FiniteDifferencePropagatorConverter, t_FiniteDifferencePropagatorConverter, FiniteDifferencePropagatorConverter);

        void t_FiniteDifferencePropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(FiniteDifferencePropagatorConverter), &PY_TYPE_DEF(FiniteDifferencePropagatorConverter), module, "FiniteDifferencePropagatorConverter", 0);
        }

        void t_FiniteDifferencePropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencePropagatorConverter), "class_", make_descriptor(FiniteDifferencePropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencePropagatorConverter), "wrapfn_", make_descriptor(t_FiniteDifferencePropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencePropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FiniteDifferencePropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FiniteDifferencePropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_FiniteDifferencePropagatorConverter::wrap_Object(FiniteDifferencePropagatorConverter(((t_FiniteDifferencePropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_FiniteDifferencePropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FiniteDifferencePropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FiniteDifferencePropagatorConverter_init_(t_FiniteDifferencePropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          jdouble a1;
          jint a2;
          FiniteDifferencePropagatorConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = FiniteDifferencePropagatorConverter(a0, a1, a2));
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
#include "org/hipparchus/optim/univariate/BrentOptimizer.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *BrentOptimizer::class$ = NULL;
        jmethodID *BrentOptimizer::mids$ = NULL;
        bool BrentOptimizer::live$ = false;

        jclass BrentOptimizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/BrentOptimizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_2a1e7c9bd9677ee4] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/optim/ConvergenceChecker;)V");
            mids$[mid_doOptimize_3bb7748f0ac76925] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrentOptimizer::BrentOptimizer(jdouble a0, jdouble a1) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        BrentOptimizer::BrentOptimizer(jdouble a0, jdouble a1, const ::org::hipparchus::optim::ConvergenceChecker & a2) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_2a1e7c9bd9677ee4, a0, a1, a2.this$)) {}
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
      namespace univariate {
        static PyObject *t_BrentOptimizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentOptimizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentOptimizer_of_(t_BrentOptimizer *self, PyObject *args);
        static int t_BrentOptimizer_init_(t_BrentOptimizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrentOptimizer_get__parameters_(t_BrentOptimizer *self, void *data);
        static PyGetSetDef t_BrentOptimizer__fields_[] = {
          DECLARE_GET_FIELD(t_BrentOptimizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BrentOptimizer__methods_[] = {
          DECLARE_METHOD(t_BrentOptimizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentOptimizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentOptimizer, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrentOptimizer)[] = {
          { Py_tp_methods, t_BrentOptimizer__methods_ },
          { Py_tp_init, (void *) t_BrentOptimizer_init_ },
          { Py_tp_getset, t_BrentOptimizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrentOptimizer)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::univariate::UnivariateOptimizer),
          NULL
        };

        DEFINE_TYPE(BrentOptimizer, t_BrentOptimizer, BrentOptimizer);
        PyObject *t_BrentOptimizer::wrap_Object(const BrentOptimizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentOptimizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentOptimizer *self = (t_BrentOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BrentOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentOptimizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentOptimizer *self = (t_BrentOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BrentOptimizer::install(PyObject *module)
        {
          installType(&PY_TYPE(BrentOptimizer), &PY_TYPE_DEF(BrentOptimizer), module, "BrentOptimizer", 0);
        }

        void t_BrentOptimizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentOptimizer), "class_", make_descriptor(BrentOptimizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentOptimizer), "wrapfn_", make_descriptor(t_BrentOptimizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentOptimizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BrentOptimizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrentOptimizer::initializeClass, 1)))
            return NULL;
          return t_BrentOptimizer::wrap_Object(BrentOptimizer(((t_BrentOptimizer *) arg)->object.this$));
        }
        static PyObject *t_BrentOptimizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrentOptimizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BrentOptimizer_of_(t_BrentOptimizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BrentOptimizer_init_(t_BrentOptimizer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BrentOptimizer object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BrentOptimizer(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::hipparchus::optim::ConvergenceChecker a2((jobject) NULL);
              PyTypeObject **p2;
              BrentOptimizer object((jobject) NULL);

              if (!parseArgs(args, "DDK", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                INT_CALL(object = BrentOptimizer(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
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
        static PyObject *t_BrentOptimizer_get__parameters_(t_BrentOptimizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/IonosphereBaseMessage.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereBaseMessage::class$ = NULL;
          jmethodID *IonosphereBaseMessage::mids$ = NULL;
          bool IonosphereBaseMessage::live$ = false;

          jclass IonosphereBaseMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereBaseMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_96a1aa7c5f1486f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getTransmitTime_80e11148db499dda] = env->getMethodID(cls, "getTransmitTime", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_setTransmitTime_8497861b879c83f7] = env->getMethodID(cls, "setTransmitTime", "(Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereBaseMessage::IonosphereBaseMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::TypeSvMessage(env->newObject(initializeClass, &mids$, mid_init$_96a1aa7c5f1486f9, a0.this$, a1, a2.this$)) {}

          ::org::orekit::time::AbsoluteDate IonosphereBaseMessage::getTransmitTime() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTransmitTime_80e11148db499dda]));
          }

          void IonosphereBaseMessage::setTransmitTime(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransmitTime_8497861b879c83f7], a0.this$);
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
          static PyObject *t_IonosphereBaseMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereBaseMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereBaseMessage_init_(t_IonosphereBaseMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereBaseMessage_getTransmitTime(t_IonosphereBaseMessage *self);
          static PyObject *t_IonosphereBaseMessage_setTransmitTime(t_IonosphereBaseMessage *self, PyObject *arg);
          static PyObject *t_IonosphereBaseMessage_get__transmitTime(t_IonosphereBaseMessage *self, void *data);
          static int t_IonosphereBaseMessage_set__transmitTime(t_IonosphereBaseMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_IonosphereBaseMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_IonosphereBaseMessage, transmitTime),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereBaseMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereBaseMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBaseMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBaseMessage, getTransmitTime, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereBaseMessage, setTransmitTime, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereBaseMessage)[] = {
            { Py_tp_methods, t_IonosphereBaseMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereBaseMessage_init_ },
            { Py_tp_getset, t_IonosphereBaseMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereBaseMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::TypeSvMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereBaseMessage, t_IonosphereBaseMessage, IonosphereBaseMessage);

          void t_IonosphereBaseMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereBaseMessage), &PY_TYPE_DEF(IonosphereBaseMessage), module, "IonosphereBaseMessage", 0);
          }

          void t_IonosphereBaseMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBaseMessage), "class_", make_descriptor(IonosphereBaseMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBaseMessage), "wrapfn_", make_descriptor(t_IonosphereBaseMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBaseMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphereBaseMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereBaseMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereBaseMessage::wrap_Object(IonosphereBaseMessage(((t_IonosphereBaseMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereBaseMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereBaseMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereBaseMessage_init_(t_IonosphereBaseMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereBaseMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereBaseMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereBaseMessage_getTransmitTime(t_IonosphereBaseMessage *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getTransmitTime());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_IonosphereBaseMessage_setTransmitTime(t_IonosphereBaseMessage *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTransmitTime(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTransmitTime", arg);
            return NULL;
          }

          static PyObject *t_IonosphereBaseMessage_get__transmitTime(t_IonosphereBaseMessage *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getTransmitTime());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_IonosphereBaseMessage_set__transmitTime(t_IonosphereBaseMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setTransmitTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "transmitTime", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *NavigationSystem::class$ = NULL;
          jmethodID *NavigationSystem::mids$ = NULL;
          bool NavigationSystem::live$ = false;
          NavigationSystem *NavigationSystem::BDS = NULL;
          NavigationSystem *NavigationSystem::EMPTY = NULL;
          NavigationSystem *NavigationSystem::GAL = NULL;
          NavigationSystem *NavigationSystem::GLO = NULL;
          NavigationSystem *NavigationSystem::GPS = NULL;
          NavigationSystem *NavigationSystem::QZS = NULL;
          NavigationSystem *NavigationSystem::SBAS = NULL;

          jclass NavigationSystem::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/NavigationSystem");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getNavigationSystem_eff9d3d87b9e5b8f] = env->getStaticMethodID(cls, "getNavigationSystem", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/NavigationSystem;");
              mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_valueOf_eff9d3d87b9e5b8f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/NavigationSystem;");
              mids$[mid_values_aba4929abcadce8c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/NavigationSystem;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BDS = new NavigationSystem(env->getStaticObjectField(cls, "BDS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              EMPTY = new NavigationSystem(env->getStaticObjectField(cls, "EMPTY", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              GAL = new NavigationSystem(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              GLO = new NavigationSystem(env->getStaticObjectField(cls, "GLO", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              GPS = new NavigationSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              QZS = new NavigationSystem(env->getStaticObjectField(cls, "QZS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              SBAS = new NavigationSystem(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NavigationSystem NavigationSystem::getNavigationSystem(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return NavigationSystem(env->callStaticObjectMethod(cls, mids$[mid_getNavigationSystem_eff9d3d87b9e5b8f], a0.this$));
          }

          ::java::lang::String NavigationSystem::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
          }

          NavigationSystem NavigationSystem::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return NavigationSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_eff9d3d87b9e5b8f], a0.this$));
          }

          JArray< NavigationSystem > NavigationSystem::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< NavigationSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_aba4929abcadce8c]));
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
        namespace ntrip {
          static PyObject *t_NavigationSystem_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NavigationSystem_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NavigationSystem_of_(t_NavigationSystem *self, PyObject *args);
          static PyObject *t_NavigationSystem_getNavigationSystem(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NavigationSystem_toString(t_NavigationSystem *self, PyObject *args);
          static PyObject *t_NavigationSystem_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_NavigationSystem_values(PyTypeObject *type);
          static PyObject *t_NavigationSystem_get__parameters_(t_NavigationSystem *self, void *data);
          static PyGetSetDef t_NavigationSystem__fields_[] = {
            DECLARE_GET_FIELD(t_NavigationSystem, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NavigationSystem__methods_[] = {
            DECLARE_METHOD(t_NavigationSystem, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, of_, METH_VARARGS),
            DECLARE_METHOD(t_NavigationSystem, getNavigationSystem, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, toString, METH_VARARGS),
            DECLARE_METHOD(t_NavigationSystem, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NavigationSystem)[] = {
            { Py_tp_methods, t_NavigationSystem__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NavigationSystem__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NavigationSystem)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(NavigationSystem, t_NavigationSystem, NavigationSystem);
          PyObject *t_NavigationSystem::wrap_Object(const NavigationSystem& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NavigationSystem::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NavigationSystem *self = (t_NavigationSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NavigationSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NavigationSystem::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NavigationSystem *self = (t_NavigationSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NavigationSystem::install(PyObject *module)
          {
            installType(&PY_TYPE(NavigationSystem), &PY_TYPE_DEF(NavigationSystem), module, "NavigationSystem", 0);
          }

          void t_NavigationSystem::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "class_", make_descriptor(NavigationSystem::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "wrapfn_", make_descriptor(t_NavigationSystem::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "boxfn_", make_descriptor(boxObject));
            env->getClass(NavigationSystem::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "BDS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::BDS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "EMPTY", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::EMPTY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "GAL", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::GAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "GLO", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::GLO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "GPS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::GPS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "QZS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::QZS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "SBAS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::SBAS)));
          }

          static PyObject *t_NavigationSystem_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NavigationSystem::initializeClass, 1)))
              return NULL;
            return t_NavigationSystem::wrap_Object(NavigationSystem(((t_NavigationSystem *) arg)->object.this$));
          }
          static PyObject *t_NavigationSystem_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NavigationSystem::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NavigationSystem_of_(t_NavigationSystem *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NavigationSystem_getNavigationSystem(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            NavigationSystem result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::NavigationSystem::getNavigationSystem(a0));
              return t_NavigationSystem::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNavigationSystem", arg);
            return NULL;
          }

          static PyObject *t_NavigationSystem_toString(t_NavigationSystem *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(NavigationSystem), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_NavigationSystem_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            NavigationSystem result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::NavigationSystem::valueOf(a0));
              return t_NavigationSystem::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_NavigationSystem_values(PyTypeObject *type)
          {
            JArray< NavigationSystem > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::NavigationSystem::values());
            return JArray<jobject>(result.this$).wrap(t_NavigationSystem::wrap_jobject);
          }
          static PyObject *t_NavigationSystem_get__parameters_(t_NavigationSystem *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateTroposphericDelayModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeRateTroposphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeRateTroposphericDelayModifier::mids$ = NULL;
          bool BaseRangeRateTroposphericDelayModifier::live$ = false;

          jclass BaseRangeRateTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeRateTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_rangeRateErrorTroposphericModel_29b53a0d2fc3b115] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_rangeRateErrorTroposphericModel_e648598eaaa5f94d] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getTropoModel_793e0852d1c6d57c] = env->getMethodID(cls, "getTropoModel", "()Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeRateTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          jdouble BaseRangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_29b53a0d2fc3b115], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement BaseRangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_e648598eaaa5f94d], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_getParametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_BaseRangeRateTroposphericDelayModifier *self, PyObject *args);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeRateTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeRateTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeRateTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, rangeRateErrorTroposphericModel, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeRateTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeRateTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeRateTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeRateTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeRateTroposphericDelayModifier, t_BaseRangeRateTroposphericDelayModifier, BaseRangeRateTroposphericDelayModifier);

          void t_BaseRangeRateTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeRateTroposphericDelayModifier), &PY_TYPE_DEF(BaseRangeRateTroposphericDelayModifier), module, "BaseRangeRateTroposphericDelayModifier", 0);
          }

          void t_BaseRangeRateTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateTroposphericDelayModifier), "class_", make_descriptor(BaseRangeRateTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeRateTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeRateTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeRateTroposphericDelayModifier::wrap_Object(BaseRangeRateTroposphericDelayModifier(((t_BaseRangeRateTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeRateTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_getParametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_BaseRangeRateTroposphericDelayModifier *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK[K", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1, a2));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "rangeRateErrorTroposphericModel", args);
            return NULL;
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self, void *data)
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
#include "org/orekit/time/TAIUTCDatFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/OffsetModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TAIUTCDatFilesLoader::class$ = NULL;
      jmethodID *TAIUTCDatFilesLoader::mids$ = NULL;
      bool TAIUTCDatFilesLoader::live$ = false;
      ::java::lang::String *TAIUTCDatFilesLoader::DEFAULT_SUPPORTED_NAMES = NULL;

      jclass TAIUTCDatFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TAIUTCDatFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_4c16e57d19ddaa09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_d751c1a57012b438] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TAIUTCDatFilesLoader::TAIUTCDatFilesLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

      TAIUTCDatFilesLoader::TAIUTCDatFilesLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_4c16e57d19ddaa09, a0.this$, a1.this$)) {}

      ::java::util::List TAIUTCDatFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_d751c1a57012b438]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/TAIUTCDatFilesLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TAIUTCDatFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIUTCDatFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TAIUTCDatFilesLoader_init_(t_TAIUTCDatFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TAIUTCDatFilesLoader_loadOffsets(t_TAIUTCDatFilesLoader *self);

      static PyMethodDef t_TAIUTCDatFilesLoader__methods_[] = {
        DECLARE_METHOD(t_TAIUTCDatFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TAIUTCDatFilesLoader)[] = {
        { Py_tp_methods, t_TAIUTCDatFilesLoader__methods_ },
        { Py_tp_init, (void *) t_TAIUTCDatFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TAIUTCDatFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(TAIUTCDatFilesLoader, t_TAIUTCDatFilesLoader, TAIUTCDatFilesLoader);

      void t_TAIUTCDatFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(TAIUTCDatFilesLoader), &PY_TYPE_DEF(TAIUTCDatFilesLoader), module, "TAIUTCDatFilesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "Parser", make_descriptor(&PY_TYPE_DEF(TAIUTCDatFilesLoader$Parser)));
      }

      void t_TAIUTCDatFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "class_", make_descriptor(TAIUTCDatFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "wrapfn_", make_descriptor(t_TAIUTCDatFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(TAIUTCDatFilesLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*TAIUTCDatFilesLoader::DEFAULT_SUPPORTED_NAMES)));
      }

      static PyObject *t_TAIUTCDatFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TAIUTCDatFilesLoader::initializeClass, 1)))
          return NULL;
        return t_TAIUTCDatFilesLoader::wrap_Object(TAIUTCDatFilesLoader(((t_TAIUTCDatFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_TAIUTCDatFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TAIUTCDatFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TAIUTCDatFilesLoader_init_(t_TAIUTCDatFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            TAIUTCDatFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = TAIUTCDatFilesLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            TAIUTCDatFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TAIUTCDatFilesLoader(a0, a1));
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

      static PyObject *t_TAIUTCDatFilesLoader_loadOffsets(t_TAIUTCDatFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CombinationType::class$ = NULL;
          jmethodID *CombinationType::mids$ = NULL;
          bool CombinationType::live$ = false;
          CombinationType *CombinationType::GEOMETRY_FREE = NULL;
          CombinationType *CombinationType::GRAPHIC = NULL;
          CombinationType *CombinationType::IONO_FREE = NULL;
          CombinationType *CombinationType::MELBOURNE_WUBBENA = NULL;
          CombinationType *CombinationType::NARROW_LANE = NULL;
          CombinationType *CombinationType::PHASE_MINUS_CODE = NULL;
          CombinationType *CombinationType::WIDE_LANE = NULL;

          jclass CombinationType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CombinationType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_valueOf_d7d66d7d315002e4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/estimation/measurements/gnss/CombinationType;");
              mids$[mid_values_b9091cb74b751f30] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/estimation/measurements/gnss/CombinationType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GEOMETRY_FREE = new CombinationType(env->getStaticObjectField(cls, "GEOMETRY_FREE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              GRAPHIC = new CombinationType(env->getStaticObjectField(cls, "GRAPHIC", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              IONO_FREE = new CombinationType(env->getStaticObjectField(cls, "IONO_FREE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              MELBOURNE_WUBBENA = new CombinationType(env->getStaticObjectField(cls, "MELBOURNE_WUBBENA", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              NARROW_LANE = new CombinationType(env->getStaticObjectField(cls, "NARROW_LANE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              PHASE_MINUS_CODE = new CombinationType(env->getStaticObjectField(cls, "PHASE_MINUS_CODE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              WIDE_LANE = new CombinationType(env->getStaticObjectField(cls, "WIDE_LANE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String CombinationType::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          CombinationType CombinationType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CombinationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d7d66d7d315002e4], a0.this$));
          }

          JArray< CombinationType > CombinationType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CombinationType >(env->callStaticObjectMethod(cls, mids$[mid_values_b9091cb74b751f30]));
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
          static PyObject *t_CombinationType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinationType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinationType_of_(t_CombinationType *self, PyObject *args);
          static PyObject *t_CombinationType_getName(t_CombinationType *self);
          static PyObject *t_CombinationType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CombinationType_values(PyTypeObject *type);
          static PyObject *t_CombinationType_get__name(t_CombinationType *self, void *data);
          static PyObject *t_CombinationType_get__parameters_(t_CombinationType *self, void *data);
          static PyGetSetDef t_CombinationType__fields_[] = {
            DECLARE_GET_FIELD(t_CombinationType, name),
            DECLARE_GET_FIELD(t_CombinationType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CombinationType__methods_[] = {
            DECLARE_METHOD(t_CombinationType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinationType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinationType, of_, METH_VARARGS),
            DECLARE_METHOD(t_CombinationType, getName, METH_NOARGS),
            DECLARE_METHOD(t_CombinationType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CombinationType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CombinationType)[] = {
            { Py_tp_methods, t_CombinationType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CombinationType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CombinationType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CombinationType, t_CombinationType, CombinationType);
          PyObject *t_CombinationType::wrap_Object(const CombinationType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CombinationType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CombinationType *self = (t_CombinationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CombinationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CombinationType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CombinationType *self = (t_CombinationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CombinationType::install(PyObject *module)
          {
            installType(&PY_TYPE(CombinationType), &PY_TYPE_DEF(CombinationType), module, "CombinationType", 0);
          }

          void t_CombinationType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "class_", make_descriptor(CombinationType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "wrapfn_", make_descriptor(t_CombinationType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "boxfn_", make_descriptor(boxObject));
            env->getClass(CombinationType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "GEOMETRY_FREE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::GEOMETRY_FREE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "GRAPHIC", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::GRAPHIC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "IONO_FREE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::IONO_FREE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "MELBOURNE_WUBBENA", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::MELBOURNE_WUBBENA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "NARROW_LANE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::NARROW_LANE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "PHASE_MINUS_CODE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::PHASE_MINUS_CODE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "WIDE_LANE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::WIDE_LANE)));
          }

          static PyObject *t_CombinationType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CombinationType::initializeClass, 1)))
              return NULL;
            return t_CombinationType::wrap_Object(CombinationType(((t_CombinationType *) arg)->object.this$));
          }
          static PyObject *t_CombinationType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CombinationType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CombinationType_of_(t_CombinationType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CombinationType_getName(t_CombinationType *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_CombinationType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CombinationType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::CombinationType::valueOf(a0));
              return t_CombinationType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CombinationType_values(PyTypeObject *type)
          {
            JArray< CombinationType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::CombinationType::values());
            return JArray<jobject>(result.this$).wrap(t_CombinationType::wrap_jobject);
          }
          static PyObject *t_CombinationType_get__parameters_(t_CombinationType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_CombinationType_get__name(t_CombinationType *self, void *data)
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
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/util/Blendable.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PVCoordinates::class$ = NULL;
      jmethodID *PVCoordinates::mids$ = NULL;
      bool PVCoordinates::live$ = false;
      PVCoordinates *PVCoordinates::ZERO = NULL;

      jclass PVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_1344cdbf3f0498af] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_30f8886dfb88a63c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_c8e9682f0daaca68] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_ab901f2964604b53] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_547a509436999a17] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_8ba3e710eb629d8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_131430c01af57e0d] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_c7cd14da3c4e5de3] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_32d9e21e48d1242a] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_blendArithmeticallyWith_87ad1491599f0cb1] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/orekit/utils/PVCoordinates;D)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_crossProduct_1f900e1ad2600555] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_estimateVelocity_ccc9d16c585df973] = env->getStaticMethodID(cls, "estimateVelocity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getAcceleration_032312bdeb3f2f93] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getAngularVelocity_032312bdeb3f2f93] = env->getMethodID(cls, "getAngularVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getMomentum_032312bdeb3f2f93] = env->getMethodID(cls, "getMomentum", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPosition_032312bdeb3f2f93] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getVelocity_032312bdeb3f2f93] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_negate_78e01095d7eced90] = env->getMethodID(cls, "negate", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_normalize_78e01095d7eced90] = env->getMethodID(cls, "normalize", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_positionShiftedBy_98a3eeef43dce47a] = env->getMethodID(cls, "positionShiftedBy", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_shiftedBy_bf63196c562daab4] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_toDerivativeStructurePV_608e82d3b6abf5f8] = env->getMethodID(cls, "toDerivativeStructurePV", "(I)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toDerivativeStructureVector_bd593b3379529ee5] = env->getMethodID(cls, "toDerivativeStructureVector", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toUnivariateDerivative1PV_345fc9bafd1687ff] = env->getMethodID(cls, "toUnivariateDerivative1PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative1Vector_d1b42a6748e907f9] = env->getMethodID(cls, "toUnivariateDerivative1Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toUnivariateDerivative2PV_345fc9bafd1687ff] = env->getMethodID(cls, "toUnivariateDerivative2PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative2Vector_d1b42a6748e907f9] = env->getMethodID(cls, "toUnivariateDerivative2Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ZERO = new PVCoordinates(env->getStaticObjectField(cls, "ZERO", "Lorg/orekit/utils/PVCoordinates;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PVCoordinates::PVCoordinates() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1344cdbf3f0498af, a0.this$)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30f8886dfb88a63c, a0.this$)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c8e9682f0daaca68, a0.this$, a1.this$)) {}

      PVCoordinates::PVCoordinates(const PVCoordinates & a0, const PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab901f2964604b53, a0.this$, a1.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_547a509436999a17, a0, a1.this$)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba3e710eb629d8c, a0.this$, a1.this$, a2.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1, jdouble a2, const PVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_131430c01af57e0d, a0, a1.this$, a2, a3.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1, jdouble a2, const PVCoordinates & a3, jdouble a4, const PVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c7cd14da3c4e5de3, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1, jdouble a2, const PVCoordinates & a3, jdouble a4, const PVCoordinates & a5, jdouble a6, const PVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_32d9e21e48d1242a, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

      PVCoordinates PVCoordinates::blendArithmeticallyWith(const PVCoordinates & a0, jdouble a1) const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_87ad1491599f0cb1], a0.this$, a1));
      }

      PVCoordinates PVCoordinates::crossProduct(const PVCoordinates & a0, const PVCoordinates & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return PVCoordinates(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_1f900e1ad2600555], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::estimateVelocity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateVelocity_ccc9d16c585df973], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getAngularVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAngularVelocity_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getMomentum() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getMomentum_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_032312bdeb3f2f93]));
      }

      PVCoordinates PVCoordinates::negate() const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_negate_78e01095d7eced90]));
      }

      PVCoordinates PVCoordinates::normalize() const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_normalize_78e01095d7eced90]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::positionShiftedBy(jdouble a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_positionShiftedBy_98a3eeef43dce47a], a0));
      }

      PVCoordinates PVCoordinates::shiftedBy(jdouble a0) const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_bf63196c562daab4], a0));
      }

      ::org::orekit::utils::FieldPVCoordinates PVCoordinates::toDerivativeStructurePV(jint a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toDerivativeStructurePV_608e82d3b6abf5f8], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PVCoordinates::toDerivativeStructureVector(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureVector_bd593b3379529ee5], a0));
      }

      ::java::lang::String PVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      ::org::orekit::utils::FieldPVCoordinates PVCoordinates::toUnivariateDerivative1PV() const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1PV_345fc9bafd1687ff]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PVCoordinates::toUnivariateDerivative1Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Vector_d1b42a6748e907f9]));
      }

      ::org::orekit::utils::FieldPVCoordinates PVCoordinates::toUnivariateDerivative2PV() const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2PV_345fc9bafd1687ff]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PVCoordinates::toUnivariateDerivative2Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Vector_d1b42a6748e907f9]));
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
      static PyObject *t_PVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PVCoordinates_init_(t_PVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PVCoordinates_blendArithmeticallyWith(t_PVCoordinates *self, PyObject *args);
      static PyObject *t_PVCoordinates_crossProduct(PyTypeObject *type, PyObject *args);
      static PyObject *t_PVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args);
      static PyObject *t_PVCoordinates_getAcceleration(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getAngularVelocity(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getMomentum(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getPosition(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getVelocity(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_negate(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_normalize(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_positionShiftedBy(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_shiftedBy(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_toDerivativeStructurePV(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_toDerivativeStructureVector(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_toString(t_PVCoordinates *self, PyObject *args);
      static PyObject *t_PVCoordinates_toUnivariateDerivative1PV(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_toUnivariateDerivative1Vector(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_toUnivariateDerivative2PV(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_toUnivariateDerivative2Vector(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_get__acceleration(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__angularVelocity(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__momentum(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__position(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__velocity(t_PVCoordinates *self, void *data);
      static PyGetSetDef t_PVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_PVCoordinates, acceleration),
        DECLARE_GET_FIELD(t_PVCoordinates, angularVelocity),
        DECLARE_GET_FIELD(t_PVCoordinates, momentum),
        DECLARE_GET_FIELD(t_PVCoordinates, position),
        DECLARE_GET_FIELD(t_PVCoordinates, velocity),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PVCoordinates__methods_[] = {
        DECLARE_METHOD(t_PVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_PVCoordinates, crossProduct, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, estimateVelocity, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getAngularVelocity, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getMomentum, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getPosition, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, negate, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, normalize, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, positionShiftedBy, METH_O),
        DECLARE_METHOD(t_PVCoordinates, shiftedBy, METH_O),
        DECLARE_METHOD(t_PVCoordinates, toDerivativeStructurePV, METH_O),
        DECLARE_METHOD(t_PVCoordinates, toDerivativeStructureVector, METH_O),
        DECLARE_METHOD(t_PVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative1PV, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative1Vector, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative2PV, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative2Vector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PVCoordinates)[] = {
        { Py_tp_methods, t_PVCoordinates__methods_ },
        { Py_tp_init, (void *) t_PVCoordinates_init_ },
        { Py_tp_getset, t_PVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PVCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PVCoordinates, t_PVCoordinates, PVCoordinates);

      void t_PVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(PVCoordinates), &PY_TYPE_DEF(PVCoordinates), module, "PVCoordinates", 0);
      }

      void t_PVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "class_", make_descriptor(PVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "wrapfn_", make_descriptor(t_PVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "boxfn_", make_descriptor(boxObject));
        env->getClass(PVCoordinates::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "ZERO", make_descriptor(t_PVCoordinates::wrap_Object(*PVCoordinates::ZERO)));
      }

      static PyObject *t_PVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PVCoordinates::initializeClass, 1)))
          return NULL;
        return t_PVCoordinates::wrap_Object(PVCoordinates(((t_PVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_PVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PVCoordinates_init_(t_PVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            PVCoordinates object((jobject) NULL);

            INT_CALL(object = PVCoordinates());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = PVCoordinates(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              INT_CALL(object = PVCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            PVCoordinates a0((jobject) NULL);
            PVCoordinates a1((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Dk", PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            jdouble a2;
            PVCoordinates a3((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DkDk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            jdouble a2;
            PVCoordinates a3((jobject) NULL);
            jdouble a4;
            PVCoordinates a5((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 8:
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            jdouble a2;
            PVCoordinates a3((jobject) NULL);
            jdouble a4;
            PVCoordinates a5((jobject) NULL);
            jdouble a6;
            PVCoordinates a7((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
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

      static PyObject *t_PVCoordinates_blendArithmeticallyWith(t_PVCoordinates *self, PyObject *args)
      {
        PVCoordinates a0((jobject) NULL);
        jdouble a1;
        PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kD", PVCoordinates::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_PVCoordinates_crossProduct(PyTypeObject *type, PyObject *args)
      {
        PVCoordinates a0((jobject) NULL);
        PVCoordinates a1((jobject) NULL);
        PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::utils::PVCoordinates::crossProduct(a0, a1));
          return t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "crossProduct", args);
        return NULL;
      }

      static PyObject *t_PVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
        jdouble a2;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::utils::PVCoordinates::estimateVelocity(a0, a1, a2));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "estimateVelocity", args);
        return NULL;
      }

      static PyObject *t_PVCoordinates_getAcceleration(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getAngularVelocity(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getMomentum(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getPosition(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getVelocity(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_negate(t_PVCoordinates *self)
      {
        PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_normalize(t_PVCoordinates *self)
      {
        PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_positionShiftedBy(t_PVCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.positionShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "positionShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_shiftedBy(t_PVCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        PVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_toDerivativeStructurePV(t_PVCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructurePV(a0));
          return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructurePV", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_toDerivativeStructureVector(t_PVCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureVector(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureVector", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_toString(t_PVCoordinates *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(PVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative1PV(t_PVCoordinates *self)
      {
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1PV());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative1Vector(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative2PV(t_PVCoordinates *self)
      {
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2PV());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative2Vector(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
      }

      static PyObject *t_PVCoordinates_get__acceleration(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__angularVelocity(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__momentum(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__position(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__velocity(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/MullerSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *MullerSolver::class$ = NULL;
        jmethodID *MullerSolver::mids$ = NULL;
        bool MullerSolver::live$ = false;

        jclass MullerSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/MullerSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_9981f74b2d109da6] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MullerSolver::MullerSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        MullerSolver::MullerSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        MullerSolver::MullerSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}
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
        static PyObject *t_MullerSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver_of_(t_MullerSolver *self, PyObject *args);
        static int t_MullerSolver_init_(t_MullerSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MullerSolver_get__parameters_(t_MullerSolver *self, void *data);
        static PyGetSetDef t_MullerSolver__fields_[] = {
          DECLARE_GET_FIELD(t_MullerSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MullerSolver__methods_[] = {
          DECLARE_METHOD(t_MullerSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MullerSolver)[] = {
          { Py_tp_methods, t_MullerSolver__methods_ },
          { Py_tp_init, (void *) t_MullerSolver_init_ },
          { Py_tp_getset, t_MullerSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MullerSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(MullerSolver, t_MullerSolver, MullerSolver);
        PyObject *t_MullerSolver::wrap_Object(const MullerSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver *self = (t_MullerSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MullerSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver *self = (t_MullerSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MullerSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(MullerSolver), &PY_TYPE_DEF(MullerSolver), module, "MullerSolver", 0);
        }

        void t_MullerSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver), "class_", make_descriptor(MullerSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver), "wrapfn_", make_descriptor(t_MullerSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MullerSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MullerSolver::initializeClass, 1)))
            return NULL;
          return t_MullerSolver::wrap_Object(MullerSolver(((t_MullerSolver *) arg)->object.this$));
        }
        static PyObject *t_MullerSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MullerSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MullerSolver_of_(t_MullerSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MullerSolver_init_(t_MullerSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MullerSolver object((jobject) NULL);

              INT_CALL(object = MullerSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              MullerSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MullerSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              MullerSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = MullerSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_MullerSolver_get__parameters_(t_MullerSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EcksteinHechlerPropagatorBuilder::class$ = NULL;
        jmethodID *EcksteinHechlerPropagatorBuilder::mids$ = NULL;
        bool EcksteinHechlerPropagatorBuilder::live$ = false;

        jclass EcksteinHechlerPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1cbbf6cefa3a23d1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_6fdc8fac14c18de2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_b64c5b5ba3f87fc8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDLorg/orekit/forces/gravity/potential/TideSystem;DDDDDLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_buildLeastSquaresModel_434804ad6c6cc8a8] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_dbf963913bad78cb] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_e21052299cc72e98] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EcksteinHechlerPropagatorBuilder::EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1cbbf6cefa3a23d1, a0.this$, a1.this$, a2.this$, a3)) {}

        EcksteinHechlerPropagatorBuilder::EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_6fdc8fac14c18de2, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        EcksteinHechlerPropagatorBuilder::EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::orbits::OrbitType & a9, const ::org::orekit::orbits::PositionAngleType & a10, jdouble a11) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_b64c5b5ba3f87fc8, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7, a8, a9.this$, a10.this$, a11)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel EcksteinHechlerPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_434804ad6c6cc8a8], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator EcksteinHechlerPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_dbf963913bad78cb], a0.this$));
        }

        EcksteinHechlerPropagatorBuilder EcksteinHechlerPropagatorBuilder::copy() const
        {
          return EcksteinHechlerPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_e21052299cc72e98]));
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
        static PyObject *t_EcksteinHechlerPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EcksteinHechlerPropagatorBuilder_init_(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildLeastSquaresModel(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildPropagator(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_copy(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_EcksteinHechlerPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EcksteinHechlerPropagatorBuilder)[] = {
          { Py_tp_methods, t_EcksteinHechlerPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_EcksteinHechlerPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EcksteinHechlerPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(EcksteinHechlerPropagatorBuilder, t_EcksteinHechlerPropagatorBuilder, EcksteinHechlerPropagatorBuilder);

        void t_EcksteinHechlerPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EcksteinHechlerPropagatorBuilder), &PY_TYPE_DEF(EcksteinHechlerPropagatorBuilder), module, "EcksteinHechlerPropagatorBuilder", 0);
        }

        void t_EcksteinHechlerPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagatorBuilder), "class_", make_descriptor(EcksteinHechlerPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagatorBuilder), "wrapfn_", make_descriptor(t_EcksteinHechlerPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EcksteinHechlerPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EcksteinHechlerPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_EcksteinHechlerPropagatorBuilder::wrap_Object(EcksteinHechlerPropagatorBuilder(((t_EcksteinHechlerPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EcksteinHechlerPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EcksteinHechlerPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EcksteinHechlerPropagatorBuilder_init_(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              EcksteinHechlerPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3))
              {
                INT_CALL(object = EcksteinHechlerPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              EcksteinHechlerPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = EcksteinHechlerPropagatorBuilder(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 12:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::orbits::OrbitType a9((jobject) NULL);
              PyTypeObject **p9;
              ::org::orekit::orbits::PositionAngleType a10((jobject) NULL);
              PyTypeObject **p10;
              jdouble a11;
              EcksteinHechlerPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kDDKDDDDDKKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::orbits::t_OrbitType::parameters_, &a10, &p10, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a11))
              {
                INT_CALL(object = EcksteinHechlerPropagatorBuilder(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
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

        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildLeastSquaresModel(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildPropagator(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_EcksteinHechlerPropagatorBuilder_copy(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args)
        {
          EcksteinHechlerPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_EcksteinHechlerPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *EnclosingBall::class$ = NULL;
        jmethodID *EnclosingBall::mids$ = NULL;
        bool EnclosingBall::live$ = false;

        jclass EnclosingBall::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/EnclosingBall");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cf4862cbcf9de4b8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/Point;D[Lorg/hipparchus/geometry/Point;)V");
            mids$[mid_contains_b6fdb6918bf382eb] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/Point;)Z");
            mids$[mid_contains_675116de3e6daf6a] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/Point;D)Z");
            mids$[mid_getCenter_e843ca29d3ae6a7a] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getRadius_9981f74b2d109da6] = env->getMethodID(cls, "getRadius", "()D");
            mids$[mid_getSupport_b82b5fae3ca878b3] = env->getMethodID(cls, "getSupport", "()[Lorg/hipparchus/geometry/Point;");
            mids$[mid_getSupportSize_d6ab429752e7c267] = env->getMethodID(cls, "getSupportSize", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EnclosingBall::EnclosingBall(const ::org::hipparchus::geometry::Point & a0, jdouble a1, const JArray< ::org::hipparchus::geometry::Point > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cf4862cbcf9de4b8, a0.this$, a1, a2.this$)) {}

        jboolean EnclosingBall::contains(const ::org::hipparchus::geometry::Point & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_b6fdb6918bf382eb], a0.this$);
        }

        jboolean EnclosingBall::contains(const ::org::hipparchus::geometry::Point & a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_675116de3e6daf6a], a0.this$, a1);
        }

        ::org::hipparchus::geometry::Point EnclosingBall::getCenter() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getCenter_e843ca29d3ae6a7a]));
        }

        jdouble EnclosingBall::getRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRadius_9981f74b2d109da6]);
        }

        JArray< ::org::hipparchus::geometry::Point > EnclosingBall::getSupport() const
        {
          return JArray< ::org::hipparchus::geometry::Point >(env->callObjectMethod(this$, mids$[mid_getSupport_b82b5fae3ca878b3]));
        }

        jint EnclosingBall::getSupportSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportSize_d6ab429752e7c267]);
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
        static PyObject *t_EnclosingBall_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnclosingBall_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnclosingBall_of_(t_EnclosingBall *self, PyObject *args);
        static int t_EnclosingBall_init_(t_EnclosingBall *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EnclosingBall_contains(t_EnclosingBall *self, PyObject *args);
        static PyObject *t_EnclosingBall_getCenter(t_EnclosingBall *self);
        static PyObject *t_EnclosingBall_getRadius(t_EnclosingBall *self);
        static PyObject *t_EnclosingBall_getSupport(t_EnclosingBall *self);
        static PyObject *t_EnclosingBall_getSupportSize(t_EnclosingBall *self);
        static PyObject *t_EnclosingBall_get__center(t_EnclosingBall *self, void *data);
        static PyObject *t_EnclosingBall_get__radius(t_EnclosingBall *self, void *data);
        static PyObject *t_EnclosingBall_get__support(t_EnclosingBall *self, void *data);
        static PyObject *t_EnclosingBall_get__supportSize(t_EnclosingBall *self, void *data);
        static PyObject *t_EnclosingBall_get__parameters_(t_EnclosingBall *self, void *data);
        static PyGetSetDef t_EnclosingBall__fields_[] = {
          DECLARE_GET_FIELD(t_EnclosingBall, center),
          DECLARE_GET_FIELD(t_EnclosingBall, radius),
          DECLARE_GET_FIELD(t_EnclosingBall, support),
          DECLARE_GET_FIELD(t_EnclosingBall, supportSize),
          DECLARE_GET_FIELD(t_EnclosingBall, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EnclosingBall__methods_[] = {
          DECLARE_METHOD(t_EnclosingBall, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnclosingBall, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnclosingBall, of_, METH_VARARGS),
          DECLARE_METHOD(t_EnclosingBall, contains, METH_VARARGS),
          DECLARE_METHOD(t_EnclosingBall, getCenter, METH_NOARGS),
          DECLARE_METHOD(t_EnclosingBall, getRadius, METH_NOARGS),
          DECLARE_METHOD(t_EnclosingBall, getSupport, METH_NOARGS),
          DECLARE_METHOD(t_EnclosingBall, getSupportSize, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnclosingBall)[] = {
          { Py_tp_methods, t_EnclosingBall__methods_ },
          { Py_tp_init, (void *) t_EnclosingBall_init_ },
          { Py_tp_getset, t_EnclosingBall__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnclosingBall)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EnclosingBall, t_EnclosingBall, EnclosingBall);
        PyObject *t_EnclosingBall::wrap_Object(const EnclosingBall& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EnclosingBall::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EnclosingBall *self = (t_EnclosingBall *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_EnclosingBall::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EnclosingBall::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EnclosingBall *self = (t_EnclosingBall *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_EnclosingBall::install(PyObject *module)
        {
          installType(&PY_TYPE(EnclosingBall), &PY_TYPE_DEF(EnclosingBall), module, "EnclosingBall", 0);
        }

        void t_EnclosingBall::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnclosingBall), "class_", make_descriptor(EnclosingBall::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnclosingBall), "wrapfn_", make_descriptor(t_EnclosingBall::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnclosingBall), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnclosingBall_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnclosingBall::initializeClass, 1)))
            return NULL;
          return t_EnclosingBall::wrap_Object(EnclosingBall(((t_EnclosingBall *) arg)->object.this$));
        }
        static PyObject *t_EnclosingBall_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnclosingBall::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EnclosingBall_of_(t_EnclosingBall *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EnclosingBall_init_(t_EnclosingBall *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          JArray< ::org::hipparchus::geometry::Point > a2((jobject) NULL);
          PyTypeObject **p2;
          EnclosingBall object((jobject) NULL);

          if (!parseArgs(args, "KD[K", ::org::hipparchus::geometry::Point::initializeClass, ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            INT_CALL(object = EnclosingBall(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EnclosingBall_contains(t_EnclosingBall *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::Point a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
              {
                OBJ_CALL(result = self->object.contains(a0));
                Py_RETURN_BOOL(result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::geometry::Point a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jboolean result;

              if (!parseArgs(args, "KD", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.contains(a0, a1));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "contains", args);
          return NULL;
        }

        static PyObject *t_EnclosingBall_getCenter(t_EnclosingBall *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenter());
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::geometry::t_Point::wrap_Object(result);
        }

        static PyObject *t_EnclosingBall_getRadius(t_EnclosingBall *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRadius());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EnclosingBall_getSupport(t_EnclosingBall *self)
        {
          JArray< ::org::hipparchus::geometry::Point > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSupport());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }

        static PyObject *t_EnclosingBall_getSupportSize(t_EnclosingBall *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSupportSize());
          return PyLong_FromLong((long) result);
        }
        static PyObject *t_EnclosingBall_get__parameters_(t_EnclosingBall *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EnclosingBall_get__center(t_EnclosingBall *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_EnclosingBall_get__radius(t_EnclosingBall *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRadius());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnclosingBall_get__support(t_EnclosingBall *self, void *data)
        {
          JArray< ::org::hipparchus::geometry::Point > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSupport());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }

        static PyObject *t_EnclosingBall_get__supportSize(t_EnclosingBall *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/DragForce.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *DragForce::class$ = NULL;
        jmethodID *DragForce::mids$ = NULL;
        bool DragForce::live$ = false;

        jclass DragForce::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/DragForce");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f2f0fa9d3d8aa425] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getAtmosphere_427d0c98c647ebb8] = env->getMethodID(cls, "getAtmosphere", "()Lorg/orekit/models/earth/atmosphere/Atmosphere;");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSpacecraft_e8bdc7a90adb886e] = env->getMethodID(cls, "getSpacecraft", "()Lorg/orekit/forces/drag/DragSensitive;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DragForce::DragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_f2f0fa9d3d8aa425, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DragForce::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DragForce::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        ::org::orekit::models::earth::atmosphere::Atmosphere DragForce::getAtmosphere() const
        {
          return ::org::orekit::models::earth::atmosphere::Atmosphere(env->callObjectMethod(this$, mids$[mid_getAtmosphere_427d0c98c647ebb8]));
        }

        ::java::util::List DragForce::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }

        ::org::orekit::forces::drag::DragSensitive DragForce::getSpacecraft() const
        {
          return ::org::orekit::forces::drag::DragSensitive(env->callObjectMethod(this$, mids$[mid_getSpacecraft_e8bdc7a90adb886e]));
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
        static PyObject *t_DragForce_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DragForce_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DragForce_init_(t_DragForce *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DragForce_acceleration(t_DragForce *self, PyObject *args);
        static PyObject *t_DragForce_getAtmosphere(t_DragForce *self);
        static PyObject *t_DragForce_getParametersDrivers(t_DragForce *self, PyObject *args);
        static PyObject *t_DragForce_getSpacecraft(t_DragForce *self);
        static PyObject *t_DragForce_get__atmosphere(t_DragForce *self, void *data);
        static PyObject *t_DragForce_get__parametersDrivers(t_DragForce *self, void *data);
        static PyObject *t_DragForce_get__spacecraft(t_DragForce *self, void *data);
        static PyGetSetDef t_DragForce__fields_[] = {
          DECLARE_GET_FIELD(t_DragForce, atmosphere),
          DECLARE_GET_FIELD(t_DragForce, parametersDrivers),
          DECLARE_GET_FIELD(t_DragForce, spacecraft),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DragForce__methods_[] = {
          DECLARE_METHOD(t_DragForce, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragForce, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragForce, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_DragForce, getAtmosphere, METH_NOARGS),
          DECLARE_METHOD(t_DragForce, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_DragForce, getSpacecraft, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DragForce)[] = {
          { Py_tp_methods, t_DragForce__methods_ },
          { Py_tp_init, (void *) t_DragForce_init_ },
          { Py_tp_getset, t_DragForce__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DragForce)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::drag::AbstractDragForceModel),
          NULL
        };

        DEFINE_TYPE(DragForce, t_DragForce, DragForce);

        void t_DragForce::install(PyObject *module)
        {
          installType(&PY_TYPE(DragForce), &PY_TYPE_DEF(DragForce), module, "DragForce", 0);
        }

        void t_DragForce::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragForce), "class_", make_descriptor(DragForce::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragForce), "wrapfn_", make_descriptor(t_DragForce::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragForce), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DragForce_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DragForce::initializeClass, 1)))
            return NULL;
          return t_DragForce::wrap_Object(DragForce(((t_DragForce *) arg)->object.this$));
        }
        static PyObject *t_DragForce_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DragForce::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DragForce_init_(t_DragForce *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
          ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
          DragForce object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, &a0, &a1))
          {
            INT_CALL(object = DragForce(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DragForce_acceleration(t_DragForce *self, PyObject *args)
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

          return callSuper(PY_TYPE(DragForce), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_DragForce_getAtmosphere(t_DragForce *self)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere result((jobject) NULL);
          OBJ_CALL(result = self->object.getAtmosphere());
          return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(result);
        }

        static PyObject *t_DragForce_getParametersDrivers(t_DragForce *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(DragForce), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_DragForce_getSpacecraft(t_DragForce *self)
        {
          ::org::orekit::forces::drag::DragSensitive result((jobject) NULL);
          OBJ_CALL(result = self->object.getSpacecraft());
          return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(result);
        }

        static PyObject *t_DragForce_get__atmosphere(t_DragForce *self, void *data)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere value((jobject) NULL);
          OBJ_CALL(value = self->object.getAtmosphere());
          return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(value);
        }

        static PyObject *t_DragForce_get__parametersDrivers(t_DragForce *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_DragForce_get__spacecraft(t_DragForce *self, void *data)
        {
          ::org::orekit::forces::drag::DragSensitive value((jobject) NULL);
          OBJ_CALL(value = self->object.getSpacecraft());
          return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FixedTransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FixedTransformProvider::class$ = NULL;
      jmethodID *FixedTransformProvider::mids$ = NULL;
      bool FixedTransformProvider::live$ = false;

      jclass FixedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FixedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4a9e46c2c819a4c3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Transform;)V");
          mids$[mid_getTransform_02ca17ac51b6a4b2] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_286745ef54e0a7f6] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedTransformProvider::FixedTransformProvider(const ::org::orekit::frames::Transform & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4a9e46c2c819a4c3, a0.this$)) {}

      ::org::orekit::frames::Transform FixedTransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_02ca17ac51b6a4b2], a0.this$));
      }

      ::org::orekit::frames::FieldTransform FixedTransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
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
      static PyObject *t_FixedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedTransformProvider_init_(t_FixedTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedTransformProvider_getTransform(t_FixedTransformProvider *self, PyObject *args);

      static PyMethodDef t_FixedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_FixedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedTransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedTransformProvider)[] = {
        { Py_tp_methods, t_FixedTransformProvider__methods_ },
        { Py_tp_init, (void *) t_FixedTransformProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedTransformProvider, t_FixedTransformProvider, FixedTransformProvider);

      void t_FixedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedTransformProvider), &PY_TYPE_DEF(FixedTransformProvider), module, "FixedTransformProvider", 0);
      }

      void t_FixedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTransformProvider), "class_", make_descriptor(FixedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTransformProvider), "wrapfn_", make_descriptor(t_FixedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_FixedTransformProvider::wrap_Object(FixedTransformProvider(((t_FixedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_FixedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedTransformProvider_init_(t_FixedTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Transform a0((jobject) NULL);
        FixedTransformProvider object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Transform::initializeClass, &a0))
        {
          INT_CALL(object = FixedTransformProvider(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedTransformProvider_getTransform(t_FixedTransformProvider *self, PyObject *args)
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
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedGenerator::class$ = NULL;
      jmethodID *TimeStampedGenerator::mids$ = NULL;
      bool TimeStampedGenerator::live$ = false;

      jclass TimeStampedGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_generate_0499dac7e83b853d] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List TimeStampedGenerator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_generate_0499dac7e83b853d], a0.this$, a1.this$));
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
      static PyObject *t_TimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedGenerator_of_(t_TimeStampedGenerator *self, PyObject *args);
      static PyObject *t_TimeStampedGenerator_generate(t_TimeStampedGenerator *self, PyObject *args);
      static PyObject *t_TimeStampedGenerator_get__parameters_(t_TimeStampedGenerator *self, void *data);
      static PyGetSetDef t_TimeStampedGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedGenerator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedGenerator, generate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedGenerator)[] = {
        { Py_tp_methods, t_TimeStampedGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeStampedGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedGenerator, t_TimeStampedGenerator, TimeStampedGenerator);
      PyObject *t_TimeStampedGenerator::wrap_Object(const TimeStampedGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedGenerator *self = (t_TimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedGenerator *self = (t_TimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedGenerator), &PY_TYPE_DEF(TimeStampedGenerator), module, "TimeStampedGenerator", 0);
      }

      void t_TimeStampedGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedGenerator), "class_", make_descriptor(TimeStampedGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedGenerator), "wrapfn_", make_descriptor(t_TimeStampedGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedGenerator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedGenerator::wrap_Object(TimeStampedGenerator(((t_TimeStampedGenerator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedGenerator_of_(t_TimeStampedGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeStampedGenerator_generate(t_TimeStampedGenerator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.generate(a0, a1));
          return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "generate", args);
        return NULL;
      }
      static PyObject *t_TimeStampedGenerator_get__parameters_(t_TimeStampedGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *Phase::class$ = NULL;
          jmethodID *Phase::mids$ = NULL;
          bool Phase::live$ = false;
          ::java::lang::String *Phase::AMBIGUITY_NAME = NULL;
          ::java::lang::String *Phase::MEASUREMENT_TYPE = NULL;

          jclass Phase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/Phase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_51d214c84cfaa171] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_getAmbiguityDriver_7daccb22665e511b] = env->getMethodID(cls, "getAmbiguityDriver", "()Lorg/orekit/utils/ParameterDriver;");
              mids$[mid_getWavelength_9981f74b2d109da6] = env->getMethodID(cls, "getWavelength", "()D");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AMBIGUITY_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "AMBIGUITY_NAME", "Ljava/lang/String;"));
              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Phase::Phase(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_51d214c84cfaa171, a0.this$, a1.this$, a2, a3, a4, a5, a6.this$)) {}

          ::org::orekit::utils::ParameterDriver Phase::getAmbiguityDriver() const
          {
            return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getAmbiguityDriver_7daccb22665e511b]));
          }

          jdouble Phase::getWavelength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWavelength_9981f74b2d109da6]);
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
          static PyObject *t_Phase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Phase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Phase_of_(t_Phase *self, PyObject *args);
          static int t_Phase_init_(t_Phase *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Phase_getAmbiguityDriver(t_Phase *self);
          static PyObject *t_Phase_getWavelength(t_Phase *self);
          static PyObject *t_Phase_get__ambiguityDriver(t_Phase *self, void *data);
          static PyObject *t_Phase_get__wavelength(t_Phase *self, void *data);
          static PyObject *t_Phase_get__parameters_(t_Phase *self, void *data);
          static PyGetSetDef t_Phase__fields_[] = {
            DECLARE_GET_FIELD(t_Phase, ambiguityDriver),
            DECLARE_GET_FIELD(t_Phase, wavelength),
            DECLARE_GET_FIELD(t_Phase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Phase__methods_[] = {
            DECLARE_METHOD(t_Phase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Phase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Phase, of_, METH_VARARGS),
            DECLARE_METHOD(t_Phase, getAmbiguityDriver, METH_NOARGS),
            DECLARE_METHOD(t_Phase, getWavelength, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Phase)[] = {
            { Py_tp_methods, t_Phase__methods_ },
            { Py_tp_init, (void *) t_Phase_init_ },
            { Py_tp_getset, t_Phase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Phase)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
            NULL
          };

          DEFINE_TYPE(Phase, t_Phase, Phase);
          PyObject *t_Phase::wrap_Object(const Phase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Phase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Phase *self = (t_Phase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Phase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Phase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Phase *self = (t_Phase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Phase::install(PyObject *module)
          {
            installType(&PY_TYPE(Phase), &PY_TYPE_DEF(Phase), module, "Phase", 0);
          }

          void t_Phase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "class_", make_descriptor(Phase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "wrapfn_", make_descriptor(t_Phase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "boxfn_", make_descriptor(boxObject));
            env->getClass(Phase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "AMBIGUITY_NAME", make_descriptor(j2p(*Phase::AMBIGUITY_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "MEASUREMENT_TYPE", make_descriptor(j2p(*Phase::MEASUREMENT_TYPE)));
          }

          static PyObject *t_Phase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Phase::initializeClass, 1)))
              return NULL;
            return t_Phase::wrap_Object(Phase(((t_Phase *) arg)->object.this$));
          }
          static PyObject *t_Phase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Phase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Phase_of_(t_Phase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Phase_init_(t_Phase *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
            Phase object((jobject) NULL);

            if (!parseArgs(args, "kkDDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = Phase(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(Phase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Phase_getAmbiguityDriver(t_Phase *self)
          {
            ::org::orekit::utils::ParameterDriver result((jobject) NULL);
            OBJ_CALL(result = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
          }

          static PyObject *t_Phase_getWavelength(t_Phase *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWavelength());
            return PyFloat_FromDouble((double) result);
          }
          static PyObject *t_Phase_get__parameters_(t_Phase *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Phase_get__ambiguityDriver(t_Phase *self, void *data)
          {
            ::org::orekit::utils::ParameterDriver value((jobject) NULL);
            OBJ_CALL(value = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
          }

          static PyObject *t_Phase_get__wavelength(t_Phase *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/twod/Vector2DFormat.h"
#include "java/util/Locale.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/text/FieldPosition.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2DFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Vector2DFormat::class$ = NULL;
          jmethodID *Vector2DFormat::mids$ = NULL;
          bool Vector2DFormat::live$ = false;

          jclass Vector2DFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Vector2DFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_327b6d3ae10b544b] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
              mids$[mid_init$_56b987237c71cdbb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_21a024496acf58f0] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
              mids$[mid_format_dbd94d7f7c5c0aa8] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
              mids$[mid_getVector2DFormat_059363d576d41933] = env->getStaticMethodID(cls, "getVector2DFormat", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2DFormat;");
              mids$[mid_getVector2DFormat_b650ca28b8d669cc] = env->getStaticMethodID(cls, "getVector2DFormat", "(Ljava/util/Locale;)Lorg/hipparchus/geometry/euclidean/twod/Vector2DFormat;");
              mids$[mid_parse_8b7f998a5e2e454a] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_parse_1801d7b769af6728] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector2DFormat::Vector2DFormat() : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          Vector2DFormat::Vector2DFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_327b6d3ae10b544b, a0.this$)) {}

          Vector2DFormat::Vector2DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_56b987237c71cdbb, a0.this$, a1.this$, a2.this$)) {}

          Vector2DFormat::Vector2DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::text::NumberFormat & a3) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_21a024496acf58f0, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::java::lang::StringBuffer Vector2DFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
          {
            return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_dbd94d7f7c5c0aa8], a0.this$, a1.this$, a2.this$));
          }

          Vector2DFormat Vector2DFormat::getVector2DFormat()
          {
            jclass cls = env->getClass(initializeClass);
            return Vector2DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector2DFormat_059363d576d41933]));
          }

          Vector2DFormat Vector2DFormat::getVector2DFormat(const ::java::util::Locale & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector2DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector2DFormat_b650ca28b8d669cc], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Vector2DFormat::parse(const ::java::lang::String & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_parse_8b7f998a5e2e454a], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Vector2DFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_parse_1801d7b769af6728], a0.this$, a1.this$));
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
          static PyObject *t_Vector2DFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector2DFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector2DFormat_of_(t_Vector2DFormat *self, PyObject *args);
          static int t_Vector2DFormat_init_(t_Vector2DFormat *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector2DFormat_format(t_Vector2DFormat *self, PyObject *args);
          static PyObject *t_Vector2DFormat_getVector2DFormat(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2DFormat_parse(t_Vector2DFormat *self, PyObject *args);
          static PyObject *t_Vector2DFormat_get__vector2DFormat(t_Vector2DFormat *self, void *data);
          static PyObject *t_Vector2DFormat_get__parameters_(t_Vector2DFormat *self, void *data);
          static PyGetSetDef t_Vector2DFormat__fields_[] = {
            DECLARE_GET_FIELD(t_Vector2DFormat, vector2DFormat),
            DECLARE_GET_FIELD(t_Vector2DFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector2DFormat__methods_[] = {
            DECLARE_METHOD(t_Vector2DFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2DFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2DFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_Vector2DFormat, format, METH_VARARGS),
            DECLARE_METHOD(t_Vector2DFormat, getVector2DFormat, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2DFormat, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector2DFormat)[] = {
            { Py_tp_methods, t_Vector2DFormat__methods_ },
            { Py_tp_init, (void *) t_Vector2DFormat_init_ },
            { Py_tp_getset, t_Vector2DFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector2DFormat)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::VectorFormat),
            NULL
          };

          DEFINE_TYPE(Vector2DFormat, t_Vector2DFormat, Vector2DFormat);
          PyObject *t_Vector2DFormat::wrap_Object(const Vector2DFormat& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector2DFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector2DFormat *self = (t_Vector2DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Vector2DFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector2DFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector2DFormat *self = (t_Vector2DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Vector2DFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector2DFormat), &PY_TYPE_DEF(Vector2DFormat), module, "Vector2DFormat", 0);
          }

          void t_Vector2DFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2DFormat), "class_", make_descriptor(Vector2DFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2DFormat), "wrapfn_", make_descriptor(t_Vector2DFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2DFormat), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vector2DFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector2DFormat::initializeClass, 1)))
              return NULL;
            return t_Vector2DFormat::wrap_Object(Vector2DFormat(((t_Vector2DFormat *) arg)->object.this$));
          }
          static PyObject *t_Vector2DFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector2DFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vector2DFormat_of_(t_Vector2DFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Vector2DFormat_init_(t_Vector2DFormat *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector2DFormat object((jobject) NULL);

                INT_CALL(object = Vector2DFormat());
                self->object = object;
                self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
                break;
              }
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                Vector2DFormat object((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  INT_CALL(object = Vector2DFormat(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                Vector2DFormat object((jobject) NULL);

                if (!parseArgs(args, "sss", &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector2DFormat(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::text::NumberFormat a3((jobject) NULL);
                Vector2DFormat object((jobject) NULL);

                if (!parseArgs(args, "sssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector2DFormat(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
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

          static PyObject *t_Vector2DFormat_format(t_Vector2DFormat *self, PyObject *args)
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

            return callSuper(PY_TYPE(Vector2DFormat), (PyObject *) self, "format", args, 2);
          }

          static PyObject *t_Vector2DFormat_getVector2DFormat(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector2DFormat result((jobject) NULL);
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2DFormat::getVector2DFormat());
                return t_Vector2DFormat::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::util::Locale a0((jobject) NULL);
                Vector2DFormat result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2DFormat::getVector2DFormat(a0));
                  return t_Vector2DFormat::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getVector2DFormat", args);
            return NULL;
          }

          static PyObject *t_Vector2DFormat_parse(t_Vector2DFormat *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::text::ParsePosition a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector2DFormat), (PyObject *) self, "parse", args, 2);
          }
          static PyObject *t_Vector2DFormat_get__parameters_(t_Vector2DFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Vector2DFormat_get__vector2DFormat(t_Vector2DFormat *self, void *data)
          {
            Vector2DFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector2DFormat());
            return t_Vector2DFormat::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/Well44497a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well44497a::class$ = NULL;
      jmethodID *Well44497a::mids$ = NULL;
      bool Well44497a::live$ = false;

      jclass Well44497a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well44497a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d43202153dd284f7] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_d6ab429752e7c267] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well44497a::Well44497a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      Well44497a::Well44497a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_d43202153dd284f7, a0.this$)) {}

      Well44497a::Well44497a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      Well44497a::Well44497a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

      jint Well44497a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d6ab429752e7c267]);
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
      static PyObject *t_Well44497a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well44497a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well44497a_init_(t_Well44497a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well44497a_nextInt(t_Well44497a *self, PyObject *args);

      static PyMethodDef t_Well44497a__methods_[] = {
        DECLARE_METHOD(t_Well44497a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well44497a)[] = {
        { Py_tp_methods, t_Well44497a__methods_ },
        { Py_tp_init, (void *) t_Well44497a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well44497a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well44497a, t_Well44497a, Well44497a);

      void t_Well44497a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well44497a), &PY_TYPE_DEF(Well44497a), module, "Well44497a", 0);
      }

      void t_Well44497a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497a), "class_", make_descriptor(Well44497a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497a), "wrapfn_", make_descriptor(t_Well44497a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well44497a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well44497a::initializeClass, 1)))
          return NULL;
        return t_Well44497a::wrap_Object(Well44497a(((t_Well44497a *) arg)->object.this$));
      }
      static PyObject *t_Well44497a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well44497a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well44497a_init_(t_Well44497a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well44497a object((jobject) NULL);

            INT_CALL(object = Well44497a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well44497a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well44497a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well44497a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well44497a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well44497a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well44497a(a0));
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

      static PyObject *t_Well44497a_nextInt(t_Well44497a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well44497a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *MathIllegalArgumentException::class$ = NULL;
      jmethodID *MathIllegalArgumentException::mids$ = NULL;
      bool MathIllegalArgumentException::live$ = false;

      jclass MathIllegalArgumentException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/MathIllegalArgumentException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2436a4119ba97d87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_db158649d786c484] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathIllegalArgumentException::MathIllegalArgumentException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_2436a4119ba97d87, a0.this$, a1.this$)) {}

      MathIllegalArgumentException::MathIllegalArgumentException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_db158649d786c484, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_MathIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MathIllegalArgumentException_init_(t_MathIllegalArgumentException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_MathIllegalArgumentException__methods_[] = {
        DECLARE_METHOD(t_MathIllegalArgumentException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathIllegalArgumentException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathIllegalArgumentException)[] = {
        { Py_tp_methods, t_MathIllegalArgumentException__methods_ },
        { Py_tp_init, (void *) t_MathIllegalArgumentException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathIllegalArgumentException)[] = {
        &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
        NULL
      };

      DEFINE_TYPE(MathIllegalArgumentException, t_MathIllegalArgumentException, MathIllegalArgumentException);

      void t_MathIllegalArgumentException::install(PyObject *module)
      {
        installType(&PY_TYPE(MathIllegalArgumentException), &PY_TYPE_DEF(MathIllegalArgumentException), module, "MathIllegalArgumentException", 0);
      }

      void t_MathIllegalArgumentException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalArgumentException), "class_", make_descriptor(MathIllegalArgumentException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalArgumentException), "wrapfn_", make_descriptor(t_MathIllegalArgumentException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalArgumentException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathIllegalArgumentException::initializeClass, 1)))
          return NULL;
        return t_MathIllegalArgumentException::wrap_Object(MathIllegalArgumentException(((t_MathIllegalArgumentException *) arg)->object.this$));
      }
      static PyObject *t_MathIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathIllegalArgumentException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MathIllegalArgumentException_init_(t_MathIllegalArgumentException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            MathIllegalArgumentException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = MathIllegalArgumentException(a0, a1));
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
            MathIllegalArgumentException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MathIllegalArgumentException(a0, a1, a2));
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/PythonIonosphericMappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *PythonIonosphericMappingFunction::class$ = NULL;
          jmethodID *PythonIonosphericMappingFunction::mids$ = NULL;
          bool PythonIonosphericMappingFunction::live$ = false;

          jclass PythonIonosphericMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/PythonIonosphericMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_mappingFactor_bf28ed64d6e8576b] = env->getMethodID(cls, "mappingFactor", "(D)D");
              mids$[mid_mappingFactor_a3b854adede8eaaa] = env->getMethodID(cls, "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactor_T_a3b854adede8eaaa] = env->getMethodID(cls, "mappingFactor_T", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIonosphericMappingFunction::PythonIonosphericMappingFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonIonosphericMappingFunction::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonIonosphericMappingFunction::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonIonosphericMappingFunction::pythonExtension(jlong a0) const
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
        namespace ionosphere {
          static PyObject *t_PythonIonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonIonosphericMappingFunction_init_(t_PythonIonosphericMappingFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIonosphericMappingFunction_finalize(t_PythonIonosphericMappingFunction *self);
          static PyObject *t_PythonIonosphericMappingFunction_pythonExtension(t_PythonIonosphericMappingFunction *self, PyObject *args);
          static jdouble JNICALL t_PythonIonosphericMappingFunction_mappingFactor0(JNIEnv *jenv, jobject jobj, jdouble a0);
          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor_T2(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonIonosphericMappingFunction_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonIonosphericMappingFunction_get__self(t_PythonIonosphericMappingFunction *self, void *data);
          static PyGetSetDef t_PythonIonosphericMappingFunction__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIonosphericMappingFunction, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIonosphericMappingFunction__methods_[] = {
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIonosphericMappingFunction)[] = {
            { Py_tp_methods, t_PythonIonosphericMappingFunction__methods_ },
            { Py_tp_init, (void *) t_PythonIonosphericMappingFunction_init_ },
            { Py_tp_getset, t_PythonIonosphericMappingFunction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIonosphericMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonIonosphericMappingFunction, t_PythonIonosphericMappingFunction, PythonIonosphericMappingFunction);

          void t_PythonIonosphericMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIonosphericMappingFunction), &PY_TYPE_DEF(PythonIonosphericMappingFunction), module, "PythonIonosphericMappingFunction", 1);
          }

          void t_PythonIonosphericMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericMappingFunction), "class_", make_descriptor(PythonIonosphericMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericMappingFunction), "wrapfn_", make_descriptor(t_PythonIonosphericMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericMappingFunction), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIonosphericMappingFunction::initializeClass);
            JNINativeMethod methods[] = {
              { "mappingFactor", "(D)D", (void *) t_PythonIonosphericMappingFunction_mappingFactor0 },
              { "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericMappingFunction_mappingFactor1 },
              { "mappingFactor_T", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericMappingFunction_mappingFactor_T2 },
              { "pythonDecRef", "()V", (void *) t_PythonIonosphericMappingFunction_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonIonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIonosphericMappingFunction::initializeClass, 1)))
              return NULL;
            return t_PythonIonosphericMappingFunction::wrap_Object(PythonIonosphericMappingFunction(((t_PythonIonosphericMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_PythonIonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIonosphericMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonIonosphericMappingFunction_init_(t_PythonIonosphericMappingFunction *self, PyObject *args, PyObject *kwds)
          {
            PythonIonosphericMappingFunction object((jobject) NULL);

            INT_CALL(object = PythonIonosphericMappingFunction());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonIonosphericMappingFunction_finalize(t_PythonIonosphericMappingFunction *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIonosphericMappingFunction_pythonExtension(t_PythonIonosphericMappingFunction *self, PyObject *args)
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

          static jdouble JNICALL t_PythonIonosphericMappingFunction_mappingFactor0(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "mappingFactor", "d", (double) a0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("mappingFactor", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactor", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("mappingFactor", result);
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

          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor_T2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactor_T", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("mappingFactor_T", result);
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

          static void JNICALL t_PythonIonosphericMappingFunction_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonIonosphericMappingFunction_get__self(t_PythonIonosphericMappingFunction *self, void *data)
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
