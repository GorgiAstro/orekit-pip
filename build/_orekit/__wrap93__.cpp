#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/RtcmData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {

            ::java::lang::Class *RtcmData::class$ = NULL;
            jmethodID *RtcmData::mids$ = NULL;
            bool RtcmData::live$ = false;

            jclass RtcmData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/RtcmData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RtcmData::RtcmData() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
          namespace rtcm {
            static PyObject *t_RtcmData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RtcmData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RtcmData_init_(t_RtcmData *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_RtcmData__methods_[] = {
              DECLARE_METHOD(t_RtcmData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RtcmData, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RtcmData)[] = {
              { Py_tp_methods, t_RtcmData__methods_ },
              { Py_tp_init, (void *) t_RtcmData_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RtcmData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RtcmData, t_RtcmData, RtcmData);

            void t_RtcmData::install(PyObject *module)
            {
              installType(&PY_TYPE(RtcmData), &PY_TYPE_DEF(RtcmData), module, "RtcmData", 0);
            }

            void t_RtcmData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmData), "class_", make_descriptor(RtcmData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmData), "wrapfn_", make_descriptor(t_RtcmData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RtcmData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RtcmData::initializeClass, 1)))
                return NULL;
              return t_RtcmData::wrap_Object(RtcmData(((t_RtcmData *) arg)->object.this$));
            }
            static PyObject *t_RtcmData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RtcmData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RtcmData_init_(t_RtcmData *self, PyObject *args, PyObject *kwds)
            {
              RtcmData object((jobject) NULL);

              INT_CALL(object = RtcmData());
              self->object = object;

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
#include "org/hipparchus/linear/SparseRealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseRealVector::class$ = NULL;
      jmethodID *SparseRealVector::mids$ = NULL;
      bool SparseRealVector::live$ = false;

      jclass SparseRealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseRealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SparseRealVector::SparseRealVector() : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_SparseRealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseRealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SparseRealVector_init_(t_SparseRealVector *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_SparseRealVector__methods_[] = {
        DECLARE_METHOD(t_SparseRealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseRealVector, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseRealVector)[] = {
        { Py_tp_methods, t_SparseRealVector__methods_ },
        { Py_tp_init, (void *) t_SparseRealVector_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseRealVector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::RealVector),
        NULL
      };

      DEFINE_TYPE(SparseRealVector, t_SparseRealVector, SparseRealVector);

      void t_SparseRealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseRealVector), &PY_TYPE_DEF(SparseRealVector), module, "SparseRealVector", 0);
      }

      void t_SparseRealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealVector), "class_", make_descriptor(SparseRealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealVector), "wrapfn_", make_descriptor(t_SparseRealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseRealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseRealVector::initializeClass, 1)))
          return NULL;
        return t_SparseRealVector::wrap_Object(SparseRealVector(((t_SparseRealVector *) arg)->object.this$));
      }
      static PyObject *t_SparseRealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseRealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SparseRealVector_init_(t_SparseRealVector *self, PyObject *args, PyObject *kwds)
      {
        SparseRealVector object((jobject) NULL);

        INT_CALL(object = SparseRealVector());
        self->object = object;

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeTroposphericDelayModifier::mids$ = NULL;
          bool BistaticRangeTroposphericDelayModifier::live$ = false;

          jclass BistaticRangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3e4962f34ea61659] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeTroposphericDelayModifier::BistaticRangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_3e4962f34ea61659, a0.this$)) {}

          void BistaticRangeTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void BistaticRangeTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_BistaticRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeTroposphericDelayModifier_init_(t_BistaticRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeTroposphericDelayModifier_modify(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeTroposphericDelayModifier, t_BistaticRangeTroposphericDelayModifier, BistaticRangeTroposphericDelayModifier);

          void t_BistaticRangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeTroposphericDelayModifier), &PY_TYPE_DEF(BistaticRangeTroposphericDelayModifier), module, "BistaticRangeTroposphericDelayModifier", 0);
          }

          void t_BistaticRangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeTroposphericDelayModifier), "class_", make_descriptor(BistaticRangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeTroposphericDelayModifier::wrap_Object(BistaticRangeTroposphericDelayModifier(((t_BistaticRangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeTroposphericDelayModifier_init_(t_BistaticRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            BistaticRangeTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = BistaticRangeTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeTroposphericDelayModifier_modify(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_BistaticRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg)
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
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *CartesianOrbit::class$ = NULL;
      jmethodID *CartesianOrbit::mids$ = NULL;
      bool CartesianOrbit::live$ = false;

      jclass CartesianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/CartesianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6219f6b430651d68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_7753eee512deef45] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_17efd10b0f16bc37] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_f2365c7dd61a1cda] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_getA_dff5885c2c873297] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_dff5885c2c873297] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getE_dff5885c2c873297] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_dff5885c2c873297] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_dff5885c2c873297] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_dff5885c2c873297] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_dff5885c2c873297] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_dff5885c2c873297] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_dff5885c2c873297] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_dff5885c2c873297] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_dff5885c2c873297] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_dff5885c2c873297] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_dff5885c2c873297] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_dff5885c2c873297] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_dff5885c2c873297] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_dff5885c2c873297] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getType_e29360d311dc0e20] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_b108b35ef48e27bd] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_shiftedBy_c23f2d16290b9786] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/CartesianOrbit;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPVCoordinates_c204436deca11d94] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_initPosition_d52645e0d4c07563] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_0358d8ea02f2cdb1] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_0358d8ea02f2cdb1] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_0358d8ea02f2cdb1] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CartesianOrbit::CartesianOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_6219f6b430651d68, a0.this$)) {}

      CartesianOrbit::CartesianOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_7753eee512deef45, a0.this$, a1.this$, a2)) {}

      CartesianOrbit::CartesianOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_17efd10b0f16bc37, a0.this$, a1.this$, a2.this$, a3)) {}

      void CartesianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_f2365c7dd61a1cda], a0.this$, a1, a2.this$);
      }

      jdouble CartesianOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_dff5885c2c873297]);
      }

      jdouble CartesianOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_dff5885c2c873297]);
      }

      ::org::orekit::orbits::OrbitType CartesianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_e29360d311dc0e20]));
      }

      jboolean CartesianOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_b108b35ef48e27bd]);
      }

      CartesianOrbit CartesianOrbit::shiftedBy(jdouble a0) const
      {
        return CartesianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_c23f2d16290b9786], a0));
      }

      ::java::lang::String CartesianOrbit::toString() const
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
  namespace orekit {
    namespace orbits {
      static PyObject *t_CartesianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CartesianOrbit_init_(t_CartesianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CartesianOrbit_addKeplerContribution(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getA(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getADot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getE(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialEx(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialExDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialEy(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getEquinoctialEyDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHx(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHxDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHy(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getHyDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getI(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getIDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLE(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLEDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLM(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLMDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLv(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getLvDot(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_getType(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_hasDerivatives(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_shiftedBy(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_toString(t_CartesianOrbit *self, PyObject *args);
      static PyObject *t_CartesianOrbit_get__a(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__aDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__e(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__eDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialEx(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialExDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialEy(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__equinoctialEyDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hx(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hxDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hy(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__hyDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__i(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__iDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lE(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lEDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lM(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lMDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lv(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__lvDot(t_CartesianOrbit *self, void *data);
      static PyObject *t_CartesianOrbit_get__type(t_CartesianOrbit *self, void *data);
      static PyGetSetDef t_CartesianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_CartesianOrbit, a),
        DECLARE_GET_FIELD(t_CartesianOrbit, aDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, e),
        DECLARE_GET_FIELD(t_CartesianOrbit, eDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_CartesianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, hx),
        DECLARE_GET_FIELD(t_CartesianOrbit, hxDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, hy),
        DECLARE_GET_FIELD(t_CartesianOrbit, hyDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, i),
        DECLARE_GET_FIELD(t_CartesianOrbit, iDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, lE),
        DECLARE_GET_FIELD(t_CartesianOrbit, lEDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, lM),
        DECLARE_GET_FIELD(t_CartesianOrbit, lMDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, lv),
        DECLARE_GET_FIELD(t_CartesianOrbit, lvDot),
        DECLARE_GET_FIELD(t_CartesianOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CartesianOrbit__methods_[] = {
        DECLARE_METHOD(t_CartesianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_CartesianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CartesianOrbit)[] = {
        { Py_tp_methods, t_CartesianOrbit__methods_ },
        { Py_tp_init, (void *) t_CartesianOrbit_init_ },
        { Py_tp_getset, t_CartesianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CartesianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(CartesianOrbit, t_CartesianOrbit, CartesianOrbit);

      void t_CartesianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(CartesianOrbit), &PY_TYPE_DEF(CartesianOrbit), module, "CartesianOrbit", 0);
      }

      void t_CartesianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianOrbit), "class_", make_descriptor(CartesianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianOrbit), "wrapfn_", make_descriptor(t_CartesianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CartesianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CartesianOrbit::initializeClass, 1)))
          return NULL;
        return t_CartesianOrbit::wrap_Object(CartesianOrbit(((t_CartesianOrbit *) arg)->object.this$));
      }
      static PyObject *t_CartesianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CartesianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CartesianOrbit_init_(t_CartesianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            CartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = CartesianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            CartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CartesianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            CartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CartesianOrbit(a0, a1, a2, a3));
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

      static PyObject *t_CartesianOrbit_addKeplerContribution(t_CartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_CartesianOrbit_getA(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_CartesianOrbit_getADot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getE(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialEx(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialExDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialEy(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_CartesianOrbit_getEquinoctialEyDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHx(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHxDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHy(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_CartesianOrbit_getHyDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getI(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_CartesianOrbit_getIDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLE(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLEDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLM(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLMDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLv(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_CartesianOrbit_getLvDot(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_CartesianOrbit_getType(t_CartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_CartesianOrbit_hasDerivatives(t_CartesianOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_CartesianOrbit_shiftedBy(t_CartesianOrbit *self, PyObject *args)
      {
        jdouble a0;
        CartesianOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_CartesianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_CartesianOrbit_toString(t_CartesianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(CartesianOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_CartesianOrbit_get__a(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__aDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__e(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__eDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialEx(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialExDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialEy(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__equinoctialEyDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hx(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hxDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hy(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__hyDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__i(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__iDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lE(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lEDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lM(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lMDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lv(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__lvDot(t_CartesianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CartesianOrbit_get__type(t_CartesianOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/KendallsCorrelation.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *KendallsCorrelation::class$ = NULL;
        jmethodID *KendallsCorrelation::mids$ = NULL;
        bool KendallsCorrelation::live$ = false;

        jclass KendallsCorrelation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/KendallsCorrelation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_a0befc7f3dc19e41] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_computeCorrelationMatrix_62c0bfb50b5dacc0] = env->getMethodID(cls, "computeCorrelationMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCorrelationMatrix_e9b72403ad502221] = env->getMethodID(cls, "computeCorrelationMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correlation_b561c6892e9976f8] = env->getMethodID(cls, "correlation", "([D[D)D");
            mids$[mid_getCorrelationMatrix_688b496048ff947b] = env->getMethodID(cls, "getCorrelationMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KendallsCorrelation::KendallsCorrelation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        KendallsCorrelation::KendallsCorrelation(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0befc7f3dc19e41, a0.this$)) {}

        KendallsCorrelation::KendallsCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

        ::org::hipparchus::linear::RealMatrix KendallsCorrelation::computeCorrelationMatrix(const JArray< JArray< jdouble > > & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_62c0bfb50b5dacc0], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix KendallsCorrelation::computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_e9b72403ad502221], a0.this$));
        }

        jdouble KendallsCorrelation::correlation(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_correlation_b561c6892e9976f8], a0.this$, a1.this$);
        }

        ::org::hipparchus::linear::RealMatrix KendallsCorrelation::getCorrelationMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationMatrix_688b496048ff947b]));
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
      namespace correlation {
        static PyObject *t_KendallsCorrelation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KendallsCorrelation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KendallsCorrelation_init_(t_KendallsCorrelation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KendallsCorrelation_computeCorrelationMatrix(t_KendallsCorrelation *self, PyObject *args);
        static PyObject *t_KendallsCorrelation_correlation(t_KendallsCorrelation *self, PyObject *args);
        static PyObject *t_KendallsCorrelation_getCorrelationMatrix(t_KendallsCorrelation *self);
        static PyObject *t_KendallsCorrelation_get__correlationMatrix(t_KendallsCorrelation *self, void *data);
        static PyGetSetDef t_KendallsCorrelation__fields_[] = {
          DECLARE_GET_FIELD(t_KendallsCorrelation, correlationMatrix),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KendallsCorrelation__methods_[] = {
          DECLARE_METHOD(t_KendallsCorrelation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KendallsCorrelation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KendallsCorrelation, computeCorrelationMatrix, METH_VARARGS),
          DECLARE_METHOD(t_KendallsCorrelation, correlation, METH_VARARGS),
          DECLARE_METHOD(t_KendallsCorrelation, getCorrelationMatrix, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KendallsCorrelation)[] = {
          { Py_tp_methods, t_KendallsCorrelation__methods_ },
          { Py_tp_init, (void *) t_KendallsCorrelation_init_ },
          { Py_tp_getset, t_KendallsCorrelation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KendallsCorrelation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KendallsCorrelation, t_KendallsCorrelation, KendallsCorrelation);

        void t_KendallsCorrelation::install(PyObject *module)
        {
          installType(&PY_TYPE(KendallsCorrelation), &PY_TYPE_DEF(KendallsCorrelation), module, "KendallsCorrelation", 0);
        }

        void t_KendallsCorrelation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KendallsCorrelation), "class_", make_descriptor(KendallsCorrelation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KendallsCorrelation), "wrapfn_", make_descriptor(t_KendallsCorrelation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KendallsCorrelation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KendallsCorrelation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KendallsCorrelation::initializeClass, 1)))
            return NULL;
          return t_KendallsCorrelation::wrap_Object(KendallsCorrelation(((t_KendallsCorrelation *) arg)->object.this$));
        }
        static PyObject *t_KendallsCorrelation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KendallsCorrelation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KendallsCorrelation_init_(t_KendallsCorrelation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              KendallsCorrelation object((jobject) NULL);

              INT_CALL(object = KendallsCorrelation());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              KendallsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                INT_CALL(object = KendallsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              KendallsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = KendallsCorrelation(a0));
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

        static PyObject *t_KendallsCorrelation_computeCorrelationMatrix(t_KendallsCorrelation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeCorrelationMatrix", args);
          return NULL;
        }

        static PyObject *t_KendallsCorrelation_correlation(t_KendallsCorrelation *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.correlation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "correlation", args);
          return NULL;
        }

        static PyObject *t_KendallsCorrelation_getCorrelationMatrix(t_KendallsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KendallsCorrelation_get__correlationMatrix(t_KendallsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/AbstractParameterizable.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/Parameterizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *AbstractParameterizable::class$ = NULL;
      jmethodID *AbstractParameterizable::mids$ = NULL;
      bool AbstractParameterizable::live$ = false;

      jclass AbstractParameterizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/AbstractParameterizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_complainIfNotSupported_d0bc48d5b00dc40c] = env->getMethodID(cls, "complainIfNotSupported", "(Ljava/lang/String;)V");
          mids$[mid_getParametersNames_2afa36052df4765d] = env->getMethodID(cls, "getParametersNames", "()Ljava/util/List;");
          mids$[mid_isSupported_7edad2c2f64f4d68] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractParameterizable::complainIfNotSupported(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_complainIfNotSupported_d0bc48d5b00dc40c], a0.this$);
      }

      ::java::util::List AbstractParameterizable::getParametersNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersNames_2afa36052df4765d]));
      }

      jboolean AbstractParameterizable::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_7edad2c2f64f4d68], a0.this$);
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
      static PyObject *t_AbstractParameterizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractParameterizable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractParameterizable_complainIfNotSupported(t_AbstractParameterizable *self, PyObject *arg);
      static PyObject *t_AbstractParameterizable_getParametersNames(t_AbstractParameterizable *self);
      static PyObject *t_AbstractParameterizable_isSupported(t_AbstractParameterizable *self, PyObject *arg);
      static PyObject *t_AbstractParameterizable_get__parametersNames(t_AbstractParameterizable *self, void *data);
      static PyGetSetDef t_AbstractParameterizable__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractParameterizable, parametersNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractParameterizable__methods_[] = {
        DECLARE_METHOD(t_AbstractParameterizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractParameterizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractParameterizable, complainIfNotSupported, METH_O),
        DECLARE_METHOD(t_AbstractParameterizable, getParametersNames, METH_NOARGS),
        DECLARE_METHOD(t_AbstractParameterizable, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractParameterizable)[] = {
        { Py_tp_methods, t_AbstractParameterizable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractParameterizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractParameterizable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractParameterizable, t_AbstractParameterizable, AbstractParameterizable);

      void t_AbstractParameterizable::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractParameterizable), &PY_TYPE_DEF(AbstractParameterizable), module, "AbstractParameterizable", 0);
      }

      void t_AbstractParameterizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractParameterizable), "class_", make_descriptor(AbstractParameterizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractParameterizable), "wrapfn_", make_descriptor(t_AbstractParameterizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractParameterizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractParameterizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractParameterizable::initializeClass, 1)))
          return NULL;
        return t_AbstractParameterizable::wrap_Object(AbstractParameterizable(((t_AbstractParameterizable *) arg)->object.this$));
      }
      static PyObject *t_AbstractParameterizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractParameterizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractParameterizable_complainIfNotSupported(t_AbstractParameterizable *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(self->object.complainIfNotSupported(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "complainIfNotSupported", arg);
        return NULL;
      }

      static PyObject *t_AbstractParameterizable_getParametersNames(t_AbstractParameterizable *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_AbstractParameterizable_isSupported(t_AbstractParameterizable *self, PyObject *arg)
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

      static PyObject *t_AbstractParameterizable_get__parametersNames(t_AbstractParameterizable *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/ranking/RankingAlgorithm.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *RankingAlgorithm::class$ = NULL;
        jmethodID *RankingAlgorithm::mids$ = NULL;
        bool RankingAlgorithm::live$ = false;

        jclass RankingAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/RankingAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_rank_ac3d742ccc742f22] = env->getMethodID(cls, "rank", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > RankingAlgorithm::rank(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_rank_ac3d742ccc742f22], a0.this$));
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
      namespace ranking {
        static PyObject *t_RankingAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RankingAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RankingAlgorithm_rank(t_RankingAlgorithm *self, PyObject *arg);

        static PyMethodDef t_RankingAlgorithm__methods_[] = {
          DECLARE_METHOD(t_RankingAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RankingAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RankingAlgorithm, rank, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RankingAlgorithm)[] = {
          { Py_tp_methods, t_RankingAlgorithm__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RankingAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RankingAlgorithm, t_RankingAlgorithm, RankingAlgorithm);

        void t_RankingAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(RankingAlgorithm), &PY_TYPE_DEF(RankingAlgorithm), module, "RankingAlgorithm", 0);
        }

        void t_RankingAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RankingAlgorithm), "class_", make_descriptor(RankingAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RankingAlgorithm), "wrapfn_", make_descriptor(t_RankingAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RankingAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RankingAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RankingAlgorithm::initializeClass, 1)))
            return NULL;
          return t_RankingAlgorithm::wrap_Object(RankingAlgorithm(((t_RankingAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_RankingAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RankingAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RankingAlgorithm_rank(t_RankingAlgorithm *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.rank(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "rank", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PhaseMinusCodeCombination::class$ = NULL;
          jmethodID *PhaseMinusCodeCombination::mids$ = NULL;
          bool PhaseMinusCodeCombination::live$ = false;

          jclass PhaseMinusCodeCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_86ffecc08a63eff0] = env->getMethodID(cls, "getCombinedValue", "(DD)D");

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
        namespace gnss {
          static PyObject *t_PhaseMinusCodeCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseMinusCodeCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_PhaseMinusCodeCombination__methods_[] = {
            DECLARE_METHOD(t_PhaseMinusCodeCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseMinusCodeCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseMinusCodeCombination)[] = {
            { Py_tp_methods, t_PhaseMinusCodeCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseMinusCodeCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(PhaseMinusCodeCombination, t_PhaseMinusCodeCombination, PhaseMinusCodeCombination);

          void t_PhaseMinusCodeCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseMinusCodeCombination), &PY_TYPE_DEF(PhaseMinusCodeCombination), module, "PhaseMinusCodeCombination", 0);
          }

          void t_PhaseMinusCodeCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCombination), "class_", make_descriptor(PhaseMinusCodeCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCombination), "wrapfn_", make_descriptor(t_PhaseMinusCodeCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseMinusCodeCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseMinusCodeCombination::initializeClass, 1)))
              return NULL;
            return t_PhaseMinusCodeCombination::wrap_Object(PhaseMinusCodeCombination(((t_PhaseMinusCodeCombination *) arg)->object.this$));
          }
          static PyObject *t_PhaseMinusCodeCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseMinusCodeCombination::initializeClass, 0))
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockOneWayGNSSPhaseModifier::mids$ = NULL;
          bool RelativisticJ2ClockOneWayGNSSPhaseModifier::live$ = false;

          jclass RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockOneWayGNSSPhaseModifier::RelativisticJ2ClockOneWayGNSSPhaseModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void RelativisticJ2ClockOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockOneWayGNSSPhaseModifier_init_(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier, t_RelativisticJ2ClockOneWayGNSSPhaseModifier, RelativisticJ2ClockOneWayGNSSPhaseModifier);

          void t_RelativisticJ2ClockOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), &PY_TYPE_DEF(RelativisticJ2ClockOneWayGNSSPhaseModifier), module, "RelativisticJ2ClockOneWayGNSSPhaseModifier", 0);
          }

          void t_RelativisticJ2ClockOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), "class_", make_descriptor(RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockOneWayGNSSPhaseModifier::wrap_Object(RelativisticJ2ClockOneWayGNSSPhaseModifier(((t_RelativisticJ2ClockOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockOneWayGNSSPhaseModifier_init_(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockOneWayGNSSPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockOneWayGNSSPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenThirdBodyLinear.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *FieldHansenThirdBodyLinear::class$ = NULL;
              jmethodID *FieldHansenThirdBodyLinear::mids$ = NULL;
              bool FieldHansenThirdBodyLinear::live$ = false;

              jclass FieldHansenThirdBodyLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenThirdBodyLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_4b0ddad3195faf0c] = env->getMethodID(cls, "<init>", "(IILorg/hipparchus/Field;)V");
                  mids$[mid_computeInitValues_82fa7e789a6ae1f6] = env->getMethodID(cls, "computeInitValues", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_getDerivative_e2b464e41c9ba627] = env->getMethodID(cls, "getDerivative", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getValue_e2b464e41c9ba627] = env->getMethodID(cls, "getValue", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldHansenThirdBodyLinear::FieldHansenThirdBodyLinear(jint a0, jint a1, const ::org::hipparchus::Field & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4b0ddad3195faf0c, a0, a1, a2.this$)) {}

              void FieldHansenThirdBodyLinear::computeInitValues(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_82fa7e789a6ae1f6], a0.this$, a1.this$, a2.this$);
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenThirdBodyLinear::getDerivative(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_e2b464e41c9ba627], a0, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenThirdBodyLinear::getValue(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_e2b464e41c9ba627], a0, a1.this$));
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_FieldHansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenThirdBodyLinear_of_(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static int t_FieldHansenThirdBodyLinear_init_(t_FieldHansenThirdBodyLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldHansenThirdBodyLinear_computeInitValues(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_FieldHansenThirdBodyLinear_getDerivative(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_FieldHansenThirdBodyLinear_getValue(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_FieldHansenThirdBodyLinear_get__parameters_(t_FieldHansenThirdBodyLinear *self, void *data);
              static PyGetSetDef t_FieldHansenThirdBodyLinear__fields_[] = {
                DECLARE_GET_FIELD(t_FieldHansenThirdBodyLinear, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldHansenThirdBodyLinear__methods_[] = {
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldHansenThirdBodyLinear)[] = {
                { Py_tp_methods, t_FieldHansenThirdBodyLinear__methods_ },
                { Py_tp_init, (void *) t_FieldHansenThirdBodyLinear_init_ },
                { Py_tp_getset, t_FieldHansenThirdBodyLinear__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldHansenThirdBodyLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldHansenThirdBodyLinear, t_FieldHansenThirdBodyLinear, FieldHansenThirdBodyLinear);
              PyObject *t_FieldHansenThirdBodyLinear::wrap_Object(const FieldHansenThirdBodyLinear& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenThirdBodyLinear::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenThirdBodyLinear *self = (t_FieldHansenThirdBodyLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldHansenThirdBodyLinear::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenThirdBodyLinear::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenThirdBodyLinear *self = (t_FieldHansenThirdBodyLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldHansenThirdBodyLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldHansenThirdBodyLinear), &PY_TYPE_DEF(FieldHansenThirdBodyLinear), module, "FieldHansenThirdBodyLinear", 0);
              }

              void t_FieldHansenThirdBodyLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenThirdBodyLinear), "class_", make_descriptor(FieldHansenThirdBodyLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenThirdBodyLinear), "wrapfn_", make_descriptor(t_FieldHansenThirdBodyLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenThirdBodyLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldHansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldHansenThirdBodyLinear::initializeClass, 1)))
                  return NULL;
                return t_FieldHansenThirdBodyLinear::wrap_Object(FieldHansenThirdBodyLinear(((t_FieldHansenThirdBodyLinear *) arg)->object.this$));
              }
              static PyObject *t_FieldHansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldHansenThirdBodyLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_of_(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldHansenThirdBodyLinear_init_(t_FieldHansenThirdBodyLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::Field a2((jobject) NULL);
                PyTypeObject **p2;
                FieldHansenThirdBodyLinear object((jobject) NULL);

                if (!parseArgs(args, "IIK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
                {
                  INT_CALL(object = FieldHansenThirdBodyLinear(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_computeInitValues(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_getDerivative(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_getValue(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
              static PyObject *t_FieldHansenThirdBodyLinear_get__parameters_(t_FieldHansenThirdBodyLinear *self, void *data)
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
#include "org/orekit/files/ilrs/StreamingCpfWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$Segment.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *StreamingCpfWriter::class$ = NULL;
        jmethodID *StreamingCpfWriter::mids$ = NULL;
        bool StreamingCpfWriter::live$ = false;

        jclass StreamingCpfWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/StreamingCpfWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_19c2513a0b4eaf1d] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Lorg/orekit/time/TimeScale;Lorg/orekit/files/ilrs/CPFHeader;)V");
            mids$[mid_init$_a385c366a36fa71f] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Lorg/orekit/time/TimeScale;Lorg/orekit/files/ilrs/CPFHeader;Z)V");
            mids$[mid_newSegment_a4bf1e7b62865aec] = env->getMethodID(cls, "newSegment", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ilrs/StreamingCpfWriter$Segment;");
            mids$[mid_writeEndOfFile_0fa09c18fee449d5] = env->getMethodID(cls, "writeEndOfFile", "()V");
            mids$[mid_writeHeader_0fa09c18fee449d5] = env->getMethodID(cls, "writeHeader", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StreamingCpfWriter::StreamingCpfWriter(const ::java::lang::Appendable & a0, const ::org::orekit::time::TimeScale & a1, const ::org::orekit::files::ilrs::CPFHeader & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_19c2513a0b4eaf1d, a0.this$, a1.this$, a2.this$)) {}

        StreamingCpfWriter::StreamingCpfWriter(const ::java::lang::Appendable & a0, const ::org::orekit::time::TimeScale & a1, const ::org::orekit::files::ilrs::CPFHeader & a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a385c366a36fa71f, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::orekit::files::ilrs::StreamingCpfWriter$Segment StreamingCpfWriter::newSegment(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::orekit::files::ilrs::StreamingCpfWriter$Segment(env->callObjectMethod(this$, mids$[mid_newSegment_a4bf1e7b62865aec], a0.this$));
        }

        void StreamingCpfWriter::writeEndOfFile() const
        {
          env->callVoidMethod(this$, mids$[mid_writeEndOfFile_0fa09c18fee449d5]);
        }

        void StreamingCpfWriter::writeHeader() const
        {
          env->callVoidMethod(this$, mids$[mid_writeHeader_0fa09c18fee449d5]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_StreamingCpfWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StreamingCpfWriter_init_(t_StreamingCpfWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StreamingCpfWriter_newSegment(t_StreamingCpfWriter *self, PyObject *arg);
        static PyObject *t_StreamingCpfWriter_writeEndOfFile(t_StreamingCpfWriter *self);
        static PyObject *t_StreamingCpfWriter_writeHeader(t_StreamingCpfWriter *self);

        static PyMethodDef t_StreamingCpfWriter__methods_[] = {
          DECLARE_METHOD(t_StreamingCpfWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter, newSegment, METH_O),
          DECLARE_METHOD(t_StreamingCpfWriter, writeEndOfFile, METH_NOARGS),
          DECLARE_METHOD(t_StreamingCpfWriter, writeHeader, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingCpfWriter)[] = {
          { Py_tp_methods, t_StreamingCpfWriter__methods_ },
          { Py_tp_init, (void *) t_StreamingCpfWriter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingCpfWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingCpfWriter, t_StreamingCpfWriter, StreamingCpfWriter);

        void t_StreamingCpfWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingCpfWriter), &PY_TYPE_DEF(StreamingCpfWriter), module, "StreamingCpfWriter", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "HeaderLineWriter", make_descriptor(&PY_TYPE_DEF(StreamingCpfWriter$HeaderLineWriter)));
        }

        void t_StreamingCpfWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "class_", make_descriptor(StreamingCpfWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "wrapfn_", make_descriptor(t_StreamingCpfWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingCpfWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingCpfWriter::initializeClass, 1)))
            return NULL;
          return t_StreamingCpfWriter::wrap_Object(StreamingCpfWriter(((t_StreamingCpfWriter *) arg)->object.this$));
        }
        static PyObject *t_StreamingCpfWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingCpfWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StreamingCpfWriter_init_(t_StreamingCpfWriter *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              ::org::orekit::files::ilrs::CPFHeader a2((jobject) NULL);
              StreamingCpfWriter object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::files::ilrs::CPFHeader::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = StreamingCpfWriter(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              ::org::orekit::files::ilrs::CPFHeader a2((jobject) NULL);
              jboolean a3;
              StreamingCpfWriter object((jobject) NULL);

              if (!parseArgs(args, "kkkZ", ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::files::ilrs::CPFHeader::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StreamingCpfWriter(a0, a1, a2, a3));
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

        static PyObject *t_StreamingCpfWriter_newSegment(t_StreamingCpfWriter *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::files::ilrs::StreamingCpfWriter$Segment result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.newSegment(a0));
            return ::org::orekit::files::ilrs::t_StreamingCpfWriter$Segment::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newSegment", arg);
          return NULL;
        }

        static PyObject *t_StreamingCpfWriter_writeEndOfFile(t_StreamingCpfWriter *self)
        {
          OBJ_CALL(self->object.writeEndOfFile());
          Py_RETURN_NONE;
        }

        static PyObject *t_StreamingCpfWriter_writeHeader(t_StreamingCpfWriter *self)
        {
          OBJ_CALL(self->object.writeHeader());
          Py_RETURN_NONE;
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
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/String.h"
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
                mids$[mid_getCoefficients_64003844027bb6c4] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_11b109bd155ca898] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_value_2ab179738ea066bf] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/Orbit;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::Map ShortPeriodTerms::getCoefficients(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Set & a1) const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCoefficients_64003844027bb6c4], a0.this$, a1.this$));
            }

            ::java::lang::String ShortPeriodTerms::getCoefficientsKeyPrefix() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCoefficientsKeyPrefix_11b109bd155ca898]));
            }

            JArray< jdouble > ShortPeriodTerms::value(const ::org::orekit::orbits::Orbit & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_2ab179738ea066bf], a0.this$));
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
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDifferentiableMatrixFunction::class$ = NULL;
        jmethodID *UnivariateDifferentiableMatrixFunction::mids$ = NULL;
        bool UnivariateDifferentiableMatrixFunction::live$ = false;

        jclass UnivariateDifferentiableMatrixFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_c9ec56172aae29ee] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)[[Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > > UnivariateDifferentiableMatrixFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > >(env->callObjectMethod(this$, mids$[mid_value_c9ec56172aae29ee], a0.this$));
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
        static PyObject *t_UnivariateDifferentiableMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableMatrixFunction_value(t_UnivariateDifferentiableMatrixFunction *self, PyObject *args);

        static PyMethodDef t_UnivariateDifferentiableMatrixFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableMatrixFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableMatrixFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableMatrixFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableMatrixFunction)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableMatrixFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableMatrixFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::UnivariateMatrixFunction),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableMatrixFunction, t_UnivariateDifferentiableMatrixFunction, UnivariateDifferentiableMatrixFunction);

        void t_UnivariateDifferentiableMatrixFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableMatrixFunction), &PY_TYPE_DEF(UnivariateDifferentiableMatrixFunction), module, "UnivariateDifferentiableMatrixFunction", 0);
        }

        void t_UnivariateDifferentiableMatrixFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableMatrixFunction), "class_", make_descriptor(UnivariateDifferentiableMatrixFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableMatrixFunction), "wrapfn_", make_descriptor(t_UnivariateDifferentiableMatrixFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableMatrixFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableMatrixFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableMatrixFunction::wrap_Object(UnivariateDifferentiableMatrixFunction(((t_UnivariateDifferentiableMatrixFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableMatrixFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDifferentiableMatrixFunction_value(t_UnivariateDifferentiableMatrixFunction *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > > result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(UnivariateDifferentiableMatrixFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/EcksteinHechlerPropagator.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *EcksteinHechlerPropagator::class$ = NULL;
        jmethodID *EcksteinHechlerPropagator::mids$ = NULL;
        bool EcksteinHechlerPropagator::live$ = false;

        jclass EcksteinHechlerPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/EcksteinHechlerPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_57eaa3ebdba6e598] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_0a2e19a4f50ce1c1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_d85a62fcd038d780] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_8dfffadcf0615726] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_2e5490053653a34b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_35af14f266fc113e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_036644e335827428] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)V");
            mids$[mid_init$_5089879e73b16ab9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_4afced4a8ff4bea6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDD)V");
            mids$[mid_init$_e47ae3c1fa8fb703] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDDD)V");
            mids$[mid_init$_54f20a766b03c649] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDD)V");
            mids$[mid_init$_0a5ace5164997436] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDD)V");
            mids$[mid_init$_61aff361472ec0a8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDDLorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_d9a76e24a36c19d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDDLorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_computeMeanOrbit_711718190d0c0ee5] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)Lorg/orekit/orbits/CircularOrbit;");
            mids$[mid_computeMeanOrbit_dd86578b4c2ad17d] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DI)Lorg/orekit/orbits/CircularOrbit;");
            mids$[mid_computeMeanOrbit_1ebbb61137254739] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;DDDDDDDDI)Lorg/orekit/orbits/CircularOrbit;");
            mids$[mid_getCk0_60c7040667a7dc5c] = env->getMethodID(cls, "getCk0", "()[D");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getReferenceRadius_dff5885c2c873297] = env->getMethodID(cls, "getReferenceRadius", "()D");
            mids$[mid_propagateOrbit_f55175775a204ad4] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/CartesianOrbit;");
            mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_resetInitialState_49bd3c28fa9b4521] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_e810a1bf28643513] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getMass_bf1d7732f1acb697] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_33f4696e4edaa03c] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_resetIntermediateState_f44ee54963124581] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;ZDI)V");
            mids$[mid_createHarvester_5cfd2a13971b74c7] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_57eaa3ebdba6e598, a0.this$, a1.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_0a2e19a4f50ce1c1, a0.this$, a1.this$, a2.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d85a62fcd038d780, a0.this$, a1, a2.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_8dfffadcf0615726, a0.this$, a1.this$, a2.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_2e5490053653a34b, a0.this$, a1.this$, a2, a3.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_35af14f266fc113e, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_036644e335827428, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_5089879e73b16ab9, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_4afced4a8ff4bea6, a0.this$, a1, a2, a3, a4, a5, a6, a7)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e47ae3c1fa8fb703, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_54f20a766b03c649, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_0a5ace5164997436, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_61aff361472ec0a8, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9, a10.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d9a76e24a36c19d4, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9, a10.this$, a11, a12)) {}

        ::org::orekit::orbits::CircularOrbit EcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::CircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_711718190d0c0ee5], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::orbits::CircularOrbit EcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::CircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_dd86578b4c2ad17d], a0.this$, a1.this$, a2.this$, a3, a4));
        }

        ::org::orekit::orbits::CircularOrbit EcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::CircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_1ebbb61137254739], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        JArray< jdouble > EcksteinHechlerPropagator::getCk0() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCk0_60c7040667a7dc5c]));
        }

        jdouble EcksteinHechlerPropagator::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        jdouble EcksteinHechlerPropagator::getReferenceRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReferenceRadius_dff5885c2c873297]);
        }

        ::org::orekit::orbits::CartesianOrbit EcksteinHechlerPropagator::propagateOrbit(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::orbits::CartesianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_f55175775a204ad4], a0.this$));
        }

        void EcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_0ee5c56004643a2e], a0.this$);
        }

        void EcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_49bd3c28fa9b4521], a0.this$, a1.this$);
        }

        void EcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_e810a1bf28643513], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_EcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EcksteinHechlerPropagator_init_(t_EcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagator_getCk0(t_EcksteinHechlerPropagator *self);
        static PyObject *t_EcksteinHechlerPropagator_getMu(t_EcksteinHechlerPropagator *self);
        static PyObject *t_EcksteinHechlerPropagator_getReferenceRadius(t_EcksteinHechlerPropagator *self);
        static PyObject *t_EcksteinHechlerPropagator_propagateOrbit(t_EcksteinHechlerPropagator *self, PyObject *arg);
        static PyObject *t_EcksteinHechlerPropagator_resetInitialState(t_EcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagator_get__ck0(t_EcksteinHechlerPropagator *self, void *data);
        static PyObject *t_EcksteinHechlerPropagator_get__mu(t_EcksteinHechlerPropagator *self, void *data);
        static PyObject *t_EcksteinHechlerPropagator_get__referenceRadius(t_EcksteinHechlerPropagator *self, void *data);
        static PyGetSetDef t_EcksteinHechlerPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_EcksteinHechlerPropagator, ck0),
          DECLARE_GET_FIELD(t_EcksteinHechlerPropagator, mu),
          DECLARE_GET_FIELD(t_EcksteinHechlerPropagator, referenceRadius),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EcksteinHechlerPropagator__methods_[] = {
          DECLARE_METHOD(t_EcksteinHechlerPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, getCk0, METH_NOARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, getReferenceRadius, METH_NOARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, propagateOrbit, METH_O),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EcksteinHechlerPropagator)[] = {
          { Py_tp_methods, t_EcksteinHechlerPropagator__methods_ },
          { Py_tp_init, (void *) t_EcksteinHechlerPropagator_init_ },
          { Py_tp_getset, t_EcksteinHechlerPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EcksteinHechlerPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(EcksteinHechlerPropagator, t_EcksteinHechlerPropagator, EcksteinHechlerPropagator);

        void t_EcksteinHechlerPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(EcksteinHechlerPropagator), &PY_TYPE_DEF(EcksteinHechlerPropagator), module, "EcksteinHechlerPropagator", 0);
        }

        void t_EcksteinHechlerPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagator), "class_", make_descriptor(EcksteinHechlerPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagator), "wrapfn_", make_descriptor(t_EcksteinHechlerPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EcksteinHechlerPropagator::initializeClass, 1)))
            return NULL;
          return t_EcksteinHechlerPropagator::wrap_Object(EcksteinHechlerPropagator(((t_EcksteinHechlerPropagator *) arg)->object.this$));
        }
        static PyObject *t_EcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EcksteinHechlerPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EcksteinHechlerPropagator_init_(t_EcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              ::org::orekit::propagation::PropagationType a5((jobject) NULL);
              PyTypeObject **p5;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 9:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDDK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              jdouble a11;
              jint a12;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDDKDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_, &a11, &a12))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_EcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::EcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2));
                return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jint a4;
              ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkkDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::EcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jint a9;
              ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDDI", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::EcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_EcksteinHechlerPropagator_getCk0(t_EcksteinHechlerPropagator *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCk0());
          return result.wrap();
        }

        static PyObject *t_EcksteinHechlerPropagator_getMu(t_EcksteinHechlerPropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EcksteinHechlerPropagator_getReferenceRadius(t_EcksteinHechlerPropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReferenceRadius());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EcksteinHechlerPropagator_propagateOrbit(t_EcksteinHechlerPropagator *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::orbits::CartesianOrbit result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0));
            return ::org::orekit::orbits::t_CartesianOrbit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", arg);
          return NULL;
        }

        static PyObject *t_EcksteinHechlerPropagator_resetInitialState(t_EcksteinHechlerPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.resetInitialState(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              jint a3;

              if (!parseArgs(args, "kKDI", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &a3))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_EcksteinHechlerPropagator_get__ck0(t_EcksteinHechlerPropagator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCk0());
          return value.wrap();
        }

        static PyObject *t_EcksteinHechlerPropagator_get__mu(t_EcksteinHechlerPropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EcksteinHechlerPropagator_get__referenceRadius(t_EcksteinHechlerPropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReferenceRadius());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ManBasis::class$ = NULL;
              jmethodID *ManBasis::mids$ = NULL;
              bool ManBasis::live$ = false;
              ManBasis *ManBasis::ANTICIPATED = NULL;
              ManBasis *ManBasis::CANDIDATE = NULL;
              ManBasis *ManBasis::DETERMINED_OD = NULL;
              ManBasis *ManBasis::DETERMINED_TLM = NULL;
              ManBasis *ManBasis::OTHER = NULL;
              ManBasis *ManBasis::PLANNED = NULL;
              ManBasis *ManBasis::SIMULATED = NULL;

              jclass ManBasis::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ManBasis");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_cbfbc301f4ac9688] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;");
                  mids$[mid_values_dcedf1a8a2bae813] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANTICIPATED = new ManBasis(env->getStaticObjectField(cls, "ANTICIPATED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  CANDIDATE = new ManBasis(env->getStaticObjectField(cls, "CANDIDATE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  DETERMINED_OD = new ManBasis(env->getStaticObjectField(cls, "DETERMINED_OD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  DETERMINED_TLM = new ManBasis(env->getStaticObjectField(cls, "DETERMINED_TLM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  OTHER = new ManBasis(env->getStaticObjectField(cls, "OTHER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  PLANNED = new ManBasis(env->getStaticObjectField(cls, "PLANNED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  SIMULATED = new ManBasis(env->getStaticObjectField(cls, "SIMULATED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ManBasis ManBasis::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManBasis(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cbfbc301f4ac9688], a0.this$));
              }

              JArray< ManBasis > ManBasis::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManBasis >(env->callStaticObjectMethod(cls, mids$[mid_values_dcedf1a8a2bae813]));
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
              static PyObject *t_ManBasis_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManBasis_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManBasis_of_(t_ManBasis *self, PyObject *args);
              static PyObject *t_ManBasis_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManBasis_values(PyTypeObject *type);
              static PyObject *t_ManBasis_get__parameters_(t_ManBasis *self, void *data);
              static PyGetSetDef t_ManBasis__fields_[] = {
                DECLARE_GET_FIELD(t_ManBasis, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManBasis__methods_[] = {
                DECLARE_METHOD(t_ManBasis, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManBasis, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManBasis, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManBasis, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManBasis, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManBasis)[] = {
                { Py_tp_methods, t_ManBasis__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManBasis__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManBasis)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManBasis, t_ManBasis, ManBasis);
              PyObject *t_ManBasis::wrap_Object(const ManBasis& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManBasis::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManBasis *self = (t_ManBasis *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManBasis::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManBasis::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManBasis *self = (t_ManBasis *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManBasis::install(PyObject *module)
              {
                installType(&PY_TYPE(ManBasis), &PY_TYPE_DEF(ManBasis), module, "ManBasis", 0);
              }

              void t_ManBasis::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "class_", make_descriptor(ManBasis::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "wrapfn_", make_descriptor(t_ManBasis::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManBasis::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "ANTICIPATED", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::ANTICIPATED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "CANDIDATE", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::CANDIDATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "DETERMINED_OD", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::DETERMINED_OD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "DETERMINED_TLM", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::DETERMINED_TLM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "OTHER", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::OTHER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "PLANNED", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::PLANNED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManBasis), "SIMULATED", make_descriptor(t_ManBasis::wrap_Object(*ManBasis::SIMULATED)));
              }

              static PyObject *t_ManBasis_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManBasis::initializeClass, 1)))
                  return NULL;
                return t_ManBasis::wrap_Object(ManBasis(((t_ManBasis *) arg)->object.this$));
              }
              static PyObject *t_ManBasis_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManBasis::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManBasis_of_(t_ManBasis *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManBasis_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManBasis result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::valueOf(a0));
                  return t_ManBasis::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManBasis_values(PyTypeObject *type)
              {
                JArray< ManBasis > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::values());
                return JArray<jobject>(result.this$).wrap(t_ManBasis::wrap_jobject);
              }
              static PyObject *t_ManBasis_get__parameters_(t_ManBasis *self, void *data)
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
#include "org/orekit/time/PythonTimeInterpolator.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeInterpolator::class$ = NULL;
      jmethodID *PythonTimeInterpolator::mids$ = NULL;
      bool PythonTimeInterpolator::live$ = false;

      jclass PythonTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getExtrapolationThreshold_dff5885c2c873297] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_570ce0828f81a2c1] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_2afa36052df4765d] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_f188b898b7f796fe] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_interpolate_b257adab460412b3] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeInterpolator::PythonTimeInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonTimeInterpolator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonTimeInterpolator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonTimeInterpolator::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeInterpolator_of_(t_PythonTimeInterpolator *self, PyObject *args);
      static int t_PythonTimeInterpolator_init_(t_PythonTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeInterpolator_finalize(t_PythonTimeInterpolator *self);
      static PyObject *t_PythonTimeInterpolator_pythonExtension(t_PythonTimeInterpolator *self, PyObject *args);
      static jdouble JNICALL t_PythonTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj);
      static jint JNICALL t_PythonTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeInterpolator_get__self(t_PythonTimeInterpolator *self, void *data);
      static PyObject *t_PythonTimeInterpolator_get__parameters_(t_PythonTimeInterpolator *self, void *data);
      static PyGetSetDef t_PythonTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeInterpolator, self),
        DECLARE_GET_FIELD(t_PythonTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_PythonTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeInterpolator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeInterpolator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeInterpolator)[] = {
        { Py_tp_methods, t_PythonTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_PythonTimeInterpolator_init_ },
        { Py_tp_getset, t_PythonTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeInterpolator, t_PythonTimeInterpolator, PythonTimeInterpolator);
      PyObject *t_PythonTimeInterpolator::wrap_Object(const PythonTimeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeInterpolator *self = (t_PythonTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeInterpolator *self = (t_PythonTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeInterpolator), &PY_TYPE_DEF(PythonTimeInterpolator), module, "PythonTimeInterpolator", 1);
      }

      void t_PythonTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeInterpolator), "class_", make_descriptor(PythonTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeInterpolator), "wrapfn_", make_descriptor(t_PythonTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeInterpolator::initializeClass);
        JNINativeMethod methods[] = {
          { "getExtrapolationThreshold", "()D", (void *) t_PythonTimeInterpolator_getExtrapolationThreshold0 },
          { "getNbInterpolationPoints", "()I", (void *) t_PythonTimeInterpolator_getNbInterpolationPoints1 },
          { "getSubInterpolators", "()Ljava/util/List;", (void *) t_PythonTimeInterpolator_getSubInterpolators2 },
          { "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeInterpolator;", (void *) t_PythonTimeInterpolator_interpolate3 },
          { "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeInterpolator;", (void *) t_PythonTimeInterpolator_interpolate4 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeInterpolator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_PythonTimeInterpolator::wrap_Object(PythonTimeInterpolator(((t_PythonTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeInterpolator_of_(t_PythonTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeInterpolator_init_(t_PythonTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeInterpolator object((jobject) NULL);

        INT_CALL(object = PythonTimeInterpolator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeInterpolator_finalize(t_PythonTimeInterpolator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeInterpolator_pythonExtension(t_PythonTimeInterpolator *self, PyObject *args)
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

      static jdouble JNICALL t_PythonTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getExtrapolationThreshold", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getExtrapolationThreshold", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jint JNICALL t_PythonTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getNbInterpolationPoints", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getNbInterpolationPoints", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static jobject JNICALL t_PythonTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSubInterpolators", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getSubInterpolators", result);
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

      static jobject JNICALL t_PythonTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::java::util::t_Collection::wrap_Object(::java::util::Collection(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static jobject JNICALL t_PythonTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::java::util::stream::t_Stream::wrap_Object(::java::util::stream::Stream(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static void JNICALL t_PythonTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeInterpolator_get__self(t_PythonTimeInterpolator *self, void *data)
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
      static PyObject *t_PythonTimeInterpolator_get__parameters_(t_PythonTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/SinhCosh.h"
#include "org/hipparchus/util/SinhCosh.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *SinhCosh::class$ = NULL;
      jmethodID *SinhCosh::mids$ = NULL;
      bool SinhCosh::live$ = false;

      jclass SinhCosh::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/SinhCosh");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cosh_dff5885c2c873297] = env->getMethodID(cls, "cosh", "()D");
          mids$[mid_difference_7c987656902090b9] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/SinhCosh;Lorg/hipparchus/util/SinhCosh;)Lorg/hipparchus/util/SinhCosh;");
          mids$[mid_sinh_dff5885c2c873297] = env->getMethodID(cls, "sinh", "()D");
          mids$[mid_sum_7c987656902090b9] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/SinhCosh;Lorg/hipparchus/util/SinhCosh;)Lorg/hipparchus/util/SinhCosh;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble SinhCosh::cosh() const
      {
        return env->callDoubleMethod(this$, mids$[mid_cosh_dff5885c2c873297]);
      }

      SinhCosh SinhCosh::difference(const SinhCosh & a0, const SinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinhCosh(env->callStaticObjectMethod(cls, mids$[mid_difference_7c987656902090b9], a0.this$, a1.this$));
      }

      jdouble SinhCosh::sinh() const
      {
        return env->callDoubleMethod(this$, mids$[mid_sinh_dff5885c2c873297]);
      }

      SinhCosh SinhCosh::sum(const SinhCosh & a0, const SinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sum_7c987656902090b9], a0.this$, a1.this$));
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
      static PyObject *t_SinhCosh_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinhCosh_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinhCosh_cosh(t_SinhCosh *self);
      static PyObject *t_SinhCosh_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_SinhCosh_sinh(t_SinhCosh *self);
      static PyObject *t_SinhCosh_sum(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_SinhCosh__methods_[] = {
        DECLARE_METHOD(t_SinhCosh, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinhCosh, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinhCosh, cosh, METH_NOARGS),
        DECLARE_METHOD(t_SinhCosh, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SinhCosh, sinh, METH_NOARGS),
        DECLARE_METHOD(t_SinhCosh, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SinhCosh)[] = {
        { Py_tp_methods, t_SinhCosh__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SinhCosh)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SinhCosh, t_SinhCosh, SinhCosh);

      void t_SinhCosh::install(PyObject *module)
      {
        installType(&PY_TYPE(SinhCosh), &PY_TYPE_DEF(SinhCosh), module, "SinhCosh", 0);
      }

      void t_SinhCosh::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinhCosh), "class_", make_descriptor(SinhCosh::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinhCosh), "wrapfn_", make_descriptor(t_SinhCosh::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinhCosh), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SinhCosh_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SinhCosh::initializeClass, 1)))
          return NULL;
        return t_SinhCosh::wrap_Object(SinhCosh(((t_SinhCosh *) arg)->object.this$));
      }
      static PyObject *t_SinhCosh_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SinhCosh::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SinhCosh_cosh(t_SinhCosh *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.cosh());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinhCosh_difference(PyTypeObject *type, PyObject *args)
      {
        SinhCosh a0((jobject) NULL);
        SinhCosh a1((jobject) NULL);
        SinhCosh result((jobject) NULL);

        if (!parseArgs(args, "kk", SinhCosh::initializeClass, SinhCosh::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinhCosh::difference(a0, a1));
          return t_SinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_SinhCosh_sinh(t_SinhCosh *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.sinh());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinhCosh_sum(PyTypeObject *type, PyObject *args)
      {
        SinhCosh a0((jobject) NULL);
        SinhCosh a1((jobject) NULL);
        SinhCosh result((jobject) NULL);

        if (!parseArgs(args, "kk", SinhCosh::initializeClass, SinhCosh::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinhCosh::sum(a0, a1));
          return t_SinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/lang/CharSequence.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "org/orekit/time/AbsoluteDate.h"
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
          namespace generation {

            ::java::lang::Class *Generator::class$ = NULL;
            jmethodID *Generator::mids$ = NULL;
            bool Generator::live$ = false;

            jclass Generator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/Generator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
                mids$[mid_dateToCalendarString_40338d1d67048bfb] = env->getMethodID(cls, "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_40338d1d67048bfb] = env->getMethodID(cls, "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_b3e3531a0f06efb9] = env->getMethodID(cls, "dateToString", "(IIIIID)Ljava/lang/String;");
                mids$[mid_doubleToString_e8f51f84167aafbd] = env->getMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
                mids$[mid_endMessage_d0bc48d5b00dc40c] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_d0bc48d5b00dc40c] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_11b109bd155ca898] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getFormat_66298c6188053be6] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getOutputName_11b109bd155ca898] = env->getMethodID(cls, "getOutputName", "()Ljava/lang/String;");
                mids$[mid_newLine_0fa09c18fee449d5] = env->getMethodID(cls, "newLine", "()V");
                mids$[mid_siToCcsdsName_92807efd57acb082] = env->getMethodID(cls, "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_startMessage_d68f2e10a4896937] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_unitsListToString_34ebc3df083d2284] = env->getMethodID(cls, "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;");
                mids$[mid_writeComments_de3e021e7266b71e] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_ebeb70e5f85f1dc9] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V");
                mids$[mid_writeEntry_8e27d18ccaeb99ba] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;CZ)V");
                mids$[mid_writeEntry_f12777dd1821e86a] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;IZ)V");
                mids$[mid_writeEntry_d298f8af5ad811ef] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V");
                mids$[mid_writeEntry_b4657dba79ed747b] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_ddc5f91684d983c2] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_95abad989fa63d1a] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_182383f649d6a00c] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V");
                mids$[mid_writeRawData_636c0bbb96cab723] = env->getMethodID(cls, "writeRawData", "(C)V");
                mids$[mid_writeRawData_5e688138ffe60231] = env->getMethodID(cls, "writeRawData", "(Ljava/lang/CharSequence;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void Generator::close() const
            {
              env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
            }

            ::java::lang::String Generator::dateToCalendarString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToCalendarString_40338d1d67048bfb], a0.this$, a1.this$));
            }

            ::java::lang::String Generator::dateToString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_40338d1d67048bfb], a0.this$, a1.this$));
            }

            ::java::lang::String Generator::dateToString(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_b3e3531a0f06efb9], a0, a1, a2, a3, a4, a5));
            }

            ::java::lang::String Generator::doubleToString(jdouble a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_doubleToString_e8f51f84167aafbd], a0));
            }

            void Generator::endMessage(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_endMessage_d0bc48d5b00dc40c], a0.this$);
            }

            void Generator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_d0bc48d5b00dc40c], a0.this$);
            }

            ::java::lang::String Generator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_11b109bd155ca898]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat Generator::getFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFormat_66298c6188053be6]));
            }

            ::java::lang::String Generator::getOutputName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOutputName_11b109bd155ca898]));
            }

            void Generator::newLine() const
            {
              env->callVoidMethod(this$, mids$[mid_newLine_0fa09c18fee449d5]);
            }

            ::java::lang::String Generator::siToCcsdsName(const ::java::lang::String & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_siToCcsdsName_92807efd57acb082], a0.this$));
            }

            void Generator::startMessage(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_startMessage_d68f2e10a4896937], a0.this$, a1.this$, a2);
            }

            ::java::lang::String Generator::unitsListToString(const ::java::util::List & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_unitsListToString_34ebc3df083d2284], a0.this$));
            }

            void Generator::writeComments(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeComments_de3e021e7266b71e], a0.this$);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Enum & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_ebeb70e5f85f1dc9], a0.this$, a1.this$, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, jchar a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_8e27d18ccaeb99ba], a0.this$, a1, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, jint a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_f12777dd1821e86a], a0.this$, a1, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::util::List & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_d298f8af5ad811ef], a0.this$, a1.this$, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Double & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_b4657dba79ed747b], a0.this$, a1.this$, a2.this$, a3);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_ddc5f91684d983c2], a0.this$, a1.this$, a2.this$, a3);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_95abad989fa63d1a], a0.this$, a1, a2.this$, a3);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::TimeConverter & a1, const ::org::orekit::time::AbsoluteDate & a2, jboolean a3, jboolean a4) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_182383f649d6a00c], a0.this$, a1.this$, a2.this$, a3, a4);
            }

            void Generator::writeRawData(jchar a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_636c0bbb96cab723], a0);
            }

            void Generator::writeRawData(const ::java::lang::CharSequence & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_5e688138ffe60231], a0.this$);
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
          namespace generation {
            static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Generator_close(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_dateToCalendarString(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_dateToString(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_doubleToString(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_endMessage(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_enterSection(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_exitSection(t_Generator *self);
            static PyObject *t_Generator_getFormat(t_Generator *self);
            static PyObject *t_Generator_getOutputName(t_Generator *self);
            static PyObject *t_Generator_newLine(t_Generator *self);
            static PyObject *t_Generator_siToCcsdsName(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_startMessage(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_unitsListToString(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_writeComments(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_writeEntry(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_writeRawData(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_get__format(t_Generator *self, void *data);
            static PyObject *t_Generator_get__outputName(t_Generator *self, void *data);
            static PyGetSetDef t_Generator__fields_[] = {
              DECLARE_GET_FIELD(t_Generator, format),
              DECLARE_GET_FIELD(t_Generator, outputName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Generator__methods_[] = {
              DECLARE_METHOD(t_Generator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Generator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Generator, close, METH_VARARGS),
              DECLARE_METHOD(t_Generator, dateToCalendarString, METH_VARARGS),
              DECLARE_METHOD(t_Generator, dateToString, METH_VARARGS),
              DECLARE_METHOD(t_Generator, doubleToString, METH_O),
              DECLARE_METHOD(t_Generator, endMessage, METH_O),
              DECLARE_METHOD(t_Generator, enterSection, METH_O),
              DECLARE_METHOD(t_Generator, exitSection, METH_NOARGS),
              DECLARE_METHOD(t_Generator, getFormat, METH_NOARGS),
              DECLARE_METHOD(t_Generator, getOutputName, METH_NOARGS),
              DECLARE_METHOD(t_Generator, newLine, METH_NOARGS),
              DECLARE_METHOD(t_Generator, siToCcsdsName, METH_O),
              DECLARE_METHOD(t_Generator, startMessage, METH_VARARGS),
              DECLARE_METHOD(t_Generator, unitsListToString, METH_O),
              DECLARE_METHOD(t_Generator, writeComments, METH_O),
              DECLARE_METHOD(t_Generator, writeEntry, METH_VARARGS),
              DECLARE_METHOD(t_Generator, writeRawData, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Generator)[] = {
              { Py_tp_methods, t_Generator__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_Generator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Generator)[] = {
              &PY_TYPE_DEF(::java::lang::AutoCloseable),
              NULL
            };

            DEFINE_TYPE(Generator, t_Generator, Generator);

            void t_Generator::install(PyObject *module)
            {
              installType(&PY_TYPE(Generator), &PY_TYPE_DEF(Generator), module, "Generator", 0);
            }

            void t_Generator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "class_", make_descriptor(Generator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "wrapfn_", make_descriptor(t_Generator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Generator::initializeClass, 1)))
                return NULL;
              return t_Generator::wrap_Object(Generator(((t_Generator *) arg)->object.this$));
            }
            static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Generator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Generator_close(t_Generator *self, PyObject *args)
            {

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(Generator), (PyObject *) self, "close", args, 2);
            }

            static PyObject *t_Generator_dateToCalendarString(t_Generator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.dateToCalendarString(a0, a1));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "dateToCalendarString", args);
              return NULL;
            }

            static PyObject *t_Generator_dateToString(t_Generator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1));
                    return j2p(result);
                  }
                }
                break;
               case 6:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1, a2, a3, a4, a5));
                    return j2p(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "dateToString", args);
              return NULL;
            }

            static PyObject *t_Generator_doubleToString(t_Generator *self, PyObject *arg)
            {
              jdouble a0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.doubleToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "doubleToString", arg);
              return NULL;
            }

            static PyObject *t_Generator_endMessage(t_Generator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.endMessage(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "endMessage", arg);
              return NULL;
            }

            static PyObject *t_Generator_enterSection(t_Generator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "enterSection", arg);
              return NULL;
            }

            static PyObject *t_Generator_exitSection(t_Generator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.exitSection());
              return j2p(result);
            }

            static PyObject *t_Generator_getFormat(t_Generator *self)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
            }

            static PyObject *t_Generator_getOutputName(t_Generator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOutputName());
              return j2p(result);
            }

            static PyObject *t_Generator_newLine(t_Generator *self)
            {
              OBJ_CALL(self->object.newLine());
              Py_RETURN_NONE;
            }

            static PyObject *t_Generator_siToCcsdsName(t_Generator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = self->object.siToCcsdsName(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "siToCcsdsName", arg);
              return NULL;
            }

            static PyObject *t_Generator_startMessage(t_Generator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;

              if (!parseArgs(args, "ssD", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.startMessage(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "startMessage", args);
              return NULL;
            }

            static PyObject *t_Generator_unitsListToString(t_Generator *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.unitsListToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "unitsListToString", arg);
              return NULL;
            }

            static PyObject *t_Generator_writeComments(t_Generator *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.writeComments(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeComments", arg);
              return NULL;
            }

            static PyObject *t_Generator_writeEntry(t_Generator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Enum a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jchar a1;
                  jboolean a2;

                  if (!parseArgs(args, "sCZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jint a1;
                  jboolean a2;

                  if (!parseArgs(args, "sIZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::util::List a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Double a1((jobject) NULL);
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sOkZ", ::java::lang::PY_TYPE(Double), ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::String a1((jobject) NULL);
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sskZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sDkZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 5:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::files::ccsds::definitions::TimeConverter a1((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                  jboolean a3;
                  jboolean a4;

                  if (!parseArgs(args, "skkZZ", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3, a4));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeEntry", args);
              return NULL;
            }

            static PyObject *t_Generator_writeRawData(t_Generator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jchar a0;

                  if (!parseArgs(args, "C", &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::CharSequence a0((jobject) NULL);

                  if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeRawData", args);
              return NULL;
            }

            static PyObject *t_Generator_get__format(t_Generator *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static PyObject *t_Generator_get__outputName(t_Generator *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOutputName());
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1060.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1060::class$ = NULL;
              jmethodID *Rtcm1060::mids$ = NULL;
              bool Rtcm1060::live$ = false;

              jclass Rtcm1060::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1060");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c862bfeb63a17bd5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1060::Rtcm1060(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_c862bfeb63a17bd5, a0, a1.this$, a2.this$)) {}
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
          namespace rtcm {
            namespace correction {
              static PyObject *t_Rtcm1060_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1060_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1060_of_(t_Rtcm1060 *self, PyObject *args);
              static int t_Rtcm1060_init_(t_Rtcm1060 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1060_get__parameters_(t_Rtcm1060 *self, void *data);
              static PyGetSetDef t_Rtcm1060__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1060, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1060__methods_[] = {
                DECLARE_METHOD(t_Rtcm1060, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1060, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1060, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1060)[] = {
                { Py_tp_methods, t_Rtcm1060__methods_ },
                { Py_tp_init, (void *) t_Rtcm1060_init_ },
                { Py_tp_getset, t_Rtcm1060__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1060)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1060, t_Rtcm1060, Rtcm1060);
              PyObject *t_Rtcm1060::wrap_Object(const Rtcm1060& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1060::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1060 *self = (t_Rtcm1060 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1060::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1060::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1060 *self = (t_Rtcm1060 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1060::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1060), &PY_TYPE_DEF(Rtcm1060), module, "Rtcm1060", 0);
              }

              void t_Rtcm1060::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1060), "class_", make_descriptor(Rtcm1060::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1060), "wrapfn_", make_descriptor(t_Rtcm1060::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1060), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1060_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1060::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1060::wrap_Object(Rtcm1060(((t_Rtcm1060 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1060_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1060::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1060_of_(t_Rtcm1060 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1060_init_(t_Rtcm1060 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1060 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1060(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCombinedCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1060_get__parameters_(t_Rtcm1060 *self, void *data)
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
#include "org/orekit/propagation/conversion/PythonFieldODEIntegratorBuilder.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonFieldODEIntegratorBuilder::class$ = NULL;
        jmethodID *PythonFieldODEIntegratorBuilder::mids$ = NULL;
        bool PythonFieldODEIntegratorBuilder::live$ = false;

        jclass PythonFieldODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonFieldODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildIntegrator_c6b1aa22e8585e91] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_buildIntegrator_048f7039a7622a2b] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldODEIntegratorBuilder::PythonFieldODEIntegratorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonFieldODEIntegratorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonFieldODEIntegratorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonFieldODEIntegratorBuilder::pythonExtension(jlong a0) const
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
      namespace conversion {
        static PyObject *t_PythonFieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldODEIntegratorBuilder_of_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args);
        static int t_PythonFieldODEIntegratorBuilder_init_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldODEIntegratorBuilder_finalize(t_PythonFieldODEIntegratorBuilder *self);
        static PyObject *t_PythonFieldODEIntegratorBuilder_pythonExtension(t_PythonFieldODEIntegratorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldODEIntegratorBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldODEIntegratorBuilder_get__self(t_PythonFieldODEIntegratorBuilder *self, void *data);
        static PyObject *t_PythonFieldODEIntegratorBuilder_get__parameters_(t_PythonFieldODEIntegratorBuilder *self, void *data);
        static PyGetSetDef t_PythonFieldODEIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldODEIntegratorBuilder, self),
          DECLARE_GET_FIELD(t_PythonFieldODEIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_PythonFieldODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonFieldODEIntegratorBuilder_init_ },
          { Py_tp_getset, t_PythonFieldODEIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldODEIntegratorBuilder, t_PythonFieldODEIntegratorBuilder, PythonFieldODEIntegratorBuilder);
        PyObject *t_PythonFieldODEIntegratorBuilder::wrap_Object(const PythonFieldODEIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldODEIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldODEIntegratorBuilder *self = (t_PythonFieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldODEIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldODEIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldODEIntegratorBuilder *self = (t_PythonFieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldODEIntegratorBuilder), &PY_TYPE_DEF(PythonFieldODEIntegratorBuilder), module, "PythonFieldODEIntegratorBuilder", 1);
        }

        void t_PythonFieldODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldODEIntegratorBuilder), "class_", make_descriptor(PythonFieldODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldODEIntegratorBuilder), "wrapfn_", make_descriptor(t_PythonFieldODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldODEIntegratorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;", (void *) t_PythonFieldODEIntegratorBuilder_buildIntegrator0 },
            { "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;", (void *) t_PythonFieldODEIntegratorBuilder_buildIntegrator1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldODEIntegratorBuilder_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonFieldODEIntegratorBuilder::wrap_Object(PythonFieldODEIntegratorBuilder(((t_PythonFieldODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_of_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldODEIntegratorBuilder_init_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldODEIntegratorBuilder object((jobject) NULL);

          INT_CALL(object = PythonFieldODEIntegratorBuilder());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_finalize(t_PythonFieldODEIntegratorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_pythonExtension(t_PythonFieldODEIntegratorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::ode::AbstractFieldIntegrator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a0));
          PyObject *o1 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a1));
          PyObject *result = PyObject_CallMethod(obj, "buildIntegrator", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::ode::AbstractFieldIntegrator::initializeClass, &value))
          {
            throwTypeError("buildIntegrator", result);
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

        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::ode::AbstractFieldIntegrator value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *o1 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a1));
          PyObject *o2 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a2));
          PyObject *result = PyObject_CallMethod(obj, "buildIntegrator", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::ode::AbstractFieldIntegrator::initializeClass, &value))
          {
            throwTypeError("buildIntegrator", result);
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

        static void JNICALL t_PythonFieldODEIntegratorBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_get__self(t_PythonFieldODEIntegratorBuilder *self, void *data)
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
        static PyObject *t_PythonFieldODEIntegratorBuilder_get__parameters_(t_PythonFieldODEIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *AbstractNavigationMessage::class$ = NULL;
            jmethodID *AbstractNavigationMessage::mids$ = NULL;
            bool AbstractNavigationMessage::live$ = false;

            jclass AbstractNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_01fb2c777e5def32] = env->getMethodID(cls, "<init>", "(DDI)V");
                mids$[mid_getAf2_dff5885c2c873297] = env->getMethodID(cls, "getAf2", "()D");
                mids$[mid_getCic_dff5885c2c873297] = env->getMethodID(cls, "getCic", "()D");
                mids$[mid_getCis_dff5885c2c873297] = env->getMethodID(cls, "getCis", "()D");
                mids$[mid_getCrc_dff5885c2c873297] = env->getMethodID(cls, "getCrc", "()D");
                mids$[mid_getCrs_dff5885c2c873297] = env->getMethodID(cls, "getCrs", "()D");
                mids$[mid_getCuc_dff5885c2c873297] = env->getMethodID(cls, "getCuc", "()D");
                mids$[mid_getCus_dff5885c2c873297] = env->getMethodID(cls, "getCus", "()D");
                mids$[mid_getDeltaN_dff5885c2c873297] = env->getMethodID(cls, "getDeltaN", "()D");
                mids$[mid_getEpochToc_85703d13e302437e] = env->getMethodID(cls, "getEpochToc", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getIDot_dff5885c2c873297] = env->getMethodID(cls, "getIDot", "()D");
                mids$[mid_getMeanMotion_dff5885c2c873297] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getSqrtA_dff5885c2c873297] = env->getMethodID(cls, "getSqrtA", "()D");
                mids$[mid_getTransmissionTime_dff5885c2c873297] = env->getMethodID(cls, "getTransmissionTime", "()D");
                mids$[mid_setAf2_17db3a65980d3441] = env->getMethodID(cls, "setAf2", "(D)V");
                mids$[mid_setCic_17db3a65980d3441] = env->getMethodID(cls, "setCic", "(D)V");
                mids$[mid_setCis_17db3a65980d3441] = env->getMethodID(cls, "setCis", "(D)V");
                mids$[mid_setCrc_17db3a65980d3441] = env->getMethodID(cls, "setCrc", "(D)V");
                mids$[mid_setCrs_17db3a65980d3441] = env->getMethodID(cls, "setCrs", "(D)V");
                mids$[mid_setCuc_17db3a65980d3441] = env->getMethodID(cls, "setCuc", "(D)V");
                mids$[mid_setCus_17db3a65980d3441] = env->getMethodID(cls, "setCus", "(D)V");
                mids$[mid_setDeltaN_17db3a65980d3441] = env->getMethodID(cls, "setDeltaN", "(D)V");
                mids$[mid_setEpochToc_600a2a61652bc473] = env->getMethodID(cls, "setEpochToc", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setIDot_17db3a65980d3441] = env->getMethodID(cls, "setIDot", "(D)V");
                mids$[mid_setSqrtA_17db3a65980d3441] = env->getMethodID(cls, "setSqrtA", "(D)V");
                mids$[mid_setTransmissionTime_17db3a65980d3441] = env->getMethodID(cls, "setTransmissionTime", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractNavigationMessage::AbstractNavigationMessage(jdouble a0, jdouble a1, jint a2) : ::org::orekit::propagation::analytical::gnss::data::CommonGnssData(env->newObject(initializeClass, &mids$, mid_init$_01fb2c777e5def32, a0, a1, a2)) {}

            jdouble AbstractNavigationMessage::getAf2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf2_dff5885c2c873297]);
            }

            jdouble AbstractNavigationMessage::getCic() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCic_dff5885c2c873297]);
            }

            jdouble AbstractNavigationMessage::getCis() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCis_dff5885c2c873297]);
            }

            jdouble AbstractNavigationMessage::getCrc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrc_dff5885c2c873297]);
            }

            jdouble AbstractNavigationMessage::getCrs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrs_dff5885c2c873297]);
            }

            jdouble AbstractNavigationMessage::getCuc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCuc_dff5885c2c873297]);
            }

            jdouble AbstractNavigationMessage::getCus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCus_dff5885c2c873297]);
            }

            jdouble AbstractNavigationMessage::getDeltaN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaN_dff5885c2c873297]);
            }

            ::org::orekit::time::AbsoluteDate AbstractNavigationMessage::getEpochToc() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochToc_85703d13e302437e]));
            }

            jdouble AbstractNavigationMessage::getIDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIDot_dff5885c2c873297]);
            }

            jdouble AbstractNavigationMessage::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_dff5885c2c873297]);
            }

            jdouble AbstractNavigationMessage::getSqrtA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSqrtA_dff5885c2c873297]);
            }

            jdouble AbstractNavigationMessage::getTransmissionTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTransmissionTime_dff5885c2c873297]);
            }

            void AbstractNavigationMessage::setAf2(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAf2_17db3a65980d3441], a0);
            }

            void AbstractNavigationMessage::setCic(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCic_17db3a65980d3441], a0);
            }

            void AbstractNavigationMessage::setCis(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCis_17db3a65980d3441], a0);
            }

            void AbstractNavigationMessage::setCrc(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrc_17db3a65980d3441], a0);
            }

            void AbstractNavigationMessage::setCrs(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrs_17db3a65980d3441], a0);
            }

            void AbstractNavigationMessage::setCuc(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCuc_17db3a65980d3441], a0);
            }

            void AbstractNavigationMessage::setCus(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCus_17db3a65980d3441], a0);
            }

            void AbstractNavigationMessage::setDeltaN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaN_17db3a65980d3441], a0);
            }

            void AbstractNavigationMessage::setEpochToc(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpochToc_600a2a61652bc473], a0.this$);
            }

            void AbstractNavigationMessage::setIDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIDot_17db3a65980d3441], a0);
            }

            void AbstractNavigationMessage::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_17db3a65980d3441], a0);
            }

            void AbstractNavigationMessage::setTransmissionTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTransmissionTime_17db3a65980d3441], a0);
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
            static PyObject *t_AbstractNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractNavigationMessage_init_(t_AbstractNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractNavigationMessage_getAf2(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCic(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCis(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCrc(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCrs(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCuc(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCus(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getDeltaN(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getEpochToc(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getIDot(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getMeanMotion(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getSqrtA(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getTransmissionTime(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_setAf2(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCic(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCis(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCrc(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCrs(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCuc(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCus(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setDeltaN(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setEpochToc(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setIDot(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setSqrtA(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setTransmissionTime(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_get__af2(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__af2(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cic(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cic(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cis(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cis(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__crc(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__crc(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__crs(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__crs(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cuc(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cuc(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cus(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cus(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__deltaN(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__deltaN(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__epochToc(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__epochToc(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__iDot(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__iDot(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__meanMotion(t_AbstractNavigationMessage *self, void *data);
            static PyObject *t_AbstractNavigationMessage_get__sqrtA(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__sqrtA(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__transmissionTime(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__transmissionTime(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_AbstractNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, af2),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cic),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cis),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, crc),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, crs),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cuc),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cus),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, deltaN),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, epochToc),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, iDot),
              DECLARE_GET_FIELD(t_AbstractNavigationMessage, meanMotion),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, sqrtA),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, transmissionTime),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_AbstractNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getAf2, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCic, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCis, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCrc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCrs, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCuc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCus, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getDeltaN, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getEpochToc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getIDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getSqrtA, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getTransmissionTime, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, setAf2, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCic, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCis, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCrc, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCrs, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCuc, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCus, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setDeltaN, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setEpochToc, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setIDot, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setSqrtA, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setTransmissionTime, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractNavigationMessage)[] = {
              { Py_tp_methods, t_AbstractNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_AbstractNavigationMessage_init_ },
              { Py_tp_getset, t_AbstractNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CommonGnssData),
              NULL
            };

            DEFINE_TYPE(AbstractNavigationMessage, t_AbstractNavigationMessage, AbstractNavigationMessage);

            void t_AbstractNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractNavigationMessage), &PY_TYPE_DEF(AbstractNavigationMessage), module, "AbstractNavigationMessage", 0);
            }

            void t_AbstractNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractNavigationMessage), "class_", make_descriptor(AbstractNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractNavigationMessage), "wrapfn_", make_descriptor(t_AbstractNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_AbstractNavigationMessage::wrap_Object(AbstractNavigationMessage(((t_AbstractNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_AbstractNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractNavigationMessage_init_(t_AbstractNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              AbstractNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = AbstractNavigationMessage(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractNavigationMessage_getAf2(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCic(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCic());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCis(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCis());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCrc(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCrs(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCuc(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCuc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCus(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getDeltaN(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getEpochToc(t_AbstractNavigationMessage *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractNavigationMessage_getIDot(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getMeanMotion(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getSqrtA(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSqrtA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getTransmissionTime(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTransmissionTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_setAf2(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAf2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAf2", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCic(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCic(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCic", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCis(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCis(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCis", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCrc(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrc", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCrs(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrs(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrs", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCuc(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCuc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCuc", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCus(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCus(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCus", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setDeltaN(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaN", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setEpochToc(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpochToc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpochToc", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setIDot(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setSqrtA(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setTransmissionTime(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTransmissionTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTransmissionTime", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_get__af2(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf2());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__af2(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAf2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "af2", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cic(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCic());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cic(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCic(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cic", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cis(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCis());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cis(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCis(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cis", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__crc(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrc());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__crc(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crc", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__crs(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrs());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__crs(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrs(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crs", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cuc(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCuc());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cuc(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCuc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cuc", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cus(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCus());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cus(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCus(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cus", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__deltaN(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaN());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__deltaN(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaN", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__epochToc(t_AbstractNavigationMessage *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractNavigationMessage_set__epochToc(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpochToc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epochToc", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__iDot(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__iDot(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iDot", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__meanMotion(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractNavigationMessage_get__sqrtA(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSqrtA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__sqrtA(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__transmissionTime(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTransmissionTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__transmissionTime(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTransmissionTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "transmissionTime", arg);
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
#include "java/io/Writer.h"
#include "java/io/IOException.h"
#include "java/io/Flushable.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Appendable.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "java/io/Writer.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Writer::class$ = NULL;
    jmethodID *Writer::mids$ = NULL;
    bool Writer::live$ = false;

    jclass Writer::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Writer");

        mids$ = new jmethodID[max_mid];
        mids$[mid_append_eb0d0a46d5f171c4] = env->getMethodID(cls, "append", "(C)Ljava/io/Writer;");
        mids$[mid_append_40d8b2381ff5cb27] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/Writer;");
        mids$[mid_append_f781e8360c490bf8] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/Writer;");
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_0fa09c18fee449d5] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_nullWriter_4d6b86ab781296cb] = env->getStaticMethodID(cls, "nullWriter", "()Ljava/io/Writer;");
        mids$[mid_write_3534e8e092c162a5] = env->getMethodID(cls, "write", "([C)V");
        mids$[mid_write_d0bc48d5b00dc40c] = env->getMethodID(cls, "write", "(Ljava/lang/String;)V");
        mids$[mid_write_99803b0791f320ff] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_44aecef33af91018] = env->getMethodID(cls, "write", "([CII)V");
        mids$[mid_write_04eb5531e9227c93] = env->getMethodID(cls, "write", "(Ljava/lang/String;II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Writer Writer::append(jchar a0) const
    {
      return Writer(env->callObjectMethod(this$, mids$[mid_append_eb0d0a46d5f171c4], a0));
    }

    Writer Writer::append(const ::java::lang::CharSequence & a0) const
    {
      return Writer(env->callObjectMethod(this$, mids$[mid_append_40d8b2381ff5cb27], a0.this$));
    }

    Writer Writer::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return Writer(env->callObjectMethod(this$, mids$[mid_append_f781e8360c490bf8], a0.this$, a1, a2));
    }

    void Writer::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    void Writer::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0fa09c18fee449d5]);
    }

    Writer Writer::nullWriter()
    {
      jclass cls = env->getClass(initializeClass);
      return Writer(env->callStaticObjectMethod(cls, mids$[mid_nullWriter_4d6b86ab781296cb]));
    }

    void Writer::write(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_3534e8e092c162a5], a0.this$);
    }

    void Writer::write(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d0bc48d5b00dc40c], a0.this$);
    }

    void Writer::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_99803b0791f320ff], a0);
    }

    void Writer::write(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_44aecef33af91018], a0.this$, a1, a2);
    }

    void Writer::write(const ::java::lang::String & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_04eb5531e9227c93], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Writer_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Writer_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Writer_append(t_Writer *self, PyObject *args);
    static PyObject *t_Writer_close(t_Writer *self);
    static PyObject *t_Writer_flush(t_Writer *self);
    static PyObject *t_Writer_nullWriter(PyTypeObject *type);
    static PyObject *t_Writer_write(t_Writer *self, PyObject *args);

    static PyMethodDef t_Writer__methods_[] = {
      DECLARE_METHOD(t_Writer, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Writer, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Writer, append, METH_VARARGS),
      DECLARE_METHOD(t_Writer, close, METH_NOARGS),
      DECLARE_METHOD(t_Writer, flush, METH_NOARGS),
      DECLARE_METHOD(t_Writer, nullWriter, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Writer, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Writer)[] = {
      { Py_tp_methods, t_Writer__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Writer)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Writer, t_Writer, Writer);

    void t_Writer::install(PyObject *module)
    {
      installType(&PY_TYPE(Writer), &PY_TYPE_DEF(Writer), module, "Writer", 0);
    }

    void t_Writer::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Writer), "class_", make_descriptor(Writer::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Writer), "wrapfn_", make_descriptor(t_Writer::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Writer), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Writer_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Writer::initializeClass, 1)))
        return NULL;
      return t_Writer::wrap_Object(Writer(((t_Writer *) arg)->object.this$));
    }
    static PyObject *t_Writer_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Writer::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Writer_append(t_Writer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          Writer result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_Writer::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          Writer result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_Writer::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          Writer result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_Writer::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "append", args);
      return NULL;
    }

    static PyObject *t_Writer_close(t_Writer *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_Writer_flush(t_Writer *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_Writer_nullWriter(PyTypeObject *type)
    {
      Writer result((jobject) NULL);
      OBJ_CALL(result = ::java::io::Writer::nullWriter());
      return t_Writer::wrap_Object(result);
    }

    static PyObject *t_Writer_write(t_Writer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "write", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitStepInterpolator::class$ = NULL;
        jmethodID *OrekitStepInterpolator::mids$ = NULL;
        bool OrekitStepInterpolator::live$ = false;

        jclass OrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_c6311115fea01a34] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getInterpolatedState_fbff2ff5554d95e1] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getPreviousState_c6311115fea01a34] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_isCurrentStateInterpolated_b108b35ef48e27bd] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_b108b35ef48e27bd] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_b108b35ef48e27bd] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_restrictStep_470f776a59a8cb6f] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/sampling/OrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::SpacecraftState OrekitStepInterpolator::getCurrentState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getCurrentState_c6311115fea01a34]));
        }

        ::org::orekit::propagation::SpacecraftState OrekitStepInterpolator::getInterpolatedState(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_fbff2ff5554d95e1], a0.this$));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates OrekitStepInterpolator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cfeec55f7c63ec64], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::SpacecraftState OrekitStepInterpolator::getPreviousState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getPreviousState_c6311115fea01a34]));
        }

        jboolean OrekitStepInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_b108b35ef48e27bd]);
        }

        jboolean OrekitStepInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_b108b35ef48e27bd]);
        }

        jboolean OrekitStepInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_b108b35ef48e27bd]);
        }

        OrekitStepInterpolator OrekitStepInterpolator::restrictStep(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return OrekitStepInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_470f776a59a8cb6f], a0.this$, a1.this$));
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
        static PyObject *t_OrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepInterpolator_getCurrentState(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_getInterpolatedState(t_OrekitStepInterpolator *self, PyObject *arg);
        static PyObject *t_OrekitStepInterpolator_getPVCoordinates(t_OrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_OrekitStepInterpolator_getPreviousState(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_isCurrentStateInterpolated(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_isForward(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_isPreviousStateInterpolated(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_restrictStep(t_OrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_OrekitStepInterpolator_get__currentState(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__currentStateInterpolated(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__forward(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__previousState(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__previousStateInterpolated(t_OrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_OrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, currentState),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, forward),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, previousState),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, previousStateInterpolated),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_OrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_OrekitStepInterpolator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitStepInterpolator)[] = {
          { Py_tp_methods, t_OrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_OrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::PVCoordinatesProvider),
          NULL
        };

        DEFINE_TYPE(OrekitStepInterpolator, t_OrekitStepInterpolator, OrekitStepInterpolator);

        void t_OrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitStepInterpolator), &PY_TYPE_DEF(OrekitStepInterpolator), module, "OrekitStepInterpolator", 0);
        }

        void t_OrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepInterpolator), "class_", make_descriptor(OrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepInterpolator), "wrapfn_", make_descriptor(t_OrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_OrekitStepInterpolator::wrap_Object(OrekitStepInterpolator(((t_OrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_OrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OrekitStepInterpolator_getCurrentState(t_OrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_OrekitStepInterpolator_getInterpolatedState(t_OrekitStepInterpolator *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepInterpolator_getPVCoordinates(t_OrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(OrekitStepInterpolator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_OrekitStepInterpolator_getPreviousState(t_OrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_OrekitStepInterpolator_isCurrentStateInterpolated(t_OrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OrekitStepInterpolator_isForward(t_OrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OrekitStepInterpolator_isPreviousStateInterpolated(t_OrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OrekitStepInterpolator_restrictStep(t_OrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          OrekitStepInterpolator result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_OrekitStepInterpolator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }

        static PyObject *t_OrekitStepInterpolator_get__currentState(t_OrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__currentStateInterpolated(t_OrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__forward(t_OrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__previousState(t_OrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__previousStateInterpolated(t_OrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonAbstractTimeScales.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/TCGScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonAbstractTimeScales::class$ = NULL;
      jmethodID *PythonAbstractTimeScales::mids$ = NULL;
      bool PythonAbstractTimeScales::live$ = false;

      jclass PythonAbstractTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonAbstractTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBDT_fc0e10255fdb9359] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getEopHistory_f7b9f8d7c24d861d] = env->getMethodID(cls, "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getGLONASS_2b4079449103a541] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGPS_9e1c13089038a5fa] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_0569916ae20da9e6] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getIRNSS_acc0c9657c1b3fab] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getQZSS_b61358961d42527b] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getTAI_542013db907f5b2d] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_a36a736c24a84bc8] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_bc03267fa6cc0068] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_01a9b50b4c9899e0] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_1cee2d27f65b3e44] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_9806ff584bac5289] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_4611f4f4ac7b3711] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractTimeScales::PythonAbstractTimeScales() : ::org::orekit::time::AbstractTimeScales(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonAbstractTimeScales::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      ::org::orekit::time::UT1Scale PythonAbstractTimeScales::getUT1(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_9806ff584bac5289], a0.this$));
      }

      jlong PythonAbstractTimeScales::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonAbstractTimeScales::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonAbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractTimeScales_init_(t_PythonAbstractTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractTimeScales_finalize(t_PythonAbstractTimeScales *self);
      static PyObject *t_PythonAbstractTimeScales_getUT1(t_PythonAbstractTimeScales *self, PyObject *args);
      static PyObject *t_PythonAbstractTimeScales_pythonExtension(t_PythonAbstractTimeScales *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractTimeScales_getBDT0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getEopHistory1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonAbstractTimeScales_getGLONASS2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getGPS3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getGST4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getIRNSS5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getQZSS6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTAI7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTCB8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTCG9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTDB10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTT11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getUTC12(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAbstractTimeScales_pythonDecRef13(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractTimeScales_get__self(t_PythonAbstractTimeScales *self, void *data);
      static PyGetSetDef t_PythonAbstractTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractTimeScales, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractTimeScales__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, getUT1, METH_VARARGS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractTimeScales)[] = {
        { Py_tp_methods, t_PythonAbstractTimeScales__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractTimeScales_init_ },
        { Py_tp_getset, t_PythonAbstractTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractTimeScales)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeScales),
        NULL
      };

      DEFINE_TYPE(PythonAbstractTimeScales, t_PythonAbstractTimeScales, PythonAbstractTimeScales);

      void t_PythonAbstractTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractTimeScales), &PY_TYPE_DEF(PythonAbstractTimeScales), module, "PythonAbstractTimeScales", 1);
      }

      void t_PythonAbstractTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractTimeScales), "class_", make_descriptor(PythonAbstractTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractTimeScales), "wrapfn_", make_descriptor(t_PythonAbstractTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractTimeScales), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractTimeScales::initializeClass);
        JNINativeMethod methods[] = {
          { "getBDT", "()Lorg/orekit/time/BDTScale;", (void *) t_PythonAbstractTimeScales_getBDT0 },
          { "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;", (void *) t_PythonAbstractTimeScales_getEopHistory1 },
          { "getGLONASS", "()Lorg/orekit/time/GLONASSScale;", (void *) t_PythonAbstractTimeScales_getGLONASS2 },
          { "getGPS", "()Lorg/orekit/time/GPSScale;", (void *) t_PythonAbstractTimeScales_getGPS3 },
          { "getGST", "()Lorg/orekit/time/GalileoScale;", (void *) t_PythonAbstractTimeScales_getGST4 },
          { "getIRNSS", "()Lorg/orekit/time/IRNSSScale;", (void *) t_PythonAbstractTimeScales_getIRNSS5 },
          { "getQZSS", "()Lorg/orekit/time/QZSSScale;", (void *) t_PythonAbstractTimeScales_getQZSS6 },
          { "getTAI", "()Lorg/orekit/time/TAIScale;", (void *) t_PythonAbstractTimeScales_getTAI7 },
          { "getTCB", "()Lorg/orekit/time/TCBScale;", (void *) t_PythonAbstractTimeScales_getTCB8 },
          { "getTCG", "()Lorg/orekit/time/TCGScale;", (void *) t_PythonAbstractTimeScales_getTCG9 },
          { "getTDB", "()Lorg/orekit/time/TDBScale;", (void *) t_PythonAbstractTimeScales_getTDB10 },
          { "getTT", "()Lorg/orekit/time/TTScale;", (void *) t_PythonAbstractTimeScales_getTT11 },
          { "getUTC", "()Lorg/orekit/time/UTCScale;", (void *) t_PythonAbstractTimeScales_getUTC12 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractTimeScales_pythonDecRef13 },
        };
        env->registerNatives(cls, methods, 14);
      }

      static PyObject *t_PythonAbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractTimeScales::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractTimeScales::wrap_Object(PythonAbstractTimeScales(((t_PythonAbstractTimeScales *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractTimeScales_init_(t_PythonAbstractTimeScales *self, PyObject *args, PyObject *kwds)
      {
        PythonAbstractTimeScales object((jobject) NULL);

        INT_CALL(object = PythonAbstractTimeScales());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractTimeScales_finalize(t_PythonAbstractTimeScales *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractTimeScales_getUT1(t_PythonAbstractTimeScales *self, PyObject *args)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::UT1Scale result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getUT1(a0));
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(PythonAbstractTimeScales), (PyObject *) self, "getUT1", args, 2);
      }

      static PyObject *t_PythonAbstractTimeScales_pythonExtension(t_PythonAbstractTimeScales *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractTimeScales_getBDT0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getEopHistory1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getEopHistory", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEopHistory", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getGLONASS2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getGPS3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getGST4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getIRNSS5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getQZSS6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTAI7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTCB8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTCG9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTDB10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTT11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getUTC12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_492808a339bfa35f]);
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

      static void JNICALL t_PythonAbstractTimeScales_pythonDecRef13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractTimeScales_get__self(t_PythonAbstractTimeScales *self, void *data)
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
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedMeasurement::class$ = NULL;
        jmethodID *EstimatedMeasurement::mids$ = NULL;
        bool EstimatedMeasurement::live$ = false;

        jclass EstimatedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d1c2fb63ea99e1e6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;II[Lorg/orekit/propagation/SpacecraftState;[Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
            mids$[mid_getDerivativesDrivers_20f6d2b462aaef4b] = env->getMethodID(cls, "getDerivativesDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_getParameterDerivatives_5386fd8e2da103f7] = env->getMethodID(cls, "getParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;)[D");
            mids$[mid_getParameterDerivatives_3a00431c3e905a8f] = env->getMethodID(cls, "getParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)[D");
            mids$[mid_getStateDerivatives_d3e8f395184a4338] = env->getMethodID(cls, "getStateDerivatives", "(I)[[D");
            mids$[mid_getStateSize_570ce0828f81a2c1] = env->getMethodID(cls, "getStateSize", "()I");
            mids$[mid_setParameterDerivatives_ff7a5e31add3f53c] = env->getMethodID(cls, "setParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/utils/TimeSpanMap;)V");
            mids$[mid_setParameterDerivatives_39ef7d36cf7f5331] = env->getMethodID(cls, "setParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;[D)V");
            mids$[mid_setStateDerivatives_3ca2bf5de9b54389] = env->getMethodID(cls, "setStateDerivatives", "(I[[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedMeasurement::EstimatedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, jint a1, jint a2, const JArray< ::org::orekit::propagation::SpacecraftState > & a3, const JArray< ::org::orekit::utils::TimeStampedPVCoordinates > & a4) : ::org::orekit::estimation::measurements::EstimatedMeasurementBase(env->newObject(initializeClass, &mids$, mid_init$_d1c2fb63ea99e1e6, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        ::java::util::stream::Stream EstimatedMeasurement::getDerivativesDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getDerivativesDrivers_20f6d2b462aaef4b]));
        }

        JArray< jdouble > EstimatedMeasurement::getParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameterDerivatives_5386fd8e2da103f7], a0.this$));
        }

        JArray< jdouble > EstimatedMeasurement::getParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameterDerivatives_3a00431c3e905a8f], a0.this$, a1.this$));
        }

        JArray< JArray< jdouble > > EstimatedMeasurement::getStateDerivatives(jint a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getStateDerivatives_d3e8f395184a4338], a0));
        }

        jint EstimatedMeasurement::getStateSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getStateSize_570ce0828f81a2c1]);
        }

        void EstimatedMeasurement::setParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::utils::TimeSpanMap & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setParameterDerivatives_ff7a5e31add3f53c], a0.this$, a1.this$);
        }

        void EstimatedMeasurement::setParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< jdouble > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setParameterDerivatives_39ef7d36cf7f5331], a0.this$, a1.this$, a2.this$);
        }

        void EstimatedMeasurement::setStateDerivatives(jint a0, const JArray< JArray< jdouble > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setStateDerivatives_3ca2bf5de9b54389], a0, a1.this$);
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
        static PyObject *t_EstimatedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurement_of_(t_EstimatedMeasurement *self, PyObject *args);
        static int t_EstimatedMeasurement_init_(t_EstimatedMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EstimatedMeasurement_getDerivativesDrivers(t_EstimatedMeasurement *self);
        static PyObject *t_EstimatedMeasurement_getParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args);
        static PyObject *t_EstimatedMeasurement_getStateDerivatives(t_EstimatedMeasurement *self, PyObject *arg);
        static PyObject *t_EstimatedMeasurement_getStateSize(t_EstimatedMeasurement *self);
        static PyObject *t_EstimatedMeasurement_setParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args);
        static PyObject *t_EstimatedMeasurement_setStateDerivatives(t_EstimatedMeasurement *self, PyObject *args);
        static PyObject *t_EstimatedMeasurement_get__derivativesDrivers(t_EstimatedMeasurement *self, void *data);
        static PyObject *t_EstimatedMeasurement_get__stateSize(t_EstimatedMeasurement *self, void *data);
        static PyObject *t_EstimatedMeasurement_get__parameters_(t_EstimatedMeasurement *self, void *data);
        static PyGetSetDef t_EstimatedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedMeasurement, derivativesDrivers),
          DECLARE_GET_FIELD(t_EstimatedMeasurement, stateSize),
          DECLARE_GET_FIELD(t_EstimatedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedMeasurement__methods_[] = {
          DECLARE_METHOD(t_EstimatedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, getDerivativesDrivers, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, getParameterDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, getStateDerivatives, METH_O),
          DECLARE_METHOD(t_EstimatedMeasurement, getStateSize, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, setParameterDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, setStateDerivatives, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedMeasurement)[] = {
          { Py_tp_methods, t_EstimatedMeasurement__methods_ },
          { Py_tp_init, (void *) t_EstimatedMeasurement_init_ },
          { Py_tp_getset, t_EstimatedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::EstimatedMeasurementBase),
          NULL
        };

        DEFINE_TYPE(EstimatedMeasurement, t_EstimatedMeasurement, EstimatedMeasurement);
        PyObject *t_EstimatedMeasurement::wrap_Object(const EstimatedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurement *self = (t_EstimatedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimatedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurement *self = (t_EstimatedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimatedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedMeasurement), &PY_TYPE_DEF(EstimatedMeasurement), module, "EstimatedMeasurement", 0);
        }

        void t_EstimatedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurement), "class_", make_descriptor(EstimatedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurement), "wrapfn_", make_descriptor(t_EstimatedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimatedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedMeasurement::initializeClass, 1)))
            return NULL;
          return t_EstimatedMeasurement::wrap_Object(EstimatedMeasurement(((t_EstimatedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_EstimatedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimatedMeasurement_of_(t_EstimatedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EstimatedMeasurement_init_(t_EstimatedMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          JArray< ::org::orekit::propagation::SpacecraftState > a3((jobject) NULL);
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > a4((jobject) NULL);
          EstimatedMeasurement object((jobject) NULL);

          if (!parseArgs(args, "KII[k[k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = EstimatedMeasurement(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EstimatedMeasurement_getDerivativesDrivers(t_EstimatedMeasurement *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getDerivativesDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_EstimatedMeasurement_getParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getParameterDerivatives(a0));
                return result.wrap();
              }
            }
            break;
           case 2:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.getParameterDerivatives(a0, a1));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getParameterDerivatives", args);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurement_getStateDerivatives(t_EstimatedMeasurement *self, PyObject *arg)
        {
          jint a0;
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getStateDerivatives(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "getStateDerivatives", arg);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurement_getStateSize(t_EstimatedMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStateSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimatedMeasurement_setParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              ::org::orekit::utils::TimeSpanMap a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::utils::TimeSpanMap::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeSpanMap::parameters_))
              {
                OBJ_CALL(self->object.setParameterDerivatives(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setParameterDerivatives(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setParameterDerivatives", args);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurement_setStateDerivatives(t_EstimatedMeasurement *self, PyObject *args)
        {
          jint a0;
          JArray< JArray< jdouble > > a1((jobject) NULL);

          if (!parseArgs(args, "I[[D", &a0, &a1))
          {
            OBJ_CALL(self->object.setStateDerivatives(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStateDerivatives", args);
          return NULL;
        }
        static PyObject *t_EstimatedMeasurement_get__parameters_(t_EstimatedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EstimatedMeasurement_get__derivativesDrivers(t_EstimatedMeasurement *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getDerivativesDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_EstimatedMeasurement_get__stateSize(t_EstimatedMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStateSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractTimeScales.h"
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractTimeScales::class$ = NULL;
      jmethodID *AbstractTimeScales::mids$ = NULL;
      bool AbstractTimeScales::live$ = false;

      jclass AbstractTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_createBesselianEpoch_149a9211a037d799] = env->getMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_149a9211a037d799] = env->getMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getBeidouEpoch_85703d13e302437e] = env->getMethodID(cls, "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getCcsdsEpoch_85703d13e302437e] = env->getMethodID(cls, "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFiftiesEpoch_85703d13e302437e] = env->getMethodID(cls, "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFutureInfinity_85703d13e302437e] = env->getMethodID(cls, "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGMST_17da19434c6eaf77] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGalileoEpoch_85703d13e302437e] = env->getMethodID(cls, "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGlonassEpoch_85703d13e302437e] = env->getMethodID(cls, "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGpsEpoch_85703d13e302437e] = env->getMethodID(cls, "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getIrnssEpoch_85703d13e302437e] = env->getMethodID(cls, "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJ2000Epoch_85703d13e302437e] = env->getMethodID(cls, "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJavaEpoch_85703d13e302437e] = env->getMethodID(cls, "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJulianEpoch_85703d13e302437e] = env->getMethodID(cls, "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_85703d13e302437e] = env->getMethodID(cls, "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPastInfinity_85703d13e302437e] = env->getMethodID(cls, "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getQzssEpoch_85703d13e302437e] = env->getMethodID(cls, "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getUT1_03564ba2f50e6e3b] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUT1_9806ff584bac5289] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getEopHistory_f7b9f8d7c24d861d] = env->getMethodID(cls, "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractTimeScales::AbstractTimeScales() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::createBesselianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createBesselianEpoch_149a9211a037d799], a0));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::createJulianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createJulianEpoch_149a9211a037d799], a0));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getBeidouEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBeidouEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getCcsdsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCcsdsEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getFiftiesEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFiftiesEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getFutureInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFutureInfinity_85703d13e302437e]));
      }

      ::org::orekit::time::GMSTScale AbstractTimeScales::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::GMSTScale(env->callObjectMethod(this$, mids$[mid_getGMST_17da19434c6eaf77], a0.this$, a1));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getGalileoEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGalileoEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getGlonassEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGlonassEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getGpsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGpsEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getIrnssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getIrnssEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getJ2000Epoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJ2000Epoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getJavaEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJavaEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJulianEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getModifiedJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getModifiedJulianEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getPastInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPastInfinity_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getQzssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getQzssEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::UT1Scale AbstractTimeScales::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_03564ba2f50e6e3b], a0.this$, a1));
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
      static PyObject *t_AbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractTimeScales_init_(t_AbstractTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractTimeScales_createBesselianEpoch(t_AbstractTimeScales *self, PyObject *arg);
      static PyObject *t_AbstractTimeScales_createJulianEpoch(t_AbstractTimeScales *self, PyObject *arg);
      static PyObject *t_AbstractTimeScales_getBeidouEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getCcsdsEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getFiftiesEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getFutureInfinity(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getGMST(t_AbstractTimeScales *self, PyObject *args);
      static PyObject *t_AbstractTimeScales_getGalileoEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getGlonassEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getGpsEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getIrnssEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getJ2000Epoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getJavaEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getJulianEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getModifiedJulianEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getPastInfinity(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getQzssEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getUT1(t_AbstractTimeScales *self, PyObject *args);
      static PyObject *t_AbstractTimeScales_get__beidouEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__ccsdsEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__fiftiesEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__futureInfinity(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__galileoEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__glonassEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__gpsEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__irnssEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__j2000Epoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__javaEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__julianEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__modifiedJulianEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__pastInfinity(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__qzssEpoch(t_AbstractTimeScales *self, void *data);
      static PyGetSetDef t_AbstractTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractTimeScales, beidouEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, ccsdsEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, fiftiesEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, futureInfinity),
        DECLARE_GET_FIELD(t_AbstractTimeScales, galileoEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, glonassEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, gpsEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, irnssEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, j2000Epoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, javaEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, julianEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, modifiedJulianEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, pastInfinity),
        DECLARE_GET_FIELD(t_AbstractTimeScales, qzssEpoch),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractTimeScales__methods_[] = {
        DECLARE_METHOD(t_AbstractTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeScales, createBesselianEpoch, METH_O),
        DECLARE_METHOD(t_AbstractTimeScales, createJulianEpoch, METH_O),
        DECLARE_METHOD(t_AbstractTimeScales, getBeidouEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getCcsdsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getFiftiesEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getFutureInfinity, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGMST, METH_VARARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGalileoEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGlonassEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGpsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getIrnssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getJ2000Epoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getJavaEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getModifiedJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getPastInfinity, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getQzssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getUT1, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractTimeScales)[] = {
        { Py_tp_methods, t_AbstractTimeScales__methods_ },
        { Py_tp_init, (void *) t_AbstractTimeScales_init_ },
        { Py_tp_getset, t_AbstractTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractTimeScales)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractTimeScales, t_AbstractTimeScales, AbstractTimeScales);

      void t_AbstractTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractTimeScales), &PY_TYPE_DEF(AbstractTimeScales), module, "AbstractTimeScales", 0);
      }

      void t_AbstractTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeScales), "class_", make_descriptor(AbstractTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeScales), "wrapfn_", make_descriptor(t_AbstractTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeScales), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractTimeScales::initializeClass, 1)))
          return NULL;
        return t_AbstractTimeScales::wrap_Object(AbstractTimeScales(((t_AbstractTimeScales *) arg)->object.this$));
      }
      static PyObject *t_AbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractTimeScales_init_(t_AbstractTimeScales *self, PyObject *args, PyObject *kwds)
      {
        AbstractTimeScales object((jobject) NULL);

        INT_CALL(object = AbstractTimeScales());
        self->object = object;

        return 0;
      }

      static PyObject *t_AbstractTimeScales_createBesselianEpoch(t_AbstractTimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createBesselianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createBesselianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_createJulianEpoch(t_AbstractTimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createJulianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_getBeidouEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getCcsdsEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getFiftiesEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getFutureInfinity(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getGMST(t_AbstractTimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getGMST", args);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_getGalileoEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getGlonassEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getGpsEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getIrnssEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getJ2000Epoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getJavaEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getJulianEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getModifiedJulianEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getPastInfinity(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getQzssEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getUT1(t_AbstractTimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::UT1Scale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getUT1(a0, a1));
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getUT1", args);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_get__beidouEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__ccsdsEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__fiftiesEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__futureInfinity(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__galileoEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__glonassEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__gpsEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__irnssEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__j2000Epoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__javaEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__julianEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__modifiedJulianEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__pastInfinity(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__qzssEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldODEEventHandler::class$ = NULL;
        jmethodID *FieldODEEventHandler::mids$ = NULL;
        bool FieldODEEventHandler::live$ = false;

        jclass FieldODEEventHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldODEEventHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventOccurred_441913d27e10bdb0] = env->getMethodID(cls, "eventOccurred", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/events/FieldODEEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
            mids$[mid_init_8d242e8398770fef] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
            mids$[mid_resetState_e98923f0683d1726] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/FieldODEState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action FieldODEEventHandler::eventOccurred(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::ode::events::FieldODEEventDetector & a1, jboolean a2) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_441913d27e10bdb0], a0.this$, a1.this$, a2));
        }

        void FieldODEEventHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::ode::events::FieldODEEventDetector & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8d242e8398770fef], a0.this$, a1.this$, a2.this$);
        }

        ::org::hipparchus::ode::FieldODEState FieldODEEventHandler::resetState(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0, const ::org::hipparchus::ode::FieldODEStateAndDerivative & a1) const
        {
          return ::org::hipparchus::ode::FieldODEState(env->callObjectMethod(this$, mids$[mid_resetState_e98923f0683d1726], a0.this$, a1.this$));
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
        static PyObject *t_FieldODEEventHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventHandler_of_(t_FieldODEEventHandler *self, PyObject *args);
        static PyObject *t_FieldODEEventHandler_eventOccurred(t_FieldODEEventHandler *self, PyObject *args);
        static PyObject *t_FieldODEEventHandler_init(t_FieldODEEventHandler *self, PyObject *args);
        static PyObject *t_FieldODEEventHandler_resetState(t_FieldODEEventHandler *self, PyObject *args);
        static PyObject *t_FieldODEEventHandler_get__parameters_(t_FieldODEEventHandler *self, void *data);
        static PyGetSetDef t_FieldODEEventHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEEventHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEEventHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEEventHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEEventHandler, eventOccurred, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEEventHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEEventHandler, resetState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEEventHandler)[] = {
          { Py_tp_methods, t_FieldODEEventHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEEventHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEEventHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEEventHandler, t_FieldODEEventHandler, FieldODEEventHandler);
        PyObject *t_FieldODEEventHandler::wrap_Object(const FieldODEEventHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventHandler *self = (t_FieldODEEventHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEEventHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventHandler *self = (t_FieldODEEventHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEEventHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEEventHandler), &PY_TYPE_DEF(FieldODEEventHandler), module, "FieldODEEventHandler", 0);
        }

        void t_FieldODEEventHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventHandler), "class_", make_descriptor(FieldODEEventHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventHandler), "wrapfn_", make_descriptor(t_FieldODEEventHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEEventHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEEventHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEEventHandler::wrap_Object(FieldODEEventHandler(((t_FieldODEEventHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEEventHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEEventHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEEventHandler_of_(t_FieldODEEventHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEEventHandler_eventOccurred(t_FieldODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldODEEventDetector a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean a2;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "KKZ", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_, &a2))
          {
            OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
          return NULL;
        }

        static PyObject *t_FieldODEEventHandler_init(t_FieldODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::events::FieldODEEventDetector a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldODEEventHandler_resetState(t_FieldODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::FieldODEState result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.resetState(a0, a1));
            return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", args);
          return NULL;
        }
        static PyObject *t_FieldODEEventHandler_get__parameters_(t_FieldODEEventHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *SpacecraftToObservedBody::class$ = NULL;
        jmethodID *SpacecraftToObservedBody::mids$ = NULL;
        bool SpacecraftToObservedBody::live$ = false;

        jclass SpacecraftToObservedBody::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/SpacecraftToObservedBody");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_dfb6b0766f7098ca] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;DDLjava/util/List;Ljava/util/List;)V");
            mids$[mid_init$_8133bcffe71d69f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;DDLjava/util/List;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)V");
            mids$[mid_getBodyFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getBodyToInertial_687985c59478d29c] = env->getMethodID(cls, "getBodyToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getInertialFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInertialToBody_687985c59478d29c] = env->getMethodID(cls, "getInertialToBody", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getOvershootTolerance_dff5885c2c873297] = env->getMethodID(cls, "getOvershootTolerance", "()D");
            mids$[mid_getScToInertial_687985c59478d29c] = env->getMethodID(cls, "getScToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getTStep_dff5885c2c873297] = env->getMethodID(cls, "getTStep", "()D");
            mids$[mid_isInRange_db6d81809797ddaa] = env->getMethodID(cls, "isInRange", "(Lorg/orekit/time/AbsoluteDate;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SpacecraftToObservedBody::SpacecraftToObservedBody(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, const ::java::util::List & a6, const ::java::util::List & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dfb6b0766f7098ca, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6.this$, a7.this$)) {}

        SpacecraftToObservedBody::SpacecraftToObservedBody(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, const ::java::util::List & a6, jint a7, const ::org::orekit::utils::CartesianDerivativesFilter & a8, const ::java::util::List & a9, jint a10, const ::org::orekit::utils::AngularDerivativesFilter & a11) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8133bcffe71d69f7, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6.this$, a7, a8.this$, a9.this$, a10, a11.this$)) {}

        ::org::orekit::frames::Frame SpacecraftToObservedBody::getBodyFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_b86f9f61d97a7244]));
        }

        ::org::orekit::frames::Transform SpacecraftToObservedBody::getBodyToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getBodyToInertial_687985c59478d29c], a0.this$));
        }

        ::org::orekit::frames::Frame SpacecraftToObservedBody::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_b86f9f61d97a7244]));
        }

        ::org::orekit::frames::Transform SpacecraftToObservedBody::getInertialToBody(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getInertialToBody_687985c59478d29c], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SpacecraftToObservedBody::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate SpacecraftToObservedBody::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
        }

        jdouble SpacecraftToObservedBody::getOvershootTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOvershootTolerance_dff5885c2c873297]);
        }

        ::org::orekit::frames::Transform SpacecraftToObservedBody::getScToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getScToInertial_687985c59478d29c], a0.this$));
        }

        jdouble SpacecraftToObservedBody::getTStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTStep_dff5885c2c873297]);
        }

        jboolean SpacecraftToObservedBody::isInRange(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isInRange_db6d81809797ddaa], a0.this$);
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
        static PyObject *t_SpacecraftToObservedBody_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SpacecraftToObservedBody_init_(t_SpacecraftToObservedBody *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SpacecraftToObservedBody_getBodyFrame(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getBodyToInertial(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_getInertialFrame(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getInertialToBody(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_getMaxDate(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getMinDate(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getOvershootTolerance(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_getScToInertial(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_getTStep(t_SpacecraftToObservedBody *self);
        static PyObject *t_SpacecraftToObservedBody_isInRange(t_SpacecraftToObservedBody *self, PyObject *arg);
        static PyObject *t_SpacecraftToObservedBody_get__bodyFrame(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__inertialFrame(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__maxDate(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__minDate(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__overshootTolerance(t_SpacecraftToObservedBody *self, void *data);
        static PyObject *t_SpacecraftToObservedBody_get__tStep(t_SpacecraftToObservedBody *self, void *data);
        static PyGetSetDef t_SpacecraftToObservedBody__fields_[] = {
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, bodyFrame),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, inertialFrame),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, maxDate),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, minDate),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, overshootTolerance),
          DECLARE_GET_FIELD(t_SpacecraftToObservedBody, tStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SpacecraftToObservedBody__methods_[] = {
          DECLARE_METHOD(t_SpacecraftToObservedBody, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getBodyFrame, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getBodyToInertial, METH_O),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getInertialToBody, METH_O),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getOvershootTolerance, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getScToInertial, METH_O),
          DECLARE_METHOD(t_SpacecraftToObservedBody, getTStep, METH_NOARGS),
          DECLARE_METHOD(t_SpacecraftToObservedBody, isInRange, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SpacecraftToObservedBody)[] = {
          { Py_tp_methods, t_SpacecraftToObservedBody__methods_ },
          { Py_tp_init, (void *) t_SpacecraftToObservedBody_init_ },
          { Py_tp_getset, t_SpacecraftToObservedBody__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SpacecraftToObservedBody)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SpacecraftToObservedBody, t_SpacecraftToObservedBody, SpacecraftToObservedBody);

        void t_SpacecraftToObservedBody::install(PyObject *module)
        {
          installType(&PY_TYPE(SpacecraftToObservedBody), &PY_TYPE_DEF(SpacecraftToObservedBody), module, "SpacecraftToObservedBody", 0);
        }

        void t_SpacecraftToObservedBody::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftToObservedBody), "class_", make_descriptor(SpacecraftToObservedBody::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftToObservedBody), "wrapfn_", make_descriptor(t_SpacecraftToObservedBody::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftToObservedBody), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SpacecraftToObservedBody_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SpacecraftToObservedBody::initializeClass, 1)))
            return NULL;
          return t_SpacecraftToObservedBody::wrap_Object(SpacecraftToObservedBody(((t_SpacecraftToObservedBody *) arg)->object.this$));
        }
        static PyObject *t_SpacecraftToObservedBody_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SpacecraftToObservedBody::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SpacecraftToObservedBody_init_(t_SpacecraftToObservedBody *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              jdouble a4;
              jdouble a5;
              ::java::util::List a6((jobject) NULL);
              PyTypeObject **p6;
              ::java::util::List a7((jobject) NULL);
              PyTypeObject **p7;
              SpacecraftToObservedBody object((jobject) NULL);

              if (!parseArgs(args, "kkkkDDKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_List::parameters_, &a7, &p7, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = SpacecraftToObservedBody(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 12:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              jdouble a4;
              jdouble a5;
              ::java::util::List a6((jobject) NULL);
              PyTypeObject **p6;
              jint a7;
              ::org::orekit::utils::CartesianDerivativesFilter a8((jobject) NULL);
              PyTypeObject **p8;
              ::java::util::List a9((jobject) NULL);
              PyTypeObject **p9;
              jint a10;
              ::org::orekit::utils::AngularDerivativesFilter a11((jobject) NULL);
              PyTypeObject **p11;
              SpacecraftToObservedBody object((jobject) NULL);

              if (!parseArgs(args, "kkkkDDKIKKIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_List::parameters_, &a7, &a8, &p8, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a9, &p9, ::java::util::t_List::parameters_, &a10, &a11, &p11, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
              {
                INT_CALL(object = SpacecraftToObservedBody(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
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

        static PyObject *t_SpacecraftToObservedBody_getBodyFrame(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getBodyToInertial(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getBodyToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getBodyToInertial", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_getInertialFrame(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getInertialToBody(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInertialToBody(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInertialToBody", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_getMaxDate(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getMinDate(t_SpacecraftToObservedBody *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SpacecraftToObservedBody_getOvershootTolerance(t_SpacecraftToObservedBody *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SpacecraftToObservedBody_getScToInertial(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getScToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getScToInertial", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_getTStep(t_SpacecraftToObservedBody *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SpacecraftToObservedBody_isInRange(t_SpacecraftToObservedBody *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.isInRange(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isInRange", arg);
          return NULL;
        }

        static PyObject *t_SpacecraftToObservedBody_get__bodyFrame(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__inertialFrame(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__maxDate(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__minDate(t_SpacecraftToObservedBody *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__overshootTolerance(t_SpacecraftToObservedBody *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SpacecraftToObservedBody_get__tStep(t_SpacecraftToObservedBody *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FactoryManagedFrame::class$ = NULL;
      jmethodID *FactoryManagedFrame::mids$ = NULL;
      bool FactoryManagedFrame::live$ = false;

      jclass FactoryManagedFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FactoryManagedFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cbb19d23c9672083] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;ZLorg/orekit/frames/Predefined;)V");
          mids$[mid_getFactoryKey_58be1d18d5cf78dc] = env->getMethodID(cls, "getFactoryKey", "()Lorg/orekit/frames/Predefined;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FactoryManagedFrame::FactoryManagedFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::TransformProvider & a1, jboolean a2, const ::org::orekit::frames::Predefined & a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_cbb19d23c9672083, a0.this$, a1.this$, a2, a3.this$)) {}

      ::org::orekit::frames::Predefined FactoryManagedFrame::getFactoryKey() const
      {
        return ::org::orekit::frames::Predefined(env->callObjectMethod(this$, mids$[mid_getFactoryKey_58be1d18d5cf78dc]));
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
      static PyObject *t_FactoryManagedFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FactoryManagedFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FactoryManagedFrame_init_(t_FactoryManagedFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FactoryManagedFrame_getFactoryKey(t_FactoryManagedFrame *self);
      static PyObject *t_FactoryManagedFrame_get__factoryKey(t_FactoryManagedFrame *self, void *data);
      static PyGetSetDef t_FactoryManagedFrame__fields_[] = {
        DECLARE_GET_FIELD(t_FactoryManagedFrame, factoryKey),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FactoryManagedFrame__methods_[] = {
        DECLARE_METHOD(t_FactoryManagedFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FactoryManagedFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FactoryManagedFrame, getFactoryKey, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FactoryManagedFrame)[] = {
        { Py_tp_methods, t_FactoryManagedFrame__methods_ },
        { Py_tp_init, (void *) t_FactoryManagedFrame_init_ },
        { Py_tp_getset, t_FactoryManagedFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FactoryManagedFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(FactoryManagedFrame, t_FactoryManagedFrame, FactoryManagedFrame);

      void t_FactoryManagedFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(FactoryManagedFrame), &PY_TYPE_DEF(FactoryManagedFrame), module, "FactoryManagedFrame", 0);
      }

      void t_FactoryManagedFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FactoryManagedFrame), "class_", make_descriptor(FactoryManagedFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FactoryManagedFrame), "wrapfn_", make_descriptor(t_FactoryManagedFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FactoryManagedFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FactoryManagedFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FactoryManagedFrame::initializeClass, 1)))
          return NULL;
        return t_FactoryManagedFrame::wrap_Object(FactoryManagedFrame(((t_FactoryManagedFrame *) arg)->object.this$));
      }
      static PyObject *t_FactoryManagedFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FactoryManagedFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FactoryManagedFrame_init_(t_FactoryManagedFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::TransformProvider a1((jobject) NULL);
        jboolean a2;
        ::org::orekit::frames::Predefined a3((jobject) NULL);
        PyTypeObject **p3;
        FactoryManagedFrame object((jobject) NULL);

        if (!parseArgs(args, "kkZK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::frames::Predefined::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::frames::t_Predefined::parameters_))
        {
          INT_CALL(object = FactoryManagedFrame(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FactoryManagedFrame_getFactoryKey(t_FactoryManagedFrame *self)
      {
        ::org::orekit::frames::Predefined result((jobject) NULL);
        OBJ_CALL(result = self->object.getFactoryKey());
        return ::org::orekit::frames::t_Predefined::wrap_Object(result);
      }

      static PyObject *t_FactoryManagedFrame_get__factoryKey(t_FactoryManagedFrame *self, void *data)
      {
        ::org::orekit::frames::Predefined value((jobject) NULL);
        OBJ_CALL(value = self->object.getFactoryKey());
        return ::org::orekit::frames::t_Predefined::wrap_Object(value);
      }
    }
  }
}
